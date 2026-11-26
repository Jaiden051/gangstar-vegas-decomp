#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASEventDispatcher.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::init  (binary VA: 0x1164400)
// Original: gameswf::ASEventDispatcher::init
// ----------------------------------------------------------------------------
void gameswf::ASEventDispatcher::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::clearRefs  (binary VA: 0x1164ae0)
// Original: gameswf::ASEventDispatcher::clearRefs
// ----------------------------------------------------------------------------
char * gameswf::ASEventDispatcher::clearRefs(gameswf::ASEventDispatcher::Self *self, int a2)
{
  char *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  int v20;
  char *v21;
  int v22;
  int i;

  gameswf::ASObject::clearRefs(self, a2);
  for ( i = 0; i != 2; ++i )
  {
    result = (char *)self + 4 * i + 32;
    v3 = *((uint32_t *)self + i + 10);
    v21 = (char *)self + 4 * i + 40;
    if ( v3 != 0 )
    {
      result = *(char **)(v3 + 4);
      v20 = 0;
      if ( (int)(uintptr_t)(result) >= 0 && *(uint32_t *)(v3 + 8) == -2 )
      {
        v12 = 52;
        v13 = 1;
        do
        {
          v14 = v13;
          if ( (int)(uintptr_t)(result) < v13 )
            break;
          v15 = *(uint32_t *)(v3 + v12);
          ++v13;
          v12 += 44;
        }
        while ( v15 == -2 );
        v20 = v14;
      }
      if ( (gameswf::ASEventDispatcher::Self *)((char *)self + 4 * i) != (gameswf::ASEventDispatcher::Self *)-40 )
      {
LABEL_11:
        v22 = 44 * v20 + 8;
        result = *(char **)v21;
        while ( result != nullptr )
        {
          v4 = *((uint32_t *)result + 1);
          if ( v20 > v4 )
            break;
          v19 = &result[v22];
          if ( *(int *)&result[v22 + 32] > 0 )
          {
            v6 = 0;
            v7 = 0;
            v8 = &result[v22];
            do
            {
              v10 = (uint32_t *)(*((uint32_t *)v8 + 7) + v6);
              v11 = v10[1];
              if ( v11 != 0 )
              {
                if ( *(uint8_t *)(*v10 + 2) != 0 )
                {
                  if ( a2 > *(uint32_t *)(v11 + 20) )
                  {
                    v10[1] = 0;
                    gameswf::smart_ptr_proxy::set_ref(v10, 0);
                  }
                }
                else
                {
                  gameswf::smart_ptr_proxy::set_ref(v10, 0);
                  v10[1] = 0;
                }
              }
              v9 = v10[3];
              if ( v9 != 0 )
              {
                if ( *(uint8_t *)(v10[2] + 2) != 0 )
                {
                  if ( a2 > *(uint32_t *)(v9 + 20) )
                  {
                    v10[3] = 0;
                    gameswf::smart_ptr_proxy::set_ref(v10 + 2, 0);
                  }
                }
                else
                {
                  gameswf::smart_ptr_proxy::set_ref(v10 + 2, 0);
                  v10[3] = 0;
                }
              }
              v8 = v19;
              ++v7;
              v6 += 24;
            }
            while ( *((uint32_t *)v19 + 8) > v7 );
            result = *(char **)v21;
            v4 = *(uint32_t *)(*(uint32_t *)v21 + 4);
            if ( v4 < v20 )
              continue;
          }
          v5 = v20 + 1;
          if ( v20 + 1 <= v4 && *(uint32_t *)&result[44 * v5 + 8] == -2 )
          {
            v16 = v20 + 2;
            v17 = 44 * (v20 + 2) + 8;
            do
            {
              v5 = v16;
              if ( v16 > v4 )
                break;
              v18 = *(uint32_t *)&result[v17];
              ++v16;
              v17 += 44;
            }
            while ( v18 == -2 );
          }
          v20 = v5;
          goto LABEL_11;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::createClass  (binary VA: 0x1165300)
// Original: gameswf::ASEventDispatcher::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASEventDispatcher::createClass(gameswf::ASEventDispatcher::Self *self)
{
  gameswf::Self **v1;
  typedef uint8_t _g4_t_v3[12];
  typedef uint8_t _g4_t_v4[12];
  typedef uint8_t _g4_t_v5[12];
  typedef uint8_t _g4_t_v6[12];
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[20];
  typedef uint8_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[20];
  typedef uint8_t _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[48];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v6)) > _g4_s3 ? (36u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v7)) > _g4_s4 ? (48u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v8)) > _g4_s5 ? (60u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v9)) > _g4_s6 ? (80u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v10)) > _g4_s7 ? (100u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (120u + sizeof(_g4_t_v11)) > _g4_s8 ? (120u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (140u + sizeof(_g4_t_v12)) > _g4_s9 ? (140u + sizeof(_g4_t_v12)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 48u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 60u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 80u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 100u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 120u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 140u);

  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"EventDispatcher");
  v3[0] = 0;
  v3[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v3, (int)(uintptr_t)(gameswf::ASEventDispatcher::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    self,
    (const gameswf::String::Self *)v8,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASEventDispatcher::newOp,
    (const gameswf::ASValue::Self *)v3,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
  sub_59CE50((int)(uintptr_t)(v8));
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)((int (*)(int))gameswf::ASEventDispatcher::addEventListener));
  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)"addEventListener");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v9, (const gameswf::ASValue::Self *)v4);
  sub_59CE50((int)(uintptr_t)(v9));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)((int (*)(int))gameswf::ASEventDispatcher::removeEventListener));
  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)"removeEventListener");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v10, (const gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v10));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  v6[0] = 0;
  v6[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v6, (int)(uintptr_t)((int (*)(int))gameswf::ASEventDispatcher::hasEventListener));
  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"hasEventListener");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v11, (const gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v11));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)((int (*)(int))gameswf::ASEventDispatcher::dispatchEvent));
  sub_776320((gameswf::String::Self *)v12, (gameswf::Self *)"dispatchEvent");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v12, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v12));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  return v1;
}



// ============================================================================
// Address:   0x1165510 (size: 81 bytes)
// Symbol:    _ZN7gameswf17ASEventDispatcherC2EPNS_6PlayerE
// Demangled: gameswf::ASEventDispatcher::ASEventDispatcher(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf17ASEventDispatcherC1EPNS_6PlayerE'
void (**gameswf::ASEventDispatcher::ASEventDispatcher(
        gameswf::ASEventDispatcher::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASEventDispatcher::Self * self)
{
  gameswf::ASObject::ASObject(self, a2);
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  *((uint32_t *)self + 11) = 0;
  return (void (**)(gameswf::ASEventDispatcher::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091248));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::newOp  (binary VA: 0x1165570)
// Original: gameswf::ASEventDispatcher::newOp
// ----------------------------------------------------------------------------
gameswf::ASEventDispatcher::Self * gameswf::ASEventDispatcher::newOp(gameswf::ASEventDispatcher::Self *self)
{
  gameswf::ASEventDispatcher::Self *v1;

  v1 = (gameswf::ASEventDispatcher::Self *)opNew(0x30u);
  gameswf::ASEventDispatcher::ASEventDispatcher(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::hasCaptureEventListener  (binary VA: 0x1165930)
// Original: gameswf::ASEventDispatcher::hasCaptureEventListener
// ----------------------------------------------------------------------------
bool gameswf::ASEventDispatcher::hasCaptureEventListener(gameswf::ASEventDispatcher::Self *self, const gameswf::String::Self *a2)
{
  int index;
  bool result;
  int v4;

  index = gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(
            (gameswf::ASEventDispatcher::Self *)((char *)self + 40),
            a2);
  result = false;
  if ( index >= 0 && self != (gameswf::ASEventDispatcher::Self *)-40 )
  {
    v4 = *((uint32_t *)self + 10);
    if ( v4 != 0 && index <= *(uint32_t *)(v4 + 4) )
      return *(uint32_t *)(v4 + 44 * index + 40) > 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::dispatchCaptureEvent  (binary VA: 0x11659a0)
// Original: gameswf::ASEventDispatcher::dispatchCaptureEvent
// ----------------------------------------------------------------------------
int gameswf::ASEventDispatcher::dispatchCaptureEvent(gameswf::ASEventDispatcher::Self *self, gameswf::ASEvent::Self *a2)
{
  int WeakProxy;
  gameswf::ASEventDispatcher::Self *v3;
  int v4;
  int v5;
  gameswf::ASEventDispatcher::Self **v6;
  gameswf::ASEventDispatcher::Self *v7;
  int v8;
  gameswf::ASEvent::Self *v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  typedef gameswf::ASEvent::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[140];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v17)) > _g4_s1 ? (20u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v18)) > _g4_s2 ? (32u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  *((uint32_t *)a2 + 16) = 0;
  *((uint32_t *)a2 + 18) = (uint32_t)(uintptr_t)(self);
  if ( self != nullptr )
  {
    WeakProxy = gameswf::RefCounted::getWeakProxy(self);
    gameswf::smart_ptr_proxy::set_ref((char *)a2 + 68, WeakProxy);
  }
  else
  {
    gameswf::smart_ptr_proxy::set_ref((char *)a2 + 68, 0);
  }
  v3 = self;
  v17 = 0;
  if ( self == nullptr )
    goto LABEL_30;
  if ( G4_VCALL<uint8_t>(self, 8, 1) != 0 )
  {
    if ( gameswf::ASEventDispatcher::hasCaptureEventListener(self, (gameswf::ASEvent::Self *)((char *)a2 + 40)) )
    {
      v4 = 0;
      v5 = 1;
LABEL_7:
      v6 = (gameswf::ASEventDispatcher::Self **)&v18[4 * v4];
      if ( v6 != nullptr )
        *v6 = v3;
      v17 = v5;
    }
    while ( 1 )
    {
      v7 = *((gameswf::ASEventDispatcher::Self **)v3 + 14);
      if ( v7 == nullptr )
        break;
      if ( *(uint8_t *)(*((uint32_t *)v3 + 13) + 2) == 0 )
      {
        gameswf::smart_ptr_proxy::set_ref((char *)v3 + 52, 0);
        *((uint32_t *)v3 + 14) = 0;
        break;
      }
      v3 = *((gameswf::ASEventDispatcher::Self **)v3 + 14);
      if ( gameswf::ASEventDispatcher::hasCaptureEventListener(v7, (gameswf::ASEvent::Self *)((char *)a2 + 40)) )
      {
        v4 = v17;
        v5 = v17 + 1;
        goto LABEL_7;
      }
    }
  }
  v8 = v17 - 1;
  if ( v17 - 1 >= 0 )
  {
    v9 = a2;
    v10 = 4 * v8;
    v11 = *((uint8_t *)a2 + 60);
    do
    {
      while ( v11 == 0 || *((uint8_t *)v9 + 61) != 0 )
      {
        --v8;
        v10 -= 4;
        if ( v8 == -1 )
          goto LABEL_21;
      }
      --v8;
      v12 = *(uint32_t *)&v18[v10];
      v10 -= 4;
      v16 = v9;
      G4_VCALL<void>(v12, 104, v9);
      v9 = v16;
      v11 = *((uint8_t *)v16 + 60);
    }
    while ( v8 != -1 );
  }
  else
  {
LABEL_30:
    v11 = *((uint8_t *)a2 + 60);
  }
LABEL_21:
  if ( v11 != 0 )
  {
    *((uint32_t *)a2 + 16) = 1;
    G4_VCALL<void>(self, 104, a2);
  }
  v13 = v17;
  if ( v17 < 0 )
  {
    v14 = 4 * v17;
    do
    {
      if ( &v18[v14] != nullptr )
        *(uint32_t *)&v18[v14] = 0;
      v14 += 4;
      ++v13;
    }
    while ( v13 != 0 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::dispatchEvent  (binary VA: 0x1165c90)
// Original: gameswf::ASEventDispatcher::dispatchEvent
// ----------------------------------------------------------------------------
int gameswf::ASEventDispatcher::dispatchEvent(int a1)
{
  gameswf::ASEventDispatcher::Self *v1;
  int v2;
  gameswf::ASEvent::Self *v4;

  v1 = *(gameswf::ASEventDispatcher::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 57) == 0 )
    v1 = nullptr;
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 != 5 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v4 = *(gameswf::ASEvent::Self **)(v2 + 4);
  if ( v4 == nullptr || G4_VCALL<uint8_t>(v4, 8, 51) == 0 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  if ( *((uint8_t *)v4 + 60) != 0 )
    gameswf::ASEventDispatcher::dispatchCaptureEvent(v1, v4);
  else
    G4_VCALL<void>(v1, 104, v4);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::hasEventListener  (binary VA: 0x1165d70)
// Original: gameswf::ASEventDispatcher::hasEventListener
// ----------------------------------------------------------------------------
bool gameswf::ASEventDispatcher::hasEventListener(gameswf::ASEventDispatcher::Self *self, const gameswf::String::Self *a2)
{
  int index;
  bool result;
  int v4;

  index = gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(
            (gameswf::ASEventDispatcher::Self *)((char *)self + 44),
            a2);
  result = false;
  if ( index >= 0 && self != (gameswf::ASEventDispatcher::Self *)-44 )
  {
    v4 = *((uint32_t *)self + 11);
    if ( v4 != 0 && index <= *(uint32_t *)(v4 + 4) )
      return *(uint32_t *)(v4 + 44 * index + 40) > 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::hasEventListener  (binary VA: 0x1165de0)
// Original: gameswf::ASEventDispatcher::hasEventListener
// ----------------------------------------------------------------------------
int gameswf::ASEventDispatcher::hasEventListener(int a1)
{
  int v1;
  int index;
  int v3;
  int v5;
  char *v6;
  typedef uint8_t _g4_t_v7[16];
  typedef int16_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v9)) > _g4_s2 ? (30u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v10)) > _g4_s3 ? (31u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 30u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 57) == 0 )
    v1 = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v5 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v5 == 3 || *(uint8_t *)v5 == 4 )
    {
      v6 = *(char **)(v5 + 4);
    }
    else
    {
      v6 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
        v6 = sub_1164450();
    }
    sub_7763C0((gameswf::String::Self *)v7, v6);
  }
  else
  {
    v7[0] = 1;
    v7[1] = 0;
    v8 = -1;
    v9 = 127;
    v10 |= 1u;
  }
  index = gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(
            (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)(v1 + 44),
            (const gameswf::String::Self *)v7);
  if ( index < 0 || v1 == -44 || (v3 = *(uint32_t *)(v1 + 44)) == 0 || index > *(uint32_t *)(v3 + 4) )
    gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  else
    gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, *(uint32_t *)(v3 + 44 * index + 40) > 0);
  return sub_59CE50((int)(uintptr_t)(v7));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::dispatchEvent  (binary VA: 0x1165f60)
// Original: gameswf::ASEventDispatcher::dispatchEvent
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASEventDispatcher::dispatchEvent(gameswf::Self **self, gameswf::ASEvent::Self *a2)
{
  char *v2;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  gameswf::Self *result;
  gameswf::Self *v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  uint32_t *v14;
  gameswf::RefCounted::Self *v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  gameswf::Self *v21;
  char *v22;
  int v23;
  int v24;
  char *v25;
  gameswf::RefCounted::Self *v26;
  int v27;
  int v28;
  char *v29;
  int v30;
  int v31;
  int i;
  int v33;
  int v34;
  int j;
  int WeakProxy;
  int v37;
  int v38;
  char *v39;
  int v40;
  char *v41;
  char *v42;
  int v43;
  typedef void (*_g4_t_v44)(int, uint32_t *);
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t _g4_t_v58[16];
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef gameswf::RefCounted::Self *_g4_t_v61;
  typedef uint32_t _g4_t_v62[8];
  typedef gameswf::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68[12];
  typedef uint8_t _g4_t_v69[12];
  typedef uint8_t _g4_t_v70[12];
  typedef uint8_t _g4_t_v71[12];
  typedef gameswf::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef gameswf::RefCounted::Self *_g4_t_v76;
  typedef uint8_t _g4_t_v77[12];
  typedef gameswf::Self *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef gameswf::Self *_g4_t_v82[4];
  typedef gameswf::Self *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  enum : size_t {
    _g4_s0 = 1184u,
    _g4_s1 = (4u + sizeof(_g4_t_v44)) > _g4_s0 ? (4u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v45)) > _g4_s1 ? (4u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v46)) > _g4_s2 ? (8u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v47)) > _g4_s3 ? (8u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v48)) > _g4_s4 ? (8u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v49)) > _g4_s5 ? (8u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v50)) > _g4_s6 ? (12u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v51)) > _g4_s7 ? (16u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v52)) > _g4_s8 ? (20u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v53)) > _g4_s9 ? (24u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v54)) > _g4_s10 ? (28u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v55)) > _g4_s11 ? (28u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v56)) > _g4_s12 ? (28u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v57)) > _g4_s13 ? (28u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v58)) > _g4_s14 ? (32u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v59)) > _g4_s15 ? (48u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (49u + sizeof(_g4_t_v60)) > _g4_s16 ? (49u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v61)) > _g4_s17 ? (52u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v62)) > _g4_s18 ? (64u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v63)) > _g4_s19 ? (96u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v64)) > _g4_s20 ? (100u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v65)) > _g4_s21 ? (104u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v66)) > _g4_s22 ? (108u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v67)) > _g4_s23 ? (112u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v68)) > _g4_s24 ? (208u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (220u + sizeof(_g4_t_v69)) > _g4_s25 ? (220u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (232u + sizeof(_g4_t_v70)) > _g4_s26 ? (232u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v71)) > _g4_s27 ? (244u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (256u + sizeof(_g4_t_v72)) > _g4_s28 ? (256u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (260u + sizeof(_g4_t_v73)) > _g4_s29 ? (260u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (264u + sizeof(_g4_t_v74)) > _g4_s30 ? (264u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (268u + sizeof(_g4_t_v75)) > _g4_s31 ? (268u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (272u + sizeof(_g4_t_v76)) > _g4_s32 ? (272u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (276u + sizeof(_g4_t_v77)) > _g4_s33 ? (276u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (288u + sizeof(_g4_t_v78)) > _g4_s34 ? (288u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (292u + sizeof(_g4_t_v79)) > _g4_s35 ? (292u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (296u + sizeof(_g4_t_v80)) > _g4_s36 ? (296u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (300u + sizeof(_g4_t_v81)) > _g4_s37 ? (300u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (304u + sizeof(_g4_t_v82)) > _g4_s38 ? (304u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (320u + sizeof(_g4_t_v83)) > _g4_s39 ? (320u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (324u + sizeof(_g4_t_v84)) > _g4_s40 ? (324u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (328u + sizeof(_g4_t_v85)) > _g4_s41 ? (328u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (332u + sizeof(_g4_t_v86)) > _g4_s42 ? (332u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (336u + sizeof(_g4_t_v87)) > _g4_s43 ? (336u + sizeof(_g4_t_v87)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 49u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 208u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 220u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 232u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 244u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 256u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 260u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 264u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 268u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 272u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 276u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 288u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 292u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 296u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 300u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 304u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 320u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 324u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 328u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 332u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 336u);

  v2 = (char *)a2 + 68;
  if ( *((uint32_t *)a2 + 18) != 0 )
  {
    if ( *(uint8_t *)(*((uint32_t *)a2 + 17) + 2) != 0 )
      goto LABEL_3;
    v2 = (char *)a2 + 68;
    gameswf::smart_ptr_proxy::set_ref((char *)a2 + 68, 0);
    *((uint32_t *)a2 + 18) = 0;
  }
  *((uint32_t *)a2 + 18) = (uint32_t)(uintptr_t)(self);
  if ( self != nullptr )
  {
    WeakProxy = gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)self);
    gameswf::smart_ptr_proxy::set_ref(v2, WeakProxy);
  }
  else
  {
    gameswf::smart_ptr_proxy::set_ref(v2, 0);
  }
LABEL_3:
  v3 = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)(self + 10);
  if ( *((uint32_t *)a2 + 16) != 0 )
    v3 = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)(self + 11);
  result = (gameswf::Self *)gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(
                        v3,
                        (gameswf::ASEvent::Self *)((char *)a2 + 40));
  v5 = result;
  if ( (int)(uintptr_t)(result) >= 0 && v3 != nullptr )
  {
    result = *(gameswf::Self **)v3;
    if ( *(uint32_t *)v3 != 0 && (int)(uintptr_t)(v5) <= *((uint32_t *)result + 1) )
    {
      *((uint32_t *)a2 + 20) = (uint32_t)(uintptr_t)(self);
      if ( self != nullptr )
      {
        v6 = gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)self);
        v51 = (char *)a2 + 76;
        gameswf::smart_ptr_proxy::set_ref((char *)a2 + 76, v6);
      }
      else
      {
        v51 = (char *)a2 + 76;
        gameswf::smart_ptr_proxy::set_ref((char *)a2 + 76, 0);
      }
      v7 = *(gameswf::Self **)v3;
      v83 = nullptr;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      v8 = 44 * (uint32_t)(uintptr_t)(v5) + 8;
      if ( *(uint32_t *)((char *)v7 + v8 + 32) <= 0x20u )
      {
        v85 = 32;
        v83 = (gameswf::Self *)&v87;
        v86 = 1;
      }
      v54 = *(uint32_t *)v3 + v8;
      gameswf::array_gameswf_ASEventDispatche_897fc7::resize(
        (gameswf::array<gameswf::ASEventDispatcher::Entry> *)&v83,
        *(uint32_t *)(v54 + 32));
      if ( v84 <= 0 )
        goto LABEL_62;
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = (char *)v83 + v9;
        v12 = *(uint32_t *)(v54 + 28) + v9;
        v50 = v9;
        v46 = v10;
        gameswf::smart_ptr_proxy::set_ref((char *)v83 + v9, *(uint32_t *)v12);
        *((uint32_t *)v11 + 1) = *(uint32_t *)(v12 + 4);
        gameswf::smart_ptr_proxy::set_ref(v11 + 8, *(uint32_t *)(v12 + 8));
        *((uint32_t *)v11 + 3) = *(uint32_t *)(v12 + 12);
        *((uint32_t *)v11 + 4) = *(uint32_t *)(v12 + 16);
        v11[20] = *(uint8_t *)(v12 + 20);
        v10 = v46 + 1;
        v13 = v84;
        v9 = v50 + 24;
      }
      while ( v46 + 1 < v84 );
      if ( v84 <= 0 || (v52 = 0, v53 = 0, *((uint8_t *)a2 + 61) != 0) )
      {
LABEL_62:
        *((uint32_t *)a2 + 20) = 0;
        gameswf::smart_ptr_proxy::set_ref(v51, 0);
        result = (gameswf::Self *)gameswf::array_gameswf_ASEventDispatche_897fc7::resize(
                              (gameswf::array<gameswf::ASEventDispatcher::Entry> *)&v83,
                              0);
        if ( v86 == 0 )
        {
          result = v83;
          v85 = 0;
          if ( v83 != nullptr )
            return (gameswf::Self *)gameswf::free_internal(v83);
        }
        return result;
      }
      while ( 1 )
      {
        v14 = (uint32_t *)((char *)v83 + v52);
        v15 = *(gameswf::RefCounted::Self **)((char *)v83 + v52 + 12);
        if ( *((uint8_t *)v83 + v52 + 20) == 0 )
          break;
        if ( v15 != nullptr )
        {
          if ( *(uint8_t *)(v14[2] + 2) != 0 )
          {
            v58[0] = 0;
            v58[1] = 0;
LABEL_22:
            v59 = 5;
            v60 = 0;
            v61 = v15;
            gameswf::RefCounted::addRef(v15);
            goto LABEL_23;
          }
          gameswf::smart_ptr_proxy::set_ref(v14 + 2, 0);
          v14[3] = 0;
          v13 = v84;
        }
LABEL_60:
        if ( ++v53 < v13 )
        {
          v52 += 24;
          if ( *((uint8_t *)a2 + 61) == 0 )
            continue;
        }
        goto LABEL_62;
      }
      v58[0] = 0;
      v58[1] = 0;
      if ( v15 != nullptr )
      {
        if ( *(uint8_t *)(v14[2] + 2) != 0 )
          goto LABEL_22;
        gameswf::smart_ptr_proxy::set_ref(v14 + 2, 0);
        v14[3] = 0;
      }
      v59 = 5;
      v60 = 0;
      v61 = nullptr;
LABEL_23:
      v64 = 0;
      v63 = (gameswf::Self *)&v67;
      v65 = 8;
      v66 = 1;
      v68[0] = 0;
      v68[1] = 0;
      v16 = *(self + 4);
      v69[0] = 0;
      v69[1] = 0;
      v70[0] = 0;
      v70[1] = 0;
      v71[0] = 0;
      v71[1] = 0;
      v72 = nullptr;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v76 = nullptr;
      v77[0] = 0;
      v77[1] = 0;
      v78 = nullptr;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v82[0] = nullptr;
      v82[1] = v16;
      if ( v16 != nullptr )
      {
        v17 = gameswf::RefCounted::getWeakProxy(v16);
        gameswf::smart_ptr_proxy::set_ref(v82, v17);
      }
      else
      {
        gameswf::smart_ptr_proxy::set_ref(v82, 0);
      }
      v18 = v64;
      v19 = v65;
      v20 = v64 + 1;
      if ( v64 + 1 <= v65 || v66 != 0 )
      {
        v21 = v63;
      }
      else
      {
        v37 = v20 + (v20 >> 1);
        v65 = v37;
        if ( v37 != 0 )
        {
          if ( v63 != nullptr )
            v21 = (gameswf::Self *)gameswf::realloc_internal(v63, 12 * v37, 12 * v19);
          else
            v21 = (gameswf::Self *)gameswf::malloc_internal(12 * v37);
          v63 = v21;
          v18 = v64;
        }
        else
        {
          if ( v63 != nullptr )
          {
            gameswf::free_internal(v63);
            v18 = v64;
          }
          v63 = nullptr;
          v21 = nullptr;
        }
      }
      v22 = (char *)v21 + 12 * v18;
      if ( v22 != nullptr )
      {
        *v22 = 5;
        v22[1] = 0;
        *((uint32_t *)v22 + 1) = (uint32_t)(uintptr_t)(a2);
        gameswf::RefCounted::addRef(a2);
      }
      v64 = v20;
      v23 = v14[1];
      v24 = v20;
      if ( v23 != 0 && *(uint8_t *)(*v14 + 2) == 0 )
      {
        gameswf::smart_ptr_proxy::set_ref(v14, 0);
        v14[1] = 0;
        v23 = 0;
        v24 = v64;
      }
      v44 = *(void (**)(int, uint32_t *))(*(uint32_t *)v23 + 104);
      if ( *((uint8_t *)a2 + 40) == 0xFF )
        v25 = *((char **)a2 + 13);
      else
        v25 = (char *)a2 + 41;
      v62[5] = v24 - 1;
      v26 = nullptr;
      if ( v59 == 5 )
        v26 = v61;
      v62[0] = (uint32_t)(uintptr_t)(v58);
      v62[6] = (uint32_t)(uintptr_t)(v25);
      v62[1] = (uint32_t)(uintptr_t)(v26);
      v62[2] = (uint32_t)(uintptr_t)(&v59);
      v62[3] = (uint32_t)(uintptr_t)(&v63);
      v62[4] = 1;
      v44(v23, v62);
      sub_7E5E90(v82);
      v27 = v79;
      if ( v79 <= 0 )
      {
        if ( v79 < 0 )
        {
          v45 = 32 * v79;
          do
          {
            v42 = (char *)v78 + v45;
            if ( (gameswf::Self *)((char *)v78 + v45) != nullptr )
            {
              v43 = *((uint32_t *)v42 + 4);
              *v42 = 1;
              v43 |= 0x7FFFFFu;
              v42[1] = 0;
              *((uint32_t *)v42 + 4) = v43;
              v42[20] = 0;
              v42[18] = BYTE2(v43) & 0x7F;
              v42[19] = HIBYTE(v43) | 1;
              v42[21] = 0;
            }
            v45 += 32;
            ++v27;
          }
          while ( v27 != 0 );
        }
      }
      else
      {
        v28 = 0;
        v55 = v79;
        do
        {
          v29 = (char *)v78 + 32 * v28;
          v47 = v28;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v29 + 20));
          sub_59CE50((int)(uintptr_t)(v29));
          v28 = v47 + 1;
        }
        while ( v47 + 1 != v55 );
      }
      v79 = 0;
      if ( v81 == 0 )
      {
        v80 = 0;
        if ( v78 != nullptr )
          gameswf::free_internal(v78);
        v78 = nullptr;
      }
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v77);
      if ( v76 != nullptr )
        gameswf::RefCounted::dropRef(v76);
      v30 = v73;
      if ( v73 <= 0 )
      {
        if ( v73 < 0 )
        {
          v40 = 12 * v73;
          do
          {
            v41 = (char *)v72 + v40;
            if ( (gameswf::Self *)((char *)v72 + v40) != nullptr )
            {
              *v41 = 0;
              v41[1] = 0;
            }
            v40 += 12;
            ++v30;
          }
          while ( v30 != 0 );
        }
      }
      else
      {
        v56 = v73;
        v31 = 0;
        for ( i = 0; i != v56; ++i )
        {
          v48 = v31;
          gameswf::ASValue::dropRefs((gameswf::Self *)((char *)v72 + v31));
          v31 = v48 + 12;
        }
      }
      v73 = 0;
      if ( v75 == 0 )
      {
        v74 = 0;
        if ( v72 != nullptr )
          gameswf::free_internal(v72);
        v72 = nullptr;
      }
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v71);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v70);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v69);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v68);
      v33 = v64;
      if ( v64 <= 0 )
      {
        if ( v64 < 0 )
        {
          v38 = 12 * v64;
          do
          {
            v39 = (char *)v63 + v38;
            if ( (gameswf::Self *)((char *)v63 + v38) != nullptr )
            {
              *v39 = 0;
              v39[1] = 0;
            }
            v38 += 12;
            ++v33;
          }
          while ( v33 != 0 );
        }
      }
      else
      {
        v57 = v64;
        v34 = 0;
        for ( j = 0; j != v57; ++j )
        {
          v49 = v34;
          gameswf::ASValue::dropRefs((gameswf::Self *)((char *)v63 + v34));
          v34 = v49 + 12;
        }
      }
      v64 = 0;
      if ( v66 == 0 )
      {
        v65 = 0;
        if ( v63 != nullptr )
          gameswf::free_internal(v63);
        v63 = nullptr;
      }
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v59);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v58);
      v13 = v84;
      goto LABEL_60;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::thisAlive  (binary VA: 0x11668c0)
// Original: gameswf::ASEventDispatcher::thisAlive
// ----------------------------------------------------------------------------
char * gameswf::ASEventDispatcher::thisAlive(gameswf::ASEventDispatcher::Self *self)
{
  char *result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
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
  gameswf::Self **v21;
  int v22;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v23;
  int v24;
  char *v25;
  int v26;
  int v27;

  result = *((char **)self + 4);
  if ( *((uint32_t *)result + 25) > *((uint32_t *)self + 5) )
  {
    gameswf::ASObject::thisAlive(self);
    v27 = 0;
    while ( 1 )
    {
      result = (char *)self + 4 * v27 + 32;
      v25 = (char *)self + 4 * v27 + 40;
      v2 = *(uint32_t *)v25;
      if ( *(uint32_t *)v25 != 0 )
      {
        v3 = *(uint32_t *)(v2 + 4);
        v24 = 0;
        if ( v3 >= 0 && *(uint32_t *)(v2 + 8) == -2 )
        {
          v4 = 52;
          v5 = 1;
          do
          {
            v6 = v5;
            if ( v5 > v3 )
              break;
            v7 = *(uint32_t *)(v2 + v4);
            ++v5;
            v4 += 44;
          }
          while ( v7 == -2 );
          v24 = v6;
        }
        result = (char *)self + 4 * v27 + 40;
        if ( (gameswf::ASEventDispatcher::Self *)((char *)self + 4 * v27) != (gameswf::ASEventDispatcher::Self *)-40 )
          break;
      }
LABEL_5:
      if ( ++v27 == 2 )
        return result;
    }
LABEL_17:
    result = *(char **)v25;
    v26 = 44 * v24 + 8;
LABEL_18:
    if ( result == nullptr )
      goto LABEL_5;
    v8 = *((uint32_t *)result + 1);
    if ( v8 < v24 )
      goto LABEL_5;
    v10 = &result[v26];
    v11 = *(uint32_t *)&result[v26 + 32] - 1;
    v23 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)&result[v26 + 28];
    if ( v11 < 0 )
      goto LABEL_14;
    v12 = 24 * v11;
    while ( 1 )
    {
      v13 = *((uint32_t *)v10 + 7) + v12;
      if ( *(uint8_t *)(v13 + 20) == 0 )
      {
        v14 = *(uint32_t *)(v13 + 4);
        if ( v14 != 0 )
        {
          v19 = *((uint32_t *)v10 + 7) + v12;
          if ( *(uint8_t *)(*(uint32_t *)v13 + 2) != 0 )
          {
            G4_VCALL<void>(v14, 76);
            v13 = v19;
          }
          else
          {
            gameswf::smart_ptr_proxy::set_ref(*((uint32_t *)v10 + 7) + v12, 0);
            v13 = v19;
            *(uint32_t *)(v19 + 4) = 0;
          }
        }
        v15 = *(uint32_t *)(v13 + 12);
        if ( v15 != 0 )
        {
          if ( *(uint8_t *)(*(uint32_t *)(v13 + 8) + 2) != 0 )
          {
            G4_VCALL<void>(v15, 76);
          }
          else
          {
            v22 = v13;
            gameswf::smart_ptr_proxy::set_ref(v13 + 8, 0);
            *(uint32_t *)(v22 + 12) = 0;
          }
        }
        goto LABEL_24;
      }
      if ( *(uint32_t *)(v13 + 12) == 0 )
        goto LABEL_33;
      if ( *(uint8_t *)(*(uint32_t *)(v13 + 8) + 2) == 0 )
        break;
LABEL_24:
      --v11;
      v12 -= 24;
      if ( v11 == -1 )
      {
        result = *(char **)v25;
        v8 = *(uint32_t *)(*(uint32_t *)v25 + 4);
        if ( v8 >= v24 )
        {
LABEL_14:
          v9 = v24 + 1;
          if ( v24 + 1 <= v8 && *(uint32_t *)&result[44 * v9 + 8] == -2 )
          {
            v16 = v24 + 2;
            v17 = 44 * (v24 + 2) + 8;
            do
            {
              v9 = v16;
              if ( v16 > v8 )
                break;
              v18 = *(uint32_t *)&result[v17];
              ++v16;
              v17 += 44;
            }
            while ( v18 == -2 );
          }
          v24 = v9;
          goto LABEL_17;
        }
        goto LABEL_18;
      }
    }
    v20 = *((uint32_t *)v10 + 7) + v12;
    gameswf::smart_ptr_proxy::set_ref(v13 + 8, 0);
    *(uint32_t *)(v20 + 12) = 0;
LABEL_33:
    if ( *((uint32_t *)v23 + 1) == 1 )
    {
      gameswf::array_gameswf_ASEventDispatche_897fc7::resize(v23, 0);
    }
    else
    {
      v21 = (gameswf::Self **)(v12 + *(uint32_t *)v23);
      sub_7E5E90(v21 + 2);
      sub_7E5E90(v21);
      memmove(
        (void *)(v12 + *(uint32_t *)v23),
        (const void *)(*(uint32_t *)v23 + v12 + 24),
        24 * (*((uint32_t *)v23 + 1) + ~v11));
      --*((uint32_t *)v23 + 1);
    }
    goto LABEL_24;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::removeEventListener  (binary VA: 0x1168350)
// Original: gameswf::ASEventDispatcher::removeEventListener
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASEventDispatcher::removeEventListener(gameswf::ASEventDispatcher::Self *self, const gameswf::String::Self *a2, gameswf::ASFunction::Self *a3, bool a4)
{
  gameswf::ASFunction::Self *v4;
  gameswf::RefCounted::Self *v5;
  int WeakProxy;
  int v7;
  bool v8;
  gameswf::ASFunction::Self *v9;
  bool v10;
  char *v11;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *v12;
  int index;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v22;
  gameswf::ASFunction::Self *v23;
  int v24;
  gameswf::RefCounted::Self *v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef gameswf::Self **_g4_t_v33;
  typedef gameswf::ASFunction::Self *_g4_t_v34;
  typedef gameswf::RefCounted::Self *_g4_t_v35;
  typedef gameswf::ASFunction::Self *_g4_t_v36;
  typedef gameswf::ASFunction::Self *_g4_t_v37;
  typedef gameswf::array<gameswf::ASEventDispatcher::Entry> *_g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef gameswf::ASFunction::Self *_g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef gameswf::RefCounted::Self *_g4_t_v42;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v29)) > _g4_s3 ? (4u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v30)) > _g4_s4 ? (4u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v31)) > _g4_s5 ? (4u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v32)) > _g4_s6 ? (8u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v33)) > _g4_s7 ? (8u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v34)) > _g4_s8 ? (20u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v35)) > _g4_s9 ? (20u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v36)) > _g4_s10 ? (24u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v37)) > _g4_s11 ? (24u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v38)) > _g4_s12 ? (28u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v39)) > _g4_s13 ? (32u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v40)) > _g4_s14 ? (36u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v41)) > _g4_s15 ? (40u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v42)) > _g4_s16 ? (44u + sizeof(_g4_t_v42)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);

  v4 = a3;
  if ( a3 != nullptr && G4_VCALL<uint8_t>(a3, 8, 9) != 0 )
  {
    v5 = *((gameswf::RefCounted::Self **)a3 + 10);
    v39 = nullptr;
    v41 = nullptr;
    v42 = nullptr;
    v40 = (gameswf::ASFunction::Self *)(v5);
    if ( v5 != nullptr )
      goto LABEL_4;
  }
  else
  {
    v5 = (gameswf::RefCounted::Self *)(a3);
    v4 = nullptr;
    v39 = nullptr;
    v41 = nullptr;
    v42 = nullptr;
    v40 = a3;
    if ( a3 != nullptr )
    {
LABEL_4:
      WeakProxy = gameswf::RefCounted::getWeakProxy(v5);
      gameswf::smart_ptr_proxy::set_ref(&v39, WeakProxy);
      if ( v4 != nullptr )
        goto LABEL_5;
LABEL_27:
      v42 = nullptr;
      goto LABEL_28;
    }
  }
  gameswf::smart_ptr_proxy::set_ref(&v39, 0);
  if ( v4 == nullptr )
    goto LABEL_27;
LABEL_5:
  v42 = *((gameswf::RefCounted::Self **)v4 + 11);
  if ( v42 != nullptr )
  {
    v7 = gameswf::RefCounted::getWeakProxy(v42);
    gameswf::smart_ptr_proxy::set_ref(&v41, v7);
    goto LABEL_7;
  }
LABEL_28:
  gameswf::smart_ptr_proxy::set_ref(&v41, 0);
LABEL_7:
  v36 = v40;
  if ( v40 == nullptr )
  {
LABEL_45:
    v37 = nullptr;
    goto LABEL_12;
  }
  if ( *((uint8_t *)v39 + 2) == 0 )
  {
    gameswf::smart_ptr_proxy::set_ref(&v39, 0);
    v40 = nullptr;
    goto LABEL_45;
  }
  v8 = G4_VCALL<uint8_t>(v40, 8, 11) == 0;
  v9 = nullptr;
  if ( !v8 )
    v9 = v36;
  v37 = v9;
LABEL_12:
  v10 = !a4;
  v11 = (char *)self + 4 * v10 + 32;
  v12 = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)((gameswf::ASEventDispatcher::Self *)((char *)self + 4 * v10 + 40));
  index = gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(
            v12,
            a2);
  if ( index < 0 )
    v14 = sub_1168270(v12, a2);
  else
    v14 = *((uint32_t *)v11 + 2) + 44 * index + 36;
  v38 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)v14;
  v15 = *(uint32_t *)(v14 + 4);
  if ( v15 > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      while ( v37 == nullptr )
      {
        v22 = (uint32_t *)(*(uint32_t *)v38 + v16);
        v34 = (gameswf::ASFunction::Self *)v22[1];
        if ( v34 != nullptr && *(uint8_t *)(*v22 + 2) == 0 )
        {
          v28 = v17;
          gameswf::smart_ptr_proxy::set_ref(v22, 0);
          v22[1] = 0;
          v34 = nullptr;
          v17 = v28;
        }
        v23 = v40;
        if ( v40 != nullptr && *((uint8_t *)v39 + 2) == 0 )
        {
          v29 = v17;
          gameswf::smart_ptr_proxy::set_ref(&v39, 0);
          v40 = nullptr;
          v23 = nullptr;
          v17 = v29;
        }
        if ( v34 == v23 )
        {
          v24 = *(uint32_t *)v38 + v16;
          v35 = *(gameswf::RefCounted::Self **)(v24 + 12);
          if ( v35 != nullptr && *(uint8_t *)(*(uint32_t *)(v24 + 8) + 2) == 0 )
          {
            v30 = v17;
            gameswf::smart_ptr_proxy::set_ref(v24 + 8, 0);
            *(uint32_t *)(v24 + 12) = 0;
            v35 = nullptr;
            v17 = v30;
          }
          v25 = v42;
          if ( v42 != nullptr && *((uint8_t *)v41 + 2) == 0 )
          {
            v31 = v17;
            gameswf::smart_ptr_proxy::set_ref(&v41, 0);
            v42 = nullptr;
            v25 = nullptr;
            v17 = v31;
          }
          if ( v35 == v25 )
          {
            gameswf::array_gameswf_ASEventDispatche_897fc7::remove(v38, v17);
            goto LABEL_24;
          }
        }
LABEL_18:
        v15 = *((uint32_t *)v38 + 1);
LABEL_19:
        ++v17;
        v16 += 24;
        if ( v17 >= v15 )
          goto LABEL_24;
      }
      v19 = (uint32_t *)(*(uint32_t *)v38 + v16);
      v20 = (uint32_t *)v19[1];
      if ( v20 == nullptr )
        goto LABEL_19;
      if ( *(uint8_t *)(*v19 + 2) != 0 )
      {
        v26 = v17;
        v18 = G4_VCALL<int>(v20, 8, 11);
        v17 = v26;
        if ( v18 != 0 && v20[11] == *((uint32_t *)v37 + 11) )
        {
          if ( *((uint32_t *)v38 + 1) == 1 )
          {
            gameswf::array_gameswf_ASEventDispatche_897fc7::resize(v38, 0);
          }
          else
          {
            v33 = (gameswf::Self **)(v16 + *(uint32_t *)v38);
            sub_7E5E90(v33 + 2);
            sub_7E5E90(v33);
            memmove(
              (void *)(v16 + *(uint32_t *)v38),
              (const void *)(*(uint32_t *)v38 + 8 * (3 * v26 + 3)),
              24 * (*((uint32_t *)v38 + 1) + ~v26));
            --*((uint32_t *)v38 + 1);
          }
          break;
        }
        goto LABEL_18;
      }
      v32 = *(uint32_t *)v38 + v16;
      v27 = v17;
      gameswf::smart_ptr_proxy::set_ref(v32, 0);
      v16 += 24;
      *(uint32_t *)(v32 + 4) = 0;
      v17 = v27 + 1;
      v15 = *((uint32_t *)v38 + 1);
    }
    while ( v27 + 1 < v15 );
  }
LABEL_24:
  sub_7E5E90(&v41);
  return sub_7E5E90(&v39);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::removeEventListener  (binary VA: 0x11687b0)
// Original: gameswf::ASEventDispatcher::removeEventListener
// ----------------------------------------------------------------------------
int gameswf::ASEventDispatcher::removeEventListener(int a1)
{
  gameswf::ASEventDispatcher::Self *v1;
  gameswf::ASFunction::Self *v2;
  char v3;
  int v5;
  char *v6;
  typedef gameswf::ASFunction::Self *_g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v9)) > _g4_s2 ? (44u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v10)) > _g4_s3 ? (46u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (47u + sizeof(_g4_t_v11)) > _g4_s4 ? (47u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 47u);

  v1 = *(gameswf::ASEventDispatcher::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 57) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v5 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v5 == 3 || *(uint8_t *)v5 == 4 )
    {
      v6 = *(char **)(v5 + 4);
    }
    else
    {
      v6 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
        v6 = sub_1164450();
    }
    sub_7763C0((gameswf::String::Self *)v8, v6);
    if ( *(int *)(a1 + 16) <= 1 )
    {
      v3 = 0;
      v2 = nullptr;
    }
    else
    {
      v2 = (gameswf::ASFunction::Self *)gameswf::ASValue::toFunction((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                  + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      if ( *(int *)(a1 + 16) <= 2 )
      {
        v3 = 0;
      }
      else
      {
        v7 = v2;
        v3 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
        v2 = v7;
      }
    }
  }
  else
  {
    v8[0] = 1;
    v8[1] = 0;
    v9 = -1;
    v10 = 127;
    v11 |= 1u;
    v2 = nullptr;
    v3 = 0;
  }
  gameswf::ASEventDispatcher::removeEventListener(v1, (const gameswf::String::Self *)v8, v2, v3);
  return sub_59CE50((int)(uintptr_t)(v8));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::addEventListener  (binary VA: 0x116a1c0)
// Original: gameswf::ASEventDispatcher::addEventListener
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASEventDispatcher::addEventListener(gameswf::ASEventDispatcher::Self *self, const gameswf::String::Self *a2, gameswf::ASFunction::Self *a3, bool a4, int a5, gameswf::Self **a6, gameswf::Self **a7)
{
  gameswf::ASFunction::Self *v7;
  gameswf::RefCounted::Self *v8;
  int WeakProxy;
  int v10;
  int index;
  int v12;
  int v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  char *v17;
  uint16_t *v18;
  bool v19;
  uint16_t *v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  uint16_t *v25;
  uint16_t *v26;
  unsigned int v27;
  unsigned int v28;
  uint16_t *v29;
  uint16_t *v30;
  int v31;
  char *v32;
  gameswf::Self **v33;
  int v35;
  typedef gameswf::Self **_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef gameswf::Self **_g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef gameswf::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[12];
  typedef uint16_t *_g4_t_v53;
  typedef gameswf::ASFunction::Self *_g4_t_v54;
  typedef uint16_t *_g4_t_v55;
  typedef gameswf::RefCounted::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef char _g4_t_v58;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v36)) > _g4_s0 ? (12u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v37)) > _g4_s1 ? (24u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v38)) > _g4_s2 ? (28u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v39)) > _g4_s3 ? (32u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v40)) > _g4_s4 ? (36u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v41)) > _g4_s5 ? (40u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v42)) > _g4_s6 ? (44u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v43)) > _g4_s7 ? (48u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v44)) > _g4_s8 ? (60u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v45)) > _g4_s9 ? (64u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v46)) > _g4_s10 ? (68u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v47)) > _g4_s11 ? (72u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v48)) > _g4_s12 ? (76u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v49)) > _g4_s13 ? (84u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v50)) > _g4_s14 ? (88u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v51)) > _g4_s15 ? (92u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v52)) > _g4_s16 ? (96u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v53)) > _g4_s17 ? (108u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v54)) > _g4_s18 ? (112u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v55)) > _g4_s19 ? (116u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v56)) > _g4_s20 ? (120u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v57)) > _g4_s21 ? (124u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v58)) > _g4_s22 ? (128u + sizeof(_g4_t_v58)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 84u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 88u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 92u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 96u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 120u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);

  v7 = a3;
  gameswf::ASEventDispatcher::removeEventListener(self, a2, a3, a4);
  if ( a3 != nullptr && G4_VCALL<uint8_t>(a3, 8, 9) != 0 )
  {
    v8 = *((gameswf::RefCounted::Self **)a3 + 10);
    v53 = nullptr;
    v55 = nullptr;
    v56 = nullptr;
    v54 = (gameswf::ASFunction::Self *)(v8);
    if ( v8 != nullptr )
      goto LABEL_4;
  }
  else
  {
    v8 = (gameswf::RefCounted::Self *)(a3);
    v7 = nullptr;
    v53 = nullptr;
    v55 = nullptr;
    v56 = nullptr;
    v54 = a3;
    if ( a3 != nullptr )
    {
LABEL_4:
      WeakProxy = gameswf::RefCounted::getWeakProxy(v8);
      gameswf::smart_ptr_proxy::set_ref(&v53, WeakProxy);
      if ( v7 != nullptr )
        goto LABEL_5;
LABEL_45:
      v56 = nullptr;
      goto LABEL_46;
    }
  }
  gameswf::smart_ptr_proxy::set_ref(&v53, 0);
  if ( v7 == nullptr )
    goto LABEL_45;
LABEL_5:
  v56 = *((gameswf::RefCounted::Self **)v7 + 11);
  if ( v56 != nullptr )
  {
    v10 = gameswf::RefCounted::getWeakProxy(v56);
    gameswf::smart_ptr_proxy::set_ref(&v55, v10);
    goto LABEL_7;
  }
LABEL_46:
  gameswf::smart_ptr_proxy::set_ref(&v55, 0);
LABEL_7:
  v57 = a5;
  v58 = (char)(uintptr_t)(a6);
  index = gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(
            (gameswf::ASEventDispatcher::Self *)((char *)self + 4 * !a4 + 40),
            a2);
  if ( index < 0 )
    v12 = sub_1168270((gameswf::ASEventDispatcher::Self *)((char *)self + 4 * !a4 + 40), a2);
  else
    v12 = *((uint32_t *)self + !a4 + 10) + 44 * index + 36;
  v13 = *(uint32_t *)(v12 + 4);
  v14 = *(uint32_t *)(v12 + 8);
  v15 = v13 + 1;
  if ( v13 + 1 > v14 )
  {
    if ( *(uint32_t *)(v12 + 12) != 0 )
    {
      v16 = *(gameswf::Self **)v12;
      v50 = *(gameswf::Self **)v12;
    }
    else
    {
      v35 = v15 + (v15 >> 1);
      *(uint32_t *)(v12 + 8) = v35;
      if ( v35 != 0 )
      {
        if ( *(uint32_t *)v12 != 0 )
        {
          v37 = 0;
          v50 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v12, 24 * v35, 24 * v14);
        }
        else
        {
          v50 = (gameswf::Self *)gameswf::malloc_internal(24 * v35);
        }
        *(uint32_t *)v12 = (uint32_t)(uintptr_t)(v50);
        v16 = v50;
        v13 = *(uint32_t *)(v12 + 4);
      }
      else
      {
        if ( *(uint32_t *)v12 != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)v12);
          v13 = *(uint32_t *)(v12 + 4);
        }
        v50 = nullptr;
        *(uint32_t *)v12 = 0;
        v16 = nullptr;
      }
    }
  }
  else
  {
    v50 = *(gameswf::Self **)v12;
    v16 = *(gameswf::Self **)v12;
  }
  v17 = (char *)v16 + 24 * v13;
  if ( v17 != nullptr )
  {
    v18 = v53;
    v19 = v53 == nullptr;
    *(uint32_t *)v17 = (uint32_t)(uintptr_t)(v53);
    if ( !v19 )
      ++*v18;
    *((uint32_t *)v17 + 1) = (uint32_t)(uintptr_t)(v54);
    v20 = v55;
    v19 = v55 == nullptr;
    *((uint32_t *)v17 + 2) = (uint32_t)(uintptr_t)(v55);
    if ( !v19 )
      ++*v20;
    *((uint32_t *)v17 + 3) = (uint32_t)(uintptr_t)(v56);
    *((uint32_t *)v17 + 4) = v57;
    v17[20] = v58;
    v50 = *(gameswf::Self **)v12;
  }
  *(uint32_t *)(v12 + 4) = v15;
  v46 = (int)(uintptr_t)(v50) + 24 * v15;
  v44 = -1431655765 * ((24 * v15) >> 3);
  v21 = v44;
  if ( v44 > 0 )
  {
    while ( 1 )
    {
      v22 = 24 * v21;
      v23 = opNew(24 * v21, (const std::nothrow_t *)&std::nothrow);
      if ( v23 != 0 )
        break;
      v21 >>= 1;
      if ( v21 == 0 )
        goto LABEL_47;
    }
    v45 = v21;
    v24 = v23;
    v48 = (gameswf::Self **)(v23 + v22);
    if ( v23 + v22 != v23 )
    {
      v25 = *(uint16_t **)v50;
      v19 = *(uint32_t *)v50 == 0;
      *(uint32_t *)v24 = *(uint32_t *)v50;
      if ( !v19 )
        ++*v25;
      *(uint32_t *)(v24 + 4) = *((uint32_t *)v50 + 1);
      v26 = *((uint16_t **)v50 + 2);
      *(uint32_t *)(v24 + 8) = (uint32_t)(uintptr_t)(v26);
      if ( v26 != nullptr )
        ++*v26;
      v47 = v24 + 24;
      v27 = v24;
      *(uint32_t *)(v24 + 12) = *((uint32_t *)v50 + 3);
      *(uint32_t *)(v24 + 16) = *((uint32_t *)v50 + 4);
      *(uint8_t *)(v24 + 20) = *((uint8_t *)v50 + 20);
      if ( v48 != (gameswf::Self **)(v24 + 24) )
      {
        v28 = v24 + 24;
        v49 = v24;
        do
        {
          if ( v28 != 0 )
          {
            v29 = *(uint16_t **)(v28 - 24);
            *(uint32_t *)v28 = (uint32_t)(uintptr_t)(v29);
            if ( v29 != nullptr )
              ++*v29;
            *(uint32_t *)(v28 + 4) = *(uint32_t *)(v28 - 20);
            v30 = *(uint16_t **)(v28 - 16);
            *(uint32_t *)(v28 + 8) = (uint32_t)(uintptr_t)(v30);
            if ( v30 != nullptr )
              ++*v30;
            *(uint32_t *)(v28 + 12) = *(uint32_t *)(v28 - 12);
            *(uint32_t *)(v28 + 16) = *(uint32_t *)(v28 - 8);
            *(uint8_t *)(v28 + 20) = *(uint8_t *)(v28 - 4);
          }
          v28 += 24;
        }
        while ( v48 != (gameswf::Self **)v28 );
        v27 = v24 + 8 * (((unsigned int)(uintptr_t)(v48) - v24 - 48) >> 3) + 24;
      }
      gameswf::smart_ptr_proxy::set_ref(v50, *(uint32_t *)v27);
      *((uint32_t *)v50 + 1) = *(uint32_t *)(v27 + 4);
      gameswf::smart_ptr_proxy::set_ref((char *)v50 + 8, *(uint32_t *)(v27 + 8));
      *((uint32_t *)v50 + 3) = *(uint32_t *)(v27 + 12);
      *((uint32_t *)v50 + 4) = *(uint32_t *)(v27 + 16);
      *((uint8_t *)v50 + 20) = *(uint8_t *)(v27 + 20);
    }
    v31 = (v44 + 1) >> 1;
    v32 = (char *)v50 + 24 * v31;
    if ( v31 > v45 )
    {
      sub_11697D0((char *)v50, (int)(uintptr_t)(v50) + 24 * v31, (char *)v24, v45);
      sub_11697D0(v32, v46, (char *)v24, v45);
    }
    else
    {
      sub_11696F0((char *)v50, (int)(uintptr_t)(v50) + 24 * v31, (char *)v24);
      sub_11696F0(v32, v46, (char *)v24);
    }
    LOBYTE(v41) = 0;
    g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
      v50,
      v32,
      v46,
      -1431655765 * ((v32 - (char *)v50) >> 3),
      -1431655765 * ((v46 - (int)(uintptr_t)(v32)) >> 3),
      v24,
      v45);
    if ( (gameswf::Self **)v24 != v48 )
    {
      v33 = (gameswf::Self **)v24;
      v50 = (gameswf::Self *)v24;
      do
      {
        sub_7E5E90(v33 + 2);
        v36 = v33;
        v33 += 6;
        sub_7E5E90(v36);
      }
      while ( v48 != v33 );
    }
  }
  else
  {
LABEL_47:
    sub_1168930((int)(uintptr_t)(v50), v46);
    v24 = 0;
  }
  opDelete((void *)v24, (const std::nothrow_t *)&std::nothrow);
  v52[0] = 0;
  v52[1] = 0;
  G4_VCALL<void>(self, 100, a2, v52, v37, v38, v39, v40, v41, v42, v43, &v55, &v53, v44, v45, v46, v47, v48, &std::nothrow, v49, v50, v51);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v52);
  sub_7E5E90(a6);
  return sub_7E5E90(a7);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::addEventListener  (binary VA: 0x116a780)
// Original: gameswf::ASEventDispatcher::addEventListener
// ----------------------------------------------------------------------------
int gameswf::ASEventDispatcher::addEventListener(int a1)
{
  gameswf::ASEventDispatcher::Self *v1;
  bool v2; // si
  gameswf::Self **v3;
  int v5;
  char *v6;
  char v7;
  typedef gameswf::Self **_g4_t_v8;
  typedef gameswf::Self **_g4_t_v9;
  typedef gameswf::ASFunction::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef uint8_t _g4_t_v13[16];
  typedef int16_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v12)) > _g4_s4 ? (31u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v13)) > _g4_s5 ? (44u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v14)) > _g4_s6 ? (60u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (62u + sizeof(_g4_t_v15)) > _g4_s7 ? (62u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (63u + sizeof(_g4_t_v16)) > _g4_s8 ? (63u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 62u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 63u);

  v1 = *(gameswf::ASEventDispatcher::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 57) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) <= 0 )
  {
    v13[0] = 1;
    v13[1] = 0;
    v14 = -1;
    v10 = nullptr;
    v15 = 127;
    v16 |= 1u;
    goto LABEL_6;
  }
  v5 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v5 == 3 || *(uint8_t *)v5 == 4 )
  {
    v6 = *(char **)(v5 + 4);
  }
  else
  {
    v6 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      v6 = sub_1164450();
  }
  sub_7763C0((gameswf::String::Self *)v13, v6);
  if ( *(int *)(a1 + 16) <= 1 )
  {
    v10 = nullptr;
    goto LABEL_6;
  }
  v10 = (gameswf::ASFunction::Self *)gameswf::ASValue::toFunction((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                               + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  if ( *(int *)(a1 + 16) <= 2 )
  {
LABEL_6:
    v2 = false;
LABEL_7:
    v3 = nullptr;
    v11 = 0;
    goto LABEL_8;
  }
  v7 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
  v12 = v7;
  if ( *(int *)(a1 + 16) <= 3 )
  {
    v2 = v7;
    goto LABEL_7;
  }
  v11 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
  if ( *(int *)(a1 + 16) <= 4 )
  {
    v2 = v12;
    v3 = nullptr;
  }
  else
  {
    v3 = (gameswf::Self **)(uint8_t)gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                  + 4 * (3 * *(uint32_t *)(a1 + 20) - 12)));
    v2 = v12;
  }
LABEL_8:
  v9 = v3;
  gameswf::ASEventDispatcher::removeEventListener(v1, (const gameswf::String::Self *)v13, v10, v2);
  gameswf::ASEventDispatcher::addEventListener(v1, (const gameswf::String::Self *)v13, v10, v2, v11, v9, v8);
  return sub_59CE50((int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::is  (binary VA: 0x116a9c0)
// Original: gameswf::ASEventDispatcher::is
// ----------------------------------------------------------------------------
bool gameswf::ASEventDispatcher::is(gameswf::ASEventDispatcher::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::Destroy  (binary VA: 0x116af70)
// Original: gameswf::ASEventDispatcher::~ASEventDispatcher
// ----------------------------------------------------------------------------
void gameswf::ASEventDispatcher::Destroy(gameswf::ASEventDispatcher::Self *self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self **v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int i;
  int v15;
  int v16;
  int v17;
  char *v18;
  gameswf::ASEventDispatcher::Self *v19;
  gameswf::ASEventDispatcher::Self *v20;

  v20 = (gameswf::ASEventDispatcher::Self *)((char *)self + 48);
  v19 = (gameswf::ASEventDispatcher::Self *)((char *)self + 48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  v18 = (char *)self + 44;
  do
  {
    v17 = v19 - v20;
    v1 = *(gameswf::Self **)&v18[v19 - v20];
    if ( v1 != nullptr )
    {
      v16 = *((uint32_t *)v1 + 1);
      if ( v16 >= 0 )
      {
        v15 = 8;
        for ( i = 0; i <= v16; ++i )
        {
          v12 = (uint32_t *)((char *)v1 + v15);
          if ( *(uint32_t *)((char *)v1 + v15) != -2 )
          {
            sub_59CE50((int)(uintptr_t)(v1) + v15 + 8);
            v2 = v12[8];
            if ( v2 <= 0 )
            {
              if ( v2 < 0 )
              {
                v10 = 24 * v2;
                do
                {
                  v11 = v12[7] + v10;
                  if ( v11 != 0 )
                  {
                    *(uint32_t *)v11 = 0;
                    *(uint32_t *)(v11 + 4) = 0;
                    *(uint32_t *)(v11 + 8) = 0;
                    *(uint32_t *)(v11 + 12) = 0;
                    *(uint32_t *)(v11 + 16) = 0;
                    *(uint8_t *)(v11 + 20) = 0;
                  }
                  v10 += 24;
                  ++v2;
                }
                while ( v2 != 0 );
              }
            }
            else
            {
              v13 = v12[8];
              v3 = 0;
              v4 = 0;
              do
              {
                v5 = v4;
                ++v3;
                v4 += 24;
                v6 = (gameswf::Self **)(v12[7] + v5);
                sub_7E5E90(v6 + 2);
                sub_7E5E90(v6);
              }
              while ( v3 != v13 );
            }
            v7 = v12;
            v8 = v12[10];
            v12[8] = 0;
            if ( v8 == 0 )
            {
              v9 = (gameswf::Self *)v12[7];
              v12[9] = 0;
              if ( v9 != nullptr )
                gameswf::free_internal(v9);
              v7 = v12;
              v12[7] = 0;
            }
            *v7 = -2;
            v7[1] = 0;
            v1 = *(gameswf::Self **)&v18[v17];
          }
          v15 += 44;
        }
      }
      gameswf::free_internal(v1);
      *(uint32_t *)&v18[v17] = 0;
    }
    v19 = (gameswf::ASEventDispatcher::Self *)((char *)v19 - 4);
  }
  while ( (gameswf::ASEventDispatcher::Self *)((char *)self + 40) != v19 );
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventDispatcher::Destroy_ea116b180  (binary VA: 0x116b180)
// Original: gameswf::ASEventDispatcher::~ASEventDispatcher
// ----------------------------------------------------------------------------
void gameswf::ASEventDispatcher::Destroy_ea116b180(gameswf::ASEventDispatcher::Self *self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self **v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int i;
  int v15;
  int v16;
  int v17;
  char *v18;
  gameswf::ASEventDispatcher::Self *v19;
  gameswf::ASEventDispatcher::Self *v20;

  v20 = (gameswf::ASEventDispatcher::Self *)((char *)self + 48);
  v19 = (gameswf::ASEventDispatcher::Self *)((char *)self + 48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  v18 = (char *)self + 44;
  do
  {
    v17 = v19 - v20;
    v1 = *(gameswf::Self **)&v18[v19 - v20];
    if ( v1 != nullptr )
    {
      v16 = *((uint32_t *)v1 + 1);
      if ( v16 >= 0 )
      {
        v15 = 8;
        for ( i = 0; i <= v16; ++i )
        {
          v12 = (uint32_t *)((char *)v1 + v15);
          if ( *(uint32_t *)((char *)v1 + v15) != -2 )
          {
            sub_59CE50((int)(uintptr_t)(v1) + v15 + 8);
            v2 = v12[8];
            if ( v2 <= 0 )
            {
              if ( v2 < 0 )
              {
                v10 = 24 * v2;
                do
                {
                  v11 = v12[7] + v10;
                  if ( v11 != 0 )
                  {
                    *(uint32_t *)v11 = 0;
                    *(uint32_t *)(v11 + 4) = 0;
                    *(uint32_t *)(v11 + 8) = 0;
                    *(uint32_t *)(v11 + 12) = 0;
                    *(uint32_t *)(v11 + 16) = 0;
                    *(uint8_t *)(v11 + 20) = 0;
                  }
                  v10 += 24;
                  ++v2;
                }
                while ( v2 != 0 );
              }
            }
            else
            {
              v13 = v12[8];
              v3 = 0;
              v4 = 0;
              do
              {
                v5 = v4;
                ++v3;
                v4 += 24;
                v6 = (gameswf::Self **)(v12[7] + v5);
                sub_7E5E90(v6 + 2);
                sub_7E5E90(v6);
              }
              while ( v3 != v13 );
            }
            v7 = v12;
            v8 = v12[10];
            v12[8] = 0;
            if ( v8 == 0 )
            {
              v9 = (gameswf::Self *)v12[7];
              v12[9] = 0;
              if ( v9 != nullptr )
                gameswf::free_internal(v9);
              v7 = v12;
              v12[7] = 0;
            }
            *v7 = -2;
            v7[1] = 0;
            v1 = *(gameswf::Self **)&v18[v17];
          }
          v15 += 44;
        }
      }
      gameswf::free_internal(v1);
      *(uint32_t *)&v18[v17] = 0;
    }
    v19 = (gameswf::ASEventDispatcher::Self *)((char *)v19 - 4);
  }
  while ( (gameswf::ASEventDispatcher::Self *)((char *)self + 40) != v19 );
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: g4_std::copy_backward_gameswf_ASEventDispatche_cfca41  (binary VA: 0x116c2d0)
// Original: std::copy_backward<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *>
// ----------------------------------------------------------------------------
int g4_std::copy_backward_gameswf_ASEventDispatche_cfca41(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  bool v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  if ( -1431655765 * ((a2 - a1) >> 3) > 0 )
  {
    v3 = a3;
    v13 = -1431655765 * ((a2 - a1) >> 3);
    v4 = a2 - 8;
    v10 = a3;
    v15 = a2 - 24;
    v5 = a2 - 16;
    v14 = a3 - 24;
    while ( 1 )
    {
      v11 = v3 - 24;
      v12 = v5;
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v3 - 24), *(gameswf::Self **)(v4 - 16));
      v6 = v11 - a3;
      *(uint32_t *)(v11 - 24 + 28) = *(uint32_t *)(v4 - 12);
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v10 - 16), *(gameswf::Self **)(v4 - v15 + v12 - 16));
      v5 = v12;
      *(uint32_t *)(v6 + a3 - 16 + 28) = *(uint32_t *)(v4 - v15 + v12 - 12);
      *(uint32_t *)(v6 + v14 + 40) = *(uint32_t *)v4;
      v7 = *(uint8_t *)(v4 + 4);
      v4 -= 24;
      v8 = v13-- == 1;
      *(uint8_t *)(v6 + v14 + 44) = v7;
      if ( v8 )
        break;
      v10 = v11;
      v3 = v11;
    }
    return a3 - 24 * (-1431655765 * ((a2 - a1) >> 3) - 1) - 24;
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: g4_std::copy_gameswf_ASEventDispatche_5bffa4  (binary VA: 0x116cd00)
// Original: std::copy<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *>
// ----------------------------------------------------------------------------
int g4_std::copy_gameswf_ASEventDispatche_5bffa4(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char v6;

  if ( -1431655765 * ((a2 - a1) >> 3) > 0 )
  {
    v3 = a1;
    v4 = a3;
    v5 = -1431655765 * ((a2 - a1) >> 3);
    do
    {
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v4, *(gameswf::Self **)v3);
      *(uint32_t *)(v4 + 4) = *(uint32_t *)(v3 + 4);
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v4 + 8), *(gameswf::Self **)(v3 + 8));
      --v5;
      *(uint32_t *)(v4 + 12) = *(uint32_t *)(v3 + 12);
      *(uint32_t *)(v4 + 16) = *(uint32_t *)(v3 + 16);
      v6 = *(uint8_t *)(v3 + 20);
      v3 += 24;
      *(uint8_t *)(v4 + 20) = v6;
      v4 += 24;
    }
    while ( v5 != 0 );
    a3 += 8 * ((a2 - a1) >> 3);
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: g4_std::move_merge_gameswf_ASEventDispatche_1a29eb  (binary VA: 0x116d400)
// Original: std::__move_merge<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>
// ----------------------------------------------------------------------------
int g4_std::move_merge_gameswf_ASEventDispatche_1a29eb(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v8;
  char v9;
  char v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  int v17;
  char v18;
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

  v5 = a3;
  v6 = a1;
  if ( a3 != a4 && a1 != a2 )
  {
    v8 = a1;
    while ( 1 )
    {
      if ( *(uint32_t *)(v5 + 16) > *(uint32_t *)(v8 + 16) )
      {
        gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)a5, *(gameswf::Self **)v5);
        *(uint32_t *)(a5 + 4) = *(uint32_t *)(v5 + 4);
        gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(a5 + 8), *(gameswf::Self **)(v5 + 8));
        *(uint32_t *)(a5 + 12) = *(uint32_t *)(v5 + 12);
        *(uint32_t *)(a5 + 16) = *(uint32_t *)(v5 + 16);
        v9 = *(uint8_t *)(v5 + 20);
        v5 += 24;
        *(uint8_t *)(a5 + 20) = v9;
        a5 += 24;
        if ( v5 == a4 )
          goto LABEL_8;
      }
      else
      {
        gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)a5, *(gameswf::Self **)v8);
        *(uint32_t *)(a5 + 4) = *(uint32_t *)(v8 + 4);
        gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(a5 + 8), *(gameswf::Self **)(v8 + 8));
        *(uint32_t *)(a5 + 12) = *(uint32_t *)(v8 + 12);
        *(uint32_t *)(a5 + 16) = *(uint32_t *)(v8 + 16);
        v10 = *(uint8_t *)(v8 + 20);
        v8 += 24;
        *(uint8_t *)(a5 + 20) = v10;
        a5 += 24;
        if ( v5 == a4 )
        {
LABEL_8:
          v6 = v8;
          break;
        }
      }
      if ( v8 == a2 )
        goto LABEL_8;
    }
  }
  v29 = -1431655765 * ((a2 - v6) >> 3);
  if ( v29 > 0 )
  {
    v11 = a5;
    v24 = a5;
    v22 = a5 + 8;
    v30 = v5;
    v20 = v6 + 8;
    v12 = v6;
    v27 = v6;
    v13 = -1431655765 * ((a2 - v6) >> 3);
    do
    {
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v11, *(gameswf::Self **)v12);
      *(uint32_t *)(v11 + 4) = *(uint32_t *)(v12 + 4);
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v11 + 8), *(gameswf::Self **)(v12 - v27 + v20));
      --v13;
      *(uint32_t *)(v22 + v11 - v24 + 4) = *(uint32_t *)(v12 - v27 + v20 + 4);
      *(uint32_t *)(v11 + 16) = *(uint32_t *)(v12 + 16);
      v14 = *(uint8_t *)(v12 + 20);
      v12 += 24;
      *(uint8_t *)(v11 + 20) = v14;
      v11 += 24;
    }
    while ( v13 != 0 );
    v5 = v30;
    a5 = v24 + 24 * v29;
  }
  v28 = -1431655765 * ((a4 - v5) >> 3);
  if ( v28 > 0 )
  {
    v15 = a5;
    v23 = a5 + 8;
    v26 = a5;
    v16 = v5;
    v25 = v5;
    v21 = v5 + 8;
    v17 = -1431655765 * ((a4 - v5) >> 3);
    do
    {
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v15, *(gameswf::Self **)v16);
      *(uint32_t *)(v15 + 4) = *(uint32_t *)(v16 + 4);
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v15 + 8), *(gameswf::Self **)(v16 - v25 + v21));
      --v17;
      *(uint32_t *)(v23 + v15 - v26 + 4) = *(uint32_t *)(v16 - v25 + v21 + 4);
      *(uint32_t *)(v15 + 16) = *(uint32_t *)(v16 + 16);
      v18 = *(uint8_t *)(v16 + 20);
      v16 += 24;
      *(uint8_t *)(v15 + 20) = v18;
      v15 += 24;
    }
    while ( v17 != 0 );
    return v26 + 24 * v28;
  }
  return a5;
}


