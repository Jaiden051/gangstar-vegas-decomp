#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASColorTransform.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::init  (binary VA: 0x118efa0)
// Original: gameswf::ASColorTransform::init
// ----------------------------------------------------------------------------
void gameswf::ASColorTransform::init(__m128 a1, int a2)
{
  uint32_t *v2;
  int v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  uint32_t v8; // xmm0_4

  v2 = *(uint32_t **)(a2 + 4);
  if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v2 + 8))(*(uint32_t *)(a2 + 4), 32) == 0 )
    v2 = nullptr;
  v2[10] = gameswf::CxForm::identity[0];
  v2[11] = gameswf::CxForm::identity[1];
  v2[12] = gameswf::CxForm::identity[2];
  v2[13] = gameswf::CxForm::identity[3];
  v2[14] = gameswf::CxForm::identity[4];
  v2[15] = gameswf::CxForm::identity[5];
  v3 = gameswf::CxForm::identity[7];
  v2[16] = gameswf::CxForm::identity[6];
  v2[17] = v3;
  switch ( *(uint32_t *)(a2 + 16) )
  {
    case 1:
g4_m128_raw(v7) = 0xFF7FFFFF;
      goto LABEL_26;
    case 2:
      goto LABEL_23;
    case 3:
g4_m128_raw(v6) = 0xFF7FFFFF;
      goto LABEL_20;
    case 4:
      goto LABEL_17;
    case 5:
g4_m128_raw(v5) = 0xFF7FFFFF;
      goto LABEL_14;
    case 6:
      goto LABEL_11;
    case 7:
g4_m128_raw(v4) = 0xFF7FFFFF;
      goto LABEL_8;
    case 8:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 21)));
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v4) = 0;
      else
        v4 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
      v2[17] =g4_m128_lane<int32_t>(v4, 0);
LABEL_8:
g4_m128_lane<float>(v4, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 18)));
      if (g4_m128_lane<float>(v4, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
      else
        a1 = _mm_and_ps(v4, _mm_cmple_ss(v4, *(__m128 *)&dword_1C7B5E0));
      v2[15] =g4_m128_lane<int32_t>(a1, 0);
LABEL_11:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 15)));
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v5) = 0;
      else
        v5 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
      v2[13] =g4_m128_lane<int32_t>(v5, 0);
LABEL_14:
g4_m128_lane<float>(v5, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 12)));
      if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
      else
        a1 = _mm_and_ps(v5, _mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0));
      v2[11] =g4_m128_lane<int32_t>(a1, 0);
LABEL_17:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 9)));
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v6) = 0;
      else
        v6 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
      v2[16] =g4_m128_lane<int32_t>(v6, 0);
LABEL_20:
g4_m128_lane<float>(v6, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 6)));
      if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
      else
        a1 = _mm_and_ps(v6, _mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0));
      v2[14] =g4_m128_lane<int32_t>(a1, 0);
LABEL_23:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a2 + 20) - 3)));
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v7) = 0;
      else
        v7 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
      v2[12] =g4_m128_lane<int32_t>(v7, 0);
LABEL_26:
g4_m128_lane<float>(v7, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a2 + 12) + 12
                                                                                              * *(uint32_t *)(a2 + 20)));
      if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
        v8 = 0;
      else
        v8 =g4_m128_lane<int32_t>(v7, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0), 0);
      v2[10] = v8;
      break;
    default:
      return;
  }
}



// ============================================================================
// Address:   0x118f320 (size: 186 bytes)
// Symbol:    _ZN7gameswf16ASColorTransformC2EPNS_6PlayerEPKNS_6CxFormE
// Demangled: gameswf::ASColorTransform::ASColorTransform(gameswf::Player *,gameswf::CxForm const*)
// ============================================================================
// Alternative name is '_ZN7gameswf16ASColorTransformC1EPNS_6PlayerEPKNS_6CxFormE'
void (**gameswf::ASColorTransform::ASColorTransform(
        gameswf::ASColorTransform::Self *self,
        gameswf::Player::Self *a2,
        const gameswf::CxForm::Self *a3))(gameswf::ASColorTransform::Self * self)
{
  void (**result)(gameswf::ASColorTransform::Self *);

  gameswf::ASObject::ASObject(self, a2);
  *((uint32_t *)self + 10) = 1065353216;
  result = (void (**)(gameswf::ASColorTransform::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091988));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091988);
  *((uint32_t *)self + 12) = 1065353216;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 16) = 1065353216;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0;
  if ( a3 != nullptr )
  {
    *((uint32_t *)self + 10) = *(uint32_t *)a3;
    *((uint32_t *)self + 11) = *((uint32_t *)a3 + 1);
    *((uint32_t *)self + 12) = *((uint32_t *)a3 + 2);
    *((uint32_t *)self + 13) = *((uint32_t *)a3 + 3);
    *((uint32_t *)self + 14) = *((uint32_t *)a3 + 4);
    *((uint32_t *)self + 15) = *((uint32_t *)a3 + 5);
    *((uint32_t *)self + 16) = *((uint32_t *)a3 + 6);
    result = *((void (***)(gameswf::ASColorTransform::Self *))a3 + 7);
    *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::newOp  (binary VA: 0x118f3e0)
// Original: gameswf::ASColorTransform::newOp
// ----------------------------------------------------------------------------
gameswf::ASColorTransform::Self * gameswf::ASColorTransform::newOp(gameswf::ASColorTransform::Self *self)
{
  gameswf::ASColorTransform::Self *v1;

  v1 = (gameswf::ASColorTransform::Self *)opNew(0x48u);
  gameswf::ASColorTransform::ASColorTransform(v1, self, nullptr);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::ctor  (binary VA: 0x118f440)
// Original: gameswf::ASColorTransform::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASColorTransform::ctor(__m128 a1, int a2)
{
  int v2;
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  gameswf::ASColorTransform::Self *v5;

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
  v5 = (gameswf::ASColorTransform::Self *)opNew(0x48u);
  gameswf::ASColorTransform::ASColorTransform(v5, v3, nullptr);
  if ( v5 != nullptr )
  {
    gameswf::RefCounted::addRef(v5);
    *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v5);
    gameswf::ASColorTransform::init(a1, a2);
    gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a2, v5);
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v5);
  }
  else
  {
    *(uint32_t *)(a2 + 4) = 0;
    gameswf::ASColorTransform::init(a1, a2);
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a2, nullptr);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::getMemberByName  (binary VA: 0x1190230)
// Original: gameswf::ASColorTransform::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASColorTransform::getMemberByName(gameswf::ASColorTransform::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  int result;

  switch ( sub_118F780((char *)a2) )
  {
    case 1:
      gameswf::ASValue::setDouble(a3, *((float *)self + 10));
      result = 1;
      break;
    case 2:
      gameswf::ASValue::setDouble(a3, *((float *)self + 12));
      result = 1;
      break;
    case 3:
      gameswf::ASValue::setDouble(a3, *((float *)self + 14));
      result = 1;
      break;
    case 4:
      gameswf::ASValue::setDouble(a3, *((float *)self + 16));
      result = 1;
      break;
    case 5:
      gameswf::ASValue::setDouble(a3, *((float *)self + 11));
      result = 1;
      break;
    case 6:
      gameswf::ASValue::setDouble(a3, *((float *)self + 13));
      result = 1;
      break;
    case 7:
      gameswf::ASValue::setDouble(a3, *((float *)self + 15));
      result = 1;
      break;
    case 8:
      gameswf::ASValue::setDouble(a3, *((float *)self + 17));
      result = 1;
      break;
    case 9:
      gameswf::ASValue::dropRefs(a3);
      *(uint8_t *)a3 = 0;
      result = 1;
      break;
    default:
      result = gameswf::ASObject::getMemberByName(self, a2, a3);
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::setMemberByName  (binary VA: 0x11903c0)
// Original: gameswf::ASColorTransform::setMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASColorTransform::setMemberByName(__m128 a1, gameswf::ASColorTransform::Self *self, const gameswf::StringI::Self *a3, const gameswf::ASValue::Self *a4)
{
  int result;
  int v5;
  __m128 v6;
  uint32_t v7; // xmm0_4
  uint32_t v8; // xmm0_4
  uint32_t v9; // xmm0_4
  uint32_t v10; // xmm0_4
  uint32_t v11; // xmm0_4
  uint32_t v12; // xmm0_4
  uint32_t v13; // xmm0_4
  uint32_t v14; // xmm0_4

  switch ( sub_118F780((char *)a3) )
  {
    case 1:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v8 = 0;
      else
        v8 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 10) = v8;
      result = 1;
      break;
    case 2:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v9 = 0;
      else
        v9 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 12) = v9;
      result = 1;
      break;
    case 3:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v13 = 0;
      else
        v13 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 14) = v13;
      result = 1;
      break;
    case 4:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v14 = 0;
      else
        v14 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 16) = v14;
      result = 1;
      break;
    case 5:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v10 = 0;
      else
        v10 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 11) = v10;
      result = 1;
      break;
    case 6:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v11 = 0;
      else
        v11 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 13) = v11;
      result = 1;
      break;
    case 7:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
        goto LABEL_9;
      v7 = 0;
      goto LABEL_10;
    case 8:
g4_m128_lane<float>(a1, 0) = gameswf::ASValue::toNumber(a4);
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v12 = 0;
      else
        v12 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
      *((uint32_t *)self + 17) = v12;
      result = 1;
      break;
    case 9:
      v5 = gameswf::ASValue::toInt(a4);
      *((uint32_t *)self + 10) = 0;
      *((uint32_t *)self + 12) = 0;
g4_m128_lane<float>(a1, 0) = (float)BYTE2(v5);
      *((uint32_t *)self + 14) = 0;
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v6) = (g4_int128_t)_mm_cvtsi32_si128(0);
      else
        v6 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
      *((uint32_t *)self + 11) =g4_m128_lane<int32_t>(v6, 0);
g4_m128_lane<float>(v6, 0) = (float)BYTE1(v5);
      if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
g4_m128_raw(a1) = (g4_int128_t)_mm_cvtsi32_si128(0);
      else
        a1 = _mm_and_ps(v6, _mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0));
      *((uint32_t *)self + 13) =g4_m128_lane<int32_t>(a1, 0);
g4_m128_lane<float>(a1, 0) = (float)(uint8_t)v5;
      if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
        v7 = 0;
      else
LABEL_9:
        v7 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
LABEL_10:
      *((uint32_t *)self + 15) = v7;
      result = 1;
      break;
    default:
      result = gameswf::ASObject::setMemberByName(self, a3, a4);
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::is  (binary VA: 0x1190720)
// Original: gameswf::ASColorTransform::is
// ----------------------------------------------------------------------------
bool gameswf::ASColorTransform::is(gameswf::ASColorTransform::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 32 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::Destroy  (binary VA: 0x1190740)
// Original: gameswf::ASColorTransform::~ASColorTransform
// ----------------------------------------------------------------------------
void gameswf::ASColorTransform::Destroy(gameswf::ASColorTransform::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091988);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColorTransform::Destroy_ea1190770  (binary VA: 0x1190770)
// Original: gameswf::ASColorTransform::~ASColorTransform
// ----------------------------------------------------------------------------
void gameswf::ASColorTransform::Destroy_ea1190770(gameswf::ASColorTransform::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091988);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


