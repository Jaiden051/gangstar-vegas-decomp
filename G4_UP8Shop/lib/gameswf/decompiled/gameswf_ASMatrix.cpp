#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASMatrix.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::invert  (binary VA: 0x1131a30)
// Original: gameswf::ASMatrix::invert
// ----------------------------------------------------------------------------
int gameswf::ASMatrix::invert(int a1)
{
  int result;
  uint32_t *v2;
  uint32_t v3[6];

  result = a1;
  v2 = *(uint32_t **)(a1 + 4);
  if ( v2 != nullptr )
  {
    result = G4_VCALL<int>(v2, 8, 30);
    if ( (uint8_t)result != 0 )
    {
      memset(v3, 0, sizeof(v3));
      v3[0] = 1065353216;
      v3[4] = 1065353216;
      gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v3, (const gameswf::Matrix::Self *)(v2 + 10));
      v2[10] = v3[0];
      v2[11] = v3[1];
      v2[12] = v3[2];
      v2[13] = v3[3];
      v2[14] = v3[4];
      result = v3[5];
      v2[15] = v3[5];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::getMemberByName  (binary VA: 0x1131ae0)
// Original: gameswf::ASMatrix::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASMatrix::getMemberByName(gameswf::ASMatrix::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::String::Self *v3;
  gameswf::String::Self *v4;
  gameswf::String::Self *v5;
  gameswf::String::Self *v6;
  gameswf::String::Self *v7;
  gameswf::String::Self *v8;

  v3 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
  if ( *(uint8_t *)a2 == 0xFF )
    v3 = *((gameswf::String::Self **)a2 + 3);
  if ( gameswf::String::stricmp(v3, "a") != 0 )
  {
    v4 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
    if ( *(uint8_t *)a2 == 0xFF )
      v4 = *((gameswf::String::Self **)a2 + 3);
    if ( gameswf::String::stricmp(v4, "b") != 0 )
    {
      v5 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
      if ( *(uint8_t *)a2 == 0xFF )
        v5 = *((gameswf::String::Self **)a2 + 3);
      if ( gameswf::String::stricmp(v5, "c") != 0 )
      {
        v6 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
        if ( *(uint8_t *)a2 == 0xFF )
          v6 = *((gameswf::String::Self **)a2 + 3);
        if ( gameswf::String::stricmp(v6, "d") != 0 )
        {
          v7 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
          if ( *(uint8_t *)a2 == 0xFF )
            v7 = *((gameswf::String::Self **)a2 + 3);
          if ( gameswf::String::stricmp(v7, "tx") != 0 )
          {
            v8 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
            if ( *(uint8_t *)a2 == 0xFF )
              v8 = *((gameswf::String::Self **)a2 + 3);
            if ( gameswf::String::stricmp(v8, "ty") != 0 )
            {
              return gameswf::ASObject::getMemberByName(self, a2, a3);
            }
            else
            {
              gameswf::ASValue::setDouble(a3, *((float *)self + 15));
              return 1;
            }
          }
          else
          {
            gameswf::ASValue::setDouble(a3, *((float *)self + 12));
            return 1;
          }
        }
        else
        {
          gameswf::ASValue::setDouble(a3, *((float *)self + 14));
          return 1;
        }
      }
      else
      {
        gameswf::ASValue::setDouble(a3, *((float *)self + 13));
        return 1;
      }
    }
    else
    {
      gameswf::ASValue::setDouble(a3, *((float *)self + 11));
      return 1;
    }
  }
  else
  {
    gameswf::ASValue::setDouble(a3, *((float *)self + 10));
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::setMemberByName  (binary VA: 0x1131ce0)
// Original: gameswf::ASMatrix::setMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASMatrix::setMemberByName(__m128 a1, gameswf::ASMatrix::Self *self, const gameswf::StringI::Self *a3, const gameswf::ASValue::Self *a4)
{
  gameswf::String::Self *v4;
  uint32_t v5; // xmm0_4
  gameswf::String::Self *v7;
  uint32_t v8; // xmm0_4
  gameswf::String::Self *v9;
  uint32_t v10; // xmm0_4
  gameswf::String::Self *v11;
  uint32_t v12; // xmm0_4
  gameswf::String::Self *v13;
  gameswf::String::Self *v14;
  uint32_t v15; // xmm0_4
  uint32_t v16; // xmm0_4

  v4 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a3 + 1));
  if ( *(uint8_t *)a3 == 0xFF )
    v4 = *((gameswf::String::Self **)a3 + 3);
  if ( gameswf::String::stricmp(v4, "a") != 0 )
  {
    v7 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a3 + 1));
    if ( *(uint8_t *)a3 == 0xFF )
      v7 = *((gameswf::String::Self **)a3 + 3);
    if ( gameswf::String::stricmp(v7, "b") != 0 )
    {
      v9 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a3 + 1));
      if ( *(uint8_t *)a3 == 0xFF )
        v9 = *((gameswf::String::Self **)a3 + 3);
      if ( gameswf::String::stricmp(v9, "c") != 0 )
      {
        v11 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a3 + 1));
        if ( *(uint8_t *)a3 == 0xFF )
          v11 = *((gameswf::String::Self **)a3 + 3);
        if ( gameswf::String::stricmp(v11, "d") != 0 )
        {
          v13 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a3 + 1));
          if ( *(uint8_t *)a3 == 0xFF )
            v13 = *((gameswf::String::Self **)a3 + 3);
          if ( gameswf::String::stricmp(v13, "tx") != 0 )
          {
            v14 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a3 + 1));
            if ( *(uint8_t *)a3 == 0xFF )
              v14 = *((gameswf::String::Self **)a3 + 3);
            if ( gameswf::String::stricmp(v14, "ty") != 0 )
            {
              return gameswf::ASObject::setMemberByName(self, a3, a4);
            }
            else
            {
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
              if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
                v15 = 0;
              else
                v15 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
              *((uint32_t *)self + 15) = v15;
              return 1;
            }
          }
          else
          {
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
            if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
              v16 = 0;
            else
              v16 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
            *((uint32_t *)self + 12) = v16;
            return 1;
          }
        }
        else
        {
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
          if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
            v12 = 0;
          else
            v12 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
          *((uint32_t *)self + 14) = v12;
          return 1;
        }
      }
      else
      {
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
        if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
          v10 = 0;
        else
          v10 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
        *((uint32_t *)self + 13) = v10;
        return 1;
      }
    }
    else
    {
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v8 = 0;
      else
        v8 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 11) = v8;
      return 1;
    }
  }
  else
  {
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
    if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
      v5 = 0;
    else
      v5 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
    *((uint32_t *)self + 10) = v5;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::transformPoint  (binary VA: 0x1131fd0)
// Original: gameswf::ASMatrix::transformPoint
// ----------------------------------------------------------------------------
void gameswf::ASMatrix::transformPoint(int a1)
{
  float *v1;
  int v2;
  float *v3;
  gameswf::RefCounted::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  float *Point;
  float v9;
  gameswf::RefCounted::Self *v10;
  gameswf::RefCounted::Self *v11;
  gameswf::RefCounted::Self *v12;

  if ( *(int *)(a1 + 16) > 0 )
  {
    v1 = *(float **)(a1 + 4);
    if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 30) != 0 )
    {
      v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
      if ( *(uint8_t *)v2 == 5 )
      {
        v3 = *(float **)(v2 + 4);
        if ( v3 != nullptr && G4_VCALL<uint8_t>(v3, 8, 29) != 0 )
        {
          v4 = *(gameswf::RefCounted::Self **)(a1 + 12);
          v5 = *((gameswf::Self **)v4 + 53);
          if ( v5 != nullptr )
          {
            v6 = *((gameswf::Self **)v4 + 52);
            if ( *((uint8_t *)v6 + 2) == 0 )
            {
              if ( (*(uint16_t *)v6)-- == 1 )
              {
                v12 = v4;
                gameswf::free_internal(v6);
                v4 = v12;
              }
              *((uint32_t *)v4 + 52) = 0;
              *((uint32_t *)v4 + 53) = 0;
              v5 = nullptr;
            }
          }
          Point = (float *)gameswf::createPoint(v5, nullptr, 0.0, v9);
          if ( Point != nullptr )
          {
            v10 = (gameswf::RefCounted::Self *)Point;
            gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)Point);
            Point = (float *)v10;
          }
          Point[10] = (float)((float)(v3[10] * v1[10]) + (float)(v3[11] * v1[11])) + v1[12];
          Point[11] = (float)((float)(v3[10] * v1[13]) + (float)(v3[11] * v1[14])) + v1[15];
          v11 = (gameswf::RefCounted::Self *)Point;
          gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, (gameswf::ASObject::Self *)Point);
          gameswf::RefCounted::dropRef(v11);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::scale  (binary VA: 0x1132160)
// Original: gameswf::ASMatrix::scale
// ----------------------------------------------------------------------------
void gameswf::ASMatrix::scale(uint32_t *a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  unsigned int v4; // xmm0_4
  unsigned int v5; // xmm0_4
  __m128 v6;
  float v7; // xmm4_4
  __m128 v8;
  float v9; // xmm2_4
  __m128 v10;
  float v11; // xmm0_4
  __m128 v12;
  float v13; // xmm4_4
  __m128 v14;
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  __m128 v19;
  float v20; // xmm0_4
  float v21; // xmm3_4
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23[19];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v23)) > _g4_s1 ? (48u + sizeof(_g4_t_v23)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);

  if ( (int)a1[4] > 1 )
  {
    v1 = a1[1];
    if ( v1 != 0 && G4_VCALL<uint8_t>(v1, 8, 30) != 0 )
    {
      memset(v23, 0, 0x18u);
      v2 = a1[5];
      v3 = (uint32_t *)a1[3];
      v23[0] = 1065353216;
      v23[4] = 1065353216;
      *(float *)&v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v3 + 4 * (3 * v2 - 3)));
      v22 = v4;
      *(float *)&v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)a1[3] + 12 * a1[5]));
      gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v23, v5, v22, 0.0);
      memset(&v23[8], 0, 0x18u);
g4_m128_raw(v6) = *(unsigned int *)(v1 + 52);
      v7 = *(float *)(v1 + 40);
      v8 = v6;
g4_m128_lane<float>(v8, 0) = (float)(g4_m128_lane<float>(v6, 0) * *(float *)&v23[1]) + (float)(*(float *)v23 * v7);
      if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
        v9 = 0.0;
      else
        LODWORD(v9) =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
      *(float *)&v23[8] = v9;
g4_m128_raw(v10) = v23[3];
g4_m128_lane<float>(v6, 0) = (float)(g4_m128_lane<float>(v6, 0) * *(float *)&v23[4]) + (float)(v7 * *(float *)&v23[3]);
      if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
        v11 = 0.0;
      else
        LODWORD(v11) =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v12) = *(unsigned int *)(v1 + 56);
      *(float *)&v23[11] = v11;
      v14 = v12;
      v13 = *(float *)(v1 + 44);
g4_m128_lane<float>(v14, 0) = (float)(g4_m128_lane<float>(v12, 0) * *(float *)&v23[1]) + (float)(*(float *)v23 * v13);
      if (g4_m128_lane<float>(v14, 0) < -3.4028235e38f )
        v15 = 0.0;
      else
        LODWORD(v15) =g4_m128_lane<int32_t>(v14, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v14, *(__m128 *)&dword_1C7B5E0), 0);
      *(float *)&v23[9] = v15;
g4_m128_lane<float>(v12, 0) = (float)(g4_m128_lane<float>(v12, 0) * *(float *)&v23[4]) + (float)(v13 * *(float *)&v23[3]);
      if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
        v16 = 0.0;
      else
        LODWORD(v16) =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
      *(float *)&v23[12] = v16;
      v17 = *(float *)(v1 + 60);
      v18 = *(float *)(v1 + 48);
g4_m128_raw(v19) = v23[0];
g4_m128_lane<float>(v19, 0) = (float)((float)(*(float *)v23 * v18) + (float)(*(float *)&v23[1] * v17)) + *(float *)&v23[2];
      if (g4_m128_lane<float>(v19, 0) < -3.4028235e38f )
        v20 = 0.0;
      else
        LODWORD(v20) =g4_m128_lane<int32_t>(v19, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v19, *(__m128 *)&dword_1C7B5E0), 0);
      *(float *)&v23[10] = v20;
g4_m128_lane<float>(v10, 0) = (float)((float)(*(float *)&v23[3] * v18) + (float)(*(float *)&v23[4] * v17)) + *(float *)&v23[5];
      if (g4_m128_lane<float>(v10, 0) < -3.4028235e38f )
        v21 = 0.0;
      else
        LODWORD(v21) =g4_m128_lane<int32_t>(v10, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v10, *(__m128 *)&dword_1C7B5E0), 0);
      *(float *)&v23[13] = v21;
      *(float *)&v23[5] = v21;
      *(uint32_t *)(v1 + 40) = v23[8];
      *(uint32_t *)(v1 + 44) = v23[9];
      *(uint32_t *)(v1 + 48) = v23[10];
      *(uint32_t *)(v1 + 52) = v23[11];
      *(uint32_t *)(v1 + 56) = v23[12];
      *(uint32_t *)(v1 + 60) = v23[5];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::rotate  (binary VA: 0x1132420)
// Original: gameswf::ASMatrix::rotate
// ----------------------------------------------------------------------------
int gameswf::ASMatrix::rotate(uint32_t *a1)
{
  int result;
  int v2;
  uint32_t *v3;
  int v4;
  float v5; // xmm0_4
  __m128 v6;
  float v7; // xmm4_4
  __m128 v8;
  float v9; // xmm2_4
  __m128 v10;
  float v11; // xmm0_4
  __m128 v12;
  float v13; // xmm4_4
  __m128 v14;
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  __m128 v19;
  float v20; // xmm0_4
  float v21; // xmm3_4
  unsigned int v22[19];

  result = a1[4];
  if ( result > 0 )
  {
    v2 = a1[1];
    if ( v2 != 0 )
    {
      result = G4_VCALL<int>(v2, 8, 30);
      if ( (uint8_t)result != 0 )
      {
        memset(v22, 0, 0x18u);
        v3 = (uint32_t *)a1[3];
        v4 = a1[5];
        v22[0] = 1065353216;
        v22[4] = 1065353216;
        v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v3 + 12 * v4));
        gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v22, 0x3F800000u, 0x3F800000u, v5);
        memset(&v22[8], 0, 0x18u);
g4_m128_raw(v6) = *(unsigned int *)(v2 + 52);
        v7 = *(float *)(v2 + 40);
        v8 = v6;
g4_m128_lane<float>(v8, 0) = (float)(g4_m128_lane<float>(v6, 0) * *(float *)&v22[1]) + (float)(*(float *)v22 * v7);
        if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
          v9 = 0.0;
        else
          LODWORD(v9) =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
        *(float *)&v22[8] = v9;
g4_m128_raw(v10) = v22[3];
g4_m128_lane<float>(v6, 0) = (float)(g4_m128_lane<float>(v6, 0) * *(float *)&v22[4]) + (float)(v7 * *(float *)&v22[3]);
        if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
          v11 = 0.0;
        else
          LODWORD(v11) =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v12) = *(unsigned int *)(v2 + 56);
        *(float *)&v22[11] = v11;
        v14 = v12;
        v13 = *(float *)(v2 + 44);
g4_m128_lane<float>(v14, 0) = (float)(g4_m128_lane<float>(v12, 0) * *(float *)&v22[1]) + (float)(*(float *)v22 * v13);
        if (g4_m128_lane<float>(v14, 0) < -3.4028235e38f )
          v15 = 0.0;
        else
          LODWORD(v15) =g4_m128_lane<int32_t>(v14, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v14, *(__m128 *)&dword_1C7B5E0), 0);
        *(float *)&v22[9] = v15;
g4_m128_lane<float>(v12, 0) = (float)(g4_m128_lane<float>(v12, 0) * *(float *)&v22[4]) + (float)(v13 * *(float *)&v22[3]);
        if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
          v16 = 0.0;
        else
          LODWORD(v16) =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
        *(float *)&v22[12] = v16;
        v17 = *(float *)(v2 + 60);
        v18 = *(float *)(v2 + 48);
g4_m128_raw(v19) = v22[0];
g4_m128_lane<float>(v19, 0) = (float)((float)(*(float *)v22 * v18) + (float)(*(float *)&v22[1] * v17)) + *(float *)&v22[2];
        if (g4_m128_lane<float>(v19, 0) < -3.4028235e38f )
          v20 = 0.0;
        else
          LODWORD(v20) =g4_m128_lane<int32_t>(v19, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v19, *(__m128 *)&dword_1C7B5E0), 0);
        *(float *)&v22[10] = v20;
g4_m128_lane<float>(v10, 0) = (float)((float)(*(float *)&v22[3] * v18) + (float)(*(float *)&v22[4] * v17))
                        + *(float *)&v22[5];
        if (g4_m128_lane<float>(v10, 0) < -3.4028235e38f )
          v21 = 0.0;
        else
          LODWORD(v21) =g4_m128_lane<int32_t>(v10, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v10, *(__m128 *)&dword_1C7B5E0), 0);
        *(float *)&v22[13] = v21;
        *(float *)&v22[5] = v21;
        *(uint32_t *)(v2 + 40) = v22[8];
        *(uint32_t *)(v2 + 44) = v22[9];
        *(uint32_t *)(v2 + 48) = v22[10];
        *(uint32_t *)(v2 + 52) = v22[11];
        *(uint32_t *)(v2 + 56) = v22[12];
        result = v22[5];
        *(uint32_t *)(v2 + 60) = v22[5];
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::translate  (binary VA: 0x11326c0)
// Original: gameswf::ASMatrix::translate
// ----------------------------------------------------------------------------
int gameswf::ASMatrix::translate(__m128 a1, int a2)
{
  int result;
  int v3;
  float v4; // xmm1_4
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  uint32_t v9; // xmm4_4
  uint32_t v10; // xmm3_4
  __m128 v11;
  __m128 v12;
  uint32_t v13; // xmm4_4
  uint32_t v14; // xmm3_4
  float v15; // xmm3_4
  uint32_t v16; // xmm1_4
  uint32_t v17[15];

  result = a2;
  if ( *(int *)(a2 + 16) > 1 )
  {
    v3 = *(uint32_t *)(a2 + 4);
    if ( v3 != 0 )
    {
      result = G4_VCALL<int>(v3, 8, 30);
      if ( (uint8_t)result != 0 )
      {
        memset(&v17[6], 0, 0x18u);
        v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12) + 4 * (3 * *(uint32_t *)(a2 + 20) - 3)));
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                       + 12 * *(uint32_t *)(a2 + 20)));
        if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v5) = 0;
        else
          v5 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
        if ( v4 < -3.4028235e38f )
g4_m128_raw(v6) = 0;
        else
          v6 = _mm_and_ps(g4_m128_from<__m128>(LODWORD(v4)), _mm_cmple_ss(g4_m128_from<__m128>(LODWORD(v4)), *(__m128 *)&dword_1C7B5E0));
        memset(v17, 0, 0x18u);
g4_m128_raw(v7) = *(unsigned int *)(v3 + 40);
g4_m128_raw(v8) = *(unsigned int *)(v3 + 52);
        if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
          v9 = 0;
        else
          v9 =g4_m128_lane<int32_t>(v7, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0), 0);
        v17[0] = v9;
        if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
          v10 = 0;
        else
          v10 =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v11) = *(unsigned int *)(v3 + 44);
        v17[3] = v10;
g4_m128_raw(v12) = *(unsigned int *)(v3 + 56);
        if (g4_m128_lane<float>(v11, 0) < -3.4028235e38f )
          v13 = 0;
        else
          v13 =g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v11, *(__m128 *)&dword_1C7B5E0), 0);
        v17[1] = v13;
        if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
          v14 = 0;
        else
          v14 =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_lane<float>(v5, 0) =g4_m128_lane<float>(v5, 0) + *(float *)(v3 + 48);
        v17[4] = v14;
        v15 = *(float *)(v3 + 60);
        if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
        {
g4_m128_lane<float>(v6, 0) =g4_m128_lane<float>(v6, 0) + v15;
          v17[2] = 0;
          if (g4_m128_lane<float>(v6, 0) >= -3.4028235e38f )
            goto LABEL_18;
        }
        else
        {
g4_m128_lane<float>(v6, 0) =g4_m128_lane<float>(v6, 0) + v15;
          v17[2] =g4_m128_lane<int32_t>(v5, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0), 0);
          if (g4_m128_lane<float>(v6, 0) >= -3.4028235e38f )
          {
LABEL_18:
            v16 =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
LABEL_19:
            *(uint32_t *)(v3 + 40) = v17[0];
            *(uint32_t *)(v3 + 44) = v17[1];
            *(uint32_t *)(v3 + 48) = v17[2];
            *(uint32_t *)(v3 + 52) = v17[3];
            v17[5] = v16;
            *(uint32_t *)(v3 + 56) = v17[4];
            result = v17[5];
            *(uint32_t *)(v3 + 60) = v17[5];
            return result;
          }
        }
        v16 = 0;
        goto LABEL_19;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::concat  (binary VA: 0x1132900)
// Original: gameswf::ASMatrix::concat
// ----------------------------------------------------------------------------
void gameswf::ASMatrix::concat(int a1)
{
  int v1;
  int v2;
  int v3;
  __m128 v4;
  float v5; // xmm4_4
  __m128 v6;
  float v7; // xmm2_4
  __m128 v8;
  float v9; // xmm0_4
  __m128 v10;
  float v11; // xmm4_4
  __m128 v12;
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  __m128 v17;
  float v18; // xmm0_4
  float v19; // xmm3_4
  typedef int _g4_t_v20;
  typedef float _g4_t_v21[19];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);

  if ( *(int *)(a1 + 16) > 0 )
  {
    v1 = *(uint32_t *)(a1 + 4);
    if ( v1 != 0 && G4_VCALL<uint8_t>(v1, 8, 30) != 0 )
    {
      v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
      if ( *(uint8_t *)v2 == 5 )
      {
        v3 = *(uint32_t *)(v2 + 4);
        v20 = v3;
        if ( v3 != 0 && G4_VCALL<uint8_t>(v3, 8, 30) != 0 )
        {
          memset(v21, 0, 0x18u);
          std::memcpy(v21, (const void *)(v20 + 40), 24);
          memset(&v21[8], 0, 0x18u);
g4_m128_raw(v4) = *(unsigned int *)(v1 + 52);
          v5 = *(float *)(v1 + 40);
          v6 = v4;
g4_m128_lane<float>(v6, 0) = (float)(g4_m128_lane<float>(v4, 0) * v21[1]) + (float)(v21[0] * v5);
          if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
            v7 = 0.0;
          else
            LODWORD(v7) =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
          v21[8] = v7;
g4_m128_raw(v8) = LODWORD(v21[3]);
g4_m128_lane<float>(v4, 0) = (float)(g4_m128_lane<float>(v4, 0) * v21[4]) + (float)(v5 * v21[3]);
          if (g4_m128_lane<float>(v4, 0) < -3.4028235e38f )
            v9 = 0.0;
          else
            LODWORD(v9) =g4_m128_lane<int32_t>(v4, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v4, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v10) = *(unsigned int *)(v1 + 56);
          v21[11] = v9;
          v12 = v10;
          v11 = *(float *)(v1 + 44);
g4_m128_lane<float>(v12, 0) = (float)(g4_m128_lane<float>(v10, 0) * v21[1]) + (float)(v21[0] * v11);
          if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
            v13 = 0.0;
          else
            LODWORD(v13) =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
          v21[9] = v13;
g4_m128_lane<float>(v10, 0) = (float)(g4_m128_lane<float>(v10, 0) * v21[4]) + (float)(v11 * v21[3]);
          if (g4_m128_lane<float>(v10, 0) < -3.4028235e38f )
            v14 = 0.0;
          else
            LODWORD(v14) =g4_m128_lane<int32_t>(v10, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v10, *(__m128 *)&dword_1C7B5E0), 0);
          v21[12] = v14;
          v15 = *(float *)(v1 + 60);
          v16 = *(float *)(v1 + 48);
g4_m128_raw(v17) = LODWORD(v21[0]);
g4_m128_lane<float>(v17, 0) = (float)((float)(v21[0] * v16) + (float)(v21[1] * v15)) + v21[2];
          if (g4_m128_lane<float>(v17, 0) < -3.4028235e38f )
            v18 = 0.0;
          else
            LODWORD(v18) =g4_m128_lane<int32_t>(v17, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v17, *(__m128 *)&dword_1C7B5E0), 0);
          v21[10] = v18;
g4_m128_lane<float>(v8, 0) = (float)((float)(v21[3] * v16) + (float)(v21[4] * v15)) + v21[5];
          if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
            v19 = 0.0;
          else
            LODWORD(v19) =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
          *(float *)(v1 + 40) = v21[8];
          *(float *)(v1 + 44) = v21[9];
          *(float *)(v1 + 48) = v21[10];
          *(float *)(v1 + 52) = v21[11];
          *(float *)(v1 + 56) = v21[12];
          v21[13] = v19;
          *(float *)(v1 + 60) = v19;
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::init  (binary VA: 0x1132b90)
// Original: gameswf::ASMatrix::init
// ----------------------------------------------------------------------------
void gameswf::ASMatrix::init(__m128 a1, int a2)
{
  uint32_t *v2;
  int v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  uint32_t v7; // xmm0_4

  v2 = *(uint32_t **)(a2 + 4);
  if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v2 + 8))(*(uint32_t *)(a2 + 4), 30) == 0 )
    v2 = nullptr;
  v2[10] = gameswf::Matrix::identity[0];
  v2[11] = gameswf::Matrix::identity[1];
  v2[12] = gameswf::Matrix::identity[2];
  v2[13] = gameswf::Matrix::identity[3];
  v3 = gameswf::Matrix::identity[5];
  v2[14] = gameswf::Matrix::identity[4];
  v2[15] = v3;
  switch ( *(uint32_t *)(a2 + 16) )
  {
    case 0:
      return;
    case 1:
      goto LABEL_19;
    case 2:
g4_m128_raw(v6) = 0xFF7FFFFF;
      goto LABEL_16;
    case 3:
      goto LABEL_13;
    case 4:
g4_m128_raw(v5) = 0xFF7FFFFF;
      goto LABEL_10;
    case 5:
g4_m128_raw(v4) = 0xFF7FFFFF;
      goto LABEL_23;
    default:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 15)));
      if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
        v4 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
      else
g4_m128_raw(v4) = 0;
      v2[15] =g4_m128_lane<int32_t>(v4, 0);
LABEL_23:
g4_m128_lane<float>(v4, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 12)));
      if (g4_m128_lane<float>(v4, 0) < -3.4028235e38f )
g4_m128_raw(v5) = 0;
      else
        v5 = _mm_and_ps(v4, _mm_cmple_ss(v4, *(__m128 *)&dword_1C7B5E0));
      v2[12] =g4_m128_lane<int32_t>(v5, 0);
LABEL_10:
g4_m128_lane<float>(v5, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 9)));
      if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
      else
        a1 = _mm_and_ps(v5, _mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0));
      v2[14] =g4_m128_lane<int32_t>(a1, 0);
LABEL_13:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 6)));
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v6) = 0;
      else
        v6 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
      v2[13] =g4_m128_lane<int32_t>(v6, 0);
LABEL_16:
g4_m128_lane<float>(v6, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 3)));
      if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
      else
        a1 = _mm_and_ps(v6, _mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0));
      v2[11] =g4_m128_lane<int32_t>(a1, 0);
LABEL_19:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12) + 12
                                                                                              * *(uint32_t *)(a2 + 20)));
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v7 = 0;
      else
        v7 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      v2[10] = v7;
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::Construct  (binary VA: 0x1132e50)
// Original: gameswf::ASMatrix::ASMatrix
// ----------------------------------------------------------------------------
gameswf::ASMatrix::Self * gameswf::ASMatrix::Construct(gameswf::ASMatrix::Self *self, gameswf::Player::Self *a2, const gameswf::Matrix::Self *a3)
{
  char *v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  typedef unsigned int _g4_t_v13;
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[12];
  typedef uint8_t _g4_t_v17[12];
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[12];
  typedef uint8_t _g4_t_v20[12];
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef int16_t _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
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
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef gameswf::Self *_g4_t_v53;
  typedef int16_t _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef gameswf::Self *_g4_t_v59;
  typedef int16_t _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v17)) > _g4_s4 ? (52u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v18)) > _g4_s5 ? (64u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v19)) > _g4_s6 ? (76u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v20)) > _g4_s7 ? (88u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v21)) > _g4_s8 ? (100u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (101u + sizeof(_g4_t_v22)) > _g4_s9 ? (101u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v23)) > _g4_s10 ? (112u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v24)) > _g4_s11 ? (116u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (118u + sizeof(_g4_t_v25)) > _g4_s12 ? (118u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (119u + sizeof(_g4_t_v26)) > _g4_s13 ? (119u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v27)) > _g4_s14 ? (132u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (133u + sizeof(_g4_t_v28)) > _g4_s15 ? (133u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v29)) > _g4_s16 ? (144u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v30)) > _g4_s17 ? (148u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (150u + sizeof(_g4_t_v31)) > _g4_s18 ? (150u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (151u + sizeof(_g4_t_v32)) > _g4_s19 ? (151u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (164u + sizeof(_g4_t_v33)) > _g4_s20 ? (164u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (165u + sizeof(_g4_t_v34)) > _g4_s21 ? (165u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v35)) > _g4_s22 ? (176u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v36)) > _g4_s23 ? (180u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (182u + sizeof(_g4_t_v37)) > _g4_s24 ? (182u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (183u + sizeof(_g4_t_v38)) > _g4_s25 ? (183u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (196u + sizeof(_g4_t_v39)) > _g4_s26 ? (196u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (197u + sizeof(_g4_t_v40)) > _g4_s27 ? (197u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (208u + sizeof(_g4_t_v41)) > _g4_s28 ? (208u + sizeof(_g4_t_v41)) : _g4_s28,
    _g4_s30 = (212u + sizeof(_g4_t_v42)) > _g4_s29 ? (212u + sizeof(_g4_t_v42)) : _g4_s29,
    _g4_s31 = (214u + sizeof(_g4_t_v43)) > _g4_s30 ? (214u + sizeof(_g4_t_v43)) : _g4_s30,
    _g4_s32 = (215u + sizeof(_g4_t_v44)) > _g4_s31 ? (215u + sizeof(_g4_t_v44)) : _g4_s31,
    _g4_s33 = (228u + sizeof(_g4_t_v45)) > _g4_s32 ? (228u + sizeof(_g4_t_v45)) : _g4_s32,
    _g4_s34 = (229u + sizeof(_g4_t_v46)) > _g4_s33 ? (229u + sizeof(_g4_t_v46)) : _g4_s33,
    _g4_s35 = (240u + sizeof(_g4_t_v47)) > _g4_s34 ? (240u + sizeof(_g4_t_v47)) : _g4_s34,
    _g4_s36 = (244u + sizeof(_g4_t_v48)) > _g4_s35 ? (244u + sizeof(_g4_t_v48)) : _g4_s35,
    _g4_s37 = (246u + sizeof(_g4_t_v49)) > _g4_s36 ? (246u + sizeof(_g4_t_v49)) : _g4_s36,
    _g4_s38 = (247u + sizeof(_g4_t_v50)) > _g4_s37 ? (247u + sizeof(_g4_t_v50)) : _g4_s37,
    _g4_s39 = (260u + sizeof(_g4_t_v51)) > _g4_s38 ? (260u + sizeof(_g4_t_v51)) : _g4_s38,
    _g4_s40 = (261u + sizeof(_g4_t_v52)) > _g4_s39 ? (261u + sizeof(_g4_t_v52)) : _g4_s39,
    _g4_s41 = (272u + sizeof(_g4_t_v53)) > _g4_s40 ? (272u + sizeof(_g4_t_v53)) : _g4_s40,
    _g4_s42 = (276u + sizeof(_g4_t_v54)) > _g4_s41 ? (276u + sizeof(_g4_t_v54)) : _g4_s41,
    _g4_s43 = (278u + sizeof(_g4_t_v55)) > _g4_s42 ? (278u + sizeof(_g4_t_v55)) : _g4_s42,
    _g4_s44 = (279u + sizeof(_g4_t_v56)) > _g4_s43 ? (279u + sizeof(_g4_t_v56)) : _g4_s43,
    _g4_s45 = (292u + sizeof(_g4_t_v57)) > _g4_s44 ? (292u + sizeof(_g4_t_v57)) : _g4_s44,
    _g4_s46 = (293u + sizeof(_g4_t_v58)) > _g4_s45 ? (293u + sizeof(_g4_t_v58)) : _g4_s45,
    _g4_s47 = (304u + sizeof(_g4_t_v59)) > _g4_s46 ? (304u + sizeof(_g4_t_v59)) : _g4_s46,
    _g4_s48 = (308u + sizeof(_g4_t_v60)) > _g4_s47 ? (308u + sizeof(_g4_t_v60)) : _g4_s47,
    _g4_s49 = (310u + sizeof(_g4_t_v61)) > _g4_s48 ? (310u + sizeof(_g4_t_v61)) : _g4_s48,
    _g4_s50 = (311u + sizeof(_g4_t_v62)) > _g4_s49 ? (311u + sizeof(_g4_t_v62)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 101u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 118u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 119u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 132u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 133u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 148u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 150u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 151u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 164u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 165u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 176u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 180u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 182u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 183u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 196u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 197u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 208u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 212u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 214u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 215u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 228u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 229u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 240u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 244u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 246u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 247u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 260u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 261u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 272u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 276u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 278u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 279u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 292u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 293u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 304u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 308u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 310u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 311u);

  v3 = (char *)self + 40;
  gameswf::ASObject::ASObject(self, a2);
  v13 = 24;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FDC8);
  if ( (((unsigned int)(uintptr_t)(self) + 40) & 1) != 0 )
  {
    v3 = (char *)self + 41;
    *((uint8_t *)self + 40) = 0;
    v13 = 23;
    if ( (((unsigned int)(uintptr_t)(self) + 41) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v3 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v3 = 0;
  v3 += 2;
  v13 -= 2;
LABEL_3:
  memset(v3, 0, 4 * (v13 >> 2));
  v4 = &v3[4 * (v13 >> 2)];
  if ( (v13 & 2) != 0 )
  {
    *(uint16_t *)v4 = 0;
    v4 += 2;
  }
  if ( (v13 & 1) != 0 )
    *v4 = 0;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 14) = 1065353216;
  if ( a3 != nullptr )
  {
    *((uint32_t *)self + 10) = *(uint32_t *)a3;
    *((uint32_t *)self + 11) = *((uint32_t *)a3 + 1);
    *((uint32_t *)self + 12) = *((uint32_t *)a3 + 2);
    *((uint32_t *)self + 13) = *((uint32_t *)a3 + 3);
    *((uint32_t *)self + 14) = *((uint32_t *)a3 + 4);
    *((uint32_t *)self + 15) = *((uint32_t *)a3 + 5);
  }
  v14[0] = 0;
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASMatrix::translate));
  v21 = 1;
  v22 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v21, 9);
  v5 = (gameswf::Self *)&v22;
  if ( v21 == -1 )
    v5 = v23;
  gameswf::Strcpy_s(v5, &byte_9[1], (gameswf::Self *)"translate");
  v24 = -1;
  v25 = 127;
  v26 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v21, (const gameswf::ASValue::Self *)v14);
  if ( v21 == -1 && (v26 & 1) != 0 )
    gameswf::free_internal(v23);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v15[0] = 0;
  v15[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)(gameswf::ASMatrix::rotate));
  v27 = 1;
  v28 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v27, 6);
  v6 = (gameswf::Self *)&v28;
  if ( v27 == -1 )
    v6 = v29;
  gameswf::Strcpy_s(v6, (char *)&loc_6 + 1, (gameswf::Self *)"rotate");
  v30 = -1;
  v31 = 127;
  v32 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v27, (const gameswf::ASValue::Self *)v15);
  if ( v27 == -1 && (v32 & 1) != 0 )
    gameswf::free_internal(v29);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  v16[0] = 0;
  v16[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v16, (int)(uintptr_t)(gameswf::ASMatrix::scale));
  v33 = 1;
  v34 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v33, 5);
  v7 = (gameswf::Self *)&v34;
  if ( v33 == -1 )
    v7 = v35;
  gameswf::Strcpy_s(v7, (char *)&loc_6, (gameswf::Self *)"scale");
  v36 = -1;
  v37 = 127;
  v38 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v33, (const gameswf::ASValue::Self *)v16);
  if ( v33 == -1 && (v38 & 1) != 0 )
    gameswf::free_internal(v35);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  v17[0] = 0;
  v17[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v17, (int)(uintptr_t)(gameswf::ASMatrix::concat));
  v39 = 1;
  v40 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v39, 6);
  v8 = (gameswf::Self *)&v40;
  if ( v39 == -1 )
    v8 = v41;
  gameswf::Strcpy_s(v8, (char *)&loc_6 + 1, (gameswf::Self *)"concat");
  v42 = -1;
  v43 = 127;
  v44 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v39, (const gameswf::ASValue::Self *)v17);
  if ( v39 == -1 && (v44 & 1) != 0 )
    gameswf::free_internal(v41);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  v18[0] = 0;
  v18[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v18, (int)(uintptr_t)(gameswf::ASMatrix::clone));
  v45 = 1;
  v46 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v45, 5);
  v9 = (gameswf::Self *)&v46;
  if ( v45 == -1 )
    v9 = v47;
  gameswf::Strcpy_s(v9, (char *)&loc_6, (gameswf::Self *)"clone");
  v48 = -1;
  v49 = 127;
  v50 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v45, (const gameswf::ASValue::Self *)v18);
  if ( v45 == -1 && (v50 & 1) != 0 )
    gameswf::free_internal(v47);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  v19[0] = 0;
  v19[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v19, (int)(uintptr_t)(gameswf::ASMatrix::invert));
  v51 = 1;
  v52 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v51, 6);
  v10 = (gameswf::Self *)&v52;
  if ( v51 == -1 )
    v10 = v53;
  gameswf::Strcpy_s(v10, (char *)&loc_6 + 1, (gameswf::Self *)"invert");
  v54 = -1;
  v55 = 127;
  v56 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v51, (const gameswf::ASValue::Self *)v19);
  if ( v51 == -1 && (v56 & 1) != 0 )
    gameswf::free_internal(v53);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  v20[0] = 0;
  v20[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v20, (int)(uintptr_t)(gameswf::ASMatrix::transformPoint));
  v57 = 1;
  v58 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v57, 14);
  v11 = (gameswf::Self *)&v58;
  if ( v57 == -1 )
    v11 = v59;
  gameswf::Strcpy_s(v11, &byte_9[6], (gameswf::Self *)"transformPoint");
  v60 = -1;
  v61 = 127;
  v62 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v57, (const gameswf::ASValue::Self *)v20);
  if ( v57 != -1 || (v62 & 1) == 0 )
    return (gameswf::ASMatrix::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
  gameswf::free_internal(v59);
  return (gameswf::ASMatrix::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::newOp  (binary VA: 0x1133680)
// Original: gameswf::ASMatrix::newOp
// ----------------------------------------------------------------------------
gameswf::ASMatrix::Self * gameswf::ASMatrix::newOp(gameswf::ASMatrix::Self *self)
{
  gameswf::ASMatrix::Self *v1;

  v1 = (gameswf::ASMatrix::Self *)opNew(0x40u);
  gameswf::ASMatrix::Construct(v1, (gameswf::Player::Self *)(self), nullptr);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::ctor  (binary VA: 0x11336e0)
// Original: gameswf::ASMatrix::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASMatrix::ctor(__m128 a1, int a2)
{
  int v2;
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  gameswf::ASMatrix::Self *v5;

  v2 = *(uint32_t *)(a2 + 12);
  v3 = *(gameswf::Player::Self **)(v2 + 212);
  if ( v3 != nullptr )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = nullptr;
    }
  }
  v5 = (gameswf::ASMatrix::Self *)opNew(0x40u);
  gameswf::ASMatrix::Construct(v5, v3, nullptr);
  if ( v5 != nullptr )
  {
    gameswf::RefCounted::addRef(v5);
    *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v5);
    gameswf::ASMatrix::init(a1, a2);
    gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a2, v5);
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v5);
  }
  else
  {
    *(uint32_t *)(a2 + 4) = 0;
    gameswf::ASMatrix::init(a1, a2);
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a2, nullptr);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::clone  (binary VA: 0x1133a20)
// Original: gameswf::ASMatrix::clone
// ----------------------------------------------------------------------------
void gameswf::ASMatrix::clone(int a1)
{
  uint32_t *v1;
  int v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::RefCounted::Self *Matrix;
  gameswf::RefCounted::Self *v6;

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 30) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 12);
    v3 = *(gameswf::Self **)(v2 + 212);
    if ( v3 != nullptr )
    {
      v4 = *(gameswf::Self **)(v2 + 208);
      if ( *((uint8_t *)v4 + 2) == 0 )
      {
        if ( (*(uint16_t *)v4)-- == 1 )
          gameswf::free_internal(v4);
        *(uint32_t *)(v2 + 208) = 0;
        *(uint32_t *)(v2 + 212) = 0;
        v3 = nullptr;
      }
    }
    Matrix = (gameswf::RefCounted::Self *)(gameswf::createMatrix(v3, nullptr));
    v6 = Matrix;
    if ( Matrix != nullptr )
      gameswf::RefCounted::addRef(Matrix);
    *((uint32_t *)v6 + 10) = v1[10];
    *((uint32_t *)v6 + 11) = v1[11];
    *((uint32_t *)v6 + 12) = v1[12];
    *((uint32_t *)v6 + 13) = v1[13];
    *((uint32_t *)v6 + 14) = v1[14];
    *((uint32_t *)v6 + 15) = v1[15];
    gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v6);
    gameswf::RefCounted::dropRef(v6);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::is  (binary VA: 0x1133b30)
// Original: gameswf::ASMatrix::is
// ----------------------------------------------------------------------------
bool gameswf::ASMatrix::is(gameswf::ASMatrix::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 30 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::Destroy  (binary VA: 0x1133b50)
// Original: gameswf::ASMatrix::~ASMatrix
// ----------------------------------------------------------------------------
void gameswf::ASMatrix::Destroy(gameswf::ASMatrix::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FDC8);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMatrix::Destroy_ea1133b80  (binary VA: 0x1133b80)
// Original: gameswf::ASMatrix::~ASMatrix
// ----------------------------------------------------------------------------
void gameswf::ASMatrix::Destroy_ea1133b80(gameswf::ASMatrix::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FDC8);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


