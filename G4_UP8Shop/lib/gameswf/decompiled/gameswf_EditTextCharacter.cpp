#include "Core/Utils/DecompTypes.h"
#include "gameswf_EditTextCharacter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::canHandleMouseEvent  (binary VA: 0x10f9140)
// Original: gameswf::EditTextCharacter::canHandleMouseEvent
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::canHandleMouseEvent(gameswf::EditTextCharacter::Self *self)
{
  int result;

  result = 1;
  if ( *(uint8_t *)(*((uint32_t *)self + 4) + 232) == 0 )
    return *((uint8_t *)self + 563) ^ 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::hitTest  (binary VA: 0x10f9160)
// Original: gameswf::EditTextCharacter::hitTest
// ----------------------------------------------------------------------------
bool gameswf::EditTextCharacter::hitTest(gameswf::EditTextCharacter::Self *self, float a2, float a3)
{
  return G4_VCALL<int>(self, 108, LODWORD(a2), LODWORD(a3)) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getBoundingBox  (binary VA: 0x10f9190)
// Original: gameswf::EditTextCharacter::getBoundingBox
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::getBoundingBox(gameswf::ASDisplayObjectContainer::Self *a1, int a2, int a3)
{
  gameswf::ASDisplayObjectContainer::getBoundingBox(a1, a2, a3);
  return gameswf::Character::getBoundingBox(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::advance  (binary VA: 0x10f91f0)
// Original: gameswf::EditTextCharacter::advance
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::advance(gameswf::EditTextCharacter::Self *self, float a2)
{
  gameswf::ASDisplayObjectContainer::advance(self, a2);
  return G4_VCALL<int>(self, 12);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getTopmostMouseEntity  (binary VA: 0x10f9230)
// Original: gameswf::EditTextCharacter::getTopmostMouseEntity
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::getTopmostMouseEntity(gameswf::ASDisplayObjectContainer::Self *a1, float a2, float a3, int a4)
{
  int result;

  result = (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::getTopmostMouseEntity(a1, a2, a3, a4));
  if ( result == 0 )
    return G4_VCALL<int>(a1, 108, LODWORD(a2), LODWORD(a3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getMemberByName  (binary VA: 0x10f93e0)
// Original: gameswf::EditTextCharacter::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::getMemberByName(gameswf::EditTextCharacter::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  char builtin;
  int v4;

  builtin = gameswf::get_builtin(8, (char *)a2, a3);
  v4 = 1;
  if ( builtin == 0 )
    return gameswf::ASObject::getMemberByName(self, a2, a3);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getStandardMember  (binary VA: 0x10f94c0)
// Original: gameswf::EditTextCharacter::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::getStandardMember(long double a1, int a2, int a3, gameswf::ASValue::Self *a4)
{
  int result;
  float v5; // xmm0_4
  int v6;
  const char *v7;

  switch ( a3 )
  {
    case 22:
      gameswf::ASValue::setString(a4, (const gameswf::String::Self *)(a2 + 468));
      return 1;
    case 23:
      gameswf::ASValue::setString(a4, (const gameswf::String::Self *)(a2 + 488));
      return 1;
    case 24:
      v5 = *(float *)(a2 + 456) - *(float *)(a2 + 452);
      goto LABEL_9;
    case 25:
      v5 = *(float *)(a2 + 464) - *(float *)(a2 + 460);
LABEL_9:
      gameswf::ASValue::setDouble(a4, v5);
      return 1;
    case 26:
      v6 = *(uint8_t *)(a2 + 586)
         + (*(uint8_t *)(a2 + 584) << 16)
         + (*(uint8_t *)(a2 + 585) << 8);
      goto LABEL_12;
    case 27:
      gameswf::ASValue::setBool(a4, *(uint8_t *)(*(uint32_t *)(a2 + 252) + 74));
      return 1;
    case 28:
      gameswf::ASValue::setBool(a4, *(uint8_t *)(a2 + 561));
      return 1;
    case 29:
      gameswf::ASValue::setBool(a4, *(uint8_t *)(a2 + 560));
      return 1;
    case 31:
      v7 = "dynamic";
      if ( *(uint8_t *)(a2 + 563) == 0 )
        v7 = "input";
      gameswf::ASValue::setString(a4, v7);
      return 1;
    case 32:
      v6 = *(uint8_t *)(a2 + 622)
         | (*(uint8_t *)(a2 + 621) << 8)
         | (*(uint8_t *)(a2 + 620) << 16);
LABEL_12:
      gameswf::ASValue::setDouble(a4, (double)v6);
      result = 1;
      break;
    case 55:
      gameswf::ASValue::setObject(a4, *(gameswf::ASObject::Self **)(a2 + 624));
      result = 1;
      break;
    case 56:
      gameswf::ASValue::setDouble(a4, (double)*(int *)(a2 + 556));
      result = 1;
      break;
    case 57:
      gameswf::ASValue::setBool(a4, *(uint8_t *)(a2 + 562));
      result = 1;
      break;
    case 58:
      gameswf::ASValue::opAssign(a4, (const gameswf::ASValue::Self *)(a2 + 544));
      result = 1;
      break;
    case 59:
      gameswf::ASValue::setDouble(a4, (double)*(int *)(a2 + 324));
      result = 1;
      break;
    default:
      result = gameswf::Character::getStandardMember(a1, (gameswf::ASObject::Self *)a2, a3, a4);
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getTopmostMouseEntity  (binary VA: 0x10f9750)
// Original: gameswf::EditTextCharacter::getTopmostMouseEntity
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::EditTextCharacter::getTopmostMouseEntity(gameswf::EditTextCharacter::Self *self, float a2, float a3)
{
  int v3;
  const gameswf::Matrix::Self *v4;
  float v5; // xmm0_4
  float v7; // xmm0_4
  float v8[9];

  v3 = 0;
  if ( *((uint8_t *)self + 148) != 0 )
  {
    memset(v8, 0, 0x18u);
    v4 = *((const gameswf::Matrix::Self **)self + 17);
    v8[0] = 1.0;
    v8[4] = 1.0;
    gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v8, v4);
    v5 = (float)((float)(a2 * v8[0]) + v8[2]) + (float)(a3 * v8[1]);
    if ( v5 >= *((float *)self + 142) && v5 <= *((float *)self + 143) )
    {
      v7 = (float)((float)(a2 * v8[3]) + v8[5]) + (float)(v8[4] * a3);
      if ( v7 >= *((float *)self + 144) && v7 <= *((float *)self + 145) )
        return self;
    }
  }
  return (gameswf::EditTextCharacter::Self *)v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::showCursor  (binary VA: 0x10fd070)
// Original: gameswf::EditTextCharacter::showCursor
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::EditTextCharacter::showCursor(gameswf::EditTextCharacter::Self *self)
{
  gameswf::Self *result;
  float v2; // xmm0_4
  uint32_t *v3;
  int v4;
  char v5; // di
  char v6; // si
  char v7;
  typedef int _g4_t_v8;
  typedef float _g4_t_v9;
  typedef int _g4_t_v10;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[13];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  result = (gameswf::Self *)(self);
  v2 = *((float *)self + 147);
  v9 = *((float *)self + 130);
  v8 = *((uint32_t *)self + 129);
  v10 = v8;
  v3 = (uint32_t *)(gameswf::s_render_handler);
  v11 = (float)(v2 + v9) + 10.0;
  if ( gameswf::s_render_handler != nullptr )
  {
    v4 = *((uint32_t *)self + 28);
    LOBYTE(v12[0]) = 2;
    gameswf::s_render_handler[29] = v4;
    v3[30] = *((uint32_t *)self + 29);
    v3[31] = *((uint32_t *)self + 30);
    v3[32] = *((uint32_t *)self + 31);
    v3[33] = *((uint32_t *)self + 32);
    v3[34] = *((uint32_t *)self + 33);
    v12[2] = 0;
    v5 = *((uint8_t *)self + 584);
    HIWORD(v12[3]) = 0;
    v6 = *((uint8_t *)self + 585);
    v12[4] = 0;
    LOBYTE(v4) = *((uint8_t *)self + 586);
    v12[9] = 0;
    v7 = *((uint8_t *)self + 587);
    *((uint8_t *)v3 + 202) = v4;
    *((uint8_t *)v3 + 203) = v7;
    *((uint8_t *)v3 + 200) = v5;
    *((uint8_t *)v3 + 201) = v6;
    v3[51] = 0x40000000;
    BYTE1(v12[0]) = 1;
    v12[1] = (uint32_t)(uintptr_t)(&v8);
    LOWORD(v12[3]) = 2;
    return gameswf::RenderHandler::draw((gameswf::Root::Self **)v3, (gameswf::Self *)v12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getVarName  (binary VA: 0x10fd1a0)
// Original: gameswf::EditTextCharacter::getVarName
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::getVarName(gameswf::EditTextCharacter::Self *self)
{
  return *((uint32_t *)self + 63) + 48;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::resetBoundingBox  (binary VA: 0x10fd1b0)
// Original: gameswf::EditTextCharacter::resetBoundingBox
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::EditTextCharacter::resetBoundingBox(gameswf::EditTextCharacter::Self *self, unsigned int a2, unsigned int a3)
{
  __m128 v3;
g4_m128_lane<uint64_t>(v3, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(a2), G4_BITCAST<__m128>(a2)), 0);
g4_m128_lane<uint64_t>(v3, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(a3), G4_BITCAST<__m128>(a3)), 0);
  _mm_storel_ps((double *)((char *)self + 452), v3);
  _mm_storeh_ps((double *)((char *)self + 460), v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::alignLine  (binary VA: 0x10fd1e0)
// Original: gameswf::EditTextCharacter::alignLine
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::alignLine(int a1, int a2, int *a3, int a4, float a5)
{
  int result;
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int i;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  float v21; // xmm1_4
  int v22;
  float v23; // xmm0_4
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;

  result = a2;
  v6 = a5;
  switch ( a2 )
  {
    case 0:
      return result;
    case 1:
      goto LABEL_6;
    case 2:
      v6 = a5 * 0.5;
      goto LABEL_6;
    case 3:
      result = a3[1];
      if ( result > 0 )
      {
        v30 = 0;
        v28 = 0;
        result = 0;
        v31 = *a3;
        do
        {
          v10 = *(uint32_t *)(v30 + v31 + 48);
          if ( v10 > 0 )
          {
            v11 = 0;
            for ( i = 0; i != v10; ++i )
            {
              if ( *(uint16_t *)(*(uint32_t *)(v30 + v31 + 44) + v11 + 32) == 32 )
                ++result;
              v11 += 44;
            }
          }
          ++v28;
          v30 += 60;
        }
        while ( v28 != a3[1] );
        if ( result != 0 )
        {
          v13 = v31 + 60 * (v28 - 1);
          v14 = *(uint32_t *)(v13 + 48);
          v15 = v14 - 1;
          v16 = v14 - 1;
          if ( v14 - 1 < 0 || *(uint16_t *)((v17 = *(uint32_t *)(v13 + 44) + 44 * v15) + 32) != 32 )
          {
            v21 = a5 / (float)result;
LABEL_33:
            v29 = 0;
            v22 = 0;
            v23 = 0.0;
            do
            {
              v24 = *a3 + v29;
              v25 = *(uint32_t *)(v24 + 48);
              *(float *)(v24 + 16) = *(float *)(v24 + 16) + v23;
              if ( v25 > 0 )
              {
                v26 = 0;
                if ( result > 0 )
                {
                  do
                  {
                    v27 = *(uint32_t *)(v24 + 44) + 44 * v26;
                    if ( *(uint16_t *)(v27 + 32) == 32 )
                    {
                      v23 = v23 + v21;
                      --result;
                      *(float *)v27 = *(float *)v27 + v21;
                      v25 = *(uint32_t *)(v24 + 48);
                    }
                    ++v26;
                  }
                  while ( v26 < v25 && result > 0 );
                }
              }
              if ( a3[1] <= ++v22 )
                break;
              v29 += 60;
            }
            while ( result > 0 );
            return result;
          }
          v18 = 44 * (v14 - 2);
          while ( 1 )
          {
            if ( v15 > v16 )
              v6 = v6 + *(float *)v17;
            --v16;
            --result;
            *(uint32_t *)v17 = 0;
            v20 = a3[1];
            if ( v16 == -1 )
              break;
            v19 = *a3 + 60 * (v20 - 1);
            v17 = *(uint32_t *)(v19 + 44) + v18;
            v18 -= 44;
            if ( *(uint16_t *)(v17 + 32) != 32 )
              break;
            v15 = *(uint32_t *)(v19 + 48) - 1;
          }
          if ( v20 > 0 )
          {
            v21 = v6 / (float)result;
            if ( result > 0 )
              goto LABEL_33;
          }
        }
      }
      return result;
    default:
      v6 = 0.0;
LABEL_6:
      result = (int)(uintptr_t)(a3);
      v7 = a3[1];
      if ( v7 > 0 )
      {
        v8 = 0;
        for ( result = 0; result < v7; ++result )
        {
          v9 = *a3 + v8;
          if ( *(uint8_t *)(v9 + 32) != 0 )
          {
            *(float *)(v9 + 16) = *(float *)(v9 + 16) + v6;
            v7 = a3[1];
          }
          v8 += 60;
        }
      }
      *(float *)(a1 + 516) = v6 + *(float *)(a1 + 516);
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::updateRecordOffsets  (binary VA: 0x10fd840)
// Original: gameswf::EditTextCharacter::updateRecordOffsets
// ----------------------------------------------------------------------------
gameswf::array<gameswf::TextGlyphRecord> * gameswf::EditTextCharacter::updateRecordOffsets(gameswf::EditTextCharacter::Self *self, gameswf::array<gameswf::TextGlyphRecord> *a2, float a3, float a4, float a5, float a6)
{
  gameswf::array<gameswf::TextGlyphRecord> *result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int i;

  result = a2;
  if ( *((int *)a2 + 1) > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = *(uint32_t *)a2 + v8;
      *(float *)(v10 + 16) = a3;
      v11 = *(uint32_t *)(v10 + 40);
      if ( v11 == 1 )
      {
        *(float *)(v10 + 20) = *(float *)(v10 + 20) + a4;
      }
      else if ( v11 == 3 )
      {
        *(float *)(v10 + 20) = (float)((float)(*(float *)(v10 + 20) * 0.5) + a4) + (float)(a6 * 0.5);
      }
      else
      {
        *(float *)(v10 + 20) = a5 + a4;
      }
      v12 = *(uint32_t *)(v10 + 48);
      if ( v12 > 0 )
      {
        v13 = *(uint32_t *)(v10 + 44);
        v14 = 0;
        for ( i = 0; i != v12; ++i )
        {
          a3 = a3 + *(float *)(v13 + v14);
          v14 += 44;
        }
      }
      result = a2;
      ++v9;
      v8 += 60;
    }
    while ( *((uint32_t *)a2 + 1) > v9 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getRecordWidth  (binary VA: 0x10fd910)
// Original: gameswf::EditTextCharacter::getRecordWidth
// ----------------------------------------------------------------------------
long double gameswf::EditTextCharacter::getRecordWidth(gameswf::EditTextCharacter::Self *self, const gameswf::array<gameswf::TextGlyphRecord> *a2)
{
  float v2; // xmm0_4
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  int v9;

  v2 = 0.0;
  if ( *((int *)a2 + 1) > 0 )
  {
    v3 = 0;
    v9 = *(uint32_t *)a2;
    v4 = 0;
    do
    {
      v5 = *(uint32_t *)(v9 + v3 + 48);
      if ( v5 > 0 )
      {
        v6 = 0;
        for ( i = 0; i != v5; ++i )
        {
          v2 = v2 + *(float *)(*(uint32_t *)(v9 + v3 + 44) + v6);
          v6 += 44;
        }
      }
      ++v4;
      v3 += 60;
    }
    while ( v4 != *((uint32_t *)a2 + 1) );
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getMaxHeight  (binary VA: 0x10fd980)
// Original: gameswf::EditTextCharacter::getMaxHeight
// ----------------------------------------------------------------------------
float * gameswf::EditTextCharacter::getMaxHeight(gameswf::EditTextCharacter::Self *self, const gameswf::array<gameswf::TextGlyphRecord> *a2, float *a3, float *a4)
{
  float *result;
  int v5;
  float v6; // xmm0_4
  float v7; // xmm1_4
  int i;
  int v9;
  float v10; // xmm3_4
  float v11; // xmm2_4
  int v12;
  int j;
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  int v17;
  int v18;

  *a3 = 0.0;
  *a4 = 0.0;
  result = *((float **)a2 + 1);
  if ( (int)(uintptr_t)(result) <= 0 )
  {
    result = a3;
    v7 = 0.0;
    v6 = *a3;
  }
  else
  {
    v5 = 0;
    v6 = *a3;
    v7 = 0.0;
    for ( i = 0; i < (int)(uintptr_t)(result); ++i )
    {
      v9 = *(uint32_t *)a2 + v5;
      if ( *(uint32_t *)(v9 + 40) == 0 )
      {
        v10 = *(float *)(v9 + 20);
        v6 = fmaxf(v6, v10);
        v11 = *(float *)(v9 + 28) - v10;
        *a3 = v6;
        result = *((float **)a2 + 1);
        v7 = fmaxf(v7, v11);
      }
      v5 += 60;
    }
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v12 = 0;
      for ( j = 0; j < (int)(uintptr_t)(result); ++j )
      {
        while ( 1 )
        {
          v17 = *(uint32_t *)a2 + v12;
          v18 = *(uint32_t *)(v17 + 40);
          if ( v18 != 1 )
            break;
          ++j;
          v12 += 60;
          v7 = fmaxf(v7, *(float *)(v17 + 28) - v6);
          if ( j >= (int)(uintptr_t)(result) )
            goto LABEL_13;
        }
        if ( v18 == 3 )
        {
          v14 = *(float *)(v17 + 28);
          v15 = (float)(v14 + v6) * 0.5;
          v16 = (float)(v14 - v6) * 0.5;
          v6 = fmaxf(v6, v15);
          v7 = fmaxf(v7, v16);
          *a3 = v6;
          result = *((float **)a2 + 1);
        }
        v12 += 60;
      }
    }
  }
LABEL_13:
  *a4 = v6 + v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getCurrentZoneMargins  (binary VA: 0x10fda90)
// Original: gameswf::EditTextCharacter::getCurrentZoneMargins
// ----------------------------------------------------------------------------
float * gameswf::EditTextCharacter::getCurrentZoneMargins(gameswf::EditTextCharacter::Self *self, float *a2, float *a3)
{
  float *result;
  int v4;
  float v5; // xmm4_4
  float v6; // xmm5_4
  int v7;
  int v8;
  int v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm2_4
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);

  result = *((float **)self + 77);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    gameswf::EditTextCharacter::getMaxHeight(self, (gameswf::EditTextCharacter::Self *)((char *)self + 272), &v13, &v14);
    result = gameswf::EditTextCharacter::getMaxHeight(
               self,
               (gameswf::EditTextCharacter::Self *)((char *)self + 272),
               &v15,
               v16);
    v4 = *((uint32_t *)self + 77);
    v5 = *((float *)self + 132);
    v6 = fmaxf(v14, v16[0]) + v5;
    if ( v4 > 0 )
    {
      v7 = *((uint32_t *)self + 76);
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        result = (float *)(v7 + v8);
        v10 = *(float *)(v7 + v8 + 4);
        if ( v10 <= 10000.0 )
        {
          v11 = result[2];
          if ( v11 >= -10000.0 && v5 <= result[4] && v6 >= result[3] )
            break;
        }
        ++v9;
        v8 += 20;
        if ( v9 == v4 )
          return result;
      }
      v12 = v11 - v10;
      if ( *(uint32_t *)result == 1 )
      {
        *a2 = fmaxf(v12, *a2);
        return a2;
      }
      else
      {
        *a3 = fmaxf(v12, *a3);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getGlyphCount  (binary VA: 0x10fdba0)
// Original: gameswf::EditTextCharacter::getGlyphCount
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::getGlyphCount(gameswf::EditTextCharacter::Self *self, const gameswf::array<gameswf::TextGlyphRecord> *a2)
{
  int result;
  int v3;
  int v4;
  int i;

  result = 0;
  v3 = *((uint32_t *)a2 + 1);
  if ( v3 > 0 )
  {
    v4 = 0;
    for ( i = 0; i != v3; ++i )
    {
      result += *(uint32_t *)(*(uint32_t *)a2 + v4 + 48);
      v4 += 60;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::updateChildBounds  (binary VA: 0x10fdbd0)
// Original: gameswf::EditTextCharacter::updateChildBounds
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::updateChildBounds(gameswf::EditTextCharacter::Self *self)
{
  float v1; // xmm2_4
  int v2;
  int v3;
  float v4; // xmm0_4
  int v5;
  int v6;
  float v7; // xmm1_4
  int *v8;
  int v9;
  int v10;
  float v11; // xmm1_4
  void (*v12)(int *, int, uint8_t *);
  int v13;
  float v14; // xmm1_4
  void (*v15)(int *, int, uint8_t *);
  int v16;
  float v17; // xmm1_4
  void (*v18)(int *, int, uint8_t *);
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef float _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[4];
  typedef double _g4_t_v25 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v26[4];
  typedef double _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef double _g4_t_v29 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v30[4];
  typedef double _g4_t_v31;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v20)) > _g4_s1 ? (44u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v21)) > _g4_s2 ? (48u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v22)) > _g4_s3 ? (52u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v23)) > _g4_s4 ? (56u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v25)) > _g4_s6 ? (68u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v26)) > _g4_s7 ? (76u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v27)) > _g4_s8 ? (80u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v28)) > _g4_s9 ? (88u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v29)) > _g4_s10 ? (92u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v30)) > _g4_s11 ? (100u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v31)) > _g4_s12 ? (104u + sizeof(_g4_t_v31)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);

  if ( *((uint32_t *)self + 54) != 0 && *((int *)self + 65) > 0 )
  {
    v23 = 0;
    v22 = 0;
    v20 = 0;
    do
    {
      v1 = 0.0;
      v2 = *((uint32_t *)self + 64) + v23;
      if ( *(uint8_t *)(v2 + 35) == 0 )
        v1 = (float)((float)(*((float *)self + 143) - *((float *)self + 142)) - *((float *)self + 151)) - 4.0;
      v3 = *(uint32_t *)(v2 + 48);
      v4 = *(float *)(v2 + 16);
      v21 = *(float *)(v2 + 20);
      if ( v3 > 0 )
      {
        v5 = 0;
        do
        {
          while ( 1 )
          {
            v6 = *(uint32_t *)(v2 + 44) + 44 * v5;
            if ( *(uint8_t *)(v6 + 34) == 3 )
              break;
            ++v5;
            v4 = v4 + *(float *)v6;
            if ( v5 >= v3 )
              goto LABEL_13;
          }
          v7 = v4;
          v8 = *(int **)(*((uint32_t *)self + 53) + 4 * v20);
          if ( *(uint8_t *)(v2 + 35) == 0 )
            v7 = (float)(v1 - v4) - *(float *)v6;
          v9 = *v8;
          v25 = v7;
          v24[0] = 2;
          v24[1] = 0;
          ++v5;
          v19 = v2;
          (*(void (**)(int *, uint32_t, uint8_t *))(v9 + 32))(v8, 0, v24);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
          v10 = *v8;
          v11 = *(float *)(v6 + 20) - *(float *)(v6 + 16);
          v26[0] = 2;
          v26[1] = 0;
          v12 = *(void (**)(int *, int, uint8_t *))(v10 + 32);
          v27 = (float)(v21 - v11);
          v12(v8, 1, v26);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
          v13 = *v8;
          v14 = *(float *)(v6 + 12) - *(float *)(v6 + 8);
          v28[0] = 2;
          v28[1] = 0;
          v15 = *(void (**)(int *, int, uint8_t *))(v13 + 32);
          v29 = v14;
          v15(v8, 8, v28);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
          v16 = *v8;
          v17 = *(float *)(v6 + 20) - *(float *)(v6 + 16);
          v30[0] = 2;
          v30[1] = 0;
          v18 = *(void (**)(int *, int, uint8_t *))(v16 + 32);
          v31 = v17;
          v18(v8, 9, v30);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
          v2 = v19;
          ++v20;
          v4 = v4 + *(float *)v6;
          v3 = *(uint32_t *)(v19 + 48);
        }
        while ( v5 < v3 );
      }
LABEL_13:
      ++v22;
      v23 += 60;
    }
    while ( *((uint32_t *)self + 65) > v22 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getCharBoundaries  (binary VA: 0x10fde50)
// Original: gameswf::EditTextCharacter::getCharBoundaries
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::EditTextCharacter::getCharBoundaries(gameswf::EditTextCharacter::Self *self, int a2, gameswf::Rect::Self *a3)
{
  gameswf::EditTextCharacter::Self *result;
  int v4;
  gameswf::EditTextCharacter::Self *v5;
  float v6; // xmm1_4
  int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  int v10;
  float *v11;
  int v12;
  int v13;

  result = self;
  *(uint32_t *)a3 = 0;
  *((uint32_t *)a3 + 1) = 0;
  *((uint32_t *)a3 + 2) = 0;
  *((uint32_t *)a3 + 3) = 0;
  if ( *((uint32_t *)self + 65) != 0 )
  {
    if ( *((int *)self + 65) <= 0 )
    {
      v9 = 0.0;
    }
    else
    {
      v13 = 0;
      v4 = 0;
      v12 = 0;
      while ( 1 )
      {
        v5 = self;
        v6 = 0.0;
        v7 = *((uint32_t *)self + 64) + v13;
        v8 = *(float *)(v7 + 16);
        *(float *)a3 = v8;
        v9 = *(float *)(v7 + 20);
        *((float *)a3 + 3) = v9;
        if ( *(int *)(v7 + 48) > 0 )
        {
          v10 = 0;
          if ( a2 == v4 )
          {
LABEL_9:
            v5 = self;
            *((float *)a3 + 1) = v8 + *(float *)(*(uint32_t *)(v7 + 44) + v10);
            v6 = *(float *)(v7 + 24);
          }
          else
          {
            while ( 1 )
            {
              v11 = (float *)(*(uint32_t *)(v7 + 44) + 44 * v10);
              ++v4;
              ++v10;
              v8 = v8 + *v11;
              *(float *)a3 = v8;
              if ( v10 >= *(uint32_t *)(v7 + 48) )
                break;
              if ( a2 == v4 )
              {
                v10 *= 44;
                goto LABEL_9;
              }
            }
            v6 = 0.0;
            v5 = self;
          }
        }
        result = (gameswf::EditTextCharacter::Self *)++v12;
        if ( v12 >= *((uint32_t *)v5 + 65) )
          break;
        v13 += 60;
        if ( v6 != 0.0 )
        {
          *((float *)a3 + 2) = v9 - v6;
          return result;
        }
      }
      if ( v6 != 0.0 )
        goto LABEL_16;
    }
    result = self;
    v6 = *((float *)self + 147);
LABEL_16:
    *((float *)a3 + 2) = v9 - v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::updateCursorPosition  (binary VA: 0x10fdf70)
// Original: gameswf::EditTextCharacter::updateCursorPosition
// ----------------------------------------------------------------------------
float * gameswf::EditTextCharacter::updateCursorPosition(gameswf::EditTextCharacter::Self *self)
{
  float *result;
  typedef float _g4_t_v2;
  typedef float _g4_t_v3;
  typedef uint32_t _g4_t_v4[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  gameswf::EditTextCharacter::getCharBoundaries(self, *((uint32_t *)self + 128), (gameswf::Rect::Self *)v4);
  *((uint32_t *)self + 129) = v4[0];
  *((uint32_t *)self + 130) = v4[2];
  result = *((float **)self + 65);
  if ( result == nullptr )
  {
    result = *((float **)self + 149);
    if ( result != nullptr )
    {
      if ( result == (float *)((char *)&dword_0 + 1) )
      {
        v2 = 0.0;
        v3 = 0.0;
        result = gameswf::EditTextCharacter::getCurrentZoneMargins(self, &v2, &v3);
        *((float *)self + 129) = (float)((float)((float)(*((float *)self + 143) - *((float *)self + 142))
                                               - *((float *)self + 151))
                                       - v3)
                               - 4.0;
      }
    }
    else
    {
      *((uint32_t *)self + 129) = 0;
    }
    *((uint32_t *)self + 130) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::flushPendingWord  (binary VA: 0x10fe720)
// Original: gameswf::EditTextCharacter::flushPendingWord
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::flushPendingWord(gameswf::EditTextCharacter::Self *self, bool a2)
{
  const gameswf::array<gameswf::TextGlyphRecord> *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  float *v7;
  int v8;
  int v9;
  int v10;
  int16_t v11; // bp
  uint16_t *v12;
  int v13;
  char *v14;
  char *v15;
  float v16; // xmm1_4
  int v17;
  float v18; // xmm5_4
  gameswf::EditTextCharacter::Self *v19;
  float v20; // xmm6_4
  float v21; // xmm2_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  int v25;
  gameswf::EditTextCharacter::Self *v26;
  gameswf::Self *v27;
  char *v28;
  int v29;
  int v30;
  char *v31;
  gameswf::RefCounted::Self *v32;
  uint32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int i;
  int v40;
  int v41;
  int v42;
  int v43;
  gameswf::RefCounted::Self *v44;
  gameswf::RefCounted::Self *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  gameswf::Self *v50;
  int v51;
  gameswf::Self *v52;
  gameswf::Self *v53;
  int v54;
  int v55;
  int v56;
  gameswf::Self *v57;
  char *v58;
  int v59;
  gameswf::RefCounted::Self **v60;
  char *v61;
  gameswf::RefCounted::Self *v62;
  gameswf::RefCounted::Self *v63;
  int v64;
  int v66;
  int v67;
  gameswf::Self *v68;
  int v69;
  int v70;
  float v71; // xmm2_4
  float v72; // xmm7_4
  float v73; // xmm3_4
  typedef int _g4_t_v74;
  typedef float _g4_t_RecordWidth;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef gameswf::RefCounted::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef gameswf::RefCounted::Self *_g4_t_v82;
  typedef gameswf::Self *_g4_t_v83;
  typedef gameswf::Self *_g4_t_v84;
  typedef gameswf::Self *_g4_t_v85;
  typedef gameswf::Self *_g4_t_v86;
  typedef float _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef char *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef float _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char *_g4_t_v95;
  typedef int16_t _g4_t_GlyphCount;
  typedef float _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef gameswf::array<gameswf::TextGlyphRecord> *_g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v74)) > _g4_s0 ? (12u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_RecordWidth)) > _g4_s1 ? (44u + sizeof(_g4_t_RecordWidth)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v76)) > _g4_s2 ? (44u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v77)) > _g4_s3 ? (48u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v78)) > _g4_s4 ? (48u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v79)) > _g4_s5 ? (48u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v80)) > _g4_s6 ? (76u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v81)) > _g4_s7 ? (76u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v82)) > _g4_s8 ? (76u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v83)) > _g4_s9 ? (80u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v84)) > _g4_s10 ? (80u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v85)) > _g4_s11 ? (80u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v86)) > _g4_s12 ? (80u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v87)) > _g4_s13 ? (84u + sizeof(_g4_t_v87)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v88)) > _g4_s14 ? (84u + sizeof(_g4_t_v88)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v89)) > _g4_s15 ? (84u + sizeof(_g4_t_v89)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v90)) > _g4_s16 ? (84u + sizeof(_g4_t_v90)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v91)) > _g4_s17 ? (84u + sizeof(_g4_t_v91)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v92)) > _g4_s18 ? (88u + sizeof(_g4_t_v92)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v93)) > _g4_s19 ? (88u + sizeof(_g4_t_v93)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v94)) > _g4_s20 ? (88u + sizeof(_g4_t_v94)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v95)) > _g4_s21 ? (88u + sizeof(_g4_t_v95)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_GlyphCount)) > _g4_s22 ? (92u + sizeof(_g4_t_GlyphCount)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v97)) > _g4_s23 ? (92u + sizeof(_g4_t_v97)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v98)) > _g4_s24 ? (92u + sizeof(_g4_t_v98)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v99)) > _g4_s25 ? (96u + sizeof(_g4_t_v99)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v100)) > _g4_s26 ? (96u + sizeof(_g4_t_v100)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v101)) > _g4_s27 ? (100u + sizeof(_g4_t_v101)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v102)) > _g4_s28 ? (100u + sizeof(_g4_t_v102)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v103)) > _g4_s29 ? (104u + sizeof(_g4_t_v103)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v104)) > _g4_s30 ? (108u + sizeof(_g4_t_v104)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v105)) > _g4_s31 ? (112u + sizeof(_g4_t_v105)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v106)) > _g4_s32 ? (116u + sizeof(_g4_t_v106)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v107)) > _g4_s33 ? (120u + sizeof(_g4_t_v107)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v108)) > _g4_s34 ? (124u + sizeof(_g4_t_v108)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 12u);
  _g4_t_RecordWidth &RecordWidth = *reinterpret_cast<_g4_t_RecordWidth *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 76u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 76u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 80u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 80u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 80u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 84u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 84u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 84u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 84u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 88u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 88u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 88u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 88u);
  _g4_t_GlyphCount &GlyphCount = *reinterpret_cast<_g4_t_GlyphCount *>(_g4_sf + 92u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 92u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 92u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 96u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 96u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 100u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 100u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 104u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 108u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 112u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 116u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 120u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 124u);

  v105 = 0.0;
  v106 = 0.0;
  gameswf::EditTextCharacter::getCurrentZoneMargins(self, &v105, &v106);
  v2 = (const gameswf::array<gameswf::TextGlyphRecord> *)((gameswf::EditTextCharacter::Self *)((char *)self + 272));
  v77 = v105 + *((float *)self + 131);
  RecordWidth = gameswf::EditTextCharacter::getRecordWidth(self, (gameswf::EditTextCharacter::Self *)((char *)self + 272));
  v104 = (gameswf::array<gameswf::TextGlyphRecord> *)((gameswf::EditTextCharacter::Self *)((char *)self + 288));
  v78 = v77 + RecordWidth;
  v76 = gameswf::EditTextCharacter::getRecordWidth(self, (gameswf::EditTextCharacter::Self *)((char *)self + 288));
  if ( (float)(v76 + v78) < (float)((float)((float)((float)(*((float *)self + 143) - *((float *)self + 142))
                                                  - *((float *)self + 151))
                                          - v106)
                                  - 4.0)
    && !a2 )
  {
    goto LABEL_28;
  }
  v87 = gameswf::EditTextCharacter::getRecordWidth(self, v2);
  v3 = *((uint32_t *)self + 69);
  if ( v3 > 0 )
  {
    v4 = *((uint32_t *)self + 68) + 60 * (v3 - 1);
    v5 = *(uint32_t *)(v4 + 48);
    if ( v5 > 0 )
    {
      v6 = *(uint32_t *)(v4 + 44) + 44 * (v5 - 1);
      if ( *(uint16_t *)(v6 + 32) == 32 )
        v87 = v87 - *(float *)v6;
    }
  }
  gameswf::EditTextCharacter::getMaxHeight(self, v2, &v107, v108);
  gameswf::EditTextCharacter::updateRecordOffsets(
    self,
    (gameswf::array<gameswf::TextGlyphRecord> *)(v2),
    v105 + *((float *)self + 131),
    *((float *)self + 132),
    v107,
    v108[0]);
  v7 = (float *)self;
  v8 = *((uint32_t *)self + 69);
  if ( v8 <= 0 )
  {
    v9 = *((uint32_t *)self + 149);
  }
  else
  {
    v7 = (float *)self;
    v9 = *(uint32_t *)(*((uint32_t *)self + 68) + 60 * (v8 - 1) + 36);
  }
  *(float *)&v74 = (float)((float)(v105 + v7[131]) + v7[133]) + v87;
  gameswf::EditTextCharacter::alignLine(
    (int)(uintptr_t)(v7),
    v9,
    (int *)v2,
    v74,
    (float)((float)((float)((float)(v7[143] - v7[142]) - v7[151]) - v106) - *(float *)&v74) - 4.0);
  if ( *((int *)self + 69) > 0 )
  {
    v10 = *((uint32_t *)self + 81);
    v11 = 0;
    if ( v10 > 0 )
    {
      v12 = (uint16_t *)(*((uint32_t *)self + 80) + 4 * v10 - 4);
      v11 = *v12 + v12[1];
    }
    GlyphCount = gameswf::EditTextCharacter::getGlyphCount(self, v2);
    v13 = *((uint32_t *)self + 81);
    v99 = v13 + 1;
    v101 = *((uint32_t *)self + 82);
    if ( v13 + 1 <= v101 || *((uint32_t *)self + 83) != 0 )
    {
      v14 = *((char **)self + 80);
    }
    else
    {
      v69 = v99 + (v99 >> 1);
      *((uint32_t *)self + 82) = v69;
      if ( v69 != 0 )
      {
        if ( *((uint32_t *)self + 80) != 0 )
          v14 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 80), 4 * v69, 4 * v101);
        else
          v14 = (char *)gameswf::malloc_internal(4 * v69);
        *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(v14);
        v13 = *((uint32_t *)self + 81);
      }
      else
      {
        if ( *((uint32_t *)self + 80) != 0 )
        {
          gameswf::free_internal(*((gameswf::Self **)self + 80));
          v13 = *((uint32_t *)self + 81);
        }
        v14 = nullptr;
        *((uint32_t *)self + 80) = 0;
      }
    }
    v15 = &v14[4 * v13];
    if ( v15 != nullptr )
    {
      *(uint16_t *)v15 = v11;
      *((uint16_t *)v15 + 1) = GlyphCount;
    }
    *((uint32_t *)self + 81) = v99;
  }
  gameswf::array_gameswf_TextGlyphRecord_2b5322::append((gameswf::EditTextCharacter::Self *)((char *)self + 256), v2);
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize(v2, 0);
  v16 = v108[0];
  v17 = *((uint32_t *)self + 65);
  v18 = v108[0] + *((float *)self + 132);
  if ( v17 > 0 && *(uint8_t *)(*((uint32_t *)self + 64) + 60 * (v17 - 1) + 35) == 0 && (unsigned int)v9 <= 1 )
    v9 ^= 1u;
  switch ( v9 )
  {
    case 0:
      v19 = self;
      v21 = *((float *)self + 131);
      goto LABEL_126;
    case 1:
      v19 = self;
      v21 = (float)(*((float *)self + 143) - *((float *)self + 151)) - v87;
LABEL_126:
      v92 = *((float *)v19 + 150);
      v97 = v21;
      v20 = v87;
      goto LABEL_23;
    case 2:
      v19 = self;
      v92 = *((float *)self + 150);
      v20 = v87;
      v21 = (float)((float)((float)((float)((float)(*((float *)self + 143) - *((float *)self + 142)) - v92)
                                  - *((float *)self + 151))
                          * 0.5)
                  + *((float *)self + 142))
          - (float)(0.5 * v87);
      v97 = v21;
      goto LABEL_23;
    case 3:
      v19 = self;
      v92 = *((float *)self + 150);
      v97 = v92;
      v20 = *((float *)self + 151);
      v21 = 0.0;
      goto LABEL_23;
    default:
      v19 = self;
      v92 = *((float *)self + 150);
      v20 = v87;
      v21 = 0.0;
      v97 = 0.0;
LABEL_23:
      v22 = v20 + v21;
      if ( *((uint32_t *)v19 + 81) == 1 )
      {
        *((uint32_t *)v19 + 115) = 0;
        *((float *)v19 + 113) = v97;
        *((float *)v19 + 114) = v22;
        *((float *)v19 + 116) = v18;
      }
      else
      {
        v71 = fmaxf(fmaxf(*((float *)v19 + 116), 0.0), v18);
        v72 = fminf(fminf(v97, *((float *)v19 + 113)), v22);
        v73 = fmaxf(fmaxf(*((float *)v19 + 114), v97), v22);
        *((float *)v19 + 115) = fminf(fminf(*((float *)v19 + 115), 0.0), v18);
        *((float *)v19 + 116) = v71;
        *((float *)v19 + 113) = v72;
        *((float *)v19 + 114) = v73;
      }
      v23 = 0.0;
      if ( a2 )
        v23 = *((float *)self + 152);
      v24 = v16 + *((float *)self + 132);
      *((float *)self + 131) = fmaxf(v23 + v92, 0.0);
      *((float *)self + 132) = v24;
LABEL_28:
      v25 = *((uint32_t *)self + 69);
      if ( v25 <= 0 )
      {
        gameswf::array_gameswf_TextGlyphRecord_2b5322::append(v2, v104);
      }
      else
      {
        v88 = *((uint32_t *)self + 73);
        if ( v88 > 0 )
        {
          v102 = 0;
          v100 = 0;
          v26 = self;
          while ( 1 )
          {
            v27 = *((gameswf::Self **)v26 + 68);
            v28 = (char *)v27 + 60 * v25 - 60;
            v83 = v27;
            v29 = *((uint32_t *)self + 72) + v102;
            if ( (((uint8_t)v28[9] << 8)
                | (uint8_t)v28[10]
                | ((uint8_t)v28[8] << 16)
                | ((uint8_t)v28[11] << 24)) != ((*(uint8_t *)(v29 + 9) << 8)
                                                      | *(uint8_t *)(v29 + 10)
                                                      | (*(uint8_t *)(v29 + 8) << 16)
                                                      | (*(uint8_t *)(v29 + 11) << 24))
              || *((uint32_t *)v28 + 1) != *(uint32_t *)(v29 + 4)
              || v28[12] != *(uint8_t *)(v29 + 12)
              || *((float *)v28 + 6) != *(float *)(v29 + 24) )
            {
              break;
            }
            v49 = *(uint32_t *)(v29 + 48);
            v98 = v49;
            v103 = *(uint32_t *)(v29 + 44);
            if ( v49 > 0 )
            {
              v50 = *((gameswf::Self **)v28 + 12);
              v51 = (int)(uintptr_t)(v50) + v49;
              v85 = v50;
              v52 = *((gameswf::Self **)v28 + 11);
              if ( (int)(uintptr_t)(v50) > (int)(uintptr_t)((char *)v50 + v49) )
              {
                v90 = v28;
                v94 = (int)(uintptr_t)(v50) + v49;
                v53 = (gameswf::Self *)((char *)v50 + v49);
                v54 = 44 * v51;
                do
                {
                  if ( *(uint32_t *)((char *)v52 + v54 + 4) != 0 )
                  {
                    gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)((char *)v52 + v54 + 4));
                    v52 = *((gameswf::Self **)v90 + 11);
                  }
                  v53 = (gameswf::Self *)((char *)v53 + 1);
                  v54 += 44;
                }
                while ( v53 != v85 );
                v28 = v90;
                v51 = v94;
              }
              if ( v51 != 0 )
              {
                v55 = *((uint32_t *)v28 + 13);
                if ( v51 > v55 && *((uint32_t *)v28 + 14) == 0 )
                {
                  v70 = v51 + (v51 >> 1);
                  *((uint32_t *)v28 + 13) = v70;
                  if ( v70 != 0 )
                  {
                    if ( v52 != nullptr )
                      v52 = (gameswf::Self *)gameswf::realloc_internal(v52, 44 * v70, 44 * v55);
                    else
                      v52 = (gameswf::Self *)gameswf::malloc_internal(44 * v70);
                    *((uint32_t *)v28 + 11) = (uint32_t)(uintptr_t)(v52);
                  }
                  else
                  {
                    if ( v52 != nullptr )
                      gameswf::free_internal(v52);
                    *((uint32_t *)v28 + 11) = 0;
                    v52 = nullptr;
                  }
                }
              }
              if ( (int)(uintptr_t)(v85) < v51 )
              {
                v56 = 44 * (uint32_t)(uintptr_t)(v85);
                v57 = v85;
                do
                {
                  v58 = (char *)v52 + v56;
                  if ( (gameswf::Self *)((char *)v52 + v56) != nullptr )
                  {
                    *(uint32_t *)v58 = 1140850688;
                    *((uint32_t *)v58 + 1) = 0;
                    *((uint32_t *)v58 + 6) = 0;
                    *((uint16_t *)v58 + 14) = 0;
                    *((uint16_t *)v58 + 15) = -1;
                    *((uint16_t *)v58 + 16) = 0;
                    v58[34] = 0;
                    *((uint32_t *)v58 + 9) = 0;
                    *((uint32_t *)v58 + 10) = 0;
                    v52 = *((gameswf::Self **)v28 + 11);
                  }
                  v57 = (gameswf::Self *)((char *)v57 + 1);
                  v56 += 44;
                }
                while ( v57 != (gameswf::Self *)v51 );
              }
              *((uint32_t *)v28 + 12) = v51;
              v59 = v103;
              v86 = (gameswf::Self *)(44 * (uint32_t)(uintptr_t)(v85));
              v95 = v28;
              v91 = 0;
              v60 = (gameswf::RefCounted::Self **)(v103 + 4);
              while ( 1 )
              {
                v61 = (char *)v52 + (uint32_t)(uintptr_t)(v86);
                *(uint32_t *)v61 = *(uint32_t *)v59;
                v62 = *((gameswf::RefCounted::Self **)v61 + 1);
                v63 = *v60;
                if ( *v60 != v62 )
                {
                  if ( v62 != nullptr )
                  {
                    v82 = *v60;
                    gameswf::RefCounted::dropRef(v62);
                    v63 = v82;
                  }
                  *((uint32_t *)v61 + 1) = (uint32_t)(uintptr_t)(v63);
                  if ( v63 != nullptr )
                    gameswf::RefCounted::addRef(v63);
                }
                ++v91;
                *((uint32_t *)v61 + 2) = *(uint32_t *)(v59 + 8);
                *((uint32_t *)v61 + 3) = *(uint32_t *)(v59 + 12);
                *((uint32_t *)v61 + 4) = *(uint32_t *)(v59 + 16);
                *((uint32_t *)v61 + 5) = *(uint32_t *)(v59 + 20);
                *((uint32_t *)v61 + 6) = *(uint32_t *)(v59 + 24);
                *((uint16_t *)v61 + 14) = *(uint16_t *)(v59 + 28);
                *((uint16_t *)v61 + 15) = *(uint16_t *)(v59 + 30);
                *((uint16_t *)v61 + 16) = *(uint16_t *)(v59 + 32);
                v86 = (gameswf::Self *)((char *)v86 + 44);
                v60 += 11;
                v61[34] = *(uint8_t *)(v59 + 34);
                v64 = *(uint32_t *)(v59 + 36);
                *((uint32_t *)v61 + 10) = *(uint32_t *)(v59 + 40);
                v59 += 44;
                *((uint32_t *)v61 + 9) = v64;
                if ( v91 == v98 )
                  break;
                v52 = *((gameswf::Self **)v95 + 11);
              }
              v88 = *((uint32_t *)self + 73);
            }
LABEL_57:
            ++v100;
            v102 += 60;
            if ( v100 >= v88 )
              return ((gameswf::array_gameswf_TextGlyphRecord_2b5322::resize(v104, 0)), (int)0);
            v26 = self;
            v25 = *((uint32_t *)self + 69);
          }
          v89 = v25 + 1;
          v30 = *((uint32_t *)self + 70);
          if ( v25 + 1 > v30 && *((uint32_t *)self + 71) == 0 )
          {
            v66 = v89 + (v89 >> 1);
            *((uint32_t *)self + 70) = v66;
            if ( v66 != 0 )
            {
              if ( v83 != nullptr )
                v83 = (gameswf::Self *)gameswf::realloc_internal(v83, 60 * v66, 60 * v30);
              else
                v83 = (gameswf::Self *)gameswf::malloc_internal(60 * v66);
              *((uint32_t *)self + 68) = (uint32_t)(uintptr_t)(v83);
              v25 = *((uint32_t *)self + 69);
            }
            else
            {
              if ( v83 != nullptr )
              {
                gameswf::free_internal(v83);
                v25 = *((uint32_t *)self + 69);
              }
              v83 = nullptr;
              *((uint32_t *)self + 68) = 0;
            }
          }
          v31 = (char *)v83 + 60 * v25;
          if ( v31 != nullptr )
          {
            *(uint32_t *)v31 = *(uint32_t *)v29;
            v32 = *(gameswf::RefCounted::Self **)(v29 + 4);
            *((uint32_t *)v31 + 1) = (uint32_t)(uintptr_t)(v32);
            if ( v32 != nullptr )
              gameswf::RefCounted::addRef(v32);
            *((uint32_t *)v31 + 2) = *(uint32_t *)(v29 + 8);
            v84 = (gameswf::Self *)(v29 + 44);
            v33 = (uint32_t *)(v31 + 44);
            v31[12] = *(uint8_t *)(v29 + 12);
            *((uint32_t *)v31 + 4) = *(uint32_t *)(v29 + 16);
            *((uint32_t *)v31 + 5) = *(uint32_t *)(v29 + 20);
            *((uint32_t *)v31 + 6) = *(uint32_t *)(v29 + 24);
            *((uint32_t *)v31 + 7) = *(uint32_t *)(v29 + 28);
            v31[32] = *(uint8_t *)(v29 + 32);
            v31[33] = *(uint8_t *)(v29 + 33);
            v31[34] = *(uint8_t *)(v29 + 34);
            v31[35] = *(uint8_t *)(v29 + 35);
            *((uint32_t *)v31 + 9) = *(uint32_t *)(v29 + 36);
            *((uint32_t *)v31 + 10) = *(uint32_t *)(v29 + 40);
            *((uint32_t *)v31 + 11) = 0;
            *((uint32_t *)v31 + 12) = 0;
            *((uint32_t *)v31 + 13) = 0;
            *((uint32_t *)v31 + 14) = 0;
            v34 = *(uint32_t *)(v29 + 48);
            if ( v34 < 0 )
            {
              v35 = 0;
              v36 = 44 * v34;
              v93 = v34;
              while ( 1 )
              {
                if ( *(uint32_t *)(v35 + v36 + 4) != 0 )
                  gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v35 + v36 + 4));
                v36 += 44;
                if ( ++v34 == 0 )
                  break;
                v35 = *((uint32_t *)v31 + 11);
              }
              v33 = (uint32_t *)(v31 + 44);
              v34 = v93;
              goto LABEL_43;
            }
            if ( v34 != 0 )
            {
LABEL_43:
              v37 = *((uint32_t *)v31 + 13);
              if ( v34 > v37 && *((uint32_t *)v31 + 14) == 0 )
              {
                v67 = v34 + (v34 >> 1);
                *((uint32_t *)v31 + 13) = v67;
                if ( v67 != 0 )
                {
                  v68 = *((gameswf::Self **)v31 + 11);
                  if ( v68 != nullptr )
                    *((uint32_t *)v31 + 11) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v68, 44 * v67, 44 * v37));
                  else
                    *((uint32_t *)v31 + 11) = gameswf::malloc_internal(44 * v67);
                }
                else
                {
                  if ( *((uint32_t *)v31 + 11) != 0 )
                    gameswf::free_internal(*((gameswf::Self **)v31 + 11));
                  *((uint32_t *)v31 + 11) = 0;
                }
              }
              if ( v34 <= 0 )
              {
                *((uint32_t *)v31 + 12) = v34;
              }
              else
              {
                v38 = 0;
                for ( i = 0; i != v34; ++i )
                {
                  v40 = *v33 + v38;
                  if ( v40 != 0 )
                  {
                    *(uint32_t *)v40 = 1140850688;
                    *(uint32_t *)(v40 + 4) = 0;
                    *(uint32_t *)(v40 + 24) = 0;
                    *(uint16_t *)(v40 + 28) = 0;
                    *(uint16_t *)(v40 + 30) = -1;
                    *(uint16_t *)(v40 + 32) = 0;
                    *(uint8_t *)(v40 + 34) = 0;
                    *(uint32_t *)(v40 + 36) = 0;
                    *(uint32_t *)(v40 + 40) = 0;
                  }
                  v38 += 44;
                }
                *((uint32_t *)v31 + 12) = i;
                v41 = 0;
                do
                {
                  v42 = *v33 + 44 * v41;
                  v43 = *(uint32_t *)v84 + 44 * v41;
                  v44 = *(gameswf::RefCounted::Self **)(v42 + 4);
                  *(uint32_t *)v42 = *(uint32_t *)v43;
                  v45 = *(gameswf::RefCounted::Self **)(v43 + 4);
                  if ( v45 != v44 )
                  {
                    if ( v44 != nullptr )
                    {
                      v80 = v43;
                      v79 = *(gameswf::RefCounted::Self **)(v43 + 4);
                      gameswf::RefCounted::dropRef(v44);
                      v45 = v79;
                      v43 = v80;
                    }
                    *(uint32_t *)(v42 + 4) = (uint32_t)(uintptr_t)(v45);
                    if ( v45 != nullptr )
                    {
                      v81 = v43;
                      gameswf::RefCounted::addRef(v45);
                      v43 = v81;
                    }
                  }
                  ++v41;
                  *(uint32_t *)(v42 + 8) = *(uint32_t *)(v43 + 8);
                  *(uint32_t *)(v42 + 12) = *(uint32_t *)(v43 + 12);
                  *(uint32_t *)(v42 + 16) = *(uint32_t *)(v43 + 16);
                  *(uint32_t *)(v42 + 20) = *(uint32_t *)(v43 + 20);
                  *(uint32_t *)(v42 + 24) = *(uint32_t *)(v43 + 24);
                  *(uint16_t *)(v42 + 28) = *(uint16_t *)(v43 + 28);
                  *(uint16_t *)(v42 + 30) = *(uint16_t *)(v43 + 30);
                  *(uint16_t *)(v42 + 32) = *(uint16_t *)(v43 + 32);
                  *(uint8_t *)(v42 + 34) = *(uint8_t *)(v43 + 34);
                  v46 = *(uint32_t *)(v43 + 40);
                  v47 = *(uint32_t *)(v43 + 36);
                  *(uint32_t *)(v42 + 40) = v46;
                  *(uint32_t *)(v42 + 36) = v47;
                }
                while ( v41 < v33[1] );
              }
              goto LABEL_56;
            }
            *((uint32_t *)v31 + 12) = 0;
          }
LABEL_56:
          v48 = *((uint32_t *)self + 73);
          *((uint32_t *)self + 69) = v89;
          v88 = v48;
          goto LABEL_57;
        }
      }
      return ((gameswf::array_gameswf_TextGlyphRecord_2b5322::resize(v104, 0)), (int)0);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::display  (binary VA: 0x10ff500)
// Original: gameswf::EditTextCharacter::display
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::display(long double a1, gameswf::EditTextCharacter::Self *self)
{
  gameswf::EditTextCharacter::Self *v2;
  char v3; // di
  char v4;
  gameswf::Root::Self **v5;
  int v6;
  bool v7;
  gameswf::Self *v8;
  float v9; // xmm0_4
  float v10; // xmm2_4
  int v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  char v18;
  int v19;
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  gameswf::Root::Self *v26;
  gameswf::Root::Self *v27;
  unsigned int v28; // xmm0_4
  unsigned int v29;
  float v30;
  gameswf::Root::Self *v31;
  uint32_t *v32;
  bool v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint8_t *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  float v45; // xmm2_4
  float v46; // xmm3_4
  float v47; // xmm4_4
  float v48; // xmm5_4
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  float v53; // xmm0_4
  float v54; // xmm1_4
  int v55;
  int v56;
  float v57; // xmm0_4
  int v58;
  typedef gameswf::timer::Self *_g4_t_v59;
  typedef int64_t _g4_t_v60;
  typedef uint8_t _g4_t_v61;
  typedef uint8_t _g4_t_v62;
  typedef uint8_t _g4_t_v63;
  typedef gameswf::Self **_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef double _g4_t_v71;
  typedef uint8_t *_g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef bool _g4_t_v75;
  typedef char _g4_t_v76;
  typedef char _g4_t_v77;
  typedef double _g4_t_v78;
  typedef double _g4_t_v79;
  typedef char _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint8_t _g4_t_v82;
  typedef gameswf::Self **_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef uint8_t _g4_t_v86;
  typedef gameswf::Root::Self *_g4_t_v87;
  typedef gameswf::Root::Self *_g4_t_v88;
  typedef gameswf::Root::Self *_g4_t_v89;
  typedef unsigned int _g4_t_v90[8];
  typedef int _g4_t_v91;
  typedef float _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int16_t _g4_t_v94;
  typedef int16_t _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef float _g4_t_v98[3];
  typedef unsigned int _g4_t_v99;
  typedef unsigned int _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef gameswf::EditTextCharacter::Self *_g4_t_v105;
  typedef float _g4_t_v106;
  typedef unsigned int _g4_t_v107;
  typedef float _g4_t_v108;
  typedef unsigned int _g4_t_v109;
  typedef unsigned int _g4_t_v110;
  typedef unsigned int _g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef unsigned int _g4_t_v113;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v59)) > _g4_s0 ? (0u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v60)) > _g4_s1 ? (0u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v61)) > _g4_s2 ? (12u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v62)) > _g4_s3 ? (16u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v63)) > _g4_s4 ? (20u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v64)) > _g4_s5 ? (24u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v65)) > _g4_s6 ? (28u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v66)) > _g4_s7 ? (44u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v67)) > _g4_s8 ? (44u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v68)) > _g4_s9 ? (44u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v69)) > _g4_s10 ? (44u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v70)) > _g4_s11 ? (44u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v71)) > _g4_s12 ? (48u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v72)) > _g4_s13 ? (64u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v73)) > _g4_s14 ? (80u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v74)) > _g4_s15 ? (80u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v75)) > _g4_s16 ? (80u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v76)) > _g4_s17 ? (80u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v77)) > _g4_s18 ? (80u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v78)) > _g4_s19 ? (80u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v79)) > _g4_s20 ? (104u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (115u + sizeof(_g4_t_v80)) > _g4_s21 ? (115u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v81)) > _g4_s22 ? (116u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v82)) > _g4_s23 ? (116u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v83)) > _g4_s24 ? (120u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v84)) > _g4_s25 ? (124u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v85)) > _g4_s26 ? (124u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v86)) > _g4_s27 ? (124u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v87)) > _g4_s28 ? (144u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v88)) > _g4_s29 ? (152u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v89)) > _g4_s30 ? (156u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v90)) > _g4_s31 ? (160u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (192u + sizeof(_g4_t_v91)) > _g4_s32 ? (192u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (196u + sizeof(_g4_t_v92)) > _g4_s33 ? (196u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (200u + sizeof(_g4_t_v93)) > _g4_s34 ? (200u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (204u + sizeof(_g4_t_v94)) > _g4_s35 ? (204u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (206u + sizeof(_g4_t_v95)) > _g4_s36 ? (206u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (208u + sizeof(_g4_t_v96)) > _g4_s37 ? (208u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (228u + sizeof(_g4_t_v97)) > _g4_s38 ? (228u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (240u + sizeof(_g4_t_v98)) > _g4_s39 ? (240u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (252u + sizeof(_g4_t_v99)) > _g4_s40 ? (252u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (256u + sizeof(_g4_t_v100)) > _g4_s41 ? (256u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (260u + sizeof(_g4_t_v101)) > _g4_s42 ? (260u + sizeof(_g4_t_v101)) : _g4_s42,
    _g4_s44 = (264u + sizeof(_g4_t_v102)) > _g4_s43 ? (264u + sizeof(_g4_t_v102)) : _g4_s43,
    _g4_s45 = (268u + sizeof(_g4_t_v103)) > _g4_s44 ? (268u + sizeof(_g4_t_v103)) : _g4_s44,
    _g4_s46 = (272u + sizeof(_g4_t_v104)) > _g4_s45 ? (272u + sizeof(_g4_t_v104)) : _g4_s45,
    _g4_s47 = (276u + sizeof(_g4_t_v105)) > _g4_s46 ? (276u + sizeof(_g4_t_v105)) : _g4_s46,
    _g4_s48 = (280u + sizeof(_g4_t_v106)) > _g4_s47 ? (280u + sizeof(_g4_t_v106)) : _g4_s47,
    _g4_s49 = (284u + sizeof(_g4_t_v107)) > _g4_s48 ? (284u + sizeof(_g4_t_v107)) : _g4_s48,
    _g4_s50 = (288u + sizeof(_g4_t_v108)) > _g4_s49 ? (288u + sizeof(_g4_t_v108)) : _g4_s49,
    _g4_s51 = (292u + sizeof(_g4_t_v109)) > _g4_s50 ? (292u + sizeof(_g4_t_v109)) : _g4_s50,
    _g4_s52 = (296u + sizeof(_g4_t_v110)) > _g4_s51 ? (296u + sizeof(_g4_t_v110)) : _g4_s51,
    _g4_s53 = (300u + sizeof(_g4_t_v111)) > _g4_s52 ? (300u + sizeof(_g4_t_v111)) : _g4_s52,
    _g4_s54 = (304u + sizeof(_g4_t_v112)) > _g4_s53 ? (304u + sizeof(_g4_t_v112)) : _g4_s53,
    _g4_s55 = (308u + sizeof(_g4_t_v113)) > _g4_s54 ? (308u + sizeof(_g4_t_v113)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 44u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 80u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 115u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 116u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 120u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 124u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 124u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 124u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 144u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 152u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 156u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 160u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 192u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 196u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 200u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 204u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 206u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 208u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 228u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 240u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 252u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 256u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 260u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 264u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 268u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 272u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 276u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 280u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 284u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 288u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 292u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 296u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 300u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 304u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 308u);

  v2 = self;
  if ( *((uint8_t *)self + 148) == 0 )
    return;
  v3 = *((uint8_t *)self + 145);
  v4 = *((uint8_t *)self + 146);
  if ( v3 != 0 )
    *((uint8_t *)self + 433) = 1;
  if ( v4 != 0 )
    *((uint8_t *)self + 434) = 1;
  if ( v3 == 0 )
  {
    if ( v4 == 0 )
      goto LABEL_8;
LABEL_34:
    v14 = *((uint32_t *)self + 14);
    if ( v14 != 0 )
    {
      v15 = (uint32_t *)(v14 + 80);
      if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
      {
LABEL_36:
        *((uint32_t *)self + 20) = *v15;
        *((uint32_t *)self + 21) = v15[1];
        *((uint32_t *)self + 22) = v15[2];
        *((uint32_t *)self + 23) = v15[3];
        *((uint32_t *)self + 24) = v15[4];
        *((uint32_t *)self + 25) = v15[5];
        *((uint32_t *)self + 26) = v15[6];
        *((uint32_t *)self + 27) = v15[7];
        HIDWORD(v60) = *((uint32_t *)self + 16);
        v73 = v4;
        LODWORD(v60) = (uint32_t)(uintptr_t)((char *)self + 80);
        gameswf::CxForm::concatenate(v60);
        *((uint8_t *)self + 146) = 0;
        v4 = v73;
        goto LABEL_8;
      }
      v76 = v4;
      sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
      *((uint32_t *)self + 14) = 0;
      v4 = v76;
    }
    v15 = (uint32_t *)(gameswf::CxForm::identity);
    goto LABEL_36;
  }
  v16 = *((uint32_t *)self + 14);
  if ( v16 != 0 )
  {
    v17 = (uint32_t *)(v16 + 112);
    if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
      goto LABEL_39;
    v77 = v4;
    sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
    *((uint32_t *)self + 14) = 0;
    v4 = v77;
  }
  v17 = (uint32_t *)(gameswf::Matrix::identity);
LABEL_39:
  *((uint32_t *)self + 28) = *v17;
  *((uint32_t *)self + 29) = v17[1];
  *((uint32_t *)self + 30) = v17[2];
  *((uint32_t *)self + 31) = v17[3];
  *((uint32_t *)self + 32) = v17[4];
  *((uint32_t *)self + 33) = v17[5];
  v74 = v4;
  gameswf::Matrix::concatenate(
    (gameswf::EditTextCharacter::Self *)((char *)self + 112),
    *((const gameswf::Matrix::Self **)self + 17));
  v18 = *((uint8_t *)self + 146);
  *((uint8_t *)self + 145) = 0;
  v4 = v74;
  if ( v18 != 0 )
    goto LABEL_34;
LABEL_8:
  v5 = (gameswf::Root::Self **)gameswf::s_render_handler;
  if ( *((uint8_t *)gameswf::s_render_handler + 348) == 0 )
  {
    gameswf::s_render_handler[29] = *((uint32_t *)self + 28);
    v5[30] = *((gameswf::Root::Self **)self + 29);
    v5[31] = *((gameswf::Root::Self **)self + 30);
    v5[32] = *((gameswf::Root::Self **)self + 31);
    v5[33] = *((gameswf::Root::Self **)self + 32);
    v5[34] = *((gameswf::Root::Self **)self + 33);
    v101 = *((float *)self + 113);
    v102 = *((float *)self + 114);
    v103 = *((float *)self + 115);
    v104 = *((float *)self + 116);
    v19 = *((uint32_t *)self + 63);
    v20 = *((float *)self + 135);
    LOWORD(v98[0]) = 3;
    v21 = v20 + v104;
    v98[1] = 0.0;
    v98[2] = 0.0;
    v99 = 0;
    v100 = 0;
    v105 = self;
    v104 = v21;
    if ( *(uint8_t *)(v19 + 74) != 0 )
    {
      v22 = *((float *)self + 142);
      v23 = *((float *)self + 143);
      v24 = *((float *)self + 145);
      v25 = *((float *)self + 144);
      v102 = fmaxf(fmaxf(v102, v22), v23);
      v103 = fminf(fminf(v103, v25), v24);
      v101 = fminf(fminf(v101, v22), v23);
      v104 = fmaxf(fmaxf(v24, v25), v21);
    }
    v75 = v4;
    gameswf::RenderHandler::draw(v5, (gameswf::Self *)v98);
    gameswf::DisplayList::display((gameswf::EditTextCharacter::Self *)((char *)self + 212), v3, v75);
    return;
  }
  v6 = *((uint32_t *)self + 63);
  if ( *(uint8_t *)(v6 + 74) != 0 )
  {
    v87 = *((gameswf::Root::Self **)self + 30);
    v26 = *((gameswf::Root::Self **)self + 31);
    v88 = *((gameswf::Root::Self **)self + 32);
    v89 = *((gameswf::Root::Self **)self + 33);
    v27 = *((gameswf::Root::Self **)self + 28);
    gameswf::s_render_handler[30] = *((uint32_t *)self + 29);
    v5[29] = v27;
    v5[31] = v87;
    v5[32] = v26;
    v5[33] = v88;
    v5[34] = v89;
    v28 = *((uint32_t *)self + 145);
    v29 = *((uint32_t *)self + 144);
    v30 = *((float *)self + 143);
    v90[0] = *((uint32_t *)self + 142);
    v90[1] = v29;
    *(float *)&v90[2] = v30;
    v90[3] = v29;
    v90[4] = v90[0];
    v90[5] = v28;
    *(float *)&v90[6] = v30;
    v90[7] = v28;
    v98[0] = *(float *)v90;
    LODWORD(v98[1]) = v29;
    v98[2] = v30;
    v99 = v29;
    v100 = v90[0];
    LODWORD(v101) = v28;
    v102 = v30;
    LODWORD(v103) = v28;
    v104 = *(float *)v90;
    v105 = (gameswf::EditTextCharacter::Self *)v29;
    v106 = v30;
    v107 = v29;
    v108 = v30;
    v109 = v28;
    v110 = v90[0];
    v111 = v28;
    v112 = v90[0];
    v113 = v29;
    if ( v5 == nullptr )
      goto LABEL_108;
    v31 = *((gameswf::Root::Self **)self + 155);
    v5[43] = nullptr;
    v5[50] = v31;
    v5[52] = nullptr;
    v92 = COERCE_FLOAT(v98);
    LOWORD(v91) = 257;
    v93 = 0;
    v95 = 0;
    v96 = 0;
    v97 = 0;
    v94 = 4;
    gameswf::RenderHandler::draw(v5, (gameswf::Self *)&v91);
    v32 = (uint32_t *)(gameswf::s_render_handler);
    if ( gameswf::s_render_handler != nullptr )
    {
      *((uint8_t *)gameswf::s_render_handler + 200) = 0;
      *((uint8_t *)v32 + 201) = 0;
      *((uint8_t *)v32 + 202) = 0;
      *((uint8_t *)v32 + 203) = -1;
      v32[51] = 0;
      v92 = COERCE_FLOAT(&v104);
      LOWORD(v91) = 258;
      v93 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v94 = 5;
      gameswf::RenderHandler::draw((gameswf::Root::Self **)v32, (gameswf::Self *)&v91);
      v6 = *((uint32_t *)self + 63);
      v5 = (gameswf::Root::Self **)gameswf::s_render_handler;
    }
    else
    {
LABEL_108:
      LOWORD(v91) = 258;
      v92 = COERCE_FLOAT(&v104);
      v93 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v94 = 5;
      v6 = *((uint32_t *)self + 63);
      v5 = nullptr;
    }
  }
  v7 = false;
  if ( *(uint32_t *)(v6 + 144) != 0 && fabs(*((float *)self + 29)) < 0.001f )
    v7 = fabs(*((float *)self + 31)) < 0.001f;
  if ( v5 != nullptr )
    *((uint8_t *)v5 + 4) = v7;
  if ( *(uint8_t *)(*((uint32_t *)self + 4) + 212) == 0 )
    goto LABEL_19;
  if ( *((uint8_t *)self + 432) != 0 )
    goto LABEL_17;
  if ( (uint8_t)gameswf::GlyphRenderCache::isValid((gameswf::EditTextCharacter::Self *)((char *)self + 336), self) == 0
    || *((uint8_t *)self + 563) == 0 )
  {
    goto LABEL_57;
  }
  if ( *((uint32_t *)self + 158) != 0 )
  {
    if ( *(uint8_t *)(*((uint32_t *)self + 157) + 2) == 0 )
    {
      sub_7E5ED0((gameswf::Self **)self + 157, nullptr);
      *((uint32_t *)self + 158) = 0;
      goto LABEL_53;
    }
LABEL_57:
    if ( *(uint8_t *)(*((uint32_t *)self + 4) + 212) == 0 )
      goto LABEL_19;
LABEL_17:
    if ( *((uint32_t *)self + 158) != 0 )
    {
      v8 = *((gameswf::Self **)self + 157);
      if ( *((uint8_t *)v8 + 2) != 0 )
      {
LABEL_19:
        v83 = nullptr;
LABEL_20:
        v9 = *((float *)v2 + 142);
        *(float *)&v91 = 0.0;
        v92 = 0.0;
        v10 = *((float *)v2 + 144);
        if ( v9 != -2.0 || v10 != -2.0 )
        {
          *(float *)&v91 = v9 + 2.0;
          v92 = v10 + 2.0;
        }
        if ( gameswf::FilterEngine::s_instance != 0
          || (v40 = *((uint32_t *)v2 + 18), (v41 = *(uint32_t *)(v40 + 8) - 1) < 0) )
        {
LABEL_23:
          if ( *((int *)v2 + 65) > 0 )
          {
            v11 = *((uint32_t *)v2 + 158);
            if ( v11 != 0 )
            {
              v12 = *((gameswf::Self **)v2 + 157);
              if ( *((uint8_t *)v12 + 2) == 0 )
              {
                v33 = (*(uint16_t *)v12)-- == 1;
                if ( v33 )
                  gameswf::free_internal(v12);
                *((uint32_t *)v2 + 157) = 0;
                *((uint32_t *)v2 + 158) = 0;
                v11 = 0;
              }
            }
            sub_10F9C70(
              v2,
              (uint32_t *)v2 + 64,
              a1,
              *(uint32_t *)(*((uint32_t *)v2 + 63) + 28),
              (float *)&v91,
              nullptr,
              0,
              0,
              0,
              v83,
              v11);
          }
          goto LABEL_27;
        }
        v80 = 1;
        v42 = 96 * v41;
        while ( 1 )
        {
          v43 = v42 + *(uint32_t *)(v40 + 4);
          v44 = *(uint32_t *)v43;
          if ( *(uint32_t *)v43 == 2 )
            break;
          if ( v44 == 0 )
          {
            v85 = (int)*(float *)(v43 + 84);
            v81 = (int)*(float *)(v43 + 88);
            v72 = (uint8_t *)v43;
            v68 = v41;
            v71 = *(float *)(v43 + 12);
            v78 = *(float *)(v43 + 8);
            v79 = cos(v78);
            a1 = sin(v78);
            v41 = v68;
            BYTE2(v90[0]) = v72[4];
            BYTE1(v90[0]) = v72[5];
            LOBYTE(v90[0]) = v72[6];
            HIBYTE(v90[0]) = v72[7];
            v52 = *((uint32_t *)v2 + 158);
            v53 = (double)a1 * v71 + (double)-v81;
            v54 = v71 * v79 + (double)-v85;
            v98[1] = v53 + v92;
            v98[0] = v54 + *(float *)&v91;
            if ( v52 != 0 && *(uint8_t *)(*((uint32_t *)v2 + 157) + 2) == 0 )
            {
              sub_7E5ED0((gameswf::Self **)v2 + 157, nullptr);
              *((uint32_t *)v2 + 158) = 0;
              v52 = 0;
              v41 = v68;
            }
            v65 = v52;
            v64 = v83;
            v51 = (uint32_t *)((char *)v2 + 256);
            v61 = 0;
            v63 = v81;
            v62 = v85;
LABEL_95:
            v67 = v41;
            sub_10F9C70(v2, v51, a1, *(uint32_t *)(*((uint32_t *)v2 + 63) + 28), v98, v90, v61, v62, v63, v64, v65);
            v41 = v67;
            goto LABEL_86;
          }
          if ( v44 == 1 )
          {
            v55 = (int)*(float *)(v43 + 84);
            v56 = (int)*(float *)(v43 + 88);
            if ( ((uint8_t)v56 | (uint8_t)v55) != 0 )
            {
              v82 = v56;
              v86 = v55;
              v57 = (float)-(uint8_t)v56 + v92;
              v58 = *((uint32_t *)v2 + 158);
              v98[1] = v57;
              v98[0] = (float)-(uint8_t)v55 + *(float *)&v91;
              if ( v58 != 0 && *(uint8_t *)(*((uint32_t *)v2 + 157) + 2) == 0 )
              {
                v69 = v41;
                sub_7E5ED0((gameswf::Self **)v2 + 157, nullptr);
                *((uint32_t *)v2 + 158) = 0;
                v58 = 0;
                v41 = v69;
              }
              v70 = v41;
              sub_10F9C70(
                v2,
                (uint32_t *)v2 + 64,
                a1,
                *(uint32_t *)(*((uint32_t *)v2 + 63) + 28),
                v98,
                nullptr,
                0,
                v86,
                v82,
                v83,
                v58);
              v80 = 0;
              v41 = v70;
            }
          }
LABEL_86:
          --v41;
          v42 -= 96;
          if ( v41 == -1 )
          {
            if ( v80 != 0 )
              goto LABEL_23;
LABEL_27:
            if ( v83 != nullptr )
              *((uint8_t *)v83 + 96) = 0;
LABEL_29:
            if ( *((uint8_t *)v2 + 509) == 0 )
              goto LABEL_30;
LABEL_55:
            if ( (gameswf::timer::getMilliseconds(v59) & 0x200) != 0 )
              gameswf::EditTextCharacter::showCursor(v2);
            goto LABEL_30;
          }
          v40 = *((uint32_t *)v2 + 18);
        }
        v45 = *(float *)(v43 + 84);
        v46 = *(float *)(v43 + 88);
        BYTE2(v90[0]) = *(uint8_t *)(v43 + 4);
        BYTE1(v90[0]) = *(uint8_t *)(v43 + 5);
        LOBYTE(v90[0]) = *(uint8_t *)(v43 + 6);
        HIBYTE(v90[0]) = *(uint8_t *)(v43 + 7);
        v47 = *(float *)(v43 + 88);
        v48 = *(float *)(v43 + 84);
        v49 = (int)(float)((float)((float)*(int *)(v43 + 16) * 0.1f) * (float)HIBYTE(v90[0]));
        if ( v49 > 254 )
        {
          HIBYTE(v90[0]) = -1;
        }
        else
        {
          HIBYTE(v90[0]) = v49;
          if ( (uint8_t)v49 == 0 )
            goto LABEL_86;
        }
        v50 = *((uint32_t *)v2 + 158);
        v98[1] = (float)-(int)v46 + v92;
        v98[0] = (float)-(int)v45 + *(float *)&v91;
        if ( v50 != 0 && *(uint8_t *)(*((uint32_t *)v2 + 157) + 2) == 0 )
        {
          v66 = v41;
          sub_7E5ED0((gameswf::Self **)v2 + 157, nullptr);
          *((uint32_t *)v2 + 158) = 0;
          v50 = 0;
          v41 = v66;
        }
        v65 = v50;
        v51 = (uint32_t *)((char *)v2 + 256);
        v64 = v83;
        v63 = 0;
        v62 = 0;
        v61 = (int)fmaxf(v47, v48);
        goto LABEL_95;
      }
      v33 = (*(uint16_t *)v8)-- == 1;
      if ( v33 )
        gameswf::free_internal(v8);
      *((uint32_t *)self + 157) = 0;
      *((uint32_t *)self + 158) = 0;
    }
    v83 = (gameswf::Self **)((char *)self + 336);
    v34 = *((uint32_t *)self + 85);
    if ( v34 < 0 )
    {
      v35 = 32 * v34;
      do
      {
        v36 = (int)(uintptr_t)(*v83) + v35;
        if ( v36 != 0 )
        {
          *(uint32_t *)v36 = 0;
          *(uint8_t *)(v36 + 8) = -1;
          *(uint8_t *)(v36 + 9) = -1;
          *(uint8_t *)(v36 + 10) = -1;
          *(uint8_t *)(v36 + 11) = -1;
          *(uint8_t *)(v36 + 12) = -1;
          *(uint8_t *)(v36 + 13) = -1;
          *(uint8_t *)(v36 + 14) = -1;
          *(uint8_t *)(v36 + 15) = -1;
        }
        v35 += 32;
        ++v34;
      }
      while ( v34 != 0 );
    }
    v37 = *((uint32_t *)self + 97);
    *((uint32_t *)self + 85) = 0;
    *((uint32_t *)self + 89) = 0;
    *((uint32_t *)self + 93) = 0;
    v84 = v37;
    if ( v37 < 0 )
    {
      v38 = 24 * v37;
      do
      {
        v39 = (uint8_t *)(*((uint32_t *)self + 96) + v38);
        if ( v39 != nullptr )
        {
          memset(v39, 0, 0x18u);
          v39[8] = -1;
          v39[9] = -1;
          v39[10] = -1;
          v39[11] = -1;
        }
        v38 += 24;
        ++v84;
      }
      while ( v84 != 0 );
      v2 = self;
    }
    *((uint32_t *)v2 + 97) = 0;
    *((uint32_t *)v2 + 101) = 0;
    sub_777050((int)(uintptr_t)(v2) + 416, 0);
    *((uint8_t *)v2 + 434) = 1;
    *((uint8_t *)v2 + 433) = 1;
    *((uint8_t *)v2 + 432) = 1;
    goto LABEL_20;
  }
LABEL_53:
  if ( gameswf::s_render_handler == nullptr )
    goto LABEL_29;
  v59 = (gameswf::timer::Self *)gameswf::s_render_handler;
  (*(void (**)(void))(*gameswf::s_render_handler + 92))();
  if ( *((uint8_t *)self + 509) != 0 )
    goto LABEL_55;
LABEL_30:
  v13 = *((uint32_t *)v2 + 19);
  if ( v13 != 0 && *(uint32_t *)(v13 + 132) != 0 )
    gameswf::Character::doDisplayCallback(v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::preloadGlyphs  (binary VA: 0x1100440)
// Original: gameswf::EditTextCharacter::preloadGlyphs
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::EditTextCharacter::preloadGlyphs(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  uint16_t *v6;
  int v7;
  int v8;
  gameswf::Self *result;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef gameswf::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v19)) > _g4_s9 ? (40u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v20)) > _g4_s10 ? (44u + sizeof(_g4_t_v20)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( (int)a1[65] > 0 )
  {
    v13 = 0;
    v1 = 0;
    v14 = 0;
    while ( 1 )
    {
      v16 = a1[64] + v13;
      if ( v1 < 0 )
      {
        v2 = 2 * v1;
        do
        {
          if ( (gameswf::Self *)((char *)v17 + v2) != nullptr )
            *(uint16_t *)((char *)v17 + v2) = 0;
          v2 += 2;
          ++v1;
        }
        while ( v1 != 0 );
      }
      v3 = 0;
      v4 = 0;
      v18 = 0;
      if ( *(int *)(v16 + 48) > 0 )
      {
        while ( 1 )
        {
          v7 = v4 + 1;
          v8 = *(uint32_t *)(v16 + 44);
          v10 = v19;
          if ( v4 + 1 <= v19 || v20 != 0 )
          {
            v5 = v17;
          }
          else
          {
            v15 = v7 + (v7 >> 1);
            v19 = v15;
            if ( v15 != 0 )
            {
              v12 = v8;
              v5 = v17 != nullptr
                 ? (gameswf::Self *)gameswf::realloc_internal(v17, 2 * v15, 2 * v10)
                 : (gameswf::Self *)gameswf::malloc_internal(2 * v15);
              v17 = v5;
              v4 = v18;
              v8 = v12;
            }
            else
            {
              if ( v17 != nullptr )
              {
                v11 = v8;
                gameswf::free_internal(v17);
                v4 = v18;
                v8 = v11;
              }
              v17 = nullptr;
              v5 = nullptr;
            }
          }
          v6 = (uint16_t *)((char *)v5 + 2 * v4);
          if ( v6 != nullptr )
            *v6 = *(uint16_t *)(v8 + v3 + 32);
          v3 += 44;
          v18 = v7;
          if ( *(uint32_t *)(v16 + 48) <= v7 )
            break;
          v4 = v7;
        }
        gameswf::preloadGlyphCodes(*(uint32_t *)(a1[4] + 12), (int)(uintptr_t)(v17), v7);
      }
      ++v14;
      v13 += 60;
      if ( a1[65] <= v14 )
        break;
      v1 = v18;
    }
  }
  result = (gameswf::Self *)sub_777050((int)(uintptr_t)(&v17), 0);
  if ( v20 == 0 )
  {
    result = v17;
    v19 = 0;
    if ( v17 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v17);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::preloadGlyphs  (binary VA: 0x11006a0)
// Original: gameswf::EditTextCharacter::preloadGlyphs
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::EditTextCharacter::preloadGlyphs(gameswf::EditTextCharacter::Self *self)
{
  int v1;
  int v2;

  if ( *(int *)(*((uint32_t *)self + 18) + 8) > 0 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      ++v2;
      v1 += 96;
      gameswf::EditTextCharacter::preloadGlyphs(self);
    }
    while ( *(uint32_t *)(*((uint32_t *)self + 18) + 8) > v2 );
  }
  return gameswf::EditTextCharacter::preloadGlyphs(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::Destroy  (binary VA: 0x1100700)
// Original: gameswf::EditTextCharacter::~EditTextCharacter
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::Destroy(gameswf::EditTextCharacter::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  gameswf::Self *v19;
  int v20;
  int v21;
  uint16_t *v22;
  int v23;
  gameswf::Self *v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  gameswf::Self *v29;
  gameswf::Self *v30;
  gameswf::Self *v31;
  gameswf::Self *v32;
  int v33;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F728);
  v1 = *((gameswf::Self **)self + 157);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  if ( *((uint32_t *)self + 156) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 156));
  if ( *((uint32_t *)self + 148) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 148));
  gameswf::ASValue::dropRefs((gameswf::EditTextCharacter::Self *)((char *)self + 544));
  sub_59CE50((int)(uintptr_t)(self) + 488);
  sub_59CE50((int)(uintptr_t)(self) + 468);
  sub_777050((int)(uintptr_t)(self) + 416, 0);
  if ( *((uint32_t *)self + 107) == 0 )
  {
    v3 = *((gameswf::Self **)self + 104);
    *((uint32_t *)self + 106) = 0;
    if ( v3 != nullptr )
      gameswf::free_internal(v3);
    *((uint32_t *)self + 104) = 0;
  }
  v4 = *((uint32_t *)self + 103);
  *((uint32_t *)self + 101) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 100);
    *((uint32_t *)self + 102) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 100) = 0;
  }
  v6 = *((uint32_t *)self + 97);
  v33 = v6;
  if ( v6 < 0 )
  {
    v7 = 24 * v6;
    do
    {
      v8 = (uint8_t *)(*((uint32_t *)self + 96) + v7);
      if ( v8 != nullptr )
      {
        memset(v8, 0, 0x18u);
        v8[8] = -1;
        v8[9] = -1;
        v8[10] = -1;
        v8[11] = -1;
      }
      v7 += 24;
      ++v33;
    }
    while ( v33 != 0 );
  }
  v9 = *((uint32_t *)self + 99);
  *((uint32_t *)self + 97) = 0;
  if ( v9 == 0 )
  {
    v10 = *((gameswf::Self **)self + 96);
    *((uint32_t *)self + 98) = 0;
    if ( v10 != nullptr )
      gameswf::free_internal(v10);
    *((uint32_t *)self + 96) = 0;
  }
  v11 = *((uint32_t *)self + 95);
  *((uint32_t *)self + 93) = 0;
  if ( v11 == 0 )
  {
    v12 = *((gameswf::Self **)self + 92);
    *((uint32_t *)self + 94) = 0;
    if ( v12 != nullptr )
      gameswf::free_internal(v12);
    *((uint32_t *)self + 92) = 0;
  }
  v13 = *((uint32_t *)self + 91);
  *((uint32_t *)self + 89) = 0;
  if ( v13 == 0 )
  {
    v14 = *((gameswf::Self **)self + 88);
    *((uint32_t *)self + 90) = 0;
    if ( v14 != nullptr )
      gameswf::free_internal(v14);
    *((uint32_t *)self + 88) = 0;
  }
  v15 = *((uint32_t *)self + 85);
  if ( v15 < 0 )
  {
    v16 = 32 * v15;
    do
    {
      v17 = *((uint32_t *)self + 84) + v16;
      if ( v17 != 0 )
      {
        *(uint32_t *)v17 = 0;
        *(uint8_t *)(v17 + 8) = -1;
        *(uint8_t *)(v17 + 9) = -1;
        *(uint8_t *)(v17 + 10) = -1;
        *(uint8_t *)(v17 + 11) = -1;
        *(uint8_t *)(v17 + 12) = -1;
        *(uint8_t *)(v17 + 13) = -1;
        *(uint8_t *)(v17 + 14) = -1;
        *(uint8_t *)(v17 + 15) = -1;
      }
      v16 += 32;
      ++v15;
    }
    while ( v15 != 0 );
  }
  v18 = *((uint32_t *)self + 87);
  *((uint32_t *)self + 85) = 0;
  if ( v18 == 0 )
  {
    v19 = *((gameswf::Self **)self + 84);
    *((uint32_t *)self + 86) = 0;
    if ( v19 != nullptr )
      gameswf::free_internal(v19);
    *((uint32_t *)self + 84) = 0;
  }
  v20 = *((uint32_t *)self + 81);
  if ( v20 < 0 )
  {
    v21 = 4 * v20;
    do
    {
      v22 = (uint16_t *)(*((uint32_t *)self + 80) + v21);
      if ( v22 != nullptr )
      {
        *v22 = 0;
        v22[1] = 0;
      }
      v21 += 4;
      ++v20;
    }
    while ( v20 != 0 );
  }
  v23 = *((uint32_t *)self + 83);
  *((uint32_t *)self + 81) = 0;
  if ( v23 == 0 )
  {
    v24 = *((gameswf::Self **)self + 80);
    *((uint32_t *)self + 82) = 0;
    if ( v24 != nullptr )
      gameswf::free_internal(v24);
    *((uint32_t *)self + 80) = 0;
  }
  v25 = *((uint32_t *)self + 77);
  if ( v25 < 0 )
  {
    v26 = 20 * v25;
    do
    {
      v27 = (uint32_t *)(*((uint32_t *)self + 76) + v26);
      if ( v27 != nullptr )
      {
        *v27 = 0;
        v27[1] = 0;
        v27[2] = 0;
        v27[3] = 0;
        v27[4] = 0;
      }
      v26 += 20;
      ++v25;
    }
    while ( v25 != 0 );
  }
  v28 = *((uint32_t *)self + 79);
  *((uint32_t *)self + 77) = 0;
  if ( v28 == 0 )
  {
    v29 = *((gameswf::Self **)self + 76);
    *((uint32_t *)self + 78) = 0;
    if ( v29 != nullptr )
      gameswf::free_internal(v29);
    *((uint32_t *)self + 76) = 0;
  }
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::EditTextCharacter::Self *)((char *)self + 288), 0);
  if ( *((uint32_t *)self + 75) == 0 )
  {
    v30 = *((gameswf::Self **)self + 72);
    *((uint32_t *)self + 74) = 0;
    if ( v30 != nullptr )
      gameswf::free_internal(v30);
    *((uint32_t *)self + 72) = 0;
  }
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::EditTextCharacter::Self *)((char *)self + 272), 0);
  if ( *((uint32_t *)self + 71) == 0 )
  {
    v31 = *((gameswf::Self **)self + 68);
    *((uint32_t *)self + 70) = 0;
    if ( v31 != nullptr )
      gameswf::free_internal(v31);
    *((uint32_t *)self + 68) = 0;
  }
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::EditTextCharacter::Self *)((char *)self + 256), 0);
  if ( *((uint32_t *)self + 67) == 0 )
  {
    v32 = *((gameswf::Self **)self + 64);
    *((uint32_t *)self + 66) = 0;
    if ( v32 != nullptr )
      gameswf::free_internal(v32);
    *((uint32_t *)self + 64) = 0;
  }
  if ( *((uint32_t *)self + 63) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 63));
  gameswf::ASDisplayObjectContainer::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::Destroy_ea1100c10  (binary VA: 0x1100c10)
// Original: gameswf::EditTextCharacter::~EditTextCharacter
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::Destroy_ea1100c10(gameswf::EditTextCharacter::Self *self)
{
  gameswf::EditTextCharacter::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::isAccepted  (binary VA: 0x1100c50)
// Original: gameswf::EditTextCharacter::isAccepted
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::isAccepted(gameswf::EditTextCharacter::Self *self, uint16_t a2)
{
  uint16_t v2; // di
  char v3;
  char *v4;
  char v5;
  gameswf::String::Self *v6;
  const char *v7;
  int v8;
  char v9;
  gameswf::String::Self *v10;
  gameswf::Self **v11;
  int v12;
  gameswf::Self **v13;
  int v14;
  int16_t v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  uint16_t *v18;
  gameswf::Self *v19;
  int v20;
  uint16_t *v21;
  int v22;
  int v23;
  uint16_t *v24;
  int v25;
  int v26;
  uint16_t *v27;
  int v29;
  int v30;
  gameswf::Self *v31;
  gameswf::Self *v32;
  gameswf::Self *v33;
  uint32_t *v34;
  gameswf::Self *v35;
  bool v36;
  int v37;
  int v38;
  gameswf::Self *v39;
  int v40;
  uint16_t *v41;
  int v42;
  int v43;
  uint16_t *v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef gameswf::Self **_g4_t_v46;
  typedef gameswf::Self **_g4_t_v47;
  typedef gameswf::Self **_g4_t_v48;
  typedef gameswf::Self **_g4_t_v49;
  typedef gameswf::Self **_g4_t_v50;
  typedef gameswf::Self **_g4_t_v51;
  typedef gameswf::Self **_g4_t_v52;
  typedef gameswf::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int16_t _g4_t_v55;
  typedef uint8_t _g4_t_v56;
  typedef char _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef gameswf::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef gameswf::Self *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef gameswf::Self *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v45)) > _g4_s0 ? (12u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v46)) > _g4_s1 ? (16u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v47)) > _g4_s2 ? (16u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v49)) > _g4_s4 ? (16u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v50)) > _g4_s5 ? (16u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v51)) > _g4_s6 ? (16u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v52)) > _g4_s7 ? (16u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v53)) > _g4_s8 ? (32u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v54)) > _g4_s9 ? (36u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v55)) > _g4_s10 ? (36u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v56)) > _g4_s11 ? (36u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v57)) > _g4_s12 ? (40u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v58)) > _g4_s13 ? (40u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v59)) > _g4_s14 ? (40u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v60)) > _g4_s15 ? (60u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v61)) > _g4_s16 ? (64u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v62)) > _g4_s17 ? (68u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v63)) > _g4_s18 ? (72u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v64)) > _g4_s19 ? (76u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v65)) > _g4_s20 ? (80u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v66)) > _g4_s21 ? (84u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v67)) > _g4_s22 ? (88u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v68)) > _g4_s23 ? (92u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v69)) > _g4_s24 ? (96u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v70)) > _g4_s25 ? (100u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v71)) > _g4_s26 ? (104u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v72)) > _g4_s27 ? (108u + sizeof(_g4_t_v72)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 100u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 108u);

  v2 = a2;
  v3 = *((uint8_t *)self + 544);
  if ( v3 == 5 )
  {
    v56 = 1;
    if ( *((uint32_t *)self + 137) == 0 )
      return v56;
  }
  else if ( v3 == 3 || v3 == 4 )
  {
    v4 = *((char **)self + 137);
LABEL_5:
    v5 = *v4;
    if ( *v4 == -1 )
    {
      v42 = *((uint32_t *)v4 + 1);
      v6 = *((gameswf::String::Self **)v4 + 3);
      v7 = (const char *)(v42 - 1);
    }
    else
    {
      v6 = (gameswf::String::Self *)(v4 + 1);
      v7 = (const char *)(v5 - 1);
    }
    v8 = gameswf::String::charCountUTF8(v6, v7);
    v61 = nullptr;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    sub_777050((int)(uintptr_t)(&v61), v8);
    v9 = *((uint8_t *)self + 544);
    if ( v9 == 3 || v9 == 4 )
    {
      v10 = *((gameswf::String::Self **)self + 137);
    }
    else
    {
      v10 = (gameswf::String::Self *)&byte_20D6378;
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        v37 = dword_20D6388;
        byte_20D6378 = 1;
        byte_20D6379 = 0;
        dword_20D6388 |= 0x7FFFFFu;
        BYTE2(dword_20D6388) &= ~0x80u;
        HIBYTE(dword_20D6388) = ((v37 | 0x7FFFFFu) >> 24) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    gameswf::String::decodeUTF8ToWchar(v10, (const gameswf::String::Self *)&v61);
    v65 = nullptr;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = nullptr;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v60 = 0;
    v54 = v62;
    v11 = &v61;
    if ( v62 <= 0 )
      goto LABEL_84;
    v12 = 0;
    v13 = &v65;
    v57 = 0;
    v14 = 0;
    do
    {
      v15 = *((uint16_t *)*v11 + v12);
      if ( v57 != 0 )
        goto LABEL_16;
      switch ( v15 )
      {
        case '-':
          v14 = 1;
          goto LABEL_22;
        case '\\':
          v57 = 1;
          goto LABEL_22;
        case '^':
          v36 = v13 == &v65;
          v13 = &v69;
          if ( !v36 )
            v13 = &v65;
LABEL_22:
          ++v12;
          break;
        default:
LABEL_16:
          *((uint16_t *)&v60 + v14) = v15;
          if ( v14 == 1 )
          {
            v32 = v13[1];
            v58 = (int)(uintptr_t)(v32) + 1;
            v53 = v13[2];
            if ( (int)(uintptr_t)((char *)v32 + 1) <= (int)(uintptr_t)(v53) || v13[3] != nullptr )
            {
              v33 = *v13;
            }
            else
            {
              v35 = (gameswf::Self *)((v58 >> 1) + v58);
              v13[2] = v35;
              if ( v35 != nullptr )
              {
                v51 = v11;
                if ( *v13 != nullptr )
                  v33 = (gameswf::Self *)gameswf::realloc_internal(*v13, 4 * (uint32_t)(uintptr_t)(v35), 4 * (uint32_t)(uintptr_t)(v53));
                else
                  v33 = (gameswf::Self *)gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v35));
                *v13 = v33;
                v32 = v13[1];
                v11 = v51;
              }
              else
              {
                if ( *v13 != nullptr )
                {
                  v49 = v11;
                  gameswf::free_internal(*v13);
                  v32 = v13[1];
                  v11 = v49;
                }
                *v13 = nullptr;
                v33 = nullptr;
              }
            }
            v34 = (uint32_t *)((char *)v33 + 4 * (uint32_t)(uintptr_t)(v32));
            if ( v34 != nullptr )
              *v34 = v60;
          }
          else
          {
            v16 = v13[1];
            v55 = *((uint16_t *)*v11 + v12);
            v58 = (int)(uintptr_t)(v16) + 1;
            v45 = v13[2];
            if ( (int)(uintptr_t)((char *)v16 + 1) <= (int)(uintptr_t)(v45) || v13[3] != nullptr )
            {
              v17 = *v13;
            }
            else
            {
              v31 = (gameswf::Self *)((v58 >> 1) + v58);
              v13[2] = v31;
              if ( v31 != nullptr )
              {
                v50 = v11;
                if ( *v13 != nullptr )
                  v17 = (gameswf::Self *)gameswf::realloc_internal(*v13, 4 * (uint32_t)(uintptr_t)(v31), 4 * (uint32_t)(uintptr_t)(v45));
                else
                  v17 = (gameswf::Self *)gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v31));
                *v13 = v17;
                v16 = v13[1];
                v11 = v50;
              }
              else
              {
                if ( *v13 != nullptr )
                {
                  v48 = v11;
                  gameswf::free_internal(*v13);
                  v16 = v13[1];
                  v11 = v48;
                }
                *v13 = nullptr;
                v17 = nullptr;
              }
            }
            v18 = (uint16_t *)((char *)v17 + 4 * (uint32_t)(uintptr_t)(v16));
            if ( v18 != nullptr )
            {
              *v18 = v55;
              v18[1] = v55;
            }
          }
          v19 = v11[1];
          v13[1] = (gameswf::Self *)v58;
          v54 = (int)(uintptr_t)(v19);
          v57 = 0;
          v14 = 0;
          goto LABEL_22;
      }
    }
    while ( v12 < v54 );
    v2 = a2;
    v59 = v66;
    if ( v66 == 0 )
    {
LABEL_84:
      v38 = v67;
      if ( v67 > 0 || v68 != 0 )
      {
        v39 = v65;
        v40 = 0;
      }
      else
      {
        v67 = 1;
        v52 = v11;
        if ( v65 != nullptr )
          v39 = (gameswf::Self *)gameswf::realloc_internal(v65, 4u, 4 * v38);
        else
          v39 = (gameswf::Self *)gameswf::malloc_internal(4u);
        v65 = v39;
        v40 = v66;
        v11 = v52;
      }
      v41 = (uint16_t *)((char *)v39 + 4 * v40);
      if ( v41 != nullptr )
      {
        *v41 = 0;
        v41[1] = -1;
      }
      v66 = 1;
      v59 = 1;
      goto LABEL_25;
    }
    v56 = 0;
    if ( v66 > 0 )
    {
LABEL_25:
      v20 = 0;
      do
      {
        v21 = (uint16_t *)((char *)v65 + 4 * v20);
        if ( v2 >= *v21 && v2 <= v21[1] )
        {
          v56 = 1;
          goto LABEL_29;
        }
        ++v20;
      }
      while ( v20 != v59 );
      v56 = 0;
    }
LABEL_29:
    v22 = v70;
    if ( v70 <= 0 )
    {
      if ( v70 < 0 )
      {
        v43 = 4 * v70;
        do
        {
          v44 = (uint16_t *)((char *)v69 + v43);
          if ( (gameswf::Self *)((char *)v69 + v43) != nullptr )
          {
            *v44 = 0;
            v44[1] = -1;
          }
          v43 += 4;
          ++v22;
        }
        while ( v22 != 0 );
      }
    }
    else
    {
      v23 = 0;
      while ( 1 )
      {
        v24 = (uint16_t *)((char *)v69 + 4 * v23);
        if ( v2 >= *v24 && v2 <= v24[1] )
          break;
        if ( ++v23 == v70 )
          goto LABEL_34;
      }
      v56 = 0;
    }
LABEL_34:
    v70 = 0;
    if ( v72 == 0 )
    {
      v71 = 0;
      if ( v69 != nullptr )
      {
        v46 = v11;
        gameswf::free_internal(v69);
        v11 = v46;
      }
      v69 = nullptr;
    }
    v25 = v66;
    if ( v66 < 0 )
    {
      v26 = 4 * v66;
      do
      {
        v27 = (uint16_t *)((char *)v65 + v26);
        if ( (gameswf::Self *)((char *)v65 + v26) != nullptr )
        {
          *v27 = 0;
          v27[1] = -1;
        }
        v26 += 4;
        ++v25;
      }
      while ( v25 != 0 );
    }
    v66 = 0;
    if ( v68 == 0 )
    {
      v67 = 0;
      if ( v65 != nullptr )
      {
        v47 = v11;
        gameswf::free_internal(v65);
        v11 = v47;
      }
      v65 = nullptr;
    }
    sub_777050((int)(uintptr_t)(v11), 0);
    if ( v64 == 0 )
    {
      v63 = 0;
      if ( v61 != nullptr )
        gameswf::free_internal(v61);
    }
    return v56;
  }
  v4 = (char *)(&byte_20D6378);
  if ( byte_20D6370 == 0 )
  {
    v29 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
    v4 = (char *)(&byte_20D6378);
    if ( v29 != 0 )
    {
      v30 = dword_20D6388;
      byte_20D6378 = 1;
      byte_20D6379 = 0;
      dword_20D6388 |= 0x7FFFFFu;
      BYTE2(dword_20D6388) &= ~0x80u;
      HIBYTE(dword_20D6388) = ((v30 | 0x7FFFFFu) >> 24) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      v4 = (char *)(&byte_20D6378);
    }
  }
  goto LABEL_5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::addPendingRecord  (binary VA: 0x1101440)
// Original: gameswf::EditTextCharacter::addPendingRecord
// ----------------------------------------------------------------------------
char * gameswf::EditTextCharacter::addPendingRecord(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  char *result;
  gameswf::RefCounted::Self *v7;
  int v8;
  char *v9;

  v2 = *(uint32_t *)(a1 + 292);
  v3 = *(uint32_t *)(a1 + 296);
  v4 = v2 + 1;
  if ( v2 + 1 <= v3 || *(uint32_t *)(a1 + 300) != 0 )
  {
    v5 = *(char **)(a1 + 288);
  }
  else
  {
    v8 = v4 + (v4 >> 1);
    *(uint32_t *)(a1 + 296) = v8;
    if ( v8 != 0 )
    {
      if ( *(uint32_t *)(a1 + 288) != 0 )
        v5 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(a1 + 288), 60 * v8, 60 * v3);
      else
        v5 = (char *)gameswf::malloc_internal(60 * v8);
      *(uint32_t *)(a1 + 288) = (uint32_t)(uintptr_t)(v5);
      v2 = *(uint32_t *)(a1 + 292);
    }
    else
    {
      if ( *(uint32_t *)(a1 + 288) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(a1 + 288));
        v2 = *(uint32_t *)(a1 + 292);
      }
      *(uint32_t *)(a1 + 288) = 0;
      v5 = nullptr;
    }
  }
  result = &v5[60 * v2];
  if ( result != nullptr )
  {
    *(uint32_t *)result = *(uint32_t *)a2;
    v7 = *(gameswf::RefCounted::Self **)(a2 + 4);
    *((uint32_t *)result + 1) = (uint32_t)(uintptr_t)(v7);
    if ( v7 != nullptr )
    {
      v9 = result;
      gameswf::RefCounted::addRef(v7);
      result = v9;
    }
    *((uint32_t *)result + 2) = *(uint32_t *)(a2 + 8);
    result[12] = *(uint8_t *)(a2 + 12);
    *((uint32_t *)result + 4) = *(uint32_t *)(a2 + 16);
    *((uint32_t *)result + 5) = *(uint32_t *)(a2 + 20);
    *((uint32_t *)result + 6) = *(uint32_t *)(a2 + 24);
    *((uint32_t *)result + 7) = *(uint32_t *)(a2 + 28);
    result[32] = *(uint8_t *)(a2 + 32);
    result[33] = *(uint8_t *)(a2 + 33);
    result[34] = *(uint8_t *)(a2 + 34);
    result[35] = *(uint8_t *)(a2 + 35);
    *((uint32_t *)result + 9) = *(uint32_t *)(a2 + 36);
    *((uint32_t *)result + 10) = *(uint32_t *)(a2 + 40);
    *((uint32_t *)result + 11) = 0;
    *((uint32_t *)result + 12) = 0;
    *((uint32_t *)result + 13) = 0;
    *((uint32_t *)result + 14) = 0;
    result = (gameswf::array_gameswf_Glyph_bb2b5c::opAssign(
                       (gameswf::array<gameswf::Glyph> *)(result + 44),
                       (const gameswf::array<gameswf::Glyph> *)(a2 + 44)), (char *)0);
  }
  *(uint32_t *)(a1 + 292) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::appendText  (binary VA: 0x1101600)
// Original: gameswf::EditTextCharacter::appendText
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::appendText(long double a1, gameswf::EditTextCharacter::Self *a2, gameswf::array<unsigned short> *a3, int a4, int a5, int *a6)
{
  gameswf::Font::Self **v6;
  int v7;
  char *v8;
  char *v9;
  unsigned int v10;
  uint32_t *v11;
  char *v12;
  float v13; // xmm0_4
  float v14; // xmm2_4
  float *v15;
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  char v19;
  gameswf::Font::Self *v20;
  float v21; // xmm1_4
  char *v22;
  bool v23;
  int v24;
  int v25;
  uint16_t GlyphIndex;
  int v27;
  int v28;
  int v29;
  gameswf::Self *v30;
  char *v31;
  int v32;
  char Glyph;
  uint16_t v34;
  float v35; // xmm0_4
  const gameswf::array<gameswf::TextGlyphRecord> *v36;
  float v37; // xmm2_4
  int v38;
  int v39;
  gameswf::Self *v40;
  char *v41;
  gameswf::RefCounted::Self *v42;
  float v43;
  char v44;
  int16_t v45;
  float v46; // xmm2_4
  float v47; // xmm1_4
  FT_FaceRec_ *v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_RecordWidth;
  typedef float _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef uint16_t _g4_t_v56;
  typedef const gameswf::array<gameswf::TextGlyphRecord> *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint16_t _g4_t_v61;
  typedef uint16_t _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef bool _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef unsigned int _g4_t_v72;
  typedef char *_g4_t_v73;
  typedef int _g4_t_FaceById;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef float _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int16_t _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef wchar_t _g4_t_v88;
  typedef gameswf::RefCounted::Self *_g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int16_t _g4_t_v95;
  typedef int16_t _g4_t_v96;
  typedef int16_t _g4_t_v97;
  typedef char _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef struct Glyph _g4_t_v101;
  typedef gameswf::RefCounted::Self *_g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int16_t _g4_t_v108;
  typedef int16_t _g4_t_v109;
  typedef int16_t _g4_t_v110;
  typedef char _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef gameswf::RefCounted::Self *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef char _g4_t_v117;
  typedef int _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef char _g4_t_v122;
  typedef char _g4_t_v123;
  typedef char _g4_t_v124;
  typedef char _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef gameswf::Self *_g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v49)) > _g4_s0 ? (8u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v50)) > _g4_s1 ? (44u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v51)) > _g4_s2 ? (44u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_RecordWidth)) > _g4_s3 ? (44u + sizeof(_g4_t_RecordWidth)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v53)) > _g4_s4 ? (44u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v54)) > _g4_s5 ? (52u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v55)) > _g4_s6 ? (52u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v56)) > _g4_s7 ? (52u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v57)) > _g4_s8 ? (52u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v58)) > _g4_s9 ? (52u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v59)) > _g4_s10 ? (52u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v60)) > _g4_s11 ? (52u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v61)) > _g4_s12 ? (56u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v62)) > _g4_s13 ? (56u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v63)) > _g4_s14 ? (56u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v64)) > _g4_s15 ? (56u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v65)) > _g4_s16 ? (72u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v66)) > _g4_s17 ? (76u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v67)) > _g4_s18 ? (80u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (87u + sizeof(_g4_t_v68)) > _g4_s19 ? (87u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v69)) > _g4_s20 ? (88u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v70)) > _g4_s21 ? (88u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v71)) > _g4_s22 ? (92u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v72)) > _g4_s23 ? (96u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v73)) > _g4_s24 ? (100u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_FaceById)) > _g4_s25 ? (104u + sizeof(_g4_t_FaceById)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v75)) > _g4_s26 ? (104u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v76)) > _g4_s27 ? (108u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v77)) > _g4_s28 ? (108u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v78)) > _g4_s29 ? (112u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v79)) > _g4_s30 ? (112u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v80)) > _g4_s31 ? (116u + sizeof(_g4_t_v80)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v81)) > _g4_s32 ? (116u + sizeof(_g4_t_v81)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v82)) > _g4_s33 ? (116u + sizeof(_g4_t_v82)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v83)) > _g4_s34 ? (116u + sizeof(_g4_t_v83)) : _g4_s34,
    _g4_s36 = (116u + sizeof(_g4_t_v84)) > _g4_s35 ? (116u + sizeof(_g4_t_v84)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v85)) > _g4_s36 ? (116u + sizeof(_g4_t_v85)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v86)) > _g4_s37 ? (128u + sizeof(_g4_t_v86)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v87)) > _g4_s38 ? (132u + sizeof(_g4_t_v87)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v88)) > _g4_s39 ? (136u + sizeof(_g4_t_v88)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v89)) > _g4_s40 ? (140u + sizeof(_g4_t_v89)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v90)) > _g4_s41 ? (144u + sizeof(_g4_t_v90)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v91)) > _g4_s42 ? (148u + sizeof(_g4_t_v91)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v92)) > _g4_s43 ? (152u + sizeof(_g4_t_v92)) : _g4_s43,
    _g4_s45 = (156u + sizeof(_g4_t_v93)) > _g4_s44 ? (156u + sizeof(_g4_t_v93)) : _g4_s44,
    _g4_s46 = (160u + sizeof(_g4_t_v94)) > _g4_s45 ? (160u + sizeof(_g4_t_v94)) : _g4_s45,
    _g4_s47 = (164u + sizeof(_g4_t_v95)) > _g4_s46 ? (164u + sizeof(_g4_t_v95)) : _g4_s46,
    _g4_s48 = (166u + sizeof(_g4_t_v96)) > _g4_s47 ? (166u + sizeof(_g4_t_v96)) : _g4_s47,
    _g4_s49 = (168u + sizeof(_g4_t_v97)) > _g4_s48 ? (168u + sizeof(_g4_t_v97)) : _g4_s48,
    _g4_s50 = (170u + sizeof(_g4_t_v98)) > _g4_s49 ? (170u + sizeof(_g4_t_v98)) : _g4_s49,
    _g4_s51 = (172u + sizeof(_g4_t_v99)) > _g4_s50 ? (172u + sizeof(_g4_t_v99)) : _g4_s50,
    _g4_s52 = (176u + sizeof(_g4_t_v100)) > _g4_s51 ? (176u + sizeof(_g4_t_v100)) : _g4_s51,
    _g4_s53 = (184u + sizeof(_g4_t_v101)) > _g4_s52 ? (184u + sizeof(_g4_t_v101)) : _g4_s52,
    _g4_s54 = (188u + sizeof(_g4_t_v102)) > _g4_s53 ? (188u + sizeof(_g4_t_v102)) : _g4_s53,
    _g4_s55 = (192u + sizeof(_g4_t_v103)) > _g4_s54 ? (192u + sizeof(_g4_t_v103)) : _g4_s54,
    _g4_s56 = (196u + sizeof(_g4_t_v104)) > _g4_s55 ? (196u + sizeof(_g4_t_v104)) : _g4_s55,
    _g4_s57 = (200u + sizeof(_g4_t_v105)) > _g4_s56 ? (200u + sizeof(_g4_t_v105)) : _g4_s56,
    _g4_s58 = (204u + sizeof(_g4_t_v106)) > _g4_s57 ? (204u + sizeof(_g4_t_v106)) : _g4_s57,
    _g4_s59 = (208u + sizeof(_g4_t_v107)) > _g4_s58 ? (208u + sizeof(_g4_t_v107)) : _g4_s58,
    _g4_s60 = (212u + sizeof(_g4_t_v108)) > _g4_s59 ? (212u + sizeof(_g4_t_v108)) : _g4_s59,
    _g4_s61 = (214u + sizeof(_g4_t_v109)) > _g4_s60 ? (214u + sizeof(_g4_t_v109)) : _g4_s60,
    _g4_s62 = (216u + sizeof(_g4_t_v110)) > _g4_s61 ? (216u + sizeof(_g4_t_v110)) : _g4_s61,
    _g4_s63 = (218u + sizeof(_g4_t_v111)) > _g4_s62 ? (218u + sizeof(_g4_t_v111)) : _g4_s62,
    _g4_s64 = (220u + sizeof(_g4_t_v112)) > _g4_s63 ? (220u + sizeof(_g4_t_v112)) : _g4_s63,
    _g4_s65 = (224u + sizeof(_g4_t_v113)) > _g4_s64 ? (224u + sizeof(_g4_t_v113)) : _g4_s64,
    _g4_s66 = (232u + sizeof(_g4_t_v114)) > _g4_s65 ? (232u + sizeof(_g4_t_v114)) : _g4_s65,
    _g4_s67 = (236u + sizeof(_g4_t_v115)) > _g4_s66 ? (236u + sizeof(_g4_t_v115)) : _g4_s66,
    _g4_s68 = (240u + sizeof(_g4_t_v116)) > _g4_s67 ? (240u + sizeof(_g4_t_v116)) : _g4_s67,
    _g4_s69 = (244u + sizeof(_g4_t_v117)) > _g4_s68 ? (244u + sizeof(_g4_t_v117)) : _g4_s68,
    _g4_s70 = (248u + sizeof(_g4_t_v118)) > _g4_s69 ? (248u + sizeof(_g4_t_v118)) : _g4_s69,
    _g4_s71 = (252u + sizeof(_g4_t_v119)) > _g4_s70 ? (252u + sizeof(_g4_t_v119)) : _g4_s70,
    _g4_s72 = (256u + sizeof(_g4_t_v120)) > _g4_s71 ? (256u + sizeof(_g4_t_v120)) : _g4_s71,
    _g4_s73 = (260u + sizeof(_g4_t_v121)) > _g4_s72 ? (260u + sizeof(_g4_t_v121)) : _g4_s72,
    _g4_s74 = (264u + sizeof(_g4_t_v122)) > _g4_s73 ? (264u + sizeof(_g4_t_v122)) : _g4_s73,
    _g4_s75 = (265u + sizeof(_g4_t_v123)) > _g4_s74 ? (265u + sizeof(_g4_t_v123)) : _g4_s74,
    _g4_s76 = (266u + sizeof(_g4_t_v124)) > _g4_s75 ? (266u + sizeof(_g4_t_v124)) : _g4_s75,
    _g4_s77 = (267u + sizeof(_g4_t_v125)) > _g4_s76 ? (267u + sizeof(_g4_t_v125)) : _g4_s76,
    _g4_s78 = (268u + sizeof(_g4_t_v126)) > _g4_s77 ? (268u + sizeof(_g4_t_v126)) : _g4_s77,
    _g4_s79 = (272u + sizeof(_g4_t_v127)) > _g4_s78 ? (272u + sizeof(_g4_t_v127)) : _g4_s78,
    _g4_s80 = (276u + sizeof(_g4_t_v128)) > _g4_s79 ? (276u + sizeof(_g4_t_v128)) : _g4_s79,
    _g4_s81 = (280u + sizeof(_g4_t_v129)) > _g4_s80 ? (280u + sizeof(_g4_t_v129)) : _g4_s80,
    _g4_s82 = (284u + sizeof(_g4_t_v130)) > _g4_s81 ? (284u + sizeof(_g4_t_v130)) : _g4_s81,
    _g4_s83 = (288u + sizeof(_g4_t_v131)) > _g4_s82 ? (288u + sizeof(_g4_t_v131)) : _g4_s82
  };
  alignas(16) uint8_t _g4_sf[_g4_s83];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_RecordWidth &RecordWidth = *reinterpret_cast<_g4_t_RecordWidth *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 87u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 100u);
  _g4_t_FaceById &FaceById = *reinterpret_cast<_g4_t_FaceById *>(_g4_sf + 104u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 104u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 108u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 116u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 116u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 116u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 116u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 128u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 132u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 136u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 140u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 144u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 148u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 152u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 156u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 160u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 164u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 166u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 168u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 170u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 172u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 176u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 184u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 188u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 192u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 196u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 200u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 204u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 208u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 212u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 214u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 216u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 218u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 220u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 224u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 232u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 236u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 240u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 244u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 248u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 252u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 256u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 260u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 264u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 265u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 266u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 267u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 268u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 272u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 276u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 280u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 284u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 288u);

  v6 = (gameswf::Font::Self **)a6;
  if ( *((uint32_t *)a3 + 1) == 0 )
    return;
  v8 = gameswf::TextShaper::DoShape(
         *(gameswf::TextShaper::Self **)(*(uint32_t *)(*((uint32_t *)a2 + 4) + 12) + 20),
         a3,
         a4,
         a5,
         a6[1],
         *(uint8_t *)(*a6 + 73),
         *(uint8_t *)(*a6 + 72));
  v78 = *(char **)v8;
  v9 = *((char **)v8 + 1);
  v10 = (int)(uintptr_t)(&v9[-*(uint32_t *)v8]) >> 5;
  v67 = nullptr;
  if ( v10 != 0 )
  {
    if ( v10 > 0x7FFFFFF )
      sub_18FFEE0(v9, v7);
    v32 = opNew(32 * v10);
    v9 = *((char **)v8 + 1);
    v67 = (uint32_t *)v32;
    v78 = *(char **)v8;
  }
  v72 = (unsigned int)(uintptr_t)(v67);
  if ( v9 != v78 )
  {
    v11 = v67;
    v12 = v78;
    do
    {
      if ( v11 != nullptr )
      {
        *v11 = *(uint32_t *)v12;
        v11[1] = *((uint32_t *)v12 + 1);
        v11[2] = *((uint32_t *)v12 + 2);
        v11[3] = *((uint32_t *)v12 + 3);
        v11[4] = *((uint32_t *)v12 + 4);
        v11[5] = *((uint32_t *)v12 + 5);
        v11[6] = *((uint32_t *)v12 + 6);
        v11[7] = *((uint32_t *)v12 + 7);
      }
      v12 += 32;
      v11 += 8;
    }
    while ( v12 != v9 );
    v72 = (unsigned int)(uintptr_t)(v67) + ((v12 - (v78 + 32)) & 0xFFFFFFE0) + 32;
  }
  v66 = (float)a6[1] * 0.0009765625;
  if ( *(uint32_t *)(*a6 + 120) != 0 )
    v66 = (float)((float)a6[1] * 0.0009765625) * 0.05f;
  v65 = 1.0 / *(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 4) + 12) + 12) + 4);
  gameswf::Font::getUnitsPerEM((gameswf::Font::Self *)*a6);
  v79 = a1;
  v76 = (float)a6[1];
  gameswf::Font::getHeight((gameswf::Font::Self *)*a6);
  v50 = a1;
  v13 = (float)(v50 / v79) * v76;
  if ( v13 == 0.0 )
    v13 = (float)a6[1];
  v14 = (float)a6[1];
  v15 = (float *)*a6;
  v114 = -1;
  v16 = v15[22];
  v115 = (gameswf::RefCounted::Self *)v15;
  v116 = -1;
  v17 = v16 - v15[21];
  v117 = 0;
  v118 = 0;
  v120 = 1.0;
  v121 = 1.0;
  v122 = 0;
  v123 = 0;
  v124 = 1;
  v125 = 1;
  v126 = 0;
  v127 = 0;
  v128 = nullptr;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v119 = (float)(v17 * v66) + v14;
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v15);
  v18 = (float)a6[1];
  v116 = a6[2];
  v122 = 1;
  v19 = *((uint8_t *)a6 + 12);
  v123 = 1;
  v117 = v19;
  v20 = (gameswf::Font::Self *)*a6;
  v120 = v18;
  v124 = 1;
  v86 = 0.0;
  v21 = v66 * *((float *)v20 + 22);
  v126 = a6[9];
  LOBYTE(v20) = *((uint8_t *)a6 + 13);
  v87 = 0.0;
  v125 = (char)(uintptr_t)(v20);
  v121 = (float)(v21 + *((float *)a2 + 153)) + v13;
  gameswf::EditTextCharacter::getCurrentZoneMargins(a2, &v86, &v87);
  *((uint32_t *)a2 + 133) = *((uint32_t *)a2 + 134);
  if ( v67 != (uint32_t *)v72 )
  {
    v22 = (char *)(v67 + 8);
    v77 = (int *)(v67 + 11);
    v71 = 0.0;
    v69 = -1;
    while ( 1 )
    {
      v24 = *((uint32_t *)v22 - 8);
      v73 = v22;
      v25 = v24;
      GlyphIndex = *((uint16_t *)v22 - 14);
      if ( *((uint8_t *)a2 + 562) != 0 )
      {
        GlyphIndex = gameswf::Font::getGlyphIndex((gameswf::Font::Self *)*a6, 0x2Au, *((FT_FaceRec_ **)v22 - 6));
        v25 = 42;
      }
      v80 = *((uint32_t *)v22 - 5);
      FaceById = *((uint32_t *)v22 - 6);
      if ( v24 == 164 )
      {
        v80 = *((uint32_t *)v22 - 5) & 1;
        v58 = v25;
        FaceById = gameswf::FaceProvider::GetFaceById(
                     *(gameswf::FaceProvider::Self **)(*(uint32_t *)(*((uint32_t *)a2 + 4) + 12) + 16),
                     v80);
        v48 = (FT_FaceRec_ *)gameswf::FaceProvider::GetFaceById(
                               *(gameswf::FaceProvider::Self **)(*(uint32_t *)(*((uint32_t *)a2 + 4) + 12) + 16),
                               v80);
        GlyphIndex = gameswf::Font::getGlyphIndex((gameswf::Font::Self *)*a6, 0xA4u, v48);
        v68 = false;
        v25 = v58;
        goto LABEL_36;
      }
      if ( v24 != 10 )
        break;
      v23 = v69 == 13;
      v69 = 10;
      if ( !v23 )
        goto LABEL_23;
LABEL_17:
      v22 += 32;
      v77 += 8;
      if ( v73 == (char *)v72 )
      {
        v6 = (gameswf::Font::Self **)a6;
        goto LABEL_88;
      }
    }
    if ( v24 != 13 )
    {
      if ( v24 == 8 )
      {
        if ( v129 > 0 )
          *((uint32_t *)v128 + 11 * v129 - 11) = 0;
        v69 = 8;
        goto LABEL_17;
      }
      v68 = v24 == 17;
      if ( v24 == 32 || v24 == 17 )
      {
        GlyphIndex = gameswf::Font::getGlyphIndex((gameswf::Font::Self *)*a6, 0x20u, *((FT_FaceRec_ **)v22 - 6));
        v25 = 32;
      }
      if ( v24 == 160 )
      {
        GlyphIndex = gameswf::Font::getGlyphIndex((gameswf::Font::Self *)*a6, 0x20u, *((FT_FaceRec_ **)v22 - 6));
        v25 = 32;
      }
LABEL_36:
      *(float *)&v88 = 512.0;
      v49 = (int)(float)a6[1];
      v89 = nullptr;
      v94 = 0;
      v95 = 0;
      v96 = -1;
      v97 = 0;
      v98 = 0;
      v99 = 0.0;
      v100 = 0.0;
      v61 = GlyphIndex;
      v54 = v25;
      Glyph = gameswf::Font::getGlyph((gameswf::Font::Self *)*a6, (struct ::Glyph *)&v88, GlyphIndex, v80, v49);
      v34 = v61;
      if ( Glyph != 0
        && (v54 == 32 || v24 == 32 || (float)(v91 - v90) != 0.0 || (float)(v93 - v92) != 0.0 || v24 == 164) )
      {
        v81 = v54;
        if ( v24 == v54 )
          goto LABEL_75;
LABEL_43:
        v35 = (float)a6[1];
      }
      else
      {
        v62 = gameswf::Font::getGlyphIndex((gameswf::Font::Self *)*a6, 0x3Fu, v80);
        gameswf::Font::getGlyph((gameswf::Font::Self *)*a6, (struct ::Glyph *)&v88, v62, v80, (int)(float)a6[1]);
        v81 = 63;
        *((uint8_t *)a2 + 564) = 1;
        v34 = v62;
        if ( v24 != 63 )
          goto LABEL_43;
LABEL_75:
        v46 = 0.015625 * *((float *)v22 - 1);
        v47 = *((float *)v22 - 2) * 0.0171875f;
        v35 = (float)a6[1];
        v100 = v46;
        v99 = v47;
        if ( v24 == 3660 && (v47 = v47 - (float)(0.14285715f * v35), v99 = v47, v69 == 3611) )
        {
          v99 = v47 - (float)(0.04f * v35);
          v100 = v46 + (float)(0.04f * v35);
        }
        else if ( v24 == 3657 || v24 == 3633 )
        {
          v99 = v47 - (float)(0.14285715f * v35);
        }
      }
      v95 = (int)v35;
      v97 = v81;
      v96 = v34;
      v94 = FaceById;
      *(float *)&v88 = v65 * *(float *)&v88;
      if ( v68 )
        *(float *)&v88 = 0.0;
      if ( v22 == (char *)v72 )
      {
        v36 = (const gameswf::array<gameswf::TextGlyphRecord> *)((gameswf::EditTextCharacter::Self *)((char *)a2 + 288));
      }
      else if ( gameswf::DoesCharIsSymbolsForTransferWithPrevNeighbor((gameswf::Self *)*(v77 - 3)) )
      {
        *(float *)&v101 = 512.0;
        v102 = nullptr;
        v107 = 0;
        v108 = 0;
        v109 = -1;
        v110 = 0;
        v111 = 0;
        v112 = 0;
        v113 = 0;
        v56 = *((uint16_t *)v77 - 6);
        v44 = gameswf::Font::getGlyph((gameswf::Font::Self *)*a6, &v101, v56, *v77, (int)(float)a6[1]);
        v45 = v56;
        if ( v44 == 0 || v24 != 32 && (float)(v104 - v103) == 0.0 && (float)(v106 - v105) == 0.0 )
        {
          gameswf::Font::getGlyph((gameswf::Font::Self *)*a6, &v101, 0x3Fu, *v77, (int)(float)a6[1]);
          *((uint8_t *)a2 + 564) = 1;
          v45 = 63;
        }
        v110 = v45;
        *(float *)&v101 = *(float *)&v101 + *((float *)a2 + 154);
        v108 = (int)(float)a6[1];
        if ( v68 )
          *(float *)&v101 = 0.0;
        v83 = *((float *)a2 + 131);
        v64 = v86;
        RecordWidth = gameswf::EditTextCharacter::getRecordWidth(a2, (gameswf::EditTextCharacter::Self *)((char *)a2 + 288));
        v36 = (const gameswf::array<gameswf::TextGlyphRecord> *)((gameswf::EditTextCharacter::Self *)((char *)a2 + 288));
        if ( (float)((float)((float)((float)((float)(v64 + v83) + *(float *)&v88) + *(float *)&v101) + v71) + RecordWidth) >= (float)((float)((float)((float)(*((float *)a2 + 143) - *((float *)a2 + 142)) - *((float *)a2 + 151)) - v87) - 4.0) )
        {
          gameswf::EditTextCharacter::addPendingRecord((int)(uintptr_t)(a2), (int)(uintptr_t)(&v114));
          gameswf::EditTextCharacter::flushPendingWord(a2, true);
          gameswf::array_gameswf_Glyph_bb2b5c::resize((gameswf::array<gameswf::Glyph> *)&v128, 0);
          v71 = 0.0;
          v36 = (const gameswf::array<gameswf::TextGlyphRecord> *)((gameswf::EditTextCharacter::Self *)((char *)a2 + 288));
        }
        if ( v102 != nullptr )
        {
          v57 = v36;
          gameswf::RefCounted::dropRef(v102);
          v36 = v57;
        }
      }
      else
      {
        v36 = (const gameswf::array<gameswf::TextGlyphRecord> *)((gameswf::EditTextCharacter::Self *)((char *)a2 + 288));
      }
      v82 = *((float *)a2 + 131);
      v63 = v86;
      a1 = gameswf::EditTextCharacter::getRecordWidth(a2, v36);
      v37 = *(float *)&v88;
      v51 = a1;
      if ( (float)((float)((float)((float)(v63 + v82) + *(float *)&v88) + v51) + v71) >= (float)((float)((float)((float)(*((float *)a2 + 143) - *((float *)a2 + 142)) - *((float *)a2 + 151)) - v87)
                                                                                               - 4.0)
        && (*((uint8_t *)a2 + 563) != 0 || *((uint8_t *)a2 + 561) != 0) )
      {
        gameswf::EditTextCharacter::addPendingRecord((int)(uintptr_t)(a2), (int)(uintptr_t)(&v114));
        gameswf::EditTextCharacter::flushPendingWord(a2, true);
        gameswf::array_gameswf_Glyph_bb2b5c::resize((gameswf::array<gameswf::Glyph> *)&v128, 0);
        v37 = *(float *)&v88;
        v71 = 0.0;
      }
      v38 = v129;
      v39 = v130;
      v70 = v129 + 1;
      v71 = v37 + v71;
      if ( v129 + 1 <= v130 || v131 != 0 )
      {
        v40 = v128;
      }
      else
      {
        v84 = v70 + (v70 >> 1);
        v130 = v84;
        if ( v84 != 0 )
        {
          if ( v128 != nullptr )
            v40 = (gameswf::Self *)gameswf::realloc_internal(v128, 44 * v84, 44 * v39);
          else
            v40 = (gameswf::Self *)gameswf::malloc_internal(44 * v84);
          v128 = v40;
          v38 = v129;
        }
        else
        {
          if ( v128 != nullptr )
          {
            gameswf::free_internal(v128);
            v38 = v129;
          }
          v128 = nullptr;
          v40 = nullptr;
        }
      }
      v41 = (char *)v40 + 44 * v38;
      if ( v41 != nullptr )
      {
        *(float *)v41 = *(float *)&v88;
        v42 = v89;
        v23 = v89 == nullptr;
        *((uint32_t *)v41 + 1) = (uint32_t)(uintptr_t)(v89);
        if ( !v23 )
        {
          v55 = v41;
          gameswf::RefCounted::addRef(v42);
          v41 = v55;
        }
        *((float *)v41 + 2) = v90;
        *((float *)v41 + 3) = v91;
        *((float *)v41 + 4) = v92;
        *((float *)v41 + 5) = v93;
        *((uint32_t *)v41 + 6) = v94;
        *((uint16_t *)v41 + 14) = v95;
        *((uint16_t *)v41 + 15) = v96;
        *((uint16_t *)v41 + 16) = v97;
        v41[34] = v98;
        v43 = v100;
        *((float *)v41 + 9) = v99;
        *((float *)v41 + 10) = v43;
      }
      v129 = v70;
      if ( (v24 == 32 || v68) && (*((uint8_t *)a2 + 563) != 0 || *((uint8_t *)a2 + 561) != 0) )
      {
        gameswf::EditTextCharacter::addPendingRecord((int)(uintptr_t)(a2), (int)(uintptr_t)(&v114));
        gameswf::EditTextCharacter::flushPendingWord(a2, false);
        gameswf::array_gameswf_Glyph_bb2b5c::resize((gameswf::array<gameswf::Glyph> *)&v128, 0);
        v71 = 0.0;
      }
      v69 = v24;
      if ( v89 != nullptr )
        gameswf::RefCounted::dropRef(v89);
      goto LABEL_17;
    }
LABEL_23:
    v27 = v129;
    v69 = v24;
    v28 = a6[1];
    v29 = v129 + 1;
    v75 = v130;
    if ( v129 + 1 <= v130 || v131 != 0 )
    {
      v30 = v128;
    }
    else
    {
      v85 = v29 + (v29 >> 1);
      v130 = v85;
      if ( v85 != 0 )
      {
        v60 = v28;
        if ( v128 != nullptr )
          v30 = (gameswf::Self *)gameswf::realloc_internal(v128, 44 * v85, 44 * v75);
        else
          v30 = (gameswf::Self *)gameswf::malloc_internal(44 * v85);
        v128 = v30;
        v28 = v60;
        v27 = v129;
      }
      else
      {
        if ( v128 != nullptr )
        {
          v59 = v28;
          gameswf::free_internal(v128);
          v27 = v129;
          v28 = v59;
        }
        v128 = nullptr;
        v30 = nullptr;
      }
    }
    v31 = (char *)v30 + 44 * v27;
    if ( v31 != nullptr )
    {
      *(uint32_t *)v31 = 0;
      *((uint32_t *)v31 + 1) = 0;
      *((uint32_t *)v31 + 2) = 0;
      *((uint32_t *)v31 + 3) = 0;
      *((uint32_t *)v31 + 4) = 0;
      *((uint32_t *)v31 + 5) = 0;
      *((uint32_t *)v31 + 6) = 0;
      *((uint16_t *)v31 + 14) = (int)(float)v28;
      *((uint16_t *)v31 + 15) = -1;
      *((uint16_t *)v31 + 16) = 10;
      v31[34] = 0;
      *((uint32_t *)v31 + 9) = 0;
      *((uint32_t *)v31 + 10) = 0;
    }
    v129 = v29;
    gameswf::EditTextCharacter::addPendingRecord((int)(uintptr_t)(a2), (int)(uintptr_t)(&v114));
    gameswf::EditTextCharacter::flushPendingWord(a2, false);
    gameswf::EditTextCharacter::flushPendingWord(a2, true);
    gameswf::array_gameswf_Glyph_bb2b5c::resize((gameswf::array<gameswf::Glyph> *)&v128, 0);
    v71 = 0.0;
    goto LABEL_17;
  }
LABEL_88:
  gameswf::EditTextCharacter::addPendingRecord((int)(uintptr_t)(a2), (int)(uintptr_t)(&v114));
  gameswf::Font::getDescentReal(*v6);
  v53 = a1;
  *((float *)a2 + 135) = fmaxf(v53 * v66, *((float *)a2 + 135));
  gameswf::array_gameswf_Glyph_bb2b5c::resize((gameswf::array<gameswf::Glyph> *)&v128, 0);
  if ( v131 == 0 )
  {
    v130 = 0;
    if ( v128 != nullptr )
      gameswf::free_internal(v128);
    v128 = nullptr;
  }
  if ( v115 != nullptr )
    gameswf::RefCounted::dropRef(v115);
  if ( v67 != nullptr )
    opDelete(v67);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::appendText  (binary VA: 0x1102730)
// Original: gameswf::EditTextCharacter::appendText
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::appendText(long double a1, gameswf::EditTextCharacter::Self *a2, gameswf::String::Self *a3, int *a4)
{
  int result;
  int v5;
  int v6;
  typedef gameswf::Self *_g4_t_v7;
  typedef int _g4_t_v8;
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

  result = *(uint8_t *)a3;
  v5 = (char)result - 1;
  if ( (uint8_t)result == 0xFF )
    v5 = *((uint32_t *)a3 + 1) - 1;
  if ( v5 != 0 )
  {
    if ( (uint8_t)result == 0xFF )
      v6 = *((uint32_t *)a3 + 1) - 1;
    else
      v6 = (char)result - 1;
    v7 = nullptr;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    sub_777050((int)(uintptr_t)(&v7), v6);
    gameswf::String::decodeUTF8ToWchar(a3, (const gameswf::String::Self *)&v7);
    gameswf::EditTextCharacter::appendText(a1, a2, (gameswf::array<unsigned short> *)&v7, 0, v8, a4);
    result = sub_777050((int)(uintptr_t)(&v7), 0);
    if ( v10 == 0 )
    {
      result = (int)(uintptr_t)(v7);
      v9 = 0;
      if ( v7 != nullptr )
        return gameswf::free_internal(v7);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::addFloatingZone  (binary VA: 0x1102ae0)
// Original: gameswf::EditTextCharacter::addFloatingZone
// ----------------------------------------------------------------------------
float * gameswf::EditTextCharacter::addFloatingZone(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  char *v6;
  int v7;
  char *v8;
  gameswf::RefCounted::Self *v9;
  int v10;
  int *v11;
  float v12; // xmm0_4
  int v13;
  int v14;
  float v15; // xmm2_4
  int v16;
  int v17;
  char *v18;
  float *result;
  gameswf::Self *v20;
  int v21;
  int v22;
  gameswf::Self *v23;
  int v24;
  char *v25;
  int v26;
  int v27;

  v4 = *(uint32_t *)(a1 + 260);
  v5 = *(uint32_t *)(a1 + 264);
  v26 = v4 + 1;
  if ( v4 + 1 <= v5 || *(uint32_t *)(a1 + 268) != 0 )
  {
    v6 = *(char **)(a1 + 256);
    v7 = *(uint32_t *)(a1 + 260);
  }
  else
  {
    v20 = *(gameswf::Self **)(a1 + 256);
    v21 = v26 + (v26 >> 1);
    *(uint32_t *)(a1 + 264) = v21;
    if ( v21 != 0 )
    {
      if ( v20 != nullptr )
        v6 = (char *)gameswf::realloc_internal(v20, 60 * v21, 60 * v5);
      else
        v6 = (char *)gameswf::malloc_internal(60 * v21);
      *(uint32_t *)(a1 + 256) = (uint32_t)(uintptr_t)(v6);
      v7 = *(uint32_t *)(a1 + 260);
    }
    else
    {
      v7 = v4;
      if ( v20 != nullptr )
      {
        gameswf::free_internal(v20);
        v7 = *(uint32_t *)(a1 + 260);
      }
      *(uint32_t *)(a1 + 256) = 0;
      v6 = nullptr;
    }
  }
  v8 = &v6[60 * v7];
  if ( v8 != nullptr )
  {
    *(uint32_t *)v8 = *(uint32_t *)a2;
    v9 = *(gameswf::RefCounted::Self **)(a2 + 4);
    *((uint32_t *)v8 + 1) = (uint32_t)(uintptr_t)(v9);
    if ( v9 != nullptr )
    {
      v25 = v8;
      gameswf::RefCounted::addRef(v9);
      v8 = v25;
    }
    *((uint32_t *)v8 + 2) = *(uint32_t *)(a2 + 8);
    v8[12] = *(uint8_t *)(a2 + 12);
    *((uint32_t *)v8 + 4) = *(uint32_t *)(a2 + 16);
    *((uint32_t *)v8 + 5) = *(uint32_t *)(a2 + 20);
    *((uint32_t *)v8 + 6) = *(uint32_t *)(a2 + 24);
    *((uint32_t *)v8 + 7) = *(uint32_t *)(a2 + 28);
    v8[32] = *(uint8_t *)(a2 + 32);
    v8[33] = *(uint8_t *)(a2 + 33);
    v8[34] = *(uint8_t *)(a2 + 34);
    v8[35] = *(uint8_t *)(a2 + 35);
    *((uint32_t *)v8 + 9) = *(uint32_t *)(a2 + 36);
    *((uint32_t *)v8 + 10) = *(uint32_t *)(a2 + 40);
    *((uint32_t *)v8 + 11) = 0;
    *((uint32_t *)v8 + 12) = 0;
    *((uint32_t *)v8 + 13) = 0;
    *((uint32_t *)v8 + 14) = 0;
    gameswf::array_gameswf_Glyph_bb2b5c::opAssign(
      (gameswf::array<gameswf::Glyph> *)(v8 + 44),
      (const gameswf::array<gameswf::Glyph> *)(a2 + 44));
  }
  *(uint32_t *)(a1 + 260) = v26;
  v10 = *(uint32_t *)(a1 + 256) + 60 * v4;
  *(float *)(v10 + 20) = *(float *)(v10 + 20) + *(float *)(a1 + 528);
  if ( *(uint32_t *)(a3 + 32) == 1 )
  {
    v12 = *(float *)(a1 + 524);
    v11 = a4;
  }
  else
  {
    v11 = a4;
    v12 = (float)((float)((float)(*(float *)(a1 + 572) - *(float *)(a1 + 568)) - *(float *)(a1 + 604)) - (float)*a4)
        - 4.0;
  }
  *(float *)(v10 + 16) = v12;
  v13 = *(uint32_t *)(a1 + 308);
  v27 = v11[1];
  v14 = *(uint32_t *)(a1 + 312);
  v15 = *(float *)(a1 + 528);
  v16 = v13 + 1;
  v17 = *a4;
  v24 = *(uint32_t *)(a3 + 32);
  if ( v13 + 1 <= v14 || *(uint32_t *)(a1 + 316) != 0 )
  {
    v18 = *(char **)(a1 + 304);
  }
  else
  {
    v22 = v16 + (v16 >> 1);
    *(uint32_t *)(a1 + 312) = v22;
    if ( v22 != 0 )
    {
      if ( *(uint32_t *)(a1 + 304) != 0 )
        v18 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(a1 + 304), 20 * v22, 20 * v14);
      else
        v18 = (char *)gameswf::malloc_internal(20 * v22);
      *(uint32_t *)(a1 + 304) = (uint32_t)(uintptr_t)(v18);
      v13 = *(uint32_t *)(a1 + 308);
    }
    else
    {
      v23 = *(gameswf::Self **)(a1 + 304);
      if ( v23 != nullptr )
      {
        gameswf::free_internal(v23);
        v13 = *(uint32_t *)(a1 + 308);
      }
      *(uint32_t *)(a1 + 304) = 0;
      v18 = nullptr;
    }
  }
  result = (float *)&v18[20 * v13];
  if ( result != nullptr )
  {
    result[1] = v12;
    *(uint32_t *)result = v24;
    result[2] = (float)v17 + v12;
    result[3] = v15;
    result[4] = (float)v27 + v15;
  }
  *(uint32_t *)(a1 + 308) = v16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::appendImage  (binary VA: 0x1102ea0)
// Original: gameswf::EditTextCharacter::appendImage
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::EditTextCharacter::appendImage(int a1, gameswf::String::Self *a2, gameswf::Self *a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  gameswf::RefCounted::Self *v11;
  int v12;
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  char v18;
  char *v19;
  int v20;
  int v21;
  char v22;
  int v23;
  char *v24;
  int v25;
  gameswf::RefCounted::Self *result;
  float v27; // xmm0_4
  char *Workdir;
  gameswf::Self *v29;
  int v30;
  gameswf::Self *v31;
  int HostInterface;
  gameswf::String::Self *v33;
  gameswf::Self *v34;
  int v35;
  int v36;
  gameswf::RefCounted::Self *Object;
  gameswf::RefCounted::Self *v38;
  int v39;
  char v40;
  gameswf::Self *v41;
  int v42;
  bool v43;
  int v44;
  gameswf::Self *v45;
  int v46;
  gameswf::Character::Self *v47;
  int v48;
  gameswf::Self *v49;
  int v50;
  int v51;
  uint16_t *v52;
  uint16_t *v53;
  int v54;
  typedef uint16_t *_g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
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
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef size_t _g4_t_v72;
  typedef char _g4_t_v73;
  typedef gameswf::Self *_g4_t_WeakProxy;
  typedef unsigned int _g4_t_v75;
  typedef gameswf::Self *_g4_t_v76;
  typedef gameswf::Self *_g4_t_v77;
  typedef gameswf::String::Self *_g4_t_v78;
  typedef float _g4_t_v79;
  typedef gameswf::Self *_g4_t_v80;
  typedef gameswf::String::Self *_g4_t_v81;
  typedef gameswf::String::Self *_g4_t_v82;
  typedef gameswf::Self *_g4_t_v83;
  typedef gameswf::Self *_g4_t_v84;
  typedef gameswf::Self *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef float _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93[2];
  typedef uint32_t _g4_t_v94[4];
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef gameswf::Self *_g4_t_v97;
  typedef int16_t _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef char _g4_t_v102;
  typedef gameswf::Self *_g4_t_v103;
  typedef int16_t _g4_t_v104;
  typedef int16_t _g4_t_v105;
  typedef int _g4_t_v106;
  typedef gameswf::RefCounted::Self *_g4_t_v107;
  typedef char _g4_t_v108;
  typedef char _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef char _g4_t_v112;
  typedef int _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef char _g4_t_v117;
  typedef char _g4_t_v118;
  typedef char _g4_t_v119;
  typedef char _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef gameswf::Self *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef unsigned int _g4_t_v127[4];
  typedef int16_t _g4_t_v128;
  typedef char _g4_t_v129;
  typedef char _g4_t_v130;
  typedef int _g4_t_v131;
  typedef uint32_t _g4_t_v132[9];
  typedef gameswf::Self *_g4_t_v133;
  typedef gameswf::String::Self *_g4_t_v134;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v56)) > _g4_s1 ? (8u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v57)) > _g4_s2 ? (8u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v58)) > _g4_s3 ? (12u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v59)) > _g4_s4 ? (12u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v60)) > _g4_s5 ? (12u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v61)) > _g4_s6 ? (12u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v62)) > _g4_s7 ? (12u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v63)) > _g4_s8 ? (12u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v64)) > _g4_s9 ? (12u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v65)) > _g4_s10 ? (12u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v66)) > _g4_s11 ? (12u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v67)) > _g4_s12 ? (12u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v68)) > _g4_s13 ? (12u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v69)) > _g4_s14 ? (12u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v70)) > _g4_s15 ? (36u + sizeof(_g4_t_v70)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v71)) > _g4_s16 ? (36u + sizeof(_g4_t_v71)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v72)) > _g4_s17 ? (36u + sizeof(_g4_t_v72)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v73)) > _g4_s18 ? (40u + sizeof(_g4_t_v73)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_WeakProxy)) > _g4_s19 ? (40u + sizeof(_g4_t_WeakProxy)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v75)) > _g4_s20 ? (40u + sizeof(_g4_t_v75)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v76)) > _g4_s21 ? (44u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v77)) > _g4_s22 ? (44u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v78)) > _g4_s23 ? (48u + sizeof(_g4_t_v78)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v79)) > _g4_s24 ? (48u + sizeof(_g4_t_v79)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v80)) > _g4_s25 ? (48u + sizeof(_g4_t_v80)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v81)) > _g4_s26 ? (48u + sizeof(_g4_t_v81)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v82)) > _g4_s27 ? (48u + sizeof(_g4_t_v82)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v83)) > _g4_s28 ? (52u + sizeof(_g4_t_v83)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v84)) > _g4_s29 ? (52u + sizeof(_g4_t_v84)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_v85)) > _g4_s30 ? (52u + sizeof(_g4_t_v85)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v86)) > _g4_s31 ? (56u + sizeof(_g4_t_v86)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v87)) > _g4_s32 ? (56u + sizeof(_g4_t_v87)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v88)) > _g4_s33 ? (60u + sizeof(_g4_t_v88)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v89)) > _g4_s34 ? (60u + sizeof(_g4_t_v89)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v90)) > _g4_s35 ? (76u + sizeof(_g4_t_v90)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v91)) > _g4_s36 ? (80u + sizeof(_g4_t_v91)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v92)) > _g4_s37 ? (84u + sizeof(_g4_t_v92)) : _g4_s37,
    _g4_s39 = (88u + sizeof(_g4_t_v93)) > _g4_s38 ? (88u + sizeof(_g4_t_v93)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v94)) > _g4_s39 ? (96u + sizeof(_g4_t_v94)) : _g4_s39,
    _g4_s41 = (112u + sizeof(_g4_t_v95)) > _g4_s40 ? (112u + sizeof(_g4_t_v95)) : _g4_s40,
    _g4_s42 = (113u + sizeof(_g4_t_v96)) > _g4_s41 ? (113u + sizeof(_g4_t_v96)) : _g4_s41,
    _g4_s43 = (124u + sizeof(_g4_t_v97)) > _g4_s42 ? (124u + sizeof(_g4_t_v97)) : _g4_s42,
    _g4_s44 = (128u + sizeof(_g4_t_v98)) > _g4_s43 ? (128u + sizeof(_g4_t_v98)) : _g4_s43,
    _g4_s45 = (130u + sizeof(_g4_t_v99)) > _g4_s44 ? (130u + sizeof(_g4_t_v99)) : _g4_s44,
    _g4_s46 = (131u + sizeof(_g4_t_v100)) > _g4_s45 ? (131u + sizeof(_g4_t_v100)) : _g4_s45,
    _g4_s47 = (144u + sizeof(_g4_t_v101)) > _g4_s46 ? (144u + sizeof(_g4_t_v101)) : _g4_s46,
    _g4_s48 = (145u + sizeof(_g4_t_v102)) > _g4_s47 ? (145u + sizeof(_g4_t_v102)) : _g4_s47,
    _g4_s49 = (156u + sizeof(_g4_t_v103)) > _g4_s48 ? (156u + sizeof(_g4_t_v103)) : _g4_s48,
    _g4_s50 = (160u + sizeof(_g4_t_v104)) > _g4_s49 ? (160u + sizeof(_g4_t_v104)) : _g4_s49,
    _g4_s51 = (162u + sizeof(_g4_t_v105)) > _g4_s50 ? (162u + sizeof(_g4_t_v105)) : _g4_s50,
    _g4_s52 = (176u + sizeof(_g4_t_v106)) > _g4_s51 ? (176u + sizeof(_g4_t_v106)) : _g4_s51,
    _g4_s53 = (180u + sizeof(_g4_t_v107)) > _g4_s52 ? (180u + sizeof(_g4_t_v107)) : _g4_s52,
    _g4_s54 = (184u + sizeof(_g4_t_v108)) > _g4_s53 ? (184u + sizeof(_g4_t_v108)) : _g4_s53,
    _g4_s55 = (185u + sizeof(_g4_t_v109)) > _g4_s54 ? (185u + sizeof(_g4_t_v109)) : _g4_s54,
    _g4_s56 = (186u + sizeof(_g4_t_v110)) > _g4_s55 ? (186u + sizeof(_g4_t_v110)) : _g4_s55,
    _g4_s57 = (187u + sizeof(_g4_t_v111)) > _g4_s56 ? (187u + sizeof(_g4_t_v111)) : _g4_s56,
    _g4_s58 = (188u + sizeof(_g4_t_v112)) > _g4_s57 ? (188u + sizeof(_g4_t_v112)) : _g4_s57,
    _g4_s59 = (192u + sizeof(_g4_t_v113)) > _g4_s58 ? (192u + sizeof(_g4_t_v113)) : _g4_s58,
    _g4_s60 = (196u + sizeof(_g4_t_v114)) > _g4_s59 ? (196u + sizeof(_g4_t_v114)) : _g4_s59,
    _g4_s61 = (200u + sizeof(_g4_t_v115)) > _g4_s60 ? (200u + sizeof(_g4_t_v115)) : _g4_s60,
    _g4_s62 = (204u + sizeof(_g4_t_v116)) > _g4_s61 ? (204u + sizeof(_g4_t_v116)) : _g4_s61,
    _g4_s63 = (208u + sizeof(_g4_t_v117)) > _g4_s62 ? (208u + sizeof(_g4_t_v117)) : _g4_s62,
    _g4_s64 = (209u + sizeof(_g4_t_v118)) > _g4_s63 ? (209u + sizeof(_g4_t_v118)) : _g4_s63,
    _g4_s65 = (210u + sizeof(_g4_t_v119)) > _g4_s64 ? (210u + sizeof(_g4_t_v119)) : _g4_s64,
    _g4_s66 = (211u + sizeof(_g4_t_v120)) > _g4_s65 ? (211u + sizeof(_g4_t_v120)) : _g4_s65,
    _g4_s67 = (212u + sizeof(_g4_t_v121)) > _g4_s66 ? (212u + sizeof(_g4_t_v121)) : _g4_s66,
    _g4_s68 = (216u + sizeof(_g4_t_v122)) > _g4_s67 ? (216u + sizeof(_g4_t_v122)) : _g4_s67,
    _g4_s69 = (220u + sizeof(_g4_t_v123)) > _g4_s68 ? (220u + sizeof(_g4_t_v123)) : _g4_s68,
    _g4_s70 = (224u + sizeof(_g4_t_v124)) > _g4_s69 ? (224u + sizeof(_g4_t_v124)) : _g4_s69,
    _g4_s71 = (228u + sizeof(_g4_t_v125)) > _g4_s70 ? (228u + sizeof(_g4_t_v125)) : _g4_s70,
    _g4_s72 = (232u + sizeof(_g4_t_v126)) > _g4_s71 ? (232u + sizeof(_g4_t_v126)) : _g4_s71,
    _g4_s73 = (240u + sizeof(_g4_t_v127)) > _g4_s72 ? (240u + sizeof(_g4_t_v127)) : _g4_s72,
    _g4_s74 = (256u + sizeof(_g4_t_v128)) > _g4_s73 ? (256u + sizeof(_g4_t_v128)) : _g4_s73,
    _g4_s75 = (258u + sizeof(_g4_t_v129)) > _g4_s74 ? (258u + sizeof(_g4_t_v129)) : _g4_s74,
    _g4_s76 = (259u + sizeof(_g4_t_v130)) > _g4_s75 ? (259u + sizeof(_g4_t_v130)) : _g4_s75,
    _g4_s77 = (276u + sizeof(_g4_t_v131)) > _g4_s76 ? (276u + sizeof(_g4_t_v131)) : _g4_s76,
    _g4_s78 = (284u + sizeof(_g4_t_v132)) > _g4_s77 ? (284u + sizeof(_g4_t_v132)) : _g4_s77,
    _g4_s79 = (320u + sizeof(_g4_t_v133)) > _g4_s78 ? (320u + sizeof(_g4_t_v133)) : _g4_s78,
    _g4_s80 = (324u + sizeof(_g4_t_v134)) > _g4_s79 ? (324u + sizeof(_g4_t_v134)) : _g4_s79
  };
  alignas(16) uint8_t _g4_sf[_g4_s80];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_WeakProxy &WeakProxy = *reinterpret_cast<_g4_t_WeakProxy *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 48u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 48u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 48u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 52u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 52u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 52u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 56u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 60u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 60u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 76u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 80u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 84u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 88u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 96u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 112u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 113u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 124u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 128u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 130u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 131u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 144u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 145u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 156u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 160u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 162u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 176u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 180u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 184u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 185u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 186u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 187u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 188u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 192u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 196u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 200u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 204u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 208u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 209u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 210u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 211u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 212u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 216u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 220u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 224u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 228u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 232u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 240u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 256u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 258u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 259u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 276u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 284u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 320u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 324u);

  v132[7] = (uint32_t)(uintptr_t)(&a1);
  v6 = a1;
  v78 = a2;
  v83 = a3;
  v88 = a4;
  v86 = a5;
  v58 = a6;
  v7 = G4_VCALL<int>(a1, 152, a3);
  v8 = v7;
  if ( v7 == 0 )
  {
    v94[2] = 0;
    v94[3] = 0;
    v94[0] = v88;
    v94[1] = v86;
    if ( *(uint8_t *)v83 == 0xFF )
      v80 = *((gameswf::Self **)v83 + 3);
    else
      v80 = (gameswf::Self *)((char *)v83 + 1);
    Workdir = gameswf::Player::getWorkdir(*(gameswf::Player::Self **)(v6 + 16));
    v29 = (gameswf::Self *)Workdir;
    v95 = 1;
    v96 = 0;
    v30 = v58;
    if ( Workdir != nullptr )
    {
      v72 = strlen(Workdir);
      gameswf::String::resize((gameswf::String::Self *)&v95, v72);
      v133 = v29;
      v31 = (gameswf::Self *)&v96;
      if ( v95 == -1 )
        v31 = v97;
      gameswf::Strcpy_s(v31, (char *)(v72 + 1), v133);
      v30 = v58;
    }
    v98 = -1;
    v61 = v30;
    v99 = 127;
    v100 |= 1u;
    gameswf::getFullURL((gameswf::Self *)&v101, (const gameswf::String::Self *)&v95, v80);
    sub_59CE50((int)(uintptr_t)(&v95));
    HostInterface = gameswf::getHostInterface();
    v33 = *(gameswf::String::Self **)(*(uint32_t *)HostInterface + 16);
    v134 = (gameswf::String::Self *)v94;
    v81 = v33;
    v34 = (gameswf::Self *)&v102;
    if ( v101 == -1 )
      v34 = v103;
    v132[8] = HostInterface;
    v133 = v34;
    ((void (*)(int *))v81)(&v90);
    v35 = v61;
    if ( v90 == 0 )
    {
      v48 = gameswf::getHostInterface();
      v82 = *(gameswf::String::Self **)(*(uint32_t *)v48 + 16);
      if ( *(uint8_t *)v83 == 0xFF )
        v49 = *((gameswf::Self **)v83 + 3);
      else
        v49 = (gameswf::Self *)((char *)v83 + 1);
      v134 = (gameswf::String::Self *)v94;
      v132[8] = v48;
      v133 = v49;
      ((void (*)(int *))v82)(&v91);
      v50 = 0;
      v92 = v91;
      if ( v91 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v91 + 4), 1u);
        v50 = v92;
      }
      v92 = v90;
      v90 = v50;
      sub_5ED480(&v92);
      sub_5ED480(&v91);
      v35 = v61;
      if ( v90 == 0 )
      {
        sub_5ED480(&v90);
        return (gameswf::RefCounted::Self *)sub_59CE50((int)(uintptr_t)(&v101));
      }
    }
    v62 = v35;
    (*(void (**)(unsigned int *, uint32_t *, int *))(*gameswf::s_render_handler + 12))(
      v127,
      (uint32_t *)(gameswf::s_render_handler),
      &v90);
    v36 = *gameswf::s_render_handler;
    v132[7] = (uint32_t)(uintptr_t)(v127);
    v11 = (gameswf::RefCounted::Self *)(*(int (**)(uint32_t *))(v36 + 8))((uint32_t *)(gameswf::s_render_handler));
    sub_59CE50((int)(uintptr_t)(v132));
    sub_5ED480(&v131);
    sub_5ED480(&v90);
    sub_59CE50((int)(uintptr_t)(&v101));
    v10 = v62;
    goto LABEL_4;
  }
  v9 = G4_VCALL<int>(v7, 8, 38);
  v10 = v58;
  if ( v9 != 0 )
  {
    v11 = (gameswf::RefCounted::Self *)G4_VCALL<int>(v8, 40);
    v10 = v58;
LABEL_4:
    if ( v11 != nullptr )
    {
      if ( v88 <= 0 )
        v88 = *((uint32_t *)v11 + 4);
      if ( v86 <= 0 )
        v86 = *((uint32_t *)v11 + 5);
      v59 = v10;
      gameswf::RefCounted::addRef(v11);
      v73 = 2;
      v12 = *(uint32_t *)(v6 + 16);
      v10 = v59;
    }
    else
    {
      v73 = 0;
      v11 = nullptr;
      v12 = *(uint32_t *)(v6 + 16);
    }
    goto LABEL_10;
  }
  v12 = *(uint32_t *)(v6 + 16);
  if ( *(uint8_t *)(v12 + 232) != 0 )
  {
    v104 = -1;
    HIBYTE(v105) = ((uint16_t)(v105 | 0x7F) >> 8) | 1;
    LOBYTE(v105) = 127;
    v128 = -1;
    v101 = 1;
    v129 = 127;
    v130 |= 1u;
    v102 = 0;
    LOWORD(v127[0]) = 1;
    gameswf::splitFullClassName(v83, (const gameswf::String::Self *)&v101, (gameswf::String::Self *)v127, v134);
    Object = (gameswf::RefCounted::Self *)gameswf::ASClassManager::createObject(
                                      (gameswf::ASClassManager::Self *)(*(uint32_t *)(v6 + 16) + 236),
                                      (const gameswf::String::Self *)&v101,
                                      (const gameswf::String::Self *)v127);
    v38 = Object;
    v39 = v58;
    if ( Object != nullptr
      && (v40 = G4_VCALL<int>(Object, 8, 2), v39 = v58, v40 != 0) )
    {
      *((uint32_t *)v38 + 65) = (uint32_t)(uintptr_t)(v38);
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v38);
      v41 = *((gameswf::Self **)v38 + 64);
      v42 = v58;
      if ( WeakProxy != v41 )
      {
        if ( v41 != nullptr )
        {
          v43 = (*(uint16_t *)v41)-- == 1;
          if ( v43 )
          {
            v132[8] = 0;
            gameswf::free_internal(v41);
            v42 = v58;
          }
        }
        *((uint32_t *)v38 + 64) = (uint32_t)(uintptr_t)(WeakProxy);
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
      *((uint32_t *)v38 + 14) = v6;
      v63 = v42;
      v44 = gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)v6);
      v45 = *((gameswf::Self **)v38 + 13);
      v55 = (uint16_t *)v44;
      v46 = v63;
      if ( (gameswf::Self *)v44 != v45 )
      {
        if ( v45 != nullptr )
        {
          v43 = (*(uint16_t *)v45)-- == 1;
          if ( v43 )
          {
            v132[8] = 0;
            gameswf::free_internal(v45);
            v46 = v63;
          }
        }
        *((uint32_t *)v38 + 13) = (uint32_t)(uintptr_t)(v55);
        if ( v55 != nullptr )
          ++*v55;
      }
      v64 = v46;
      gameswf::SpriteInstance::doInitActions(v38);
      gameswf::SpriteInstance::invokeConstructor((gameswf::Self ***)v38);
      v85 = (gameswf::Self *)(v38);
      v39 = v64;
    }
    else
    {
      v85 = nullptr;
    }
    v65 = v39;
    sub_59CE50((int)(uintptr_t)(v127));
    sub_59CE50((int)(uintptr_t)(&v101));
    v10 = v65;
    if ( v85 != nullptr )
    {
      if ( v88 <= 0 )
      {
        v57 = ((long double (*)(gameswf::Self *))*(uint32_t *)(*(uint32_t *)v85 + 292))(v85);
        v10 = v65;
        v88 = (int)v57;
      }
      if ( v86 <= 0 )
      {
        v68 = v10;
        v56 = ((long double (*)(gameswf::Self *))*(uint32_t *)(*(uint32_t *)v85 + 288))(v85);
        v10 = v68;
        v86 = (int)v56;
      }
      if ( *((char *)v78 + 18) >= 0 )
      {
        v77 = *((gameswf::Self **)v85 + 19);
        if ( v77 == nullptr )
        {
          v69 = v10;
          v132[8] = 0;
          v51 = opNew(0x94u);
          *(uint32_t *)v51 = 1065353216;
          v52 = (uint16_t *)(v51 + 32);
          *(uint32_t *)(v51 + 8) = 1065353216;
          *(uint32_t *)(v51 + 16) = 1065353216;
          *(uint32_t *)(v51 + 24) = 1065353216;
          *(uint32_t *)(v51 + 4) = 0;
          *(uint32_t *)(v51 + 12) = 0;
          *(uint32_t *)(v51 + 20) = 0;
          *(uint32_t *)(v51 + 28) = 0;
          v77 = (gameswf::Self *)v51;
          v75 = 24;
          v10 = v69;
          if ( ((v51 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v51 + 32) = 0;
            v52 = (uint16_t *)(v51 + 33);
            v75 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v52) & 2) != 0 )
          {
            *v52++ = 0;
            v75 -= 2;
          }
          memset(v52, 0, 4 * (v75 >> 2));
          v53 = &v52[2 * (v75 >> 2)];
          if ( (v75 & 2) != 0 )
            *v53++ = 0;
          if ( (v75 & 1) != 0 )
            *(uint8_t *)v53 = 0;
          *(uint8_t *)(v51 + 76) = 1;
          *(uint8_t *)(v51 + 77) = 0;
          *(uint32_t *)(v51 + 32) = 1065353216;
          *(uint32_t *)(v51 + 48) = 1065353216;
          *(uint32_t *)(v51 + 56) = 0;
          *(uint32_t *)(v51 + 60) = 0;
          *(uint32_t *)(v51 + 64) = 0;
          *(uint32_t *)(v51 + 68) = 0;
          *(uint32_t *)(v51 + 72) = 0;
          v54 = *(uint32_t *)(v51 + 92) | 0x7FFFFF;
          *((uint32_t *)v77 + 23) = v54;
          *((uint8_t *)v77 + 94) = BYTE2(v54) & 0x7F;
          *(uint16_t *)((char *)v77 + 95) = HIBYTE(v54) | 1;
          *((uint8_t *)v77 + 97) = 0;
          *((uint8_t *)v77 + 98) = 0;
          *((uint32_t *)v77 + 25) = 0;
          *((uint32_t *)v77 + 26) = 1065353216;
          *((uint32_t *)v77 + 27) = 0;
          *((uint32_t *)v77 + 28) = 1065353216;
          *((uint32_t *)v77 + 29) = 0;
          *((uint32_t *)v77 + 30) = 0;
          *((uint32_t *)v77 + 31) = 0;
          *((uint32_t *)v77 + 32) = 0;
          *((uint32_t *)v77 + 33) = 0;
          *((uint32_t *)v77 + 34) = 0;
          *((uint32_t *)v77 + 35) = 0;
          *((uint32_t *)v77 + 36) = 0;
          *((uint32_t *)v85 + 19) = (uint32_t)(uintptr_t)(v77);
        }
        v67 = v10;
        gameswf::String::opAssign((gameswf::Self **)v77 + 19, (gameswf::Self **)v78);
        *((uint32_t *)v85 + 15) = *((uint32_t *)v85 + 19) + 76;
        v47 = (gameswf::Character::Self *)(v85);
        v10 = v67;
      }
      else
      {
        *((uint32_t *)v85 + 15) = (uint32_t)(uintptr_t)(v78);
        v47 = (gameswf::Character::Self *)(v85);
      }
      v66 = v10;
      v11 = nullptr;
      gameswf::ASDisplayObjectContainer::addChild((gameswf::ASDisplayObjectContainer::Self *)v6, v47);
      v73 = 3;
      v12 = *(uint32_t *)(v6 + 16);
      v10 = v66;
      goto LABEL_10;
    }
    v12 = *(uint32_t *)(v6 + 16);
  }
  v73 = 0;
  v11 = nullptr;
LABEL_10:
  v79 = (float)v88;
  v106 = -1;
  v13 = *(float *)(v10 + 20);
  v107 = nullptr;
  *(float *)&v76 = v13;
  v113 = 0;
  v14 = *(float *)(v10 + 16);
  v115 = 1.0;
  v87 = (float)v86;
  v119 = 1;
  v15 = *(float *)(v10 + 24);
  v120 = 1;
  *(float *)&v84 = v14;
  v121 = 0;
  v16 = *(float *)(v10 + 28);
  v122 = 0;
  v123 = nullptr;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v108 = -1;
  v109 = -1;
  v110 = -1;
  v111 = -1;
  v112 = 0;
  v117 = 1;
  v118 = 1;
  v114 = (float)(v15 + v16) + v87;
  v116 = v114 + *(float *)(v6 + 612);
  v17 = 1024.0 * *(float *)(*(uint32_t *)(*(uint32_t *)(v12 + 12) + 12) + 4);
  v121 = *(uint32_t *)(v10 + 36);
  v122 = *(uint32_t *)(v10 + 40);
  v119 = 0;
  v18 = *(uint8_t *)(v10 + 13);
  v125 = 1;
  v60 = v10;
  v120 = v18;
  v115 = v17;
  v132[8] = 0;
  v123 = (gameswf::Self *)gameswf::malloc_internal(0x2Cu);
  v19 = (char *)v123 + 44 * v124;
  v20 = v60;
  if ( v19 != nullptr )
  {
    *((uint32_t *)v19 + 1) = (uint32_t)(uintptr_t)(v11);
    *(float *)v19 = (float)(v79 + *(float *)&v84) + *(float *)&v76;
    if ( v11 != nullptr )
    {
      v70 = v19;
      gameswf::RefCounted::addRef(v11);
      v20 = v60;
      v19 = v70;
    }
    *((uint32_t *)v19 + 6) = 0;
    *((float *)v19 + 3) = v79 + *(float *)&v84;
    *((uint16_t *)v19 + 14) = 1024;
    *((uint16_t *)v19 + 15) = -1;
    *((float *)v19 + 2) = *(float *)&v84;
    *((uint16_t *)v19 + 16) = -1;
    *((float *)v19 + 5) = -v16;
    v19[34] = v73;
    *((float *)v19 + 4) = (float)-v16 - v87;
    *((uint32_t *)v19 + 9) = 0;
    *((uint32_t *)v19 + 10) = 0;
  }
  v21 = *(uint32_t *)(v20 + 32);
  v124 = 1;
  if ( v21 != 0 )
  {
    v27 = (float)(*(float *)(v20 + 20) + *(float *)(v20 + 16)) + v79;
    v93[1] = (int)v114;
    v93[0] = (int)v27;
    gameswf::EditTextCharacter::addFloatingZone(v6, (int)(uintptr_t)(&v106), v20, v93);
  }
  else
  {
    gameswf::EditTextCharacter::addPendingRecord(v6, (int)(uintptr_t)(&v106));
  }
  v22 = *(uint8_t *)(v6 + 468);
  if ( v22 == -1 )
    v23 = *(uint32_t *)(v6 + 472) - 1;
  else
    v23 = v22 - 1;
  v71 = v23;
  gameswf::String::resize((gameswf::String::Self *)(v6 + 468), v23 + 1);
  LOBYTE(v24) = *(uint8_t *)(v6 + 468);
  if ( (uint8_t)(uintptr_t)(v24) == 0xFF )
  {
    v24 = *(char **)(v6 + 472);
    v89 = *(uint32_t *)(v6 + 480);
  }
  else
  {
    v89 = v6 + 469;
    v24 = (char *)(char)(uintptr_t)(v24);
  }
  gameswf::Strcpy_s((gameswf::Self *)(v89 + v71), v24, (gameswf::Self *)" ");
  *(uint32_t *)(v6 + 484) |= 0x7FFFFFu;
  gameswf::array_gameswf_Glyph_bb2b5c::resize((gameswf::array<gameswf::Glyph> *)&v123, 0);
  if ( v126 == 0 )
  {
    v25 = v125;
    v125 = 0;
    if ( v123 != nullptr )
    {
      v132[8] = 44 * v25;
      gameswf::free_internal(v123);
    }
    v123 = nullptr;
  }
  result = v107;
  if ( v107 != nullptr )
    result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v107);
  if ( v11 != nullptr )
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::formatText  (binary VA: 0x1103b80)
// Original: gameswf::EditTextCharacter::formatText
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::formatText(long double a1, gameswf::EditTextCharacter::Self *self)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint16_t *v7;
  float v8; // xmm1_4
  float v9; // xmm1_4
  gameswf::RefCounted::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float v15; // xmm1_4
  int v16;
  char *v17;
  gameswf::Self *v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef gameswf::Self *_g4_t_v31[2];
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34[2];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v26)) > _g4_s7 ? (28u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v27)) > _g4_s8 ? (32u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v28)) > _g4_s9 ? (36u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v29)) > _g4_s10 ? (40u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v30)) > _g4_s11 ? (44u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v31)) > _g4_s12 ? (48u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v32)) > _g4_s13 ? (56u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v33)) > _g4_s14 ? (60u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v34)) > _g4_s15 ? (64u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v35)) > _g4_s16 ? (72u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v36)) > _g4_s17 ? (76u + sizeof(_g4_t_v36)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);

  *((uint8_t *)self + 432) = 1;
  gameswf::Character::invalidateBitmapCache(self);
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::EditTextCharacter::Self *)((char *)self + 256), 0);
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::EditTextCharacter::Self *)((char *)self + 272), 0);
  gameswf::array_gameswf_TextGlyphRecord_2b5322::resize((gameswf::EditTextCharacter::Self *)((char *)self + 288), 0);
  v2 = *((uint32_t *)self + 77);
  if ( v2 < 0 )
  {
    v3 = 20 * v2;
    do
    {
      v4 = (uint32_t *)(*((uint32_t *)self + 76) + v3);
      if ( v4 != nullptr )
      {
        *v4 = 0;
        v4[1] = 0;
        v4[2] = 0;
        v4[3] = 0;
        v4[4] = 0;
      }
      v3 += 20;
      ++v2;
    }
    while ( v2 != 0 );
  }
  v5 = *((uint32_t *)self + 81);
  *((uint32_t *)self + 77) = 0;
  if ( v5 < 0 )
  {
    v6 = 4 * v5;
    do
    {
      v7 = (uint16_t *)(*((uint32_t *)self + 80) + v6);
      if ( v7 != nullptr )
      {
        *v7 = 0;
        v7[1] = 0;
      }
      v6 += 4;
      ++v5;
    }
    while ( v5 != 0 );
  }
  v8 = *((float *)self + 152);
  *((uint32_t *)self + 81) = 0;
  v9 = v8 + *((float *)self + 150);
  *((uint8_t *)self + 564) = 0;
  *((uint32_t *)self + 132) = 0;
  *((uint32_t *)self + 135) = 0;
  *((float *)self + 131) = fmaxf(v9, 0.0);
  gameswf::DisplayList::clear((gameswf::EditTextCharacter::Self *)((char *)self + 212));
  gameswf::EditTextCharacter::resetBoundingBox(self, 0, 0);
  v10 = *((gameswf::RefCounted::Self **)self + 148);
  if ( v10 != nullptr )
  {
    if ( *((uint8_t *)self + 508) != 0 && *((uint8_t *)self + 563) != 0 )
    {
      gameswf::String::resize((gameswf::EditTextCharacter::Self *)((char *)self + 468), 0);
      LOBYTE(v17) = *((uint8_t *)self + 468);
      if ( (uint8_t)(uintptr_t)(v17) == 0xFF )
      {
        v17 = *((char **)self + 118);
        v18 = *((gameswf::Self **)self + 120);
      }
      else
      {
        v17 = (char *)(char)(uintptr_t)(v17);
        v18 = (gameswf::Self *)((gameswf::EditTextCharacter::Self *)((char *)self + 469));
      }
      gameswf::Strcpy_s(v18, v17, (gameswf::Self *)&unk_1B15112);
      *((uint32_t *)self + 121) |= 0x7FFFFFu;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = nullptr;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = nullptr;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31[0] = nullptr;
      v31[1] = nullptr;
      v32 = 0;
      v33 = 0;
      v34[0] = nullptr;
      v34[1] = nullptr;
      v35 = 0;
      v36 = 0;
      gameswf::html_reader::parse((gameswf::html_reader::Self *)&v19, self);
      gameswf::array_gameswf_html_reader_Left_491179::resize(
        (gameswf::array<gameswf::html_reader::LeftToRightInfo> *)v34,
        0);
      if ( v36 == 0 )
      {
        v35 = 0;
        if ( v34[0] != nullptr )
          gameswf::free_internal(v34[0]);
        v34[0] = nullptr;
      }
      gameswf::array_int_id_284e7f::resize((gameswf::array<int> *)v31, 0);
      if ( v33 == 0 )
      {
        v32 = 0;
        if ( v31[0] != nullptr )
          gameswf::free_internal(v31[0]);
        v31[0] = nullptr;
      }
      gameswf::array_gameswf_TextAttributes_8af716::resize((gameswf::array<gameswf::TextAttributes> *)&v27, 0);
      if ( v30 == 0 )
      {
        v29 = 0;
        if ( v27 != nullptr )
          gameswf::free_internal(v27);
        v27 = nullptr;
      }
      sub_777050((int)(uintptr_t)(&v23), 0);
      if ( v26 == 0 )
      {
        v25 = 0;
        if ( v23 != nullptr )
          gameswf::free_internal(v23);
        v23 = nullptr;
      }
      gameswf::array_gameswf_TextAttributes_8af716::resize((gameswf::array<gameswf::TextAttributes> *)&v19, 0);
      if ( v22 == 0 )
      {
        v21 = 0;
        if ( v19 != 0 )
          gameswf::free_internal((gameswf::Self *)v19);
        v19 = 0;
      }
    }
    else
    {
      v11 = *((uint32_t *)self + 146);
      v19 = *((uint32_t *)self + 148);
      v21 = v11;
      v20 = 12;
      LOWORD(v22) = 256;
      v23 = nullptr;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = nullptr;
      v28 = 0;
      v29 = 0;
      gameswf::RefCounted::addRef(v10);
      v20 = (int)*((float *)self + 147);
      v28 = *((uint32_t *)self + 149);
      gameswf::EditTextCharacter::appendText(a1, self, (gameswf::EditTextCharacter::Self *)((char *)self + 468), &v19);
      if ( v19 != 0 )
        gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v19);
    }
    gameswf::EditTextCharacter::flushPendingWord(self, false);
    if ( *((uint32_t *)self + 149) == 3 )
    {
      *((uint32_t *)self + 149) = 0;
      gameswf::EditTextCharacter::flushPendingWord(self, true);
      *((uint32_t *)self + 149) = 3;
    }
    else
    {
      gameswf::EditTextCharacter::flushPendingWord(self, true);
    }
    if ( *((uint8_t *)self + 561) == 0 )
    {
      v12 = *((uint32_t *)self + 65);
      if ( v12 > 1 )
      {
        v13 = 0;
        v14 = 0;
        v15 = (float)((float)(*((float *)self + 145) - *((float *)self + 144))
                    - (float)((float)(*((float *)self + 116) + *((float *)self + 135)) - *((float *)self + 115)))
            * 0.5;
        do
        {
          v16 = *((uint32_t *)self + 64) + v13;
          if ( *(uint8_t *)(v16 + 33) != 0 )
          {
            *(float *)(v16 + 20) = *(float *)(v16 + 20) + v15;
            v12 = *((uint32_t *)self + 65);
          }
          ++v14;
          v13 += 60;
        }
        while ( v14 < v12 );
      }
    }
    if ( *((uint8_t *)self + 563) == 0 )
      gameswf::EditTextCharacter::updateCursorPosition(self);
    if ( *(uint8_t *)(gameswf::ASObject::getRoot((gameswf::Player::Self **)self) + 222) != 0 )
      gameswf::EditTextCharacter::preloadGlyphs(self);
    gameswf::EditTextCharacter::updateChildBounds(self);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::onTouchEvent  (binary VA: 0x1104150)
// Original: gameswf::EditTextCharacter::onTouchEvent
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::onTouchEvent(long double a1, gameswf::EditTextCharacter::Self *self, float a3, float a4)
{
  gameswf::EditTextCharacter::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  const char *v11;
  gameswf::String::Self *v12;
  int v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21[4];
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (7u + sizeof(_g4_t_v14)) > _g4_s0 ? (7u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v21)) > _g4_s7 ? (40u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v22)) > _g4_s8 ? (56u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v23)) > _g4_s9 ? (60u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v24)) > _g4_s10 ? (64u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v25)) > _g4_s11 ? (68u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 7u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);

  v4 = self;
  v5 = *((uint32_t *)self + 65);
  if ( v5 > 0 )
  {
    v16 = 0;
    v15 = 0;
    v14 = 1;
    v6 = 0;
    while ( 1 )
    {
      v17 = *((uint32_t *)self + 64) + v16;
      if ( *(int *)(v17 + 48) > 0 )
      {
        v7 = 0;
        do
        {
          gameswf::EditTextCharacter::getCharBoundaries(self, v6, (gameswf::Rect::Self *)v21);
          if ( a3 >= v21[0] && a3 <= v21[1] && a4 >= v21[2] && a4 <= v21[3] )
          {
            v14 = 0;
            *((uint32_t *)self + 128) = v6;
            v5 = *((uint32_t *)self + 65);
            goto LABEL_7;
          }
          ++v6;
          ++v7;
        }
        while ( *(uint32_t *)(v17 + 48) > v7 );
        v5 = *((uint32_t *)self + 65);
      }
      if ( v14 != 0 && a4 > v21[2] && a4 < v21[3] )
        break;
LABEL_7:
      ++v15;
      v16 += 60;
      if ( v15 >= v5 )
      {
        v4 = self;
        goto LABEL_18;
      }
    }
    v4 = self;
    if ( v5 - 1 == v15 )
    {
      v10 = *((uint8_t *)self + 468);
      if ( v10 == -1 )
      {
        v12 = *((gameswf::String::Self **)self + 120);
        v11 = (const char *)(*((uint32_t *)self + 118) - 1);
      }
      else
      {
        v11 = (const char *)(v10 - 1);
        v12 = (gameswf::String::Self *)((gameswf::EditTextCharacter::Self *)((char *)self + 469));
      }
      v13 = gameswf::String::charCountUTF8(v12, v11);
      v22 = 0.0;
      v23 = 0.0;
      v24 = 0;
      v25 = 0;
      sub_777050((int)(uintptr_t)(&v22), v13 + 1);
      gameswf::String::decodeUTF8ToWchar(
        (gameswf::EditTextCharacter::Self *)((char *)self + 468),
        (const gameswf::String::Self *)&v22);
      v18 = 0;
      sub_10F9B70((int)(uintptr_t)(&v22), &v18);
      *((uint32_t *)self + 128) = LODWORD(v23) - 1;
      gameswf::array_unsigned_short_f9a054::Destroy((gameswf::array<unsigned short> *)&v22);
    }
    else
    {
      *((uint32_t *)self + 128) = v6 - 1;
    }
  }
LABEL_18:
  if ( *((uint8_t *)v4 + 563) == 0 && *((uint8_t *)v4 + 561) == 0 && *((uint32_t *)v4 + 149) == 1 )
  {
    v8 = *((uint32_t *)v4 + 128) - 1;
    if ( v8 >= 0 )
    {
      gameswf::EditTextCharacter::getCharBoundaries(v4, v8, (gameswf::Rect::Self *)&v22);
      if ( v22 < 0.0 )
        *((float *)v4 + 134) = *((float *)v4 + 134) - (float)(v23 - v22);
    }
    if ( *((uint32_t *)v4 + 65) == 1 )
    {
      v9 = *((uint32_t *)v4 + 128) + 1;
      if ( v9 <= *(uint32_t *)(*((uint32_t *)v4 + 64) + 48) )
      {
        v19 = 0.0;
        v20 = 0.0;
        gameswf::EditTextCharacter::getCurrentZoneMargins(v4, &v19, &v20);
        gameswf::EditTextCharacter::getCharBoundaries(v4, v9, (gameswf::Rect::Self *)&v22);
        if ( v23 > (float)((float)((float)((float)(*((float *)v4 + 143) - *((float *)v4 + 142)) - *((float *)v4 + 151))
                                 - v20)
                         - 4.0) )
          *((float *)v4 + 134) = (float)(*((float *)v4 + 134) + v23) - v22;
      }
    }
  }
  gameswf::EditTextCharacter::formatText(a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::setText  (binary VA: 0x1104480)
// Original: gameswf::EditTextCharacter::setText
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::setText(long double a1, gameswf::EditTextCharacter::Self *self, const gameswf::String::Self *a3, bool a4)
{
  uint8_t *v4;
  const char *s2;
  const char *s1;
  const char *v7;
  const char *v8;
  char *v9;
  gameswf::Self *v10;

  v4 = (uint8_t *)((char *)a3 + 1);
  if ( *(uint8_t *)a3 == 0xFF )
    v4 = *((uint8_t **)a3 + 3);
  if ( *v4 == 0 )
    *((uint32_t *)self + 134) = 0;
  if ( a4 )
  {
    if ( a3 == (const gameswf::String::Self *)(uintptr_t)((gameswf::EditTextCharacter::Self *)((char *)self + 488)) )
      return;
    s2 = (char *)a3 + 1;
    if ( *(uint8_t *)a3 == 0xFF )
      s2 = *((const char **)a3 + 3);
    s1 = (char *)self + 489;
    if ( *((uint8_t *)self + 488) == 0xFF )
      s1 = *((const char **)self + 125);
    if ( strcmp(s1, s2) == 0 )
      return;
    gameswf::String::opAssign((gameswf::Self **)self + 122, (gameswf::Self **)a3);
    gameswf::String::resize((gameswf::EditTextCharacter::Self *)((char *)self + 468), 0);
    LOBYTE(v9) = *((uint8_t *)self + 468);
    if ( (uint8_t)(uintptr_t)(v9) == 0xFF )
    {
      v9 = *((char **)self + 118);
      v10 = *((gameswf::Self **)self + 120);
    }
    else
    {
      v9 = (char *)(char)(uintptr_t)(v9);
      v10 = (gameswf::Self *)((gameswf::EditTextCharacter::Self *)((char *)self + 469));
    }
    gameswf::Strcpy_s(v10, v9, (gameswf::Self *)&unk_1B15112);
    *((uint32_t *)self + 121) |= 0x7FFFFFu;
    *((uint8_t *)self + 508) = 1;
LABEL_23:
    gameswf::EditTextCharacter::formatText(a1, self);
    return;
  }
  if ( a3 != (const gameswf::String::Self *)(uintptr_t)((gameswf::EditTextCharacter::Self *)((char *)self + 468)) )
  {
    v7 = (char *)a3 + 1;
    if ( *(uint8_t *)a3 == 0xFF )
      v7 = *((const char **)a3 + 3);
    v8 = (char *)self + 469;
    if ( *((uint8_t *)self + 468) == 0xFF )
      v8 = *((const char **)self + 120);
    if ( strcmp(v8, v7) != 0 )
    {
      gameswf::String::opAssign((gameswf::Self **)self + 122, (gameswf::Self **)a3);
      gameswf::String::opAssign((gameswf::Self **)self + 117, (gameswf::Self **)a3);
      *((uint8_t *)self + 508) = 0;
      goto LABEL_23;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::toString  (binary VA: 0x1104630)
// Original: gameswf::EditTextCharacter::toString
// ----------------------------------------------------------------------------
char * gameswf::EditTextCharacter::toString(long double a1, gameswf::EditTextCharacter::Self *self)
{
  char *VarName;
  int v3;
  gameswf::Player::Self **Target;
  gameswf::Self *v5;
  char *v6;
  gameswf::Self **v7;
  char *v8;
  int StandardMemberID;
  char v10; // di
  char *result;
  gameswf::EditTextCharacter::Self *v13;
  char *v14;
  const char *v15;
  const char *v16;
  char *v17;
  gameswf::Self *v18;
  int v19;
  typedef uint8_t _g4_t_v20[4];
  typedef gameswf::EditTextCharacter::Self *_g4_t_v21;
  typedef gameswf::Self *_g4_t_v22[4];
  typedef int16_t _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26[5];
  typedef uint8_t _g4_t_v27[20];
  typedef uint8_t _g4_t_v28[32];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v23)) > _g4_s3 ? (32u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (34u + sizeof(_g4_t_v24)) > _g4_s4 ? (34u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (35u + sizeof(_g4_t_v25)) > _g4_s5 ? (35u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v26)) > _g4_s6 ? (36u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v27)) > _g4_s7 ? (56u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v28)) > _g4_s8 ? (76u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 34u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 35u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);

  VarName = (char *)gameswf::EditTextCharacter::getVarName(self);
  if ( *VarName == -1 )
    v3 = *((uint32_t *)VarName + 1) - 1;
  else
    v3 = *VarName - 1;
  if ( v3 > 0 )
  {
    Target = *((gameswf::Player::Self ***)self + 14);
    if ( Target != nullptr )
    {
      v5 = *((gameswf::Self **)self + 13);
      if ( *((uint8_t *)v5 + 2) == 0 )
      {
        if ( (*(uint16_t *)v5)-- == 1 )
          gameswf::free_internal(v5);
        *((uint32_t *)self + 13) = 0;
        *((uint32_t *)self + 14) = 0;
        Target = nullptr;
      }
    }
    LOWORD(v22[0]) = 1;
    v23 = -1;
    v24 = 127;
    v25 |= 1u;
    v6 = (char *)gameswf::EditTextCharacter::getVarName(self);
    sub_7763C0((gameswf::String::Self *)v26, v6);
    v7 = (gameswf::Self **)gameswf::EditTextCharacter::getVarName(self);
    if ( (uint8_t)gameswf::ASEnvironment::parsePath(v7, v22, (gameswf::Self **)v26) != 0 )
    {
      v8 = (char *)v22 + 1;
      if ( LOBYTE(v22[0]) == 0xFF )
        v8 = (char *)v22[3];
      Target = gameswf::ASObject::findTarget(Target, v8);
    }
    if ( Target != nullptr )
    {
      v20[0] = 0;
      v20[1] = 0;
      sub_7763C0((gameswf::String::Self *)v27, (char *)v26);
      StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)v27);
      if ( (StandardMemberID == -1
         || (*((uint8_t (**)(gameswf::Player::Self **, int, uint8_t *))*Target + 9))(
              Target,
              StandardMemberID,
              v20) == 0)
        && (*((uint8_t (**)(gameswf::Player::Self **, uint8_t *, uint8_t *))*Target + 11))(Target, v27, v20) == 0 )
      {
        goto LABEL_14;
      }
      v13 = nullptr;
      if ( v20[0] == 5 )
        v13 = v21;
      v10 = 1;
      if ( self == v13 )
LABEL_14:
        v10 = 0;
      sub_59CE50((int)(uintptr_t)(v27));
      if ( v10 != 0 )
      {
        v14 = (char *)v21;
        if ( v20[0] != 3 )
        {
          if ( v20[0] == 4 )
          {
            v14 = (char *)v21;
          }
          else
          {
            v14 = (char *)(&byte_20D6378);
            if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
              v14 = sub_10F9450();
          }
        }
        v15 = (char *)self + 469;
        if ( *((uint8_t *)self + 468) == 0xFF )
          v15 = *((const char **)self + 120);
        if ( *v14 == -1 )
          v16 = *((const char **)v14 + 3);
        else
          v16 = v14 + 1;
        if ( strcmp(v16, v15) != 0 )
        {
          v17 = (char *)v21;
          if ( v20[0] != 3 )
          {
            if ( v20[0] == 4 )
            {
              v17 = (char *)v21;
            }
            else
            {
              v17 = (char *)(&byte_20D6378);
              if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
              {
                byte_20D6378 = 1;
                v19 = dword_20D6388 | 0x7FFFFF;
                byte_20D6379 = 0;
                dword_20D6388 = v19;
                BYTE2(dword_20D6388) = BYTE2(v19) & 0x7F;
                HIBYTE(dword_20D6388) = HIBYTE(v19) | 1;
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
                __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
              }
            }
          }
          if ( *v17 == -1 )
            v18 = *((gameswf::Self **)v17 + 3);
          else
            v18 = (gameswf::Self *)(v17 + 1);
          sub_776320((gameswf::String::Self *)v28, v18);
          gameswf::EditTextCharacter::setText(a1, self, (const gameswf::String::Self *)v28, false);
          sub_59CE50((int)(uintptr_t)(v28));
        }
      }
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
    }
    sub_59CE50((int)(uintptr_t)(v26));
    sub_59CE50((int)(uintptr_t)(v22));
  }
  result = (char *)self + 469;
  if ( *((uint8_t *)self + 468) == 0xFF )
    return *((char **)self + 120);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::setTextValue  (binary VA: 0x11049e0)
// Original: gameswf::EditTextCharacter::setTextValue
// ----------------------------------------------------------------------------
char * gameswf::EditTextCharacter::setTextValue(long double a1, gameswf::Player::Self ***self, const gameswf::String::Self *a3, bool a4)
{
  gameswf::EditTextCharacter::Self *v4;
  char *result;
  int v6;
  gameswf::Self *v7;
  int v8;
  gameswf::Self *v9;
  char *v10;
  gameswf::Self *v11;
  int v12;
  unsigned int v13;
  gameswf::Self **v14;
  char *v15;
  const char *v16;
  int v17;
  gameswf::Self *v18;
  char *v19;
  gameswf::Self *v20;
  int v21;
  unsigned int v22;
  int StandardMemberID;
  int v24;
  char *v25;
  int v26;
  int v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  int v31;
  typedef int _g4_t_v33;
  typedef gameswf::Player::Self **_g4_t_Target;
  typedef char *_g4_t_VarName;
  typedef uint8_t _g4_t_v36[12];
  typedef gameswf::Self *_g4_t_v37[4];
  typedef int16_t _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef gameswf::Self *_g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char *_g4_t_v47;
  typedef gameswf::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_Target)) > _g4_s1 ? (16u + sizeof(_g4_t_Target)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_VarName)) > _g4_s2 ? (20u + sizeof(_g4_t_VarName)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v36)) > _g4_s3 ? (32u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v37)) > _g4_s4 ? (44u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v38)) > _g4_s5 ? (60u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (62u + sizeof(_g4_t_v39)) > _g4_s6 ? (62u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (63u + sizeof(_g4_t_v40)) > _g4_s7 ? (63u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v41)) > _g4_s8 ? (76u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v42)) > _g4_s9 ? (80u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v43)) > _g4_s10 ? (88u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v44)) > _g4_s11 ? (92u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v45)) > _g4_s12 ? (108u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (109u + sizeof(_g4_t_v46)) > _g4_s13 ? (109u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v47)) > _g4_s14 ? (112u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v48)) > _g4_s15 ? (120u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v49)) > _g4_s16 ? (124u + sizeof(_g4_t_v49)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_Target &Target = *reinterpret_cast<_g4_t_Target *>(_g4_sf + 16u);
  _g4_t_VarName &VarName = *reinterpret_cast<_g4_t_VarName *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 62u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 63u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 92u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 109u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);

  v4 = (gameswf::EditTextCharacter::Self *)self;
  gameswf::EditTextCharacter::setText(a1, (gameswf::EditTextCharacter::Self *)self, a3, a4);
  result = (char *)gameswf::EditTextCharacter::getVarName((gameswf::EditTextCharacter::Self *)self);
  if ( *result == -1 )
    v6 = *((uint32_t *)result + 1) - 1;
  else
    v6 = *result - 1;
  if ( v6 <= 0 )
    return result;
  Target = *(self + 14);
  if ( Target != nullptr )
  {
    v7 = (gameswf::Self *)*(self + 13);
    if ( *((uint8_t *)v7 + 2) == 0 )
    {
      if ( (*(uint16_t *)v7)-- == 1 )
        gameswf::free_internal(v7);
      *(self + 13) = nullptr;
      *(self + 14) = nullptr;
      Target = nullptr;
    }
  }
  LOWORD(v37[0]) = 1;
  v38 = -1;
  v39 = 127;
  v40 |= 1u;
  VarName = (char *)gameswf::EditTextCharacter::getVarName((gameswf::EditTextCharacter::Self *)self);
  LOWORD(v41) = 1;
  if ( *VarName == -1 )
    v8 = *((uint32_t *)VarName + 1) - 1;
  else
    v8 = *VarName - 1;
  gameswf::String::resize((gameswf::String::Self *)&v41, v8);
  v9 = (gameswf::Self *)(VarName + 1);
  if ( *VarName == -1 )
  {
    LOBYTE(v10) = (uint8_t)(uintptr_t)(v41);
    v9 = *((gameswf::Self **)VarName + 3);
    if ( (uint8_t)(uintptr_t)(v41) != 0xFF )
      goto LABEL_10;
LABEL_58:
    v10 = v42;
    v11 = v43;
    goto LABEL_11;
  }
  LOBYTE(v10) = (uint8_t)(uintptr_t)(v41);
  if ( (uint8_t)(uintptr_t)(v41) == 0xFF )
    goto LABEL_58;
LABEL_10:
  v10 = (char *)(char)(uintptr_t)(v10);
  v11 = (gameswf::Self *)((char *)&v41 + 1);
LABEL_11:
  gameswf::Strcpy_s(v11, v10, v9);
  v33 = *((uint32_t *)VarName + 4);
  if ( (uint8_t *)(v33 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *VarName == -1 )
    {
      v25 = *((char **)VarName + 3);
      v24 = *((uint32_t *)VarName + 1) - 1;
    }
    else
    {
      v24 = *VarName - 1;
      v25 = VarName + 1;
    }
    v12 = 5381;
    if ( v24 > 0 )
    {
      do
      {
        --v24;
        v26 = 33 * v12;
        v27 = (uint8_t)v25[v24] + 32;
        if ( (uint8_t)(v25[v24] - 65) > 0x19u )
          v27 = (uint8_t)v25[v24];
        v12 = v26 ^ v27;
      }
      while ( v24 != 0 );
      v4 = (gameswf::EditTextCharacter::Self *)self;
      v12 = v12 << 9 >> 9;
    }
    *((uint32_t *)VarName + 4) = v12 & 0x7FFFFF | v33 & 0xFF800000;
  }
  else
  {
    v12 = v33 << 9 >> 9;
  }
  v13 = v12 & 0x7FFFFF | v44 & 0xFF800000;
  LOWORD(v44) = v12;
  BYTE2(v44) = BYTE2(v13) & 0x7F;
  HIBYTE(v44) = HIBYTE(v13) | 1;
  v14 = (gameswf::Self **)gameswf::EditTextCharacter::getVarName(v4);
  if ( (uint8_t)gameswf::ASEnvironment::parsePath(v14, v37, &v41) != 0 )
  {
    v15 = (char *)v37 + 1;
    if ( LOBYTE(v37[0]) == 0xFF )
      v15 = (char *)v37[3];
    Target = gameswf::ASObject::findTarget(Target, v15);
  }
  if ( Target != nullptr )
  {
    v16 = (char *)a3 + 1;
    if ( *(uint8_t *)a3 == 0xFF )
      v16 = *((const char **)a3 + 3);
    v36[0] = 0;
    v36[1] = 0;
    gameswf::ASValue::setString((gameswf::ASValue::Self *)v36, v16);
    v45 = 1;
    v46 = 0;
    if ( (uint8_t)(uintptr_t)(v41) == 0xFF )
      v17 = (int)(uintptr_t)(v42 - 1);
    else
      v17 = (char)(uintptr_t)(v41) - 1;
    gameswf::String::resize((gameswf::String::Self *)&v45, v17);
    v18 = (gameswf::Self *)((char *)&v41 + 1);
    if ( (uint8_t)(uintptr_t)(v41) == 0xFF )
      v18 = v43;
    if ( v45 == -1 )
    {
      v19 = v47;
      v20 = v48;
    }
    else
    {
      v19 = (char *)v45;
      v20 = (gameswf::Self *)&v46;
    }
    gameswf::Strcpy_s(v20, v19, v18);
    if ( (uint8_t *)(v44 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( (uint8_t)(uintptr_t)(v41) == 0xFF )
      {
        v28 = v43;
        v29 = (int)(uintptr_t)(v42 - 1);
      }
      else
      {
        v28 = (gameswf::Self *)((char *)&v41 + 1);
        v29 = (char)(uintptr_t)(v41) - 1;
      }
      v21 = 5381;
      if ( v29 > 0 )
      {
        do
        {
          --v29;
          v30 = 33 * v21;
          v31 = *((uint8_t *)v28 + v29) + 32;
          if ( (uint8_t)(*((uint8_t *)v28 + v29) - 65) > 0x19u )
            v31 = *((uint8_t *)v28 + v29);
          v21 = v30 ^ v31;
        }
        while ( v29 != 0 );
        v21 = v21 << 9 >> 9;
      }
      v44 = v21 & 0x7FFFFF | v44 & 0xFF800000;
    }
    else
    {
      v21 = (int)(v44 << 9) >> 9;
    }
    v22 = v21 & 0x7FFFFF | v49 & 0xFF800000;
    LOWORD(v49) = v21;
    BYTE2(v49) = BYTE2(v22) & 0x7F;
    HIBYTE(v49) = HIBYTE(v22) | 1;
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v45);
    if ( StandardMemberID == -1
      || (*((uint8_t (**)(gameswf::Player::Self **, int, uint8_t *))*Target + 8))(Target, StandardMemberID, v36) == 0 )
    {
      (*((void (**)(gameswf::Player::Self **, char *, uint8_t *))*Target + 12))(Target, &v45, v36);
    }
    sub_59CE50((int)(uintptr_t)(&v45));
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v36);
  }
  sub_59CE50((int)(uintptr_t)(&v41));
  return (char *)sub_59CE50((int)(uintptr_t)(v37));
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::Construct  (binary VA: 0x1104ee0)
// Original: gameswf::EditTextCharacter::EditTextCharacter
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::EditTextCharacter::Construct(long double a1, gameswf::EditTextCharacter::Self *self, gameswf::Player::Self *a3, gameswf::Character::Self *a4, gameswf::EditTextCharacterDef::Self *a5, char *a6)
{
  int v6;
  int v7;
  char v8; // ecx^2
  int v9;
  gameswf::RefCounted::Self *v10;
  int v11;
  const char *v12;
  gameswf::Self *v13;
  long double v14; // fst7
  char *v15;
  long double v16; // fst7
  gameswf::Self *v17;
  char *VarName;
  int v19;
  gameswf::EditTextCharacter::Self *result;
  gameswf::Self *v21;
  gameswf::Self *v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef gameswf::Self *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef gameswf::Self *_g4_t_v29;
  typedef int16_t _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef gameswf::Self *_g4_t_v35;
  typedef int16_t _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef int16_t _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef gameswf::Self *_g4_t_v47;
  typedef int16_t _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v28)) > _g4_s5 ? (17u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v30)) > _g4_s7 ? (32u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (34u + sizeof(_g4_t_v31)) > _g4_s8 ? (34u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v32)) > _g4_s9 ? (35u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v33)) > _g4_s10 ? (48u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (49u + sizeof(_g4_t_v34)) > _g4_s11 ? (49u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v35)) > _g4_s12 ? (60u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v36)) > _g4_s13 ? (64u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (66u + sizeof(_g4_t_v37)) > _g4_s14 ? (66u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (67u + sizeof(_g4_t_v38)) > _g4_s15 ? (67u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v39)) > _g4_s16 ? (80u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (81u + sizeof(_g4_t_v40)) > _g4_s17 ? (81u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v41)) > _g4_s18 ? (92u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v42)) > _g4_s19 ? (96u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (98u + sizeof(_g4_t_v43)) > _g4_s20 ? (98u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (99u + sizeof(_g4_t_v44)) > _g4_s21 ? (99u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v45)) > _g4_s22 ? (112u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (113u + sizeof(_g4_t_v46)) > _g4_s23 ? (113u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v47)) > _g4_s24 ? (124u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v48)) > _g4_s25 ? (128u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (130u + sizeof(_g4_t_v49)) > _g4_s26 ? (130u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (131u + sizeof(_g4_t_v50)) > _g4_s27 ? (131u + sizeof(_g4_t_v50)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 17u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 34u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 35u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 49u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 66u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 67u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 81u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 98u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 99u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 113u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 130u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 131u);

  gameswf::Character::Construct(self, a3, a4, (int)(uintptr_t)(a6), 37);
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F728);
  v6 = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint8_t *)self + 248) = 1;
  *((uint8_t *)self + 249) = 0;
  *((uint8_t *)self + 250) = 0;
  *((uint32_t *)self + 63) = (uint32_t)(uintptr_t)(a5);
  if ( a5 != nullptr )
  {
    gameswf::RefCounted::addRef(a5);
    v6 = *((uint32_t *)self + 63);
  }
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 70) = 0;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 76) = 0;
  *((uint32_t *)self + 77) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 80) = 0;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 82) = 0;
  *((uint32_t *)self + 83) = 0;
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 88) = 0;
  *((uint32_t *)self + 89) = 0;
  *((uint32_t *)self + 90) = 0;
  *((uint32_t *)self + 91) = 0;
  *((uint32_t *)self + 92) = 0;
  *((uint32_t *)self + 93) = 0;
  *((uint32_t *)self + 94) = 0;
  *((uint32_t *)self + 95) = 0;
  *((uint32_t *)self + 96) = 0;
  *((uint32_t *)self + 97) = 0;
  v7 = *((uint32_t *)self + 121);
  *((uint32_t *)self + 98) = 0;
  v7 |= 0x7FFFFFu;
  *((uint32_t *)self + 99) = 0;
  *((uint32_t *)self + 121) = v7;
  v8 = BYTE2(v7);
  *((uint32_t *)self + 100) = 0;
  *((uint32_t *)self + 101) = 0;
  *((uint8_t *)self + 487) = HIBYTE(v7) | 1;
  v9 = *((uint32_t *)self + 126) | 0x7FFFFF;
  *((uint8_t *)self + 486) = v8 & 0x7F;
  *((uint32_t *)self + 126) = v9;
  *((uint32_t *)self + 102) = 0;
  *((uint32_t *)self + 103) = 0;
  *((uint8_t *)self + 507) = HIBYTE(v9) | 1;
  *((uint32_t *)self + 104) = 0;
  *((uint32_t *)self + 105) = 0;
  *((uint32_t *)self + 106) = 0;
  *((uint32_t *)self + 107) = 0;
  *((uint8_t *)self + 432) = 1;
  *((uint8_t *)self + 433) = 1;
  *((uint8_t *)self + 434) = 1;
  *((uint32_t *)self + 109) = -1;
  *((uint32_t *)self + 110) = -1;
  *((uint32_t *)self + 111) = -1;
  *((uint32_t *)self + 112) = -1;
  *((uint8_t *)self + 468) = 1;
  *((uint8_t *)self + 469) = 0;
  *((uint8_t *)self + 488) = 1;
  *((uint8_t *)self + 489) = 0;
  *((uint8_t *)self + 506) = BYTE2(v9) & 0x7F;
  *((uint8_t *)self + 508) = 0;
  *((uint8_t *)self + 509) = 0;
  *((uint32_t *)self + 128) = 0;
  *((uint32_t *)self + 129) = 0;
  *((uint32_t *)self + 130) = 0;
  *((uint32_t *)self + 131) = 0;
  *((uint32_t *)self + 132) = 0;
  *((uint32_t *)self + 133) = 0;
  *((uint32_t *)self + 134) = 0;
  *((uint32_t *)self + 135) = 0;
  *((uint8_t *)self + 544) = 0;
  *((uint8_t *)self + 545) = 0;
  *((uint32_t *)self + 139) = *(uint32_t *)(v6 + 96);
  *((uint8_t *)self + 560) = *(uint8_t *)(v6 + 68);
  *((uint8_t *)self + 561) = *(uint8_t *)(v6 + 69);
  *((uint8_t *)self + 562) = *(uint8_t *)(v6 + 70);
  LOBYTE(v9) = *(uint8_t *)(v6 + 71);
  *((uint8_t *)self + 564) = 0;
  *((uint8_t *)self + 563) = v9;
  *((uint32_t *)self + 142) = *(uint32_t *)(v6 + 32);
  *((uint32_t *)self + 143) = *(uint32_t *)(v6 + 36);
  *((uint32_t *)self + 144) = *(uint32_t *)(v6 + 40);
  *((uint32_t *)self + 145) = *(uint32_t *)(v6 + 44);
  *((uint32_t *)self + 146) = *(uint32_t *)(v6 + 92);
  *((uint32_t *)self + 147) = *(uint32_t *)(v6 + 88);
  v10 = *(gameswf::RefCounted::Self **)(v6 + 84);
  *((uint32_t *)self + 148) = (uint32_t)(uintptr_t)(v10);
  if ( v10 != nullptr )
  {
    gameswf::RefCounted::addRef(v10);
    v6 = *((uint32_t *)self + 63);
  }
  *((uint32_t *)self + 149) = *(uint32_t *)(v6 + 100);
  *((uint32_t *)self + 150) = *(uint32_t *)(v6 + 104);
  *((uint32_t *)self + 151) = *(uint32_t *)(v6 + 108);
  *((uint32_t *)self + 152) = *(uint32_t *)(v6 + 112);
  *((uint32_t *)self + 153) = *(uint32_t *)(v6 + 116);
  *((uint32_t *)self + 154) = 0;
  *((uint8_t *)self + 620) = -1;
  *((uint8_t *)self + 621) = -1;
  *((uint8_t *)self + 622) = -1;
  *((uint8_t *)self + 623) = -1;
  *((uint32_t *)self + 156) = 0;
  *((uint32_t *)self + 157) = 0;
  *((uint32_t *)self + 158) = 0;
  gameswf::ASValue::setObject((gameswf::EditTextCharacter::Self *)((char *)self + 544), nullptr);
  v11 = *((uint32_t *)self + 63);
  *((uint8_t *)self + 620) = -1;
  *((uint8_t *)self + 621) = -1;
  *((uint8_t *)self + 622) = -1;
  *((uint8_t *)self + 623) = -1;
  if ( *(uint8_t *)(v11 + 120) == 0xFF )
    v12 = *(const char **)(v11 + 132);
  else
    v12 = (const char *)(v11 + 121);
  v27 = 1;
  v28 = 0;
  if ( v12 != nullptr )
  {
    v23 = (gameswf::Self *)v12;
    v25 = strlen(v12);
    gameswf::String::resize((gameswf::String::Self *)&v27, v25);
    v13 = (gameswf::Self *)&v28;
    if ( v27 == -1 )
      v13 = v29;
    gameswf::Strcpy_s(v13, (char *)(v25 + 1), v23);
  }
  v30 = -1;
  v31 = 127;
  v32 |= 1u;
  gameswf::EditTextCharacter::setText(a1, self, (const gameswf::String::Self *)&v27, false);
  sub_59CE50((int)(uintptr_t)(&v27));
  v15 = gameswf::EditTextCharacter::toString(v14, self);
  v33 = 1;
  v34 = 0;
  if ( v15 != nullptr )
  {
    v24 = (gameswf::Self *)v15;
    v26 = strlen(v15);
    gameswf::String::resize((gameswf::String::Self *)&v33, v26);
    v17 = (gameswf::Self *)&v34;
    if ( v33 == -1 )
      v17 = v35;
    gameswf::Strcpy_s(v17, (char *)(v26 + 1), v24);
  }
  v36 = -1;
  v37 = 127;
  v38 |= 1u;
  gameswf::EditTextCharacter::setTextValue(v16, (gameswf::Player::Self ***)self, (const gameswf::String::Self *)&v33, false);
  sub_59CE50((int)(uintptr_t)(&v33));
  VarName = (char *)gameswf::EditTextCharacter::getVarName(self);
  if ( *VarName == -1 )
    v19 = *((uint32_t *)VarName + 1) - 1;
  else
    v19 = *VarName - 1;
  result = *((gameswf::EditTextCharacter::Self **)self + 4);
  *((uint8_t *)self + 150) = v19 > 0;
  if ( *((uint8_t *)result + 232) != 0 )
  {
    v45 = 1;
    v46 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v45, 9);
    v21 = (gameswf::Self *)&v46;
    if ( v45 == -1 )
      v21 = v47;
    gameswf::Strcpy_s(v21, &byte_9[1], (gameswf::Self *)"TextField");
    v39 = 1;
    v40 = 0;
    v48 = -1;
    v49 = 127;
    v50 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v39, 10);
    v22 = (gameswf::Self *)&v40;
    if ( v39 == -1 )
      v22 = v41;
    gameswf::Strcpy_s(v22, &byte_9[2], (gameswf::Self *)"flash.text");
    v42 = -1;
    v43 = 127;
    v44 |= 1u;
    *((uint32_t *)self + 6) = gameswf::ASClassManager::findClass(
                              (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                              (const gameswf::String::Self *)&v39,
                              (const gameswf::String::Self *)&v45,
                              true);
    sub_59CE50((int)(uintptr_t)(&v39));
    return (gameswf::EditTextCharacter::Self *)sub_59CE50((int)(uintptr_t)(&v45));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::setStandardMember  (binary VA: 0x1105670)
// Original: gameswf::EditTextCharacter::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::setStandardMember(long double a1, __m128 a2, gameswf::Character::Self *a3, int a4, char **a5)
{
  int result;
  float v6; // xmm0_4
  float v7; // xmm0_4
  const gameswf::String::Self *v8;
  const gameswf::String::Self *v9;
  int v10;
  int v11;
  char *v12;
  gameswf::String::Self *v13;
  int v14;
  gameswf::RefCounted::Self *v15;
  gameswf::RefCounted::Self *v16;
  float v17; // xmm0_4
  char *v18;
  gameswf::String::Self *v19;
  int v20;
  int v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v23)) > _g4_s1 ? (0u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v24)) > _g4_s2 ? (28u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (29u + sizeof(_g4_t_v25)) > _g4_s3 ? (29u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v26)) > _g4_s4 ? (44u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (46u + sizeof(_g4_t_v27)) > _g4_s5 ? (46u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (47u + sizeof(_g4_t_v28)) > _g4_s6 ? (47u + sizeof(_g4_t_v28)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 29u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 46u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 47u);

  switch ( a4 )
  {
    case 8:
      v22 = *((float *)a3 + 142);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v6 = a1;
      *((float *)a3 + 143) = v6 + v22;
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 9:
      v23 = *((float *)a3 + 144);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v7 = a1;
      *((float *)a3 + 145) = v7 + v23;
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 22:
      v24 = 1;
      v25 = 0;
      v26 = -1;
      v27 = 127;
      v28 |= 1u;
      v8 = (const gameswf::String::Self *)gameswf::ASValue::toString((gameswf::ASValue::Self *)a5, (gameswf::String::Self *)&v24);
      gameswf::EditTextCharacter::setTextValue(a1, (gameswf::Player::Self ***)a3, v8, false);
      goto LABEL_9;
    case 23:
      v24 = 1;
      v25 = 0;
      v26 = -1;
      v27 = 127;
      v28 |= 1u;
      v9 = (const gameswf::String::Self *)gameswf::ASValue::toString((gameswf::ASValue::Self *)a5, (gameswf::String::Self *)&v24);
      gameswf::EditTextCharacter::setTextValue(a1, (gameswf::Player::Self ***)a3, v9, true);
LABEL_9:
      sub_59CE50((int)(uintptr_t)(&v24));
      return 1;
    case 26:
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v10 = (int)(double)a1;
      *((uint8_t *)a3 + 586) = v10;
      *((uint8_t *)a3 + 587) = -1;
      *((uint8_t *)a3 + 584) = BYTE2(v10);
      *((uint8_t *)a3 + 585) = BYTE1(v10);
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 27:
      v11 = *((uint32_t *)a3 + 63);
      *(uint8_t *)(v11 + 74) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a5);
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 28:
      *((uint8_t *)a3 + 561) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a5);
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 29:
      *((uint8_t *)a3 + 560) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a5);
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 31:
      if ( *(uint8_t *)a5 == 3 || *(uint8_t *)a5 == 4 )
      {
        v12 = a5[1];
      }
      else
      {
        v12 = (char *)(&byte_20D6378);
        if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
          v12 = sub_10F9450();
      }
      if ( *v12 == -1 )
        v13 = *((gameswf::String::Self **)v12 + 3);
      else
        v13 = (gameswf::String::Self *)(v12 + 1);
      if ( gameswf::String::stricmp(v13, "input") != 0 )
      {
        if ( *(uint8_t *)a5 == 3 || *(uint8_t *)a5 == 4 )
        {
          v18 = a5[1];
        }
        else
        {
          v18 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
          {
            byte_20D6378 = 1;
            v21 = dword_20D6388 | 0x7FFFFF;
            byte_20D6379 = 0;
            dword_20D6388 = v21;
            BYTE2(dword_20D6388) = BYTE2(v21) & 0x7F;
            HIBYTE(dword_20D6388) = HIBYTE(v21) | 1;
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
            __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          }
        }
        if ( *v18 == -1 )
          v19 = *((gameswf::String::Self **)v18 + 3);
        else
          v19 = (gameswf::String::Self *)(v18 + 1);
        v20 = gameswf::String::stricmp(v19, "dynamic");
        result = 1;
        if ( v20 == 0 )
          *((uint8_t *)a3 + 563) = 1;
      }
      else
      {
        *((uint8_t *)a3 + 563) = 0;
        return 1;
      }
      return result;
    case 32:
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v14 = (int)(double)a1;
      *((uint8_t *)a3 + 622) = v14;
      *((uint8_t *)a3 + 623) = -1;
      *((uint8_t *)a3 + 620) = BYTE2(v14);
      *((uint8_t *)a3 + 621) = BYTE1(v14);
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 55:
      v15 = nullptr;
      if ( *(uint8_t *)a5 == 5 )
      {
        v15 = (gameswf::RefCounted::Self *)a5[1];
        if ( v15 != nullptr && (*(uint8_t (**)(char *, int))(*(uint32_t *)v15 + 8))(a5[1], 41) == 0 )
          v15 = nullptr;
      }
      v16 = *((gameswf::RefCounted::Self **)a3 + 156);
      if ( v15 != v16 )
      {
        if ( v16 != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)a3 + 156));
        *((uint32_t *)a3 + 156) = (uint32_t)(uintptr_t)(v15);
        if ( v15 != nullptr )
          gameswf::RefCounted::addRef(v15);
      }
      goto LABEL_31;
    case 56:
      *((uint32_t *)a3 + 139) = gameswf::ASValue::toInt((gameswf::ASValue::Self *)a5);
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      return 1;
    case 57:
      *((uint8_t *)a3 + 562) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a5);
LABEL_31:
      gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
      result = 1;
      break;
    case 58:
      gameswf::ASValue::opAssign((gameswf::Character::Self *)((char *)a3 + 544), (const gameswf::ASValue::Self *)a5);
      result = 1;
      break;
    default:
      if ( a4 == 30 )
      {
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
        v17 = a1;
        *((float *)a3 + 153) = v17;
        gameswf::EditTextCharacter::formatText(a1, (gameswf::EditTextCharacter::Self *)(a3));
        result = 1;
      }
      else
      {
        result = gameswf::Character::setStandardMember(a1, a2, a3, a4, a5);
      }
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::onKeyboardEvent  (binary VA: 0x1105b60)
// Original: gameswf::EditTextCharacter::onKeyboardEvent
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::onKeyboardEvent(long double a1, gameswf::EditTextCharacter::Self *self, const gameswf::ASKeyboardEvent::Self *a3)
{
  const char *v3;
  char v4;
  const char *v5;
  gameswf::String::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  gameswf::Self **v14;
  int v15;
  gameswf::Self **v16;
  int v17;
  float v18; // xmm0_4
  typedef uint16_t _g4_t_v19;
  typedef uint16_t _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[4];
  typedef gameswf::Self *_g4_t_v30[4];
  typedef int16_t _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34[4];
  typedef int16_t _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38[4];
  typedef int16_t _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef gameswf::Self *_g4_t_v42[4];
  typedef int16_t _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef gameswf::Self *_g4_t_v46[9];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (2u + sizeof(_g4_t_v20)) > _g4_s1 ? (2u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v21)) > _g4_s2 ? (4u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v22)) > _g4_s3 ? (8u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v23)) > _g4_s4 ? (12u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v24)) > _g4_s5 ? (16u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v25)) > _g4_s6 ? (20u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v26)) > _g4_s7 ? (24u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v27)) > _g4_s8 ? (28u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v28)) > _g4_s9 ? (32u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v29)) > _g4_s10 ? (48u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v30)) > _g4_s11 ? (64u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v31)) > _g4_s12 ? (80u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (82u + sizeof(_g4_t_v32)) > _g4_s13 ? (82u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (83u + sizeof(_g4_t_v33)) > _g4_s14 ? (83u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v34)) > _g4_s15 ? (84u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v35)) > _g4_s16 ? (100u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (102u + sizeof(_g4_t_v36)) > _g4_s17 ? (102u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (103u + sizeof(_g4_t_v37)) > _g4_s18 ? (103u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v38)) > _g4_s19 ? (104u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v39)) > _g4_s20 ? (120u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (122u + sizeof(_g4_t_v40)) > _g4_s21 ? (122u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (123u + sizeof(_g4_t_v41)) > _g4_s22 ? (123u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v42)) > _g4_s23 ? (124u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v43)) > _g4_s24 ? (140u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (142u + sizeof(_g4_t_v44)) > _g4_s25 ? (142u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (143u + sizeof(_g4_t_v45)) > _g4_s26 ? (143u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v46)) > _g4_s27 ? (144u + sizeof(_g4_t_v46)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 2u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 82u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 83u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 102u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 103u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 122u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 123u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 140u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 142u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 143u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);

  v3 = (char *)a3 + 41;
  if ( *((uint8_t *)a3 + 40) == 0xFF )
    v3 = *((const char **)a3 + 13);
  if ( strcmp(v3, "keyDown") == 0 )
  {
    v4 = *((uint8_t *)self + 468);
    if ( v4 == -1 )
    {
      v6 = *((gameswf::String::Self **)self + 120);
      v5 = (const char *)(*((uint32_t *)self + 118) - 1);
    }
    else
    {
      v5 = (const char *)(v4 - 1);
      v6 = (gameswf::String::Self *)((gameswf::EditTextCharacter::Self *)((char *)self + 469));
    }
    v7 = gameswf::String::charCountUTF8(v6, v5);
    v25 = nullptr;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    sub_777050((int)(uintptr_t)(&v25), v7 + 1);
    gameswf::String::decodeUTF8ToWchar(
      (gameswf::EditTextCharacter::Self *)((char *)self + 468),
      (const gameswf::String::Self *)&v25);
    v8 = v26;
    v9 = *((uint32_t *)self + 128);
    if ( v9 > v26 )
      v9 = v26;
    *((uint32_t *)self + 128) = v9;
    switch ( *((uint32_t *)a3 + 22) )
    {
      case '%':
        if ( v8 > v9 )
          v8 = v9 + 1;
        goto LABEL_52;
      case '\'':
        v8 = 0;
        if ( v9 > 0 )
          v8 = v9 - 1;
        goto LABEL_52;
      case '6':
        if ( v9 <= 0 )
          break;
        if ( *((uint8_t *)self + 563) == 0 && *((uint8_t *)self + 561) == 0 && *((uint32_t *)self + 149) == 1 )
        {
          gameswf::EditTextCharacter::getCharBoundaries(self, v9 - 1, (gameswf::Rect::Self *)v29);
          v18 = (float)(v29[1] + *((float *)self + 134)) - v29[0];
          *((float *)self + 134) = v18;
          if ( v18 > 0.0 )
            *((uint32_t *)self + 134) = 0;
          v9 = *((uint32_t *)self + 128);
          v8 = v26;
        }
        if ( v8 == 1 )
        {
          sub_777050((int)(uintptr_t)(&v25), 0);
        }
        else
        {
          memmove((char *)v25 + 2 * v9 - 2, (char *)v25 + 2 * v9, 2 * (v8 - v9));
          --v26;
        }
        v21 = 0;
        v16 = v30;
        --*((uint32_t *)self + 128);
        sub_10F9B70((int)(uintptr_t)(&v25), &v21);
        LOWORD(v30[0]) = 1;
        if ( v26 > 0 )
          gameswf::String::encodeUTF8FromWchar(v30, v25);
        v31 = -1;
        v32 = 127;
        v33 |= 1u;
        goto LABEL_30;
      case '7':
        if ( *((uint8_t *)self + 561) != 0 )
        {
          v15 = *((uint32_t *)self + 139);
          if ( (v15 == 0 || v8 < v15) && *((int *)self + 65) <= 2 )
          {
            v19 = 10;
            sub_11003B0(&v25, v9, &v19);
            v23 = 0;
            v16 = v38;
            sub_10F9B70((int)(uintptr_t)(&v25), &v23);
            v17 = v26;
            LOWORD(v38[0]) = 1;
            ++*((uint32_t *)self + 128);
            if ( v17 > 0 )
              gameswf::String::encodeUTF8FromWchar(v38, v25);
            v39 = -1;
            v40 = 127;
            v41 |= 1u;
LABEL_30:
            gameswf::EditTextCharacter::setTextValue(a1, (gameswf::Player::Self ***)self, (const gameswf::String::Self *)v16, false);
            sub_59CE50((int)(uintptr_t)(v16));
          }
        }
        else
        {
          gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v46, nullptr);
          gameswf::RenderFX::setFocus(
            *(gameswf::RenderFX::Self **)(*((uint32_t *)self + 4) + 208),
            (gameswf::CharacterHandle::Self *)v46,
            0,
            1);
          gameswf::CharacterHandle::Destroy(v46);
        }
        break;
      case 'X':
        if ( v8 <= v9 )
          break;
        if ( v8 == 1 )
        {
          sub_777050((int)(uintptr_t)(&v25), 0);
        }
        else
        {
          memmove((char *)v25 + 2 * v9, (char *)v25 + 2 * v9 + 2, 2 * (v8 - 1 - v9));
          --v26;
        }
        v22 = 0;
        v14 = v34;
        sub_10F9B70((int)(uintptr_t)(&v25), &v22);
        LOWORD(v34[0]) = 1;
        if ( v26 > 0 )
          gameswf::String::encodeUTF8FromWchar(v34, v25);
        v35 = -1;
        v36 = 127;
        v37 |= 1u;
        goto LABEL_17;
      case 'Y':
      case '[':
        *((uint32_t *)self + 128) = 0;
        gameswf::EditTextCharacter::formatText(a1, self);
        break;
      case 'Z':
      case '\\':
LABEL_52:
        *((uint32_t *)self + 128) = v8;
        gameswf::EditTextCharacter::formatText(a1, self);
        break;
      default:
        v10 = *((uint32_t *)self + 139);
        if ( v10 != 0 && v8 >= v10 )
          break;
        v11 = *((uint32_t *)a3 + 21);
        if ( v11 <= 0 || (uint8_t)gameswf::EditTextCharacter::isAccepted(self, v11) == 0 )
          break;
        v12 = *((uint32_t *)self + 128);
        v20 = *((uint32_t *)a3 + 21);
        sub_11003B0(&v25, v12, &v20);
        v24 = 0;
        sub_10F9B70((int)(uintptr_t)(&v25), &v24);
        v13 = v26;
        LOWORD(v42[0]) = 1;
        ++*((uint32_t *)self + 128);
        v14 = v42;
        if ( v13 > 0 )
          gameswf::String::encodeUTF8FromWchar(v42, v25);
        v43 = -1;
        v44 = 127;
        v45 |= 1u;
LABEL_17:
        gameswf::EditTextCharacter::setTextValue(a1, (gameswf::Player::Self ***)self, (const gameswf::String::Self *)v14, false);
        sub_59CE50((int)(uintptr_t)(v14));
        break;
    }
    sub_777050((int)(uintptr_t)(&v25), 0);
    if ( v28 == 0 )
    {
      v27 = 0;
      if ( v25 != nullptr )
        gameswf::free_internal(v25);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::onLostFocus  (binary VA: 0x1106190)
// Original: gameswf::EditTextCharacter::onLostFocus
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::EditTextCharacter::onLostFocus(long double a1, gameswf::EditTextCharacter::Self *self)
{
  gameswf::EditTextCharacter::Self *result;
  glf::InputManager::Self *InputMgr;
  int Keyboard;

  result = self;
  if ( *((uint8_t *)self + 509) != 0 )
  {
    *((uint8_t *)self + 509) = 0;
    gameswf::EditTextCharacter::formatText(a1, self);
    InputMgr = (glf::InputManager::Self *)glf::GetInputMgr();
    Keyboard = glf::InputManager::GetKeyboard(InputMgr);
    *(uint8_t *)(Keyboard + 904) = 0;
    return (gameswf::EditTextCharacter::Self *)sub_194E130(
                                           Keyboard + 908,
                                           0,
                                           *(uint32_t *)(*(uint32_t *)(Keyboard + 908) - 12),
                                           0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::onGotFocus  (binary VA: 0x1106210)
// Original: gameswf::EditTextCharacter::onGotFocus
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacter::onGotFocus(long double a1, gameswf::EditTextCharacter::Self *self)
{
  char v2;
  gameswf::String::Self *v3;
  const char *v4;
  char v5;
  const char *v6;
  gameswf::String::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  glf::InputManager::Self *InputMgr;
  int Keyboard;
  int v16;
  int v17;
  void *v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[3];
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25[2];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v23)) > _g4_s4 ? (36u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v24)) > _g4_s5 ? (48u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v25)) > _g4_s6 ? (52u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v26)) > _g4_s7 ? (60u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v27)) > _g4_s8 ? (64u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);

  if ( *((uint8_t *)self + 563) == 0 && *((uint8_t *)self + 509) == 0 )
  {
    v2 = *((uint8_t *)self + 468);
    *((uint8_t *)self + 509) = 1;
    if ( v2 == -1 )
    {
      v3 = *((gameswf::String::Self **)self + 120);
      v4 = (const char *)(*((uint32_t *)self + 118) - 1);
    }
    else
    {
      v3 = (gameswf::String::Self *)((gameswf::EditTextCharacter::Self *)((char *)self + 469));
      v4 = (const char *)(v2 - 1);
    }
    *((uint32_t *)self + 128) = gameswf::String::charCountUTF8(v3, v4);
    gameswf::EditTextCharacter::formatText(a1, self);
    v23[0] = (uint32_t)(uintptr_t)(&unk_213B8B4);
    v5 = *((uint8_t *)self + 468);
    if ( v5 == -1 )
    {
      v7 = *((gameswf::String::Self **)self + 120);
      v6 = (const char *)(*((uint32_t *)self + 118) - 1);
    }
    else
    {
      v6 = (const char *)(v5 - 1);
      v7 = (gameswf::String::Self *)((gameswf::EditTextCharacter::Self *)((char *)self + 469));
    }
    v8 = gameswf::String::charCountUTF8(v7, v6);
    v25[0] = nullptr;
    v25[1] = nullptr;
    v26 = 0;
    v27 = 0;
    sub_777050((int)(uintptr_t)(v25), v8);
    gameswf::String::decodeUTF8ToWchar((gameswf::EditTextCharacter::Self *)((char *)self + 468), (const gameswf::String::Self *)v25);
    if ( v8 > 0 )
    {
      v21 = 2 * v8;
      v9 = 0;
      do
      {
        v22 = *(uint16_t *)((char *)v25[0] + v9);
        v10 = v23[0];
        v11 = *(uint32_t *)(v23[0] - 12);
        v12 = v11 + 1;
        if ( (unsigned int)(v11 + 1) > *(uint32_t *)(v23[0] - 8) || *(int *)(v23[0] - 4) > 0 )
        {
          v19 = v11 + 1;
          sub_194F140(v23, v12);
          v10 = v23[0];
          v12 = v19;
          v11 = *(uint32_t *)(v23[0] - 12);
        }
        *(uint32_t *)(v10 + 4 * v11) = v22;
        v13 = v23[0];
        if ( (void *)(v23[0] - 12) != &unk_213B8A8 )
        {
          *(uint32_t *)(v23[0] - 4) = 0;
          *(uint32_t *)(v13 - 12) = v12;
          *(uint32_t *)(v13 + 4 * v12) = 0;
        }
        v9 += 2;
      }
      while ( v9 != v21 );
    }
    v20 = *((uint32_t *)self + 139);
    sub_194F880(&v24, v23);
    InputMgr = (glf::InputManager::Self *)glf::GetInputMgr();
    Keyboard = glf::InputManager::GetKeyboard(InputMgr);
    *(uint8_t *)(Keyboard + 904) = 1;
    v16 = Keyboard;
    sub_194F8F0(Keyboard + 908, &v24);
    v17 = v24;
    ++*(uint32_t *)(v16 + 912);
    *(uint32_t *)(v16 + 916) = v20;
    if ( (void *)(v17 - 12) != &unk_213B8A8
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      sub_194E070((void *)(v17 - 12));
    }
    sub_777050((int)(uintptr_t)(v25), 0);
    if ( v27 == 0 )
    {
      v26 = 0;
      if ( v25[0] != nullptr )
        gameswf::free_internal(v25[0]);
      v25[0] = nullptr;
    }
    v18 = (void *)(v23[0] - 12);
    if ( (void *)(v23[0] - 12) != &unk_213B8A8
      && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      sub_194E070(v18);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::resetFormat  (binary VA: 0x11064f0)
// Original: gameswf::EditTextCharacter::resetFormat
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::resetFormat(long double a1, gameswf::EditTextCharacter::Self *self, gameswf::ASTextFormat::Self *a3)
{
  gameswf::Self *v3;
  int StandardMemberID;
  gameswf::Self *v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  gameswf::Self *v13;
  int v14;
  gameswf::Self *v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  char v20;
  int v21;
  gameswf::Self *v22;
  char *v23;
  gameswf::Self *v24;
  int v25;
  unsigned int v26;
  gameswf::Self *v27;
  int v28;
  gameswf::Self *v29;
  int v30;
  gameswf::Self *v31;
  int v32;
  int v33;
  int v34;
  gameswf::RefCounted::Self *v35;
  gameswf::Player::Self *v36;
  gameswf::Font::Self *v37;
  gameswf::RefCounted::Self *v38;
  gameswf::EditTextCharacter::Self *v39;
  char v40; // di
  char v41; // di
  char v42; // di
  gameswf::Self **v43;
  char v44; // di
  char *v45;
  const char *v46;
  char v47; // di
  float v48; // xmm0_4
  char v49; // di
  int v50;
  char v51; // di
  float v52; // xmm0_4
  char v53; // di
  float v54; // xmm0_4
  char v55; // di
  float v56; // xmm0_4
  char v57; // di
  float v58; // xmm0_4
  char v59; // di
  float v60; // xmm0_4
  char v61;
  int v62;
  int v63;
  int v64;
  int v65;
  const char *v66;
  const char *v67;
  gameswf::RefCounted::Self *v69;
  char *v70;
  const char *v71;
  int v72;
  int v73;
  char *v74;
  const char *v75;
  char *v76;
  const char *v77;
  int v78;
  int v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char _g4_t_v82;
  typedef char _g4_t_v83;
  typedef uint8_t _g4_t_v84[4];
  typedef char *_g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef gameswf::Self *_g4_t_v88;
  typedef int16_t _g4_t_v89;
  typedef char _g4_t_v90;
  typedef char _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef gameswf::Self *_g4_t_v94;
  typedef int16_t _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef gameswf::Self *_g4_t_v100;
  typedef int16_t _g4_t_v101;
  typedef char _g4_t_v102;
  typedef char _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  typedef gameswf::Self *_g4_t_v106;
  typedef int16_t _g4_t_v107;
  typedef char _g4_t_v108;
  typedef char _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef gameswf::Self *_g4_t_v112;
  typedef int16_t _g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef gameswf::Self *_g4_t_v118;
  typedef int16_t _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char _g4_t_v121;
  typedef char _g4_t_v122;
  typedef char _g4_t_v123;
  typedef gameswf::Self *_g4_t_v124;
  typedef int16_t _g4_t_v125;
  typedef char _g4_t_v126;
  typedef char _g4_t_v127;
  typedef char _g4_t_v128;
  typedef char _g4_t_v129;
  typedef gameswf::Self *_g4_t_v130;
  typedef int16_t _g4_t_v131;
  typedef char _g4_t_v132;
  typedef char _g4_t_v133;
  typedef gameswf::Self *_g4_t_v134[3];
  typedef gameswf::Self *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef char _g4_t_v137;
  typedef char _g4_t_v138;
  typedef gameswf::Self *_g4_t_v139;
  typedef int16_t _g4_t_v140;
  typedef char _g4_t_v141;
  typedef char _g4_t_v142;
  typedef char _g4_t_v143;
  typedef char _g4_t_v144;
  typedef gameswf::Self *_g4_t_v145;
  typedef int16_t _g4_t_v146;
  typedef char _g4_t_v147;
  typedef char _g4_t_v148;
  typedef char _g4_t_v149;
  typedef char _g4_t_v150;
  typedef gameswf::Self *_g4_t_v151;
  typedef int16_t _g4_t_v152;
  typedef char _g4_t_v153;
  typedef char _g4_t_v154;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (12u + sizeof(_g4_t_v80)) > _g4_s0 ? (12u + sizeof(_g4_t_v80)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v81)) > _g4_s1 ? (16u + sizeof(_g4_t_v81)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v82)) > _g4_s2 ? (16u + sizeof(_g4_t_v82)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v83)) > _g4_s3 ? (24u + sizeof(_g4_t_v83)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v84)) > _g4_s4 ? (32u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v85)) > _g4_s5 ? (36u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v86)) > _g4_s6 ? (48u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (49u + sizeof(_g4_t_v87)) > _g4_s7 ? (49u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v88)) > _g4_s8 ? (60u + sizeof(_g4_t_v88)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v89)) > _g4_s9 ? (64u + sizeof(_g4_t_v89)) : _g4_s9,
    _g4_s11 = (66u + sizeof(_g4_t_v90)) > _g4_s10 ? (66u + sizeof(_g4_t_v90)) : _g4_s10,
    _g4_s12 = (67u + sizeof(_g4_t_v91)) > _g4_s11 ? (67u + sizeof(_g4_t_v91)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v92)) > _g4_s12 ? (80u + sizeof(_g4_t_v92)) : _g4_s12,
    _g4_s14 = (81u + sizeof(_g4_t_v93)) > _g4_s13 ? (81u + sizeof(_g4_t_v93)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v94)) > _g4_s14 ? (92u + sizeof(_g4_t_v94)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v95)) > _g4_s15 ? (96u + sizeof(_g4_t_v95)) : _g4_s15,
    _g4_s17 = (98u + sizeof(_g4_t_v96)) > _g4_s16 ? (98u + sizeof(_g4_t_v96)) : _g4_s16,
    _g4_s18 = (99u + sizeof(_g4_t_v97)) > _g4_s17 ? (99u + sizeof(_g4_t_v97)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v98)) > _g4_s18 ? (112u + sizeof(_g4_t_v98)) : _g4_s18,
    _g4_s20 = (113u + sizeof(_g4_t_v99)) > _g4_s19 ? (113u + sizeof(_g4_t_v99)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v100)) > _g4_s20 ? (124u + sizeof(_g4_t_v100)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v101)) > _g4_s21 ? (128u + sizeof(_g4_t_v101)) : _g4_s21,
    _g4_s23 = (130u + sizeof(_g4_t_v102)) > _g4_s22 ? (130u + sizeof(_g4_t_v102)) : _g4_s22,
    _g4_s24 = (131u + sizeof(_g4_t_v103)) > _g4_s23 ? (131u + sizeof(_g4_t_v103)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v104)) > _g4_s24 ? (144u + sizeof(_g4_t_v104)) : _g4_s24,
    _g4_s26 = (145u + sizeof(_g4_t_v105)) > _g4_s25 ? (145u + sizeof(_g4_t_v105)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v106)) > _g4_s26 ? (156u + sizeof(_g4_t_v106)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v107)) > _g4_s27 ? (160u + sizeof(_g4_t_v107)) : _g4_s27,
    _g4_s29 = (162u + sizeof(_g4_t_v108)) > _g4_s28 ? (162u + sizeof(_g4_t_v108)) : _g4_s28,
    _g4_s30 = (163u + sizeof(_g4_t_v109)) > _g4_s29 ? (163u + sizeof(_g4_t_v109)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v110)) > _g4_s30 ? (176u + sizeof(_g4_t_v110)) : _g4_s30,
    _g4_s32 = (177u + sizeof(_g4_t_v111)) > _g4_s31 ? (177u + sizeof(_g4_t_v111)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v112)) > _g4_s32 ? (188u + sizeof(_g4_t_v112)) : _g4_s32,
    _g4_s34 = (192u + sizeof(_g4_t_v113)) > _g4_s33 ? (192u + sizeof(_g4_t_v113)) : _g4_s33,
    _g4_s35 = (194u + sizeof(_g4_t_v114)) > _g4_s34 ? (194u + sizeof(_g4_t_v114)) : _g4_s34,
    _g4_s36 = (195u + sizeof(_g4_t_v115)) > _g4_s35 ? (195u + sizeof(_g4_t_v115)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v116)) > _g4_s36 ? (208u + sizeof(_g4_t_v116)) : _g4_s36,
    _g4_s38 = (209u + sizeof(_g4_t_v117)) > _g4_s37 ? (209u + sizeof(_g4_t_v117)) : _g4_s37,
    _g4_s39 = (220u + sizeof(_g4_t_v118)) > _g4_s38 ? (220u + sizeof(_g4_t_v118)) : _g4_s38,
    _g4_s40 = (224u + sizeof(_g4_t_v119)) > _g4_s39 ? (224u + sizeof(_g4_t_v119)) : _g4_s39,
    _g4_s41 = (226u + sizeof(_g4_t_v120)) > _g4_s40 ? (226u + sizeof(_g4_t_v120)) : _g4_s40,
    _g4_s42 = (227u + sizeof(_g4_t_v121)) > _g4_s41 ? (227u + sizeof(_g4_t_v121)) : _g4_s41,
    _g4_s43 = (240u + sizeof(_g4_t_v122)) > _g4_s42 ? (240u + sizeof(_g4_t_v122)) : _g4_s42,
    _g4_s44 = (241u + sizeof(_g4_t_v123)) > _g4_s43 ? (241u + sizeof(_g4_t_v123)) : _g4_s43,
    _g4_s45 = (252u + sizeof(_g4_t_v124)) > _g4_s44 ? (252u + sizeof(_g4_t_v124)) : _g4_s44,
    _g4_s46 = (256u + sizeof(_g4_t_v125)) > _g4_s45 ? (256u + sizeof(_g4_t_v125)) : _g4_s45,
    _g4_s47 = (258u + sizeof(_g4_t_v126)) > _g4_s46 ? (258u + sizeof(_g4_t_v126)) : _g4_s46,
    _g4_s48 = (259u + sizeof(_g4_t_v127)) > _g4_s47 ? (259u + sizeof(_g4_t_v127)) : _g4_s47,
    _g4_s49 = (272u + sizeof(_g4_t_v128)) > _g4_s48 ? (272u + sizeof(_g4_t_v128)) : _g4_s48,
    _g4_s50 = (273u + sizeof(_g4_t_v129)) > _g4_s49 ? (273u + sizeof(_g4_t_v129)) : _g4_s49,
    _g4_s51 = (284u + sizeof(_g4_t_v130)) > _g4_s50 ? (284u + sizeof(_g4_t_v130)) : _g4_s50,
    _g4_s52 = (288u + sizeof(_g4_t_v131)) > _g4_s51 ? (288u + sizeof(_g4_t_v131)) : _g4_s51,
    _g4_s53 = (290u + sizeof(_g4_t_v132)) > _g4_s52 ? (290u + sizeof(_g4_t_v132)) : _g4_s52,
    _g4_s54 = (291u + sizeof(_g4_t_v133)) > _g4_s53 ? (291u + sizeof(_g4_t_v133)) : _g4_s53,
    _g4_s55 = (304u + sizeof(_g4_t_v134)) > _g4_s54 ? (304u + sizeof(_g4_t_v134)) : _g4_s54,
    _g4_s56 = (316u + sizeof(_g4_t_v135)) > _g4_s55 ? (316u + sizeof(_g4_t_v135)) : _g4_s55,
    _g4_s57 = (320u + sizeof(_g4_t_v136)) > _g4_s56 ? (320u + sizeof(_g4_t_v136)) : _g4_s56,
    _g4_s58 = (336u + sizeof(_g4_t_v137)) > _g4_s57 ? (336u + sizeof(_g4_t_v137)) : _g4_s57,
    _g4_s59 = (337u + sizeof(_g4_t_v138)) > _g4_s58 ? (337u + sizeof(_g4_t_v138)) : _g4_s58,
    _g4_s60 = (348u + sizeof(_g4_t_v139)) > _g4_s59 ? (348u + sizeof(_g4_t_v139)) : _g4_s59,
    _g4_s61 = (352u + sizeof(_g4_t_v140)) > _g4_s60 ? (352u + sizeof(_g4_t_v140)) : _g4_s60,
    _g4_s62 = (354u + sizeof(_g4_t_v141)) > _g4_s61 ? (354u + sizeof(_g4_t_v141)) : _g4_s61,
    _g4_s63 = (355u + sizeof(_g4_t_v142)) > _g4_s62 ? (355u + sizeof(_g4_t_v142)) : _g4_s62,
    _g4_s64 = (368u + sizeof(_g4_t_v143)) > _g4_s63 ? (368u + sizeof(_g4_t_v143)) : _g4_s63,
    _g4_s65 = (369u + sizeof(_g4_t_v144)) > _g4_s64 ? (369u + sizeof(_g4_t_v144)) : _g4_s64,
    _g4_s66 = (380u + sizeof(_g4_t_v145)) > _g4_s65 ? (380u + sizeof(_g4_t_v145)) : _g4_s65,
    _g4_s67 = (384u + sizeof(_g4_t_v146)) > _g4_s66 ? (384u + sizeof(_g4_t_v146)) : _g4_s66,
    _g4_s68 = (386u + sizeof(_g4_t_v147)) > _g4_s67 ? (386u + sizeof(_g4_t_v147)) : _g4_s67,
    _g4_s69 = (387u + sizeof(_g4_t_v148)) > _g4_s68 ? (387u + sizeof(_g4_t_v148)) : _g4_s68,
    _g4_s70 = (400u + sizeof(_g4_t_v149)) > _g4_s69 ? (400u + sizeof(_g4_t_v149)) : _g4_s69,
    _g4_s71 = (401u + sizeof(_g4_t_v150)) > _g4_s70 ? (401u + sizeof(_g4_t_v150)) : _g4_s70,
    _g4_s72 = (412u + sizeof(_g4_t_v151)) > _g4_s71 ? (412u + sizeof(_g4_t_v151)) : _g4_s71,
    _g4_s73 = (416u + sizeof(_g4_t_v152)) > _g4_s72 ? (416u + sizeof(_g4_t_v152)) : _g4_s72,
    _g4_s74 = (418u + sizeof(_g4_t_v153)) > _g4_s73 ? (418u + sizeof(_g4_t_v153)) : _g4_s73,
    _g4_s75 = (419u + sizeof(_g4_t_v154)) > _g4_s74 ? (419u + sizeof(_g4_t_v154)) : _g4_s74
  };
  alignas(16) uint8_t _g4_sf[_g4_s75];
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 12u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 16u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 16u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 24u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 48u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 49u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 60u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 64u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 66u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 67u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 80u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 81u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 98u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 99u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 112u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 113u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 124u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 128u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 130u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 131u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 144u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 145u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 156u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 160u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 162u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 163u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 176u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 177u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 188u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 192u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 194u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 195u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 208u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 209u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 220u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 224u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 226u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 227u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 240u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 241u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 252u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 256u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 258u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 259u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 272u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 273u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 284u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 288u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 290u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 291u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 304u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 316u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 320u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 336u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 337u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 348u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 352u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 354u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 355u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 368u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 369u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 380u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 384u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 386u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 387u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 400u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 401u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 412u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 416u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 418u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 419u);

  v84[0] = 0;
  v84[1] = 0;
  v86 = 1;
  v87 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v86, 10);
  v3 = (gameswf::Self *)&v87;
  if ( v86 == -1 )
    v3 = v88;
  gameswf::Strcpy_s(v3, &byte_9[2], (gameswf::Self *)"leftMargin");
  v89 = -1;
  v90 = 127;
  v91 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v86);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(a3, 36, StandardMemberID, v84) == 0 )
  {
    v59 = G4_VCALL<int>(a3, 44, &v86, v84);
    sub_59CE50((int)(uintptr_t)(&v86));
    if ( v59 == 0 )
      goto LABEL_6;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v86));
  }
  gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v84);
  v60 = a1;
  *((float *)self + 150) = v60;
LABEL_6:
  v92 = 1;
  v93 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v92, 6);
  v5 = (gameswf::Self *)&v93;
  if ( v92 == -1 )
    v5 = v94;
  gameswf::Strcpy_s(v5, (char *)&loc_6 + 1, (gameswf::Self *)"indent");
  v95 = -1;
  v96 = 127;
  v97 |= 1u;
  v6 = gameswf::getStandardMemberID((gameswf::Self *)&v92);
  if ( v6 == -1
    || G4_VCALL<uint8_t>(a3, 36, v6, v84) == 0 )
  {
    v57 = G4_VCALL<int>(a3, 44, &v92, v84);
    sub_59CE50((int)(uintptr_t)(&v92));
    if ( v57 == 0 )
      goto LABEL_11;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v92));
  }
  gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v84);
  v58 = a1;
  *((float *)self + 152) = v58;
LABEL_11:
  v98 = 1;
  v99 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v98, 11);
  v7 = (gameswf::Self *)&v99;
  if ( v98 == -1 )
    v7 = v100;
  gameswf::Strcpy_s(v7, &byte_9[3], (gameswf::Self *)"rightMargin");
  v101 = -1;
  v102 = 127;
  v103 |= 1u;
  v8 = gameswf::getStandardMemberID((gameswf::Self *)&v98);
  if ( v8 == -1
    || G4_VCALL<uint8_t>(a3, 36, v8, v84) == 0 )
  {
    v55 = G4_VCALL<int>(a3, 44, &v98, v84);
    sub_59CE50((int)(uintptr_t)(&v98));
    if ( v55 == 0 )
      goto LABEL_16;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v98));
  }
  gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v84);
  v56 = a1;
  *((float *)self + 151) = v56;
LABEL_16:
  v104 = 1;
  v105 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v104, 7);
  v9 = (gameswf::Self *)&v105;
  if ( v104 == -1 )
    v9 = v106;
  gameswf::Strcpy_s(v9, byte_8, (gameswf::Self *)"leading");
  v107 = -1;
  v108 = 127;
  v109 |= 1u;
  v10 = gameswf::getStandardMemberID((gameswf::Self *)&v104);
  if ( v10 == -1
    || G4_VCALL<uint8_t>(a3, 36, v10, v84) == 0 )
  {
    v53 = G4_VCALL<int>(a3, 44, &v104, v84);
    sub_59CE50((int)(uintptr_t)(&v104));
    if ( v53 == 0 )
      goto LABEL_21;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v104));
  }
  gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v84);
  v54 = a1;
  *((float *)self + 153) = v54;
LABEL_21:
  v110 = 1;
  v111 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v110, 13);
  v11 = (gameswf::Self *)&v111;
  if ( v110 == -1 )
    v11 = v112;
  gameswf::Strcpy_s(v11, &byte_9[5], (gameswf::Self *)"letterSpacing");
  v113 = -1;
  v114 = 127;
  v115 |= 1u;
  v12 = gameswf::getStandardMemberID((gameswf::Self *)&v110);
  if ( v12 == -1
    || G4_VCALL<uint8_t>(a3, 36, v12, v84) == 0 )
  {
    v51 = G4_VCALL<int>(a3, 44, &v110, v84);
    sub_59CE50((int)(uintptr_t)(&v110));
    if ( v51 == 0 )
      goto LABEL_26;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v110));
  }
  gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v84);
  v52 = a1;
  *((float *)self + 154) = v52;
LABEL_26:
  v116 = 1;
  v117 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v116, 5);
  v13 = (gameswf::Self *)&v117;
  if ( v116 == -1 )
    v13 = v118;
  gameswf::Strcpy_s(v13, (char *)&loc_6, (gameswf::Self *)"color");
  v119 = -1;
  v120 = 127;
  v121 |= 1u;
  v14 = gameswf::getStandardMemberID((gameswf::Self *)&v116);
  if ( v14 == -1
    || G4_VCALL<uint8_t>(a3, 36, v14, v84) == 0 )
  {
    v49 = G4_VCALL<int>(a3, 44, &v116, v84);
    sub_59CE50((int)(uintptr_t)(&v116));
    if ( v49 == 0 )
      goto LABEL_31;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v116));
  }
  v50 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)v84);
  *((uint8_t *)self + 584) = BYTE2(v50);
  *((uint8_t *)self + 586) = v50;
  *((uint8_t *)self + 585) = BYTE1(v50);
  *((uint8_t *)self + 587) = -1;
LABEL_31:
  v122 = 1;
  v123 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v122, 4);
  v15 = (gameswf::Self *)&v123;
  if ( v122 == -1 )
    v15 = v124;
  gameswf::Strcpy_s(v15, (char *)&loc_4 + 1, (gameswf::Self *)"size");
  v125 = -1;
  v126 = 127;
  v127 |= 1u;
  v16 = gameswf::getStandardMemberID((gameswf::Self *)&v122);
  if ( v16 == -1
    || G4_VCALL<uint8_t>(a3, 36, v16, v84) == 0 )
  {
    v47 = G4_VCALL<int>(a3, 44, &v122, v84);
    sub_59CE50((int)(uintptr_t)(&v122));
    if ( v47 == 0 )
      goto LABEL_36;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v122));
  }
  gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v84);
  v48 = a1;
  *((float *)self + 147) = v48;
LABEL_36:
  v128 = 1;
  v129 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v128, 5);
  v17 = (gameswf::Self *)&v129;
  if ( v128 == -1 )
    v17 = v130;
  gameswf::Strcpy_s(v17, (char *)&loc_6, (gameswf::Self *)"align");
  v131 = -1;
  v132 = 127;
  v133 |= 1u;
  v18 = gameswf::getStandardMemberID((gameswf::Self *)&v128);
  if ( v18 == -1
    || G4_VCALL<uint8_t>(a3, 36, v18, v84) == 0 )
  {
    v44 = G4_VCALL<int>(a3, 44, &v128, v84);
    sub_59CE50((int)(uintptr_t)(&v128));
    if ( v44 == 0 )
      goto LABEL_41;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v128));
  }
  v45 = v85;
  if ( v84[0] != 3 )
  {
    if ( v84[0] == 4 )
    {
      v45 = v85;
    }
    else
    {
      v45 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v73 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v73;
        BYTE2(dword_20D6388) = BYTE2(v73) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v73) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
  }
  if ( *v45 == -1 )
    v46 = *((const char **)v45 + 3);
  else
    v46 = v45 + 1;
  if ( strcmp(v46, "left") == 0 )
  {
    *((uint32_t *)self + 149) = 0;
  }
  else
  {
    v70 = v85;
    if ( v84[0] != 3 )
    {
      if ( v84[0] == 4 )
      {
        v70 = v85;
      }
      else
      {
        v70 = (char *)(&byte_20D6378);
        if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
          v70 = sub_10F9450();
      }
    }
    if ( *v70 == -1 )
      v71 = *((const char **)v70 + 3);
    else
      v71 = v70 + 1;
    if ( strcmp(v71, "center") == 0 )
    {
      *((uint32_t *)self + 149) = 2;
    }
    else
    {
      v74 = v85;
      if ( v84[0] != 3 )
      {
        if ( v84[0] == 4 )
        {
          v74 = v85;
        }
        else
        {
          v74 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
          {
            byte_20D6378 = 1;
            v78 = dword_20D6388 | 0x7FFFFF;
            byte_20D6379 = 0;
            dword_20D6388 = v78;
            BYTE2(dword_20D6388) = BYTE2(v78) & 0x7F;
            HIBYTE(dword_20D6388) = HIBYTE(v78) | 1;
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
            __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          }
        }
      }
      if ( *v74 == -1 )
        v75 = *((const char **)v74 + 3);
      else
        v75 = v74 + 1;
      if ( strcmp(v75, "right") == 0 )
      {
        *((uint32_t *)self + 149) = 1;
      }
      else
      {
        v76 = v85;
        if ( v84[0] != 3 )
        {
          if ( v84[0] == 4 )
          {
            v76 = v85;
          }
          else
          {
            v76 = (char *)(&byte_20D6378);
            if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
            {
              byte_20D6378 = 1;
              v79 = dword_20D6388 | 0x7FFFFF;
              byte_20D6379 = 0;
              dword_20D6388 = v79;
              BYTE2(dword_20D6388) = BYTE2(v79) & 0x7F;
              HIBYTE(dword_20D6388) = HIBYTE(v79) | 1;
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
              __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
            }
          }
        }
        if ( *v76 == -1 )
          v77 = *((const char **)v76 + 3);
        else
          v77 = v76 + 1;
        if ( strcmp(v77, "justify") == 0 )
          *((uint32_t *)self + 149) = 3;
      }
    }
  }
LABEL_41:
  LOWORD(v134[0]) = 1;
  v19 = *((uint32_t *)self + 148);
  v81 = v19;
  v20 = *(uint8_t *)(v19 + 44);
  if ( v20 == -1 )
    v21 = *(uint32_t *)(v19 + 48) - 1;
  else
    v21 = v20 - 1;
  gameswf::String::resize((gameswf::String::Self *)v134, v21);
  if ( *(uint8_t *)(v81 + 44) == 0xFF )
    v22 = *(gameswf::Self **)(v81 + 56);
  else
    v22 = (gameswf::Self *)(v81 + 45);
  if ( LOBYTE(v134[0]) == 0xFF )
  {
    v23 = (char *)v134[1];
    v24 = v135;
  }
  else
  {
    v23 = (char *)SLOBYTE(v134[0]);
    v24 = (gameswf::Self *)((char *)v134 + 1);
  }
  gameswf::Strcpy_s(v24, v23, v22);
  v80 = *(uint32_t *)(v81 + 60);
  if ( (uint8_t *)(v80 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v61 = *(uint8_t *)(v81 + 44);
    if ( v61 == -1 )
    {
      v63 = *(uint32_t *)(v81 + 56);
      v62 = *(uint32_t *)(v81 + 48) - 1;
    }
    else
    {
      v62 = v61 - 1;
      v63 = v81 + 45;
    }
    v25 = 5381;
    if ( v62 > 0 )
    {
      do
      {
        --v62;
        v64 = 33 * v25;
        v65 = *(uint8_t *)(v63 + v62) + 32;
        if ( (uint8_t)(*(uint8_t *)(v63 + v62) - 65) > 0x19u )
          v65 = *(uint8_t *)(v63 + v62);
        v25 = v64 ^ v65;
      }
      while ( v62 != 0 );
      v25 = v25 << 9 >> 9;
    }
    *(uint32_t *)(v81 + 60) = v25 & 0x7FFFFF | v80 & 0xFF800000;
  }
  else
  {
    v25 = v80 << 9 >> 9;
  }
  v26 = v25 & 0x7FFFFF | v136 & 0xFF800000;
  v137 = 1;
  LOWORD(v136) = v25;
  v138 = 0;
  BYTE2(v136) = BYTE2(v26) & 0x7F;
  HIBYTE(v136) = HIBYTE(v26) | 1;
  gameswf::String::resize((gameswf::String::Self *)&v137, 4);
  v27 = (gameswf::Self *)&v138;
  if ( v137 == -1 )
    v27 = v139;
  gameswf::Strcpy_s(v27, (char *)&loc_4 + 1, (gameswf::Self *)"font");
  v140 = -1;
  v141 = 127;
  v142 |= 1u;
  v28 = gameswf::getStandardMemberID((gameswf::Self *)&v137);
  if ( v28 == -1
    || G4_VCALL<uint8_t>(a3, 36, v28, v84) == 0 )
  {
    v42 = G4_VCALL<int>(a3, 44, &v137, v84);
    sub_59CE50((int)(uintptr_t)(&v137));
    if ( v42 == 0 )
      goto LABEL_54;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v137));
  }
  v43 = (gameswf::Self **)v85;
  if ( v84[0] != 3 )
  {
    if ( v84[0] == 4 )
    {
      v43 = (gameswf::Self **)v85;
    }
    else
    {
      v43 = (gameswf::Self **)&byte_20D6378;
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v72 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v72;
        BYTE2(dword_20D6388) = BYTE2(v72) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v72) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
  }
  gameswf::String::opAssign(v134, v43);
LABEL_54:
  v143 = 1;
  v144 = 0;
  v82 = *(uint8_t *)(*((uint32_t *)self + 148) + 73);
  gameswf::String::resize((gameswf::String::Self *)&v143, 4);
  v29 = (gameswf::Self *)&v144;
  if ( v143 == -1 )
    v29 = v145;
  gameswf::Strcpy_s(v29, (char *)&loc_4 + 1, (gameswf::Self *)"bold");
  v146 = -1;
  v147 = 127;
  v148 |= 1u;
  v30 = gameswf::getStandardMemberID((gameswf::Self *)&v143);
  if ( v30 == -1
    || G4_VCALL<uint8_t>(a3, 36, v30, v84) == 0 )
  {
    v41 = G4_VCALL<int>(a3, 44, &v143, v84);
    sub_59CE50((int)(uintptr_t)(&v143));
    if ( v41 == 0 )
      goto LABEL_59;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v143));
  }
  v82 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)v84);
LABEL_59:
  v149 = 1;
  v150 = 0;
  v83 = *(uint8_t *)(*((uint32_t *)self + 148) + 72);
  gameswf::String::resize((gameswf::String::Self *)&v149, 6);
  v31 = (gameswf::Self *)&v150;
  if ( v149 == -1 )
    v31 = v151;
  gameswf::Strcpy_s(v31, (char *)&loc_6 + 1, (gameswf::Self *)"italic");
  v152 = -1;
  v153 = 127;
  v154 |= 1u;
  v32 = gameswf::getStandardMemberID((gameswf::Self *)&v149);
  if ( v32 == -1
    || G4_VCALL<uint8_t>(a3, 36, v32, v84) == 0 )
  {
    v40 = G4_VCALL<int>(a3, 44, &v149, v84);
    sub_59CE50((int)(uintptr_t)(&v149));
    if ( v40 == 0 )
      goto LABEL_64;
  }
  else
  {
    sub_59CE50((int)(uintptr_t)(&v149));
  }
  v83 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)v84);
LABEL_64:
  v33 = *((uint32_t *)self + 148);
  if ( v83 == *(uint8_t *)(v33 + 72) && v82 == *(uint8_t *)(v33 + 73) )
  {
    if ( *(uint8_t *)(v33 + 44) == 0xFF )
      v66 = *(const char **)(v33 + 56);
    else
      v66 = (const char *)(v33 + 45);
    v67 = (char *)v134 + 1;
    if ( LOBYTE(v134[0]) == 0xFF )
      v67 = (const char *)v135;
    if ( strcmp(v67, v66) == 0 )
    {
LABEL_122:
      gameswf::EditTextCharacter::formatText(a1, self);
      sub_59CE50((int)(uintptr_t)(v134));
      return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v84);
    }
  }
  v34 = G4_VCALL<int>(self, 152, v134);
  v35 = (gameswf::RefCounted::Self *)v34;
  if ( v34 != 0 && G4_VCALL<uint8_t>(v34, 8, 23) != 0 )
  {
    v69 = nullptr;
    if ( G4_VCALL<uint8_t>(v35, 8, 23) != 0 )
      v69 = v35;
    v38 = *((gameswf::RefCounted::Self **)self + 148);
    if ( v69 != v38 )
    {
      if ( v38 != nullptr )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 148));
      v39 = self;
      v38 = nullptr;
      *((uint32_t *)self + 148) = (uint32_t)(uintptr_t)(v69);
      if ( v69 != nullptr )
      {
        gameswf::RefCounted::addRef(v69);
        v39 = self;
        v38 = *((gameswf::RefCounted::Self **)self + 148);
      }
      goto LABEL_134;
    }
  }
  else
  {
    v36 = *((gameswf::Player::Self **)self + 4);
    v37 = (gameswf::Font::Self *)opNew(0x84u);
    gameswf::Font::Construct(v37, v36);
    v38 = *((gameswf::RefCounted::Self **)self + 148);
    if ( v37 != (gameswf::Font::Self *)(uintptr_t)(v38) )
    {
      if ( v38 != nullptr )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 148));
      v39 = self;
      v38 = nullptr;
      *((uint32_t *)self + 148) = (uint32_t)(uintptr_t)(v37);
      if ( v37 != nullptr )
      {
        gameswf::RefCounted::addRef(v37);
        v39 = self;
        v38 = *((gameswf::RefCounted::Self **)self + 148);
      }
      goto LABEL_134;
    }
  }
  v39 = self;
LABEL_134:
  *((uint8_t *)v38 + 73) = v82;
  *(uint8_t *)(*((uint32_t *)v39 + 148) + 72) = v83;
  gameswf::String::opAssign((gameswf::Self **)(*((uint32_t *)v39 + 148) + 44), v134);
  goto LABEL_122;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::is  (binary VA: 0x11078a0)
// Original: gameswf::EditTextCharacter::is
// ----------------------------------------------------------------------------
bool gameswf::EditTextCharacter::is(gameswf::EditTextCharacter::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 37 && a2 != 4 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getCharacterDef  (binary VA: 0x11078d0)
// Original: gameswf::EditTextCharacter::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::getCharacterDef(gameswf::EditTextCharacter::Self *self)
{
  return *((uint32_t *)self + 63);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::isFocusNeedsPress  (binary VA: 0x11078e0)
// Original: gameswf::EditTextCharacter::isFocusNeedsPress
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacter::isFocusNeedsPress(gameswf::EditTextCharacter::Self *self)
{
  return *((uint8_t *)self + 563) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::getBoundInternal  (binary VA: 0x1107930)
// Original: gameswf::EditTextCharacter::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::EditTextCharacter::getBoundInternal(gameswf::EditTextCharacter::Self *self, gameswf::Rect::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 142);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 143);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 144);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 145);
  return gameswf::Matrix::transform(*((gameswf::Matrix::Self **)self + 17), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::updateWorldCxForm  (binary VA: 0x1107980)
// Original: gameswf::EditTextCharacter::updateWorldCxForm
// ----------------------------------------------------------------------------
uint32_t * gameswf::EditTextCharacter::updateWorldCxForm(gameswf::EditTextCharacter::Self *self)
{
  uint32_t *result;

  result = gameswf::Character::updateWorldCxForm(self);
  *((uint8_t *)self + 434) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacter::updateWorldMatrix  (binary VA: 0x11079c0)
// Original: gameswf::EditTextCharacter::updateWorldMatrix
// ----------------------------------------------------------------------------
uint32_t gameswf::EditTextCharacter::updateWorldMatrix(gameswf::EditTextCharacter::Self *self)
{
  uint32_t result;

  result = gameswf::Character::updateWorldMatrix(self);
  *((uint8_t *)self + 433) = 1;
  return result;
}


