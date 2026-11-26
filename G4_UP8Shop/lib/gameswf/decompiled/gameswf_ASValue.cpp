#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASValue.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toCStr  (binary VA: 0x110e4e0)
// Original: gameswf::ASValue::toCStr
// ----------------------------------------------------------------------------
char * gameswf::ASValue::toCStr(gameswf::ASValue::Self *self)
{
  char *v1;
  char *result;
  int v3;

  if ( *(uint8_t *)self == 3 || *(uint8_t *)self == 4 )
  {
    v1 = *((char **)self + 1);
  }
  else
  {
    v1 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v3 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v3;
      BYTE2(dword_20D6388) = BYTE2(v3) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v3) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  result = v1 + 1;
  if ( *v1 == -1 )
    return *((char **)v1 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toHexString  (binary VA: 0x110e5a0)
// Original: gameswf::ASValue::toHexString
// ----------------------------------------------------------------------------
char * gameswf::ASValue::toHexString(gameswf::ASValue::Self *self)
{
  char v1;
  char *v2;
  char *result;
  int v4;

  v1 = *(uint8_t *)self;
  if ( *(uint8_t *)self == 5 )
  {
    snprintf(((char *)(&byte_21155F4)), 0x10u, "0x%p", *((uint32_t *)self + 1));
    return (char *)(uintptr_t)(((char *)(&byte_21155F4)));
  }
  if ( v1 == 3 || v1 == 4 )
  {
    v2 = *((char **)self + 1);
    result = v2 + 1;
    if ( *v2 != -1 )
      return result;
    return *((char **)v2 + 3);
  }
  v2 = (char *)(&byte_20D6378);
  if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
  {
    byte_20D6378 = 1;
    v4 = dword_20D6388 | 0x7FFFFF;
    byte_20D6379 = 0;
    dword_20D6388 = v4;
    BYTE2(dword_20D6388) = BYTE2(v4) & 0x7F;
    HIBYTE(dword_20D6388) = HIBYTE(v4) | 1;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
    __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  }
  result = (char *)(&byte_20D6379);
  if ( byte_20D6378 == -1 )
    return *((char **)v2 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toFunction  (binary VA: 0x110e6a0)
// Original: gameswf::ASValue::toFunction
// ----------------------------------------------------------------------------
int gameswf::ASValue::toFunction(gameswf::ASValue::Self *self)
{
  int v1;

  v1 = 0;
  if ( *(uint8_t *)self == 5 )
  {
    v1 = *((uint32_t *)self + 1);
    if ( v1 != 0 && G4_VCALL<uint8_t>(v1, 8, 5) == 0 )
      return 0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::dropRefs  (binary VA: 0x110e6e0)
// Original: gameswf::ASValue::dropRefs
// ----------------------------------------------------------------------------
int gameswf::ASValue::dropRefs(gameswf::ASValue::Self *self)
{
  int result;
  int v2;

  result = *(uint8_t *)self;
  if ( (uint8_t)result != 5 )
  {
    if ( (uint8_t)result != 6 )
    {
      if ( (uint8_t)result == 4 )
      {
        v2 = *((uint32_t *)self + 1);
        if ( v2 != 0 )
        {
          if ( *(uint8_t *)v2 == 0xFF && (*(uint8_t *)(v2 + 19) & 1) != 0 )
            gameswf::free_internal(*(gameswf::Self **)(v2 + 12));
          result = gameswf::free_internal((gameswf::Self *)v2);
          *((uint32_t *)self + 1) = 0;
        }
      }
      return result;
    }
    if ( *((uint32_t *)self + 2) != 0 )
    {
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 2));
      *((uint32_t *)self + 2) = 0;
    }
  }
  result = *((uint32_t *)self + 1);
  if ( result != 0 )
  {
    result = gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 1));
    *((uint32_t *)self + 1) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setObject  (binary VA: 0x110e7a0)
// Original: gameswf::ASValue::setObject
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASValue::setObject(gameswf::ASValue::Self *self, gameswf::ASObject::Self *a2)
{
  gameswf::RefCounted::Self *result;

  if ( *(uint8_t *)self != 5 || *((gameswf::ASObject::Self **)self + 1) != a2 )
  {
    result = (gameswf::RefCounted::Self *)gameswf::ASValue::dropRefs(self);
    *(uint8_t *)self = 5;
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
    if ( a2 != nullptr )
      return gameswf::RefCounted::addRef(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toProperty  (binary VA: 0x110ead0)
// Original: gameswf::ASValue::toProperty
// ----------------------------------------------------------------------------
int gameswf::ASValue::toProperty(gameswf::ASValue::Self *self)
{
  int result;

  result = 0;
  if ( *(uint8_t *)self == 6 )
    return *((uint32_t *)self + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::getPropertyTarget  (binary VA: 0x110eae0)
// Original: gameswf::ASValue::getPropertyTarget
// ----------------------------------------------------------------------------
int gameswf::ASValue::getPropertyTarget(gameswf::ASValue::Self *self)
{
  int result;

  result = 0;
  if ( *(uint8_t *)self == 6 )
    return *((uint32_t *)self + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setPropertyTarget  (binary VA: 0x110eaf0)
// Original: gameswf::ASValue::setPropertyTarget
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASValue::setPropertyTarget(gameswf::ASValue::Self *self, gameswf::ASObject::Self *a2)
{
  gameswf::RefCounted::Self *result;

  result = *((gameswf::RefCounted::Self **)self + 1);
  if ( result != nullptr )
    result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 1));
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr )
    return gameswf::RefCounted::addRef(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::invokeGetter  (binary VA: 0x110eb50)
// Original: gameswf::ASValue::invokeGetter
// ----------------------------------------------------------------------------
int gameswf::ASValue::invokeGetter(gameswf::ASValue::Self *self, gameswf::ASObject::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::RefCounted::Self *v3;
  uint16_t *WeakProxy;
  char v5;
  int v6;
  int v7;
  typedef uint8_t _g4_t_v9;
  typedef void (*_g4_t_v10)(int, uint32_t *);
  typedef uint32_t _g4_t_v11[5];
  typedef uint32_t _g4_t_v12[7];
  typedef uint16_t _g4_t_v13[104];
  typedef uint16_t *_g4_t_v14;
  typedef gameswf::RefCounted::Self *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v13)) > _g4_s4 ? (64u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (272u + sizeof(_g4_t_v14)) > _g4_s5 ? (272u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (276u + sizeof(_g4_t_v15)) > _g4_s6 ? (276u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 272u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 276u);

  memset(v13, 0, 16);
  v13[56] = 0;
  v3 = *((gameswf::RefCounted::Self **)a2 + 4);
  v13[62] = 0;
  v13[68] = 0;
  v13[74] = 0;
  memset(&v13[80], 0, 22);
  memset(&v13[96], 0, 16);
  v14 = nullptr;
  v15 = v3;
  if ( v3 != nullptr )
  {
    WeakProxy = (uint16_t *)gameswf::RefCounted::getWeakProxy(v3);
    if ( WeakProxy != v14 )
    {
      v14 = WeakProxy;
      ++*WeakProxy;
    }
  }
  v5 = 0;
  if ( *((uint32_t *)self + 1) != 0 )
  {
    gameswf::RefCounted::addRef(a2);
    v6 = **((uint32_t **)self + 1);
    LOWORD(v11[0]) = 5;
    v11[1] = (uint32_t)(uintptr_t)(a2);
    v10 = *(void (**)(int, uint32_t *))(v6 + 104);
    gameswf::RefCounted::addRef(a2);
    v7 = *((uint32_t *)self + 1);
    v12[3] = (uint32_t)(uintptr_t)(v13);
    v12[6] = (uint32_t)(uintptr_t)(&off_1B159F1);
    v12[0] = (uint32_t)(uintptr_t)(a3);
    v12[1] = (uint32_t)(uintptr_t)(a2);
    v12[2] = (uint32_t)(uintptr_t)(v11);
    v12[4] = 0;
    v12[5] = 0;
    v10(v7, v12);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
    gameswf::RefCounted::dropRef(a2);
    v5 = 1;
  }
  v9 = v5;
  sub_110E800((int)(uintptr_t)(v13));
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setGetter  (binary VA: 0x110ed80)
// Original: gameswf::ASValue::setGetter
// ----------------------------------------------------------------------------
gameswf::ASFunction::Self * gameswf::ASValue::setGetter(gameswf::ASValue::Self *self, gameswf::ASFunction::Self *a2)
{
  gameswf::ASValue::dropRefs(self);
  if ( *(uint8_t *)self != 7 )
    *((uint32_t *)self + 2) = 0;
  *(uint8_t *)self = 7;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setSetter  (binary VA: 0x110edd0)
// Original: gameswf::ASValue::setSetter
// ----------------------------------------------------------------------------
gameswf::ASFunction::Self * gameswf::ASValue::setSetter(gameswf::ASValue::Self *self, gameswf::ASFunction::Self *a2)
{
  gameswf::ASValue::dropRefs(self);
  if ( *(uint8_t *)self != 7 )
    *((uint32_t *)self + 1) = 0;
  *(uint8_t *)self = 7;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setDouble  (binary VA: 0x110ee20)
// Original: gameswf::ASValue::setDouble
// ----------------------------------------------------------------------------
int gameswf::ASValue::setDouble(gameswf::ASValue::Self *self, double a2)
{
  int result;

  result = gameswf::ASValue::dropRefs(self);
  *(uint8_t *)self = 2;
  *(double *)((char *)self + 4) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setBool  (binary VA: 0x110ee70)
// Original: gameswf::ASValue::setBool
// ----------------------------------------------------------------------------
int gameswf::ASValue::setBool(gameswf::ASValue::Self *self, int a2)
{
  gameswf::ASValue::dropRefs(self);
  *(uint8_t *)self = 1;
  *((uint8_t *)self + 4) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::isFunction  (binary VA: 0x110eec0)
// Original: gameswf::ASValue::isFunction
// ----------------------------------------------------------------------------
int gameswf::ASValue::isFunction(gameswf::ASValue::Self *self)
{
  int result;
  int v2;

  result = 0;
  if ( *(uint8_t *)self == 5 )
  {
    v2 = *((uint32_t *)self + 1);
    if ( v2 != 0 )
      return G4_VCALL<int>(v2, 8, 5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setASCppFunction  (binary VA: 0x110ef00)
// Original: gameswf::ASValue::setASCppFunction
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASValue::setASCppFunction(gameswf::ASValue::Self *a1, int a2)
{
  gameswf::ASObject::Self *v2;

  v2 = (gameswf::ASObject::Self *)opNew(0x2Cu);
  gameswf::ASCppFunction::Construct(v2, nullptr, a2);
  return gameswf::ASValue::setObject(a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::isInstanceOf  (binary VA: 0x110ef70)
// Original: gameswf::ASValue::isInstanceOf
// ----------------------------------------------------------------------------
int gameswf::ASValue::isInstanceOf(gameswf::ASValue::Self *self, const gameswf::ASFunction::Self *a2)
{
  int isInstanceOf;
  int (*v4)(int);
  gameswf::ASObject::Self *v5;

  switch ( *(uint8_t *)self )
  {
    case 1:
      isInstanceOf = 0;
      if ( a2 != nullptr
        && G4_VCALL<uint8_t>(a2, 8, 6) != 0 )
      {
        v4 = *((int (**)(int))a2 + 10);
        isInstanceOf = 1;
        if ( v4 != gameswf::ASBoolean::ctor && v4 != gameswf::ASBoolean::init )
          goto LABEL_19;
      }
      break;
    case 2:
      isInstanceOf = 0;
      if ( a2 != nullptr
        && G4_VCALL<uint8_t>(a2, 8, 6) != 0 )
      {
        v4 = *((int (**)(int))a2 + 10);
        isInstanceOf = 1;
        if ( v4 != gameswf::ASNumber::ctor && v4 != gameswf::ASNumber::init )
          goto LABEL_19;
      }
      break;
    case 3:
    case 4:
      isInstanceOf = 0;
      if ( a2 != nullptr
        && G4_VCALL<uint8_t>(a2, 8, 6) != 0 )
      {
        v4 = *((int (**)(int))a2 + 10);
        isInstanceOf = 1;
        if ( v4 != (int (*)(int))(uintptr_t)(gameswf::ASString::ctor) && v4 != (int (*)(int))gameswf::ASString::init )
        {
LABEL_19:
          if ( v4 != (int (*)(int))gameswf::ASObject::ctor )
          {
            LOBYTE(v4) = (char *)v4 == (char *)gameswf::ASObject::init;
            isInstanceOf = (int)(uintptr_t)(v4);
          }
        }
      }
      break;
    case 5:
      v5 = *((gameswf::ASObject::Self **)self + 1);
      isInstanceOf = 0;
      if ( v5 != nullptr )
        isInstanceOf = gameswf::ASObject::isInstanceOf(v5, a2);
      break;
    default:
      isInstanceOf = 0;
      break;
  }
  return isInstanceOf;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::getMember  (binary VA: 0x110f0c0)
// Original: gameswf::ASValue::getMember
// ----------------------------------------------------------------------------
int gameswf::ASValue::getMember(gameswf::ASValue::Self *self, gameswf::Self **a2, gameswf::ASValue::Self *a3)
{
  const gameswf::String::Self *v3;
  int result;
  gameswf::ASObject::Self *v5;
  int MemberIndex;
  char v7;
  int v8;
  gameswf::Self *v9;
  char *v10;
  gameswf::Self *v11;
  int v12;
  unsigned int v13;
  char v14;
  int v15;
  gameswf::Self *v16;
  char *v17;
  gameswf::Self *v18;
  int v19;
  unsigned int v20;
  char v21;
  int v22;
  gameswf::Self *v23;
  char *v24;
  gameswf::Self *v25;
  int v26;
  unsigned int v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  int v31;
  gameswf::Self *v32;
  int v33;
  int v34;
  int v35;
  gameswf::Self *v36;
  int v37;
  int v38;
  int v39;
  typedef uint8_t _g4_t_v40;
  typedef uint8_t _g4_t_v41;
  typedef uint8_t _g4_t_v42;
  typedef gameswf::Self *_g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef int _g4_t_v46[3];
  typedef gameswf::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49[3];
  typedef gameswf::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52[3];
  typedef gameswf::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v41)) > _g4_s1 ? (0u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v42)) > _g4_s2 ? (0u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v43)) > _g4_s3 ? (8u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v44)) > _g4_s4 ? (8u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v45)) > _g4_s5 ? (8u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v46)) > _g4_s6 ? (16u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v47)) > _g4_s7 ? (28u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v48)) > _g4_s8 ? (32u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v49)) > _g4_s9 ? (48u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v50)) > _g4_s10 ? (60u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v51)) > _g4_s11 ? (64u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v52)) > _g4_s12 ? (80u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v53)) > _g4_s13 ? (92u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v54)) > _g4_s14 ? (96u + sizeof(_g4_t_v54)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 92u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 96u);

  v3 = (const gameswf::String::Self *)a2;
  switch ( *(uint8_t *)self )
  {
    case 1:
      v21 = *(uint8_t *)a2;
      LOWORD(v52[0]) = 1;
      if ( v21 == -1 )
        v22 = (int)(uintptr_t)(a2[1]) - 1;
      else
        v22 = v21 - 1;
      gameswf::String::resize((gameswf::String::Self *)v52, v22);
      v23 = (gameswf::Self *)((char *)a2 + 1);
      if ( *(uint8_t *)a2 == 0xFF )
        v23 = a2[3];
      if ( LOBYTE(v52[0]) == 0xFF )
      {
        v24 = (char *)v52[1];
        v25 = v53;
      }
      else
      {
        v24 = (char *)SLOBYTE(v52[0]);
        v25 = (gameswf::Self *)((char *)v52 + 1);
      }
      gameswf::Strcpy_s(v25, v24, v23);
      v45 = a2[4];
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v45) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *(uint8_t *)a2 == 0xFF )
        {
          v28 = a2[3];
          v29 = (int)(uintptr_t)(a2[1]) - 1;
        }
        else
        {
          v28 = (gameswf::Self *)((char *)a2 + 1);
          v29 = *(char *)a2 - 1;
        }
        v26 = 5381;
        if ( v29 > 0 )
        {
          do
          {
            --v29;
            v30 = 33 * v26;
            v31 = *((uint8_t *)v28 + v29) + 32;
            if ( (uint8_t)(*((uint8_t *)v28 + v29) - 65) > 0x19u )
              v31 = *((uint8_t *)v28 + v29);
            v26 = v30 ^ v31;
          }
          while ( v29 != 0 );
          v3 = (const gameswf::String::Self *)a2;
          v26 = v26 << 9 >> 9;
        }
        *((uint32_t *)v3 + 4) = v26 & 0x7FFFFF | (unsigned int)(uintptr_t)(v45) & 0xFF800000;
      }
      else
      {
        v26 = (int)((uint32_t)(uintptr_t)(v45) << 9) >> 9;
      }
      v27 = v26 & 0x7FFFFF | v54 & 0xFF800000;
      LOWORD(v54) = v26;
      HIBYTE(v54) = HIBYTE(v27) | 1;
      BYTE2(v54) = BYTE2(v27) & 0x7F;
      result = gameswf::get_builtin(3, (char *)v52, a3);
      if ( LOBYTE(v52[0]) == 0xFF && (v54 & 0x1000000) != 0 )
      {
        v42 = result;
        gameswf::free_internal(v53);
        result = v42;
      }
      break;
    case 2:
      v14 = *(uint8_t *)a2;
      LOWORD(v49[0]) = 1;
      if ( v14 == -1 )
        v15 = (int)(uintptr_t)(a2[1]) - 1;
      else
        v15 = v14 - 1;
      gameswf::String::resize((gameswf::String::Self *)v49, v15);
      v16 = (gameswf::Self *)((char *)a2 + 1);
      if ( *(uint8_t *)a2 == 0xFF )
        v16 = a2[3];
      if ( LOBYTE(v49[0]) == 0xFF )
      {
        v17 = (char *)v49[1];
        v18 = v50;
      }
      else
      {
        v17 = (char *)SLOBYTE(v49[0]);
        v18 = (gameswf::Self *)((char *)v49 + 1);
      }
      gameswf::Strcpy_s(v18, v17, v16);
      v44 = a2[4];
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v44) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *(uint8_t *)a2 == 0xFF )
        {
          v36 = a2[3];
          v37 = (int)(uintptr_t)(a2[1]) - 1;
        }
        else
        {
          v36 = (gameswf::Self *)((char *)a2 + 1);
          v37 = *(char *)a2 - 1;
        }
        v19 = 5381;
        if ( v37 > 0 )
        {
          do
          {
            --v37;
            v38 = 33 * v19;
            v39 = *((uint8_t *)v36 + v37) + 32;
            if ( (uint8_t)(*((uint8_t *)v36 + v37) - 65) > 0x19u )
              v39 = *((uint8_t *)v36 + v37);
            v19 = v38 ^ v39;
          }
          while ( v37 != 0 );
          v3 = (const gameswf::String::Self *)a2;
          v19 = v19 << 9 >> 9;
        }
        *((uint32_t *)v3 + 4) = v19 & 0x7FFFFF | (unsigned int)(uintptr_t)(v44) & 0xFF800000;
      }
      else
      {
        v19 = (int)((uint32_t)(uintptr_t)(v44) << 9) >> 9;
      }
      v20 = v19 & 0x7FFFFF | v51 & 0xFF800000;
      LOWORD(v51) = v19;
      HIBYTE(v51) = HIBYTE(v20) | 1;
      BYTE2(v51) = BYTE2(v20) & 0x7F;
      result = gameswf::get_builtin(2, (char *)v49, a3);
      if ( LOBYTE(v49[0]) == 0xFF && (v51 & 0x1000000) != 0 )
      {
        v41 = result;
        gameswf::free_internal(v50);
        result = v41;
      }
      break;
    case 3:
    case 4:
      v7 = *(uint8_t *)a2;
      LOWORD(v46[0]) = 1;
      if ( v7 == -1 )
        v8 = (int)(uintptr_t)(a2[1]) - 1;
      else
        v8 = v7 - 1;
      gameswf::String::resize((gameswf::String::Self *)v46, v8);
      v9 = (gameswf::Self *)((char *)a2 + 1);
      if ( *(uint8_t *)a2 == 0xFF )
        v9 = a2[3];
      if ( LOBYTE(v46[0]) == 0xFF )
      {
        v10 = (char *)v46[1];
        v11 = v47;
      }
      else
      {
        v10 = (char *)SLOBYTE(v46[0]);
        v11 = (gameswf::Self *)((char *)v46 + 1);
      }
      gameswf::Strcpy_s(v11, v10, v9);
      v43 = a2[4];
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v43) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *(uint8_t *)a2 == 0xFF )
        {
          v32 = a2[3];
          v33 = (int)(uintptr_t)(a2[1]) - 1;
        }
        else
        {
          v32 = (gameswf::Self *)((char *)a2 + 1);
          v33 = *(char *)a2 - 1;
        }
        v12 = 5381;
        if ( v33 > 0 )
        {
          do
          {
            --v33;
            v34 = 33 * v12;
            v35 = *((uint8_t *)v32 + v33) + 32;
            if ( (uint8_t)(*((uint8_t *)v32 + v33) - 65) > 0x19u )
              v35 = *((uint8_t *)v32 + v33);
            v12 = v34 ^ v35;
          }
          while ( v33 != 0 );
          v3 = (const gameswf::String::Self *)a2;
          v12 = v12 << 9 >> 9;
        }
        *((uint32_t *)v3 + 4) = v12 & 0x7FFFFF | (unsigned int)(uintptr_t)(v43) & 0xFF800000;
      }
      else
      {
        v12 = (int)((uint32_t)(uintptr_t)(v43) << 9) >> 9;
      }
      v13 = v12 & 0x7FFFFF | v48 & 0xFF800000;
      LOWORD(v48) = v12;
      HIBYTE(v48) = HIBYTE(v13) | 1;
      BYTE2(v48) = BYTE2(v13) & 0x7F;
      result = gameswf::get_builtin(4, (char *)v46, a3);
      if ( LOBYTE(v46[0]) == 0xFF && (v48 & 0x1000000) != 0 )
      {
        v40 = result;
        gameswf::free_internal(v47);
        result = v40;
      }
      break;
    case 5:
      v5 = *((gameswf::ASObject::Self **)self + 1);
      result = 0;
      if ( v5 != nullptr )
      {
        MemberIndex = gameswf::ASObject::getMemberIndex(v5, (const gameswf::String::Self *)a2);
        result = gameswf::ASObject::getMemberAt(
                   *((gameswf::ASObject::Self **)self + 1),
                   MemberIndex,
                   (const gameswf::String::Self *)a2,
                   a3);
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::getMemberAt  (binary VA: 0x110f670)
// Original: gameswf::ASValue::getMemberAt
// ----------------------------------------------------------------------------
int gameswf::ASValue::getMemberAt(gameswf::ASValue::Self *self, int a2, const gameswf::String::Self *a3, gameswf::ASValue::Self *a4)
{
  int result;
  gameswf::ASObject::Self *v5;

  switch ( *(uint8_t *)self )
  {
    case 1:
      result = gameswf::get_builtin(3, (char *)a3, a4);
      break;
    case 2:
      result = gameswf::get_builtin(2, (char *)a3, a4);
      break;
    case 3:
    case 4:
      result = gameswf::get_builtin(4, (char *)a3, a4);
      break;
    case 5:
      v5 = *((gameswf::ASObject::Self **)self + 1);
      result = 0;
      if ( v5 != nullptr )
        result = gameswf::ASObject::getMemberAt(v5, a2, a3, a4);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setMember  (binary VA: 0x110f760)
// Original: gameswf::ASValue::setMember
// ----------------------------------------------------------------------------
int gameswf::ASValue::setMember(gameswf::ASObject::Self **self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  int result;
  int MemberIndex;

  result = 0;
  if ( *(uint8_t *)self == 5 && *(self + 1) != nullptr )
  {
    MemberIndex = gameswf::ASObject::getMemberIndex(*(self + 1), a2);
    return gameswf::ASObject::setMemberAt(*(self + 1), MemberIndex, a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::invokeMethod  (binary VA: 0x110f7d0)
// Original: gameswf::ASValue::invokeMethod
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * gameswf::ASValue::invokeMethod(gameswf::ASValue::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3, gameswf::ASValue::Self *a4, unsigned int a5)
{
  const gameswf::String::Self *v5;
  gameswf::ASValue::Self *v6;
  const gameswf::ASValue::Self *v7;
  int v9;
  gameswf::RefCounted::Self *v10;
  gameswf::Self *v11;
  int16_t v12;
  char *v13;
  typedef int _g4_t_v14;
  typedef gameswf::Self *_g4_t_WeakProxy;
  typedef const gameswf::ASValue::Self *_g4_t_v16;
  typedef gameswf::ASValue::Self *_g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[144];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef gameswf::RefCounted::Self *_g4_t_v34;
  typedef gameswf::ASValue::Self **_g4_t_v35;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_WeakProxy)) > _g4_s1 ? (4u + sizeof(_g4_t_WeakProxy)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v18)) > _g4_s4 ? (32u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v21)) > _g4_s7 ? (48u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (192u + sizeof(_g4_t_v22)) > _g4_s8 ? (192u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (196u + sizeof(_g4_t_v23)) > _g4_s9 ? (196u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (200u + sizeof(_g4_t_v24)) > _g4_s10 ? (200u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (204u + sizeof(_g4_t_v25)) > _g4_s11 ? (204u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (208u + sizeof(_g4_t_v26)) > _g4_s12 ? (208u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (212u + sizeof(_g4_t_v27)) > _g4_s13 ? (212u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (213u + sizeof(_g4_t_v28)) > _g4_s14 ? (213u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (224u + sizeof(_g4_t_v29)) > _g4_s15 ? (224u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (228u + sizeof(_g4_t_v30)) > _g4_s16 ? (228u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (232u + sizeof(_g4_t_v31)) > _g4_s17 ? (232u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (236u + sizeof(_g4_t_v32)) > _g4_s18 ? (236u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (240u + sizeof(_g4_t_v33)) > _g4_s19 ? (240u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (244u + sizeof(_g4_t_v34)) > _g4_s20 ? (244u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (264u + sizeof(_g4_t_v35)) > _g4_s21 ? (264u + sizeof(_g4_t_v35)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_WeakProxy &WeakProxy = *reinterpret_cast<_g4_t_WeakProxy *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 192u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 196u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 200u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 204u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 208u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 212u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 213u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 224u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 228u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 232u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 236u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 240u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 244u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 264u);

  v35 = &self;
  v5 = a2;
  v6 = self;
  v7 = a3;
  v17 = a4;
  v14 = a5;
  if ( *(uint8_t *)a2 == 5 && (v9 = *((uint32_t *)a2 + 1)) != 0 )
  {
    v10 = *(gameswf::RefCounted::Self **)(v9 + 16);
    v18[0] = 0;
    v18[1] = 0;
    v19 = 0;
    v20 = 0;
    if ( a5 <= 8 )
    {
      v19 = 8;
      v18[0] = (uint32_t)(uintptr_t)(v21);
      v20 = 1;
    }
    v21[96] = 0;
    v21[97] = 0;
    v21[108] = 0;
    v21[109] = 0;
    v21[120] = 0;
    v21[121] = 0;
    v21[132] = 0;
    v21[133] = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = nullptr;
    v34 = v10;
    if ( v10 != nullptr )
    {
      v16 = a3;
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v10);
      v7 = v16;
      if ( WeakProxy != v33 )
      {
        if ( v33 != nullptr )
        {
          v11 = v33;
          v12 = *(uint16_t *)v33 - 1;
          *(uint16_t *)v33 = v12;
          if ( v12 == 0 )
          {
            gameswf::free_internal(v11);
            v7 = v16;
          }
        }
        v33 = WeakProxy;
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
    }
    if ( *(uint8_t *)v7 == 0xFF )
      v13 = *((char **)v7 + 3);
    else
      v13 = (char *)v7 + 1;
    gameswf::call_method(v6, (gameswf::ASEnvironment::Self *)v18, *((gameswf::ASObject::Self **)v5 + 1), v13, v17, v14);
    sub_110E800((int)(uintptr_t)(v18));
  }
  else
  {
    *(uint8_t *)self = 0;
    *((uint8_t *)v6 + 1) = 0;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setString  (binary VA: 0x110f9d0)
// Original: gameswf::ASValue::setString
// ----------------------------------------------------------------------------
char * gameswf::ASValue::setString(const gameswf::String::Self **self, const gameswf::String::Self *a2)
{
  const gameswf::String::Self **v2;
  char *result;
  int v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = self;
  result = (char *)a2 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
    result = *((char **)a2 + 3);
  if ( result != nullptr )
  {
    if ( *(uint8_t *)self == 4 )
    {
      if ( *(self + 1) == a2 )
        return result;
      result = (char *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)self);
      if ( *((char *)a2 + 18) < 0 )
        goto LABEL_6;
    }
    else
    {
      result = (char *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)self);
      if ( *((char *)a2 + 18) < 0 )
      {
LABEL_6:
        *(uint8_t *)self = 3;
        *(self + 1) = a2;
        return result;
      }
    }
    *(uint8_t *)self = 4;
    v4 = opNew(0x14u);
    *(uint8_t *)v4 = 1;
    *(uint8_t *)(v4 + 1) = 0;
    if ( *(uint8_t *)a2 == 0xFF )
      v5 = *((uint32_t *)a2 + 1) - 1;
    else
      v5 = *(char *)a2 - 1;
    gameswf::String::resize((gameswf::String::Self *)v4, v5);
    v6 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a2 + 1));
    if ( *(uint8_t *)a2 == 0xFF )
      v6 = *((gameswf::Self **)a2 + 3);
    LOBYTE(v7) = *(uint8_t *)v4;
    if ( *(uint8_t *)v4 == 0xFF )
    {
      v7 = *(char **)(v4 + 4);
      v8 = *(gameswf::Self **)(v4 + 12);
    }
    else
    {
      v7 = (char *)(char)(uintptr_t)v7;
      v8 = (gameswf::Self *)(v4 + 1);
    }
    gameswf::Strcpy_s(v8, v7, v6);
    v15 = *((uint32_t *)a2 + 4);
    if ( (uint8_t *)(v15 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v11 = *((char **)a2 + 3);
        v12 = *((uint32_t *)a2 + 1) - 1;
      }
      else
      {
        v11 = (char *)a2 + 1;
        v12 = *(char *)a2 - 1;
      }
      v9 = 5381;
      if ( v12 > 0 )
      {
        do
        {
          --v12;
          v13 = 33 * v9;
          v14 = (uint8_t)v11[v12] + 32;
          if ( (uint8_t)(v11[v12] - 65) > 0x19u )
            v14 = (uint8_t)v11[v12];
          v9 = v13 ^ v14;
        }
        while ( v12 != 0 );
        v2 = self;
        v9 = v9 << 9 >> 9;
      }
      *((uint32_t *)a2 + 4) = v9 & 0x7FFFFF | v15 & 0xFF800000;
    }
    else
    {
      v9 = v15 << 9 >> 9;
    }
    v10 = v9 & 0x7FFFFF | *(uint32_t *)(v4 + 16) & 0xFF800000;
    *(uint32_t *)(v4 + 16) = v10;
    *(uint8_t *)(v4 + 18) = BYTE2(v10) & 0x7F;
    *(uint8_t *)(v4 + 19) = HIBYTE(v10) | 1;
    v2[1] = (const gameswf::String::Self *)v4;
    return (char *)(HIWORD(v10) & 0x7F);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setString  (binary VA: 0x110fbe0)
// Original: gameswf::ASValue::setString
// ----------------------------------------------------------------------------
int gameswf::ASValue::setString(gameswf::ASValue::Self *self, char *s)
{
  int result;
  int v3;
  gameswf::Self *v4;
  unsigned int v5;
  int v6;
  gameswf::Self *v7;
  uint32_t *v8;
  int v9;
  char *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  int v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  int v17;
  typedef size_t _g4_t_v18;
  typedef size_t _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef uint8_t _g4_t_v23[3];
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef unsigned int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (14u + sizeof(_g4_t_v21)) > _g4_s3 ? (14u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v23)) > _g4_s5 ? (17u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v26)) > _g4_s8 ? (32u + sizeof(_g4_t_v26)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 14u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 17u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);

  result = (int)(uintptr_t)(s);
  if ( s != nullptr )
  {
    if ( *(uint8_t *)self == 4 )
    {
      v22 = 1;
      v23[0] = 0;
      v19 = strlen(s);
      gameswf::String::resize((gameswf::String::Self *)&v22, v19);
      v7 = (gameswf::Self *)v23;
      if ( v22 == -1 )
        v7 = v25;
      gameswf::Strcpy_s(v7, (char *)(v19 + 1), (gameswf::Self *)s);
      LOWORD(v26) = -1;
      BYTE2(v26) = 127;
      HIBYTE(v26) |= 1u;
      v8 = *((uint32_t **)self + 1);
      if ( v8 == (uint32_t *)&v22 )
      {
        result = *(uint8_t *)v8;
        v21 = *(uint8_t *)v8;
      }
      else
      {
        if ( v22 == -1 )
          v9 = v24 - 1;
        else
          v9 = v22 - 1;
        gameswf::String::resize((gameswf::String::Self *)v8, v9);
        LOBYTE(v10) = *(uint8_t *)v8;
        v11 = (gameswf::Self *)v23;
        if ( v22 == -1 )
          v11 = v25;
        if ( (uint8_t)(uintptr_t)v10 == 0xFF )
        {
          v10 = (char *)v8[1];
          v12 = (gameswf::Self *)v8[3];
        }
        else
        {
          v10 = (char *)(char)(uintptr_t)v10;
          v12 = (gameswf::Self *)((char *)v8 + 1);
        }
        gameswf::Strcpy_s(v12, v10, v11);
        if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          v21 = v22;
          if ( v22 == -1 )
          {
            v14 = v25;
            v15 = v24 - 1;
          }
          else
          {
            v14 = (gameswf::Self *)v23;
            v15 = v22 - 1;
          }
          v13 = 5381;
          if ( v15 > 0 )
          {
            v20 = v8;
            do
            {
              --v15;
              v16 = 33 * v13;
              v17 = *((uint8_t *)v14 + v15) + 32;
              if ( (uint8_t)(*((uint8_t *)v14 + v15) - 65) > 0x19u )
                v17 = *((uint8_t *)v14 + v15);
              v13 = v16 ^ v17;
            }
            while ( v15 != 0 );
            v8 = v20;
            v13 = v13 << 9 >> 9;
          }
          v26 = v13 & 0x7FFFFF | v26 & 0xFF800000;
        }
        else
        {
          v21 = v22;
          v13 = (int)(v26 << 9) >> 9;
        }
        result = v13 & 0x7FFFFF;
        v8[4] = result | v8[4] & 0xFF800000;
      }
      if ( v21 == -1 && (v26 & 0x1000000) != 0 )
        return gameswf::free_internal(v25);
    }
    else
    {
      gameswf::ASValue::dropRefs(self);
      *(uint8_t *)self = 4;
      v3 = opNew(0x14u);
      *(uint8_t *)v3 = 1;
      *(uint8_t *)(v3 + 1) = 0;
      v18 = strlen(s);
      gameswf::String::resize((gameswf::String::Self *)v3, v18);
      v4 = (gameswf::Self *)(v3 + 1);
      if ( *(uint8_t *)v3 == 0xFF )
        v4 = *(gameswf::Self **)(v3 + 12);
      gameswf::Strcpy_s(v4, (char *)(v18 + 1), (gameswf::Self *)s);
      v5 = *(uint32_t *)(v3 + 16) | 0x7FFFFF;
      *(uint32_t *)(v3 + 16) = v5;
      v6 = HIWORD(v5) & 0x7F;
      result = HIBYTE(v5) | 1;
      *(uint8_t *)(v3 + 18) = v6;
      *(uint8_t *)(v3 + 19) = result;
      *((uint32_t *)self + 1) = v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::Construct  (binary VA: 0x110feb0)
// Original: gameswf::ASValue::ASValue
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * gameswf::ASValue::Construct(gameswf::ASValue::Self *self, wchar_t *a2)
{
  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 0;
  gameswf::ASValue::setString(self, (char *)&unk_1B15112);
  return (gameswf::ASValue::Self *)gameswf::String::encodeUTF8FromWchar(*((gameswf::Self ***)self + 1), (gameswf::String::Self *)a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::getProperty  (binary VA: 0x1110240)
// Original: gameswf::ASValue::getProperty
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASValue::getProperty(gameswf::ASProperty::Self **self, gameswf::ASValue::Self *a2)
{
  return gameswf::ASProperty::get(*(self + 2), *(self + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::typeof  (binary VA: 0x1110280)
// Original: gameswf::ASValue::_typeof
// ----------------------------------------------------------------------------
const char * gameswf::ASValue::typeof(gameswf::ASValue::Self *self)
{
  int v1;
  const char *result;
  typedef const char *_g4_t_v3;
  typedef uint8_t _g4_t_v4[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v4)) > _g4_s1 ? (20u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);

  switch ( *(uint8_t *)self )
  {
    case 0:
      result = "undefined";
      break;
    case 1:
      result = "boolean";
      break;
    case 2:
      result = "number";
      break;
    case 3:
    case 4:
      result = "string";
      break;
    case 5:
      v1 = *((uint32_t *)self + 1);
      result = "null";
      if ( v1 != 0 )
        result = (const char *)G4_VCALL<int>(v1, 24);
      break;
    case 6:
      v4[0] = 0;
      v4[1] = 0;
      gameswf::ASValue::getProperty((gameswf::ASProperty::Self **)self, (gameswf::ASValue::Self *)v4);
      v3 = (const char *)gameswf::ASValue::typeof((gameswf::ASValue::Self *)v4);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
      result = v3;
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::opAssign  (binary VA: 0x1110380)
// Original: gameswf::ASValue::operator=
// ----------------------------------------------------------------------------
void * gameswf::ASValue::opAssign(gameswf::ASValue::Self *self, const gameswf::ASValue::Self *a2)
{
  void *result;
  gameswf::RefCounted::Self *v3;

  result = (void *)*((uint8_t *)a2 + 1);
  *((uint8_t *)self + 1) = (uint8_t)(uintptr_t)(result);
  switch ( *(uint8_t *)a2 )
  {
    case 0:
      *((uint8_t *)self + 1) = 0;
      result = (void *)gameswf::ASValue::dropRefs(self);
      *(uint8_t *)self = 0;
      break;
    case 1:
      result = (void *)gameswf::ASValue::setBool(self, *((uint8_t *)a2 + 4));
      break;
    case 2:
      result = (void *)gameswf::ASValue::setDouble(self, *(double *)((char *)a2 + 4));
      break;
    case 3:
    case 4:
      result = gameswf::ASValue::setString((const gameswf::String::Self **)self, *((const gameswf::String::Self **)a2 + 1));
      break;
    case 5:
      result = gameswf::ASValue::setObject(self, *((gameswf::ASObject::Self **)a2 + 1));
      break;
    case 6:
      gameswf::ASValue::dropRefs(self);
      if ( *((uint32_t *)a2 + 1) != 0 )
      {
        result = gameswf::ASValue::getProperty((gameswf::ASProperty::Self **)a2, self);
      }
      else
      {
        *(uint8_t *)self = 6;
        v3 = *((gameswf::RefCounted::Self **)a2 + 2);
        *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
        result = gameswf::RefCounted::addRef(v3);
        *((uint32_t *)self + 1) = 0;
      }
      break;
    case 7:
      gameswf::ASValue::dropRefs(self);
      *(uint8_t *)self = 6;
      *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
      result = *((void **)a2 + 2);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
      break;
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::setProperty  (binary VA: 0x1110800)
// Original: gameswf::ASValue::setProperty
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASValue::setProperty(gameswf::ASProperty::Self **self, const gameswf::ASValue::Self *a2)
{
  return gameswf::ASProperty::set(*(self + 2), *(self + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::invokeSetter  (binary VA: 0x1110840)
// Original: gameswf::ASValue::invokeSetter
// ----------------------------------------------------------------------------
int gameswf::ASValue::invokeSetter(gameswf::ASValue::Self *self, gameswf::ASObject::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::RefCounted::Self *v3;
  gameswf::Self *WeakProxy;
  gameswf::Self *v5;
  int v7;
  int v8;
  gameswf::Self *v9;
  gameswf::ASValue::Self *v10;
  int v11;
  char v12;
  int v13;
  int v14;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef void (*_g4_t_v20)(int, uint32_t *);
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[6];
  typedef uint8_t _g4_t_v23[12];
  typedef uint32_t _g4_t_v24[7];
  typedef gameswf::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint16_t _g4_t_v29[96];
  typedef gameswf::Self *_g4_t_v30;
  typedef gameswf::RefCounted::Self *_g4_t_v31;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v20)) > _g4_s4 ? (12u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v21)) > _g4_s5 ? (12u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v24)) > _g4_s8 ? (52u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v25)) > _g4_s9 ? (80u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v26)) > _g4_s10 ? (84u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v27)) > _g4_s11 ? (88u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v28)) > _g4_s12 ? (92u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v29)) > _g4_s13 ? (96u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (288u + sizeof(_g4_t_v30)) > _g4_s14 ? (288u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (292u + sizeof(_g4_t_v31)) > _g4_s15 ? (292u + sizeof(_g4_t_v31)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 288u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 292u);

  v26 = 0;
  v25 = (gameswf::Self *)v29;
  v27 = 8;
  v28 = 1;
  v3 = *((gameswf::RefCounted::Self **)a2 + 4);
  v29[48] = 0;
  v29[54] = 0;
  v29[60] = 0;
  v29[66] = 0;
  memset(&v29[72], 0, 22);
  memset(&v29[88], 0, 16);
  v30 = nullptr;
  v31 = v3;
  if ( v3 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
    v5 = v30;
    if ( WeakProxy != v30 )
    {
      if ( v30 != nullptr && (*(uint16_t *)v30)-- == 1 )
      {
        v18 = WeakProxy;
        gameswf::free_internal(v5);
        WeakProxy = v18;
      }
      v30 = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  v7 = v26;
  v19 = v27;
  v8 = v26 + 1;
  if ( v26 + 1 <= v27 || v28 != 0 )
  {
    v9 = v25;
  }
  else
  {
    v21 = v8 + (v8 >> 1);
    v27 = v21;
    if ( v21 != 0 )
    {
      if ( v25 != nullptr )
        v9 = (gameswf::Self *)gameswf::realloc_internal(v25, 12 * v21, 12 * v19);
      else
        v9 = (gameswf::Self *)gameswf::malloc_internal(12 * v21);
      v25 = v9;
      v7 = v26;
      v8 = v26 + 1;
    }
    else
    {
      if ( v25 != nullptr )
      {
        gameswf::free_internal(v25);
        v7 = v26;
        v8 = v26 + 1;
      }
      v25 = nullptr;
      v9 = nullptr;
    }
  }
  v10 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v9 + 12 * v7));
  if ( v10 != nullptr )
  {
    *(uint8_t *)v10 = 0;
    *((uint8_t *)v10 + 1) = 0;
    v16 = v8;
    gameswf::ASValue::opAssign(v10, a3);
    v8 = v16;
  }
  v11 = *((uint32_t *)self + 2);
  v26 = v8;
  v12 = 0;
  if ( v11 != 0 )
  {
    v23[0] = 0;
    v23[1] = 0;
    gameswf::RefCounted::addRef(a2);
    v13 = **((uint32_t **)self + 2);
    LOWORD(v22[0]) = 5;
    v22[1] = (uint32_t)(uintptr_t)(a2);
    v20 = *(void (**)(int, uint32_t *))(v13 + 104);
    gameswf::RefCounted::addRef(a2);
    v24[3] = (uint32_t)(uintptr_t)(&v25);
    v14 = *((uint32_t *)self + 2);
    v24[5] = v26 - 1;
    v24[6] = (uint32_t)(uintptr_t)("set");
    v24[0] = (uint32_t)(uintptr_t)(v23);
    v24[2] = (uint32_t)(uintptr_t)(v22);
    v24[1] = (uint32_t)(uintptr_t)(a2);
    v24[4] = 1;
    v20(v14, v24);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
    gameswf::RefCounted::dropRef(a2);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v23);
    v12 = 1;
  }
  v17 = v12;
  sub_110E800((int)(uintptr_t)(&v25));
  return v17;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toBool  (binary VA: 0x1110bc0)
// Original: gameswf::ASValue::toBool
// ----------------------------------------------------------------------------
char gameswf::ASValue::toBool(gameswf::ASValue::Self *self)
{
  char result;
  char *v2;
  int v3;
  int v4;
  typedef char _g4_t_v5;
  typedef uint8_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);

  switch ( *(uint8_t *)self )
  {
    case 1:
      result = *((uint8_t *)self + 4);
      break;
    case 2:
      result = *(double *)((char *)self + 4) != 0.0;
      break;
    case 3:
    case 4:
      v2 = *((char **)self + 1);
      if ( *v2 == -1 )
        v3 = *((uint32_t *)v2 + 1) - 1;
      else
        v3 = *v2 - 1;
      result = v3 > 0;
      break;
    case 5:
      v4 = *((uint32_t *)self + 1);
      result = 0;
      if ( v4 != 0 )
        result = G4_VCALL<int>(v4, 20);
      break;
    case 6:
      v6[0] = 0;
      v6[1] = 0;
      gameswf::ASValue::getProperty((gameswf::ASProperty::Self **)self, (gameswf::ASValue::Self *)v6);
      v5 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)v6);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
      result = v5;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toNumber  (binary VA: 0x1110cd0)
// Original: gameswf::ASValue::toNumber
// ----------------------------------------------------------------------------
long double gameswf::ASValue::toNumber(gameswf::ASValue::Self *self)
{
  long double result; // fst7
  int v2;
  double *v3;
  int v4;
  typedef const char *_g4_t_v5;
  typedef double _g4_t_v6;
  typedef uint8_t _g4_t_v7[16];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v6)) > _g4_s1 ? (40u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v7)) > _g4_s2 ? (52u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 52u);

  result = 0.0;
  switch ( *(uint8_t *)self )
  {
    case 0:
      goto LABEL_7;
    case 1:
      result = 0.0;
      if ( *((uint8_t *)self + 4) != 0 )
        return 1.0;
      return result;
    case 2:
      return *(double *)((char *)self + 4);
    case 3:
    case 4:
      v2 = *((uint32_t *)self + 1);
      if ( *(uint8_t *)v2 == 0xFF )
        v3 = *(double **)(v2 + 12);
      else
        v3 = (double *)(v2 + 1);
      if ( (uint8_t)gameswf::ASString::toNumber((gameswf::ASString::Self *)&v6, v3, v5) == 0 )
        goto LABEL_7;
      result = v6;
      break;
    case 5:
      v4 = *((uint32_t *)self + 1);
      if ( v4 != 0 )
        G4_VCALL<void>(v4, 16);
      else
LABEL_7:
        result = gameswf::getNAN();
      break;
    case 6:
      v7[0] = 0;
      v7[1] = 0;
      gameswf::ASValue::getProperty((gameswf::ASProperty::Self **)self, (gameswf::ASValue::Self *)v7);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v7);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
      result = (double)0.0;
      break;
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toInt  (binary VA: 0x1110de0)
// Original: gameswf::ASValue::toInt
// ----------------------------------------------------------------------------
int gameswf::ASValue::toInt(gameswf::ASValue::Self *self)
{
  return (int)(double)gameswf::ASValue::toNumber(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::opEq  (binary VA: 0x1110e10)
// Original: gameswf::ASValue::operator==
// ----------------------------------------------------------------------------
char gameswf::ASValue::opEq(gameswf::ASValue::Self *self, const gameswf::ASValue::Self *a2)
{
  int v2;
  int v3;
  const char *s2;
  const char *s1;
  char v6;
  char v7;
  long double v8; // fst7
  char v9;
  int v10;
  char v11; // si
  char result;
  typedef char _g4_t_v13;
  typedef double _g4_t_v14;
  typedef double _g4_t_v15;
  typedef uint8_t _g4_t_v16[24];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v16)) > _g4_s3 ? (36u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);

  switch ( *(uint8_t *)self )
  {
    case 0:
      result = 1;
      if ( *(uint8_t *)a2 != 0 )
      {
        result = 0;
        if ( *(uint8_t *)a2 == 5 )
          return *((uint32_t *)a2 + 1) == 0;
      }
      return result;
    case 1:
      v7 = *(uint8_t *)a2;
      if ( *(uint8_t *)a2 == 2 )
      {
        v11 = *((uint8_t *)self + 4);
        return v11 == gameswf::ASValue::toBool((gameswf::ASValue::Self *)(a2));
      }
      else
      {
        if ( v7 > 2 )
        {
          if ( v7 == 3 || v7 == 4 )
          {
            v14 = gameswf::ASValue::toNumber(a2);
            v8 = gameswf::ASValue::toNumber(self);
            return v14 == (double)v8;
          }
          return 0;
        }
        if ( v7 != 1 )
          return 0;
        return *((uint8_t *)self + 4) == *((uint8_t *)a2 + 4);
      }
    case 2:
      v9 = *(uint8_t *)a2;
      if ( *(uint8_t *)a2 == 2 )
        return *(double *)((char *)self + 4) == *(double *)((char *)a2 + 4);
      if ( v9 <= 2 )
      {
        if ( v9 != 1 )
          return 0;
      }
      else if ( v9 != 3 && v9 != 4 )
      {
        return 0;
      }
      v15 = *(double *)((char *)self + 4);
      return (double)gameswf::ASValue::toNumber(a2) == v15;
    case 3:
    case 4:
      v6 = *(uint8_t *)a2;
      if ( *(uint8_t *)a2 == 2 )
        return (double)gameswf::ASValue::toNumber(self) == *(double *)((char *)a2 + 4);
      if ( v6 > 2 )
      {
        if ( v6 != 3 && v6 != 4 )
          return 0;
        v2 = *((uint32_t *)a2 + 1);
        v3 = *((uint32_t *)self + 1);
        result = 1;
        if ( v2 != v3 )
        {
          if ( *(uint8_t *)v2 == 0xFF )
            s2 = *(const char **)(v2 + 12);
          else
            s2 = (const char *)(v2 + 1);
          if ( *(uint8_t *)v3 == 0xFF )
            s1 = *(const char **)(v3 + 12);
          else
            s1 = (const char *)(v3 + 1);
          return strcmp(s1, s2) == 0;
        }
      }
      else
      {
        if ( v6 != 1 )
          return 0;
        v14 = gameswf::ASValue::toNumber(self);
        v8 = gameswf::ASValue::toNumber(a2);
        return v14 == (double)v8;
      }
      return result;
    case 5:
      v10 = *((uint32_t *)self + 1);
      if ( *(uint8_t *)a2 != 5 || (result = 1, v10 != *((uint32_t *)a2 + 1)) )
      {
        result = 0;
        if ( v10 == 0 )
          return *(uint8_t *)a2 == 0;
      }
      return result;
    case 6:
      v16[0] = 0;
      v16[1] = 0;
      gameswf::ASValue::getProperty((gameswf::ASProperty::Self **)self, (gameswf::ASValue::Self *)v16);
      v13 = gameswf::ASValue::opEq((gameswf::ASValue::Self *)v16, a2);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
      return v13;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::opNe  (binary VA: 0x11110c0)
// Original: gameswf::ASValue::operator!=
// ----------------------------------------------------------------------------
int gameswf::ASValue::opNe(gameswf::ASValue::Self *self, const gameswf::ASValue::Self *a2)
{
  int v2;

  LOBYTE(v2) = gameswf::ASValue::opEq(self, a2);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::toString  (binary VA: 0x11110f0)
// Original: gameswf::ASValue::toString
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::ASValue::toString(gameswf::ASValue::Self *self, gameswf::Self **a2)
{
  gameswf::String::Self *v2;
  char *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::String::Self *result;
  gameswf::String::Self *v7;
  char v8;
  int v9;
  gameswf::Self *v10;
  char *v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  char *v15;
  char *v16;
  gameswf::Self *v17;
  int v18;
  char *v19;
  gameswf::Self *v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  char *v25;
  gameswf::Self *v26;
  typedef size_t _g4_t_v27;
  typedef int _g4_t_v28;
  typedef gameswf::String::Self *_g4_t_v29;
  typedef uint8_t _g4_t_v30[12];
  typedef char _g4_t_s[12];
  typedef gameswf::Self *_g4_t_v32;
  typedef int16_t _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v28)) > _g4_s1 ? (48u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v29)) > _g4_s2 ? (52u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v30)) > _g4_s3 ? (64u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_s)) > _g4_s4 ? (76u + sizeof(_g4_t_s)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v32)) > _g4_s5 ? (88u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v33)) > _g4_s6 ? (92u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (94u + sizeof(_g4_t_v34)) > _g4_s7 ? (94u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (95u + sizeof(_g4_t_v35)) > _g4_s8 ? (95u + sizeof(_g4_t_v35)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 94u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 95u);

  v2 = (gameswf::String::Self *)a2;
  switch ( *(uint8_t *)self )
  {
    case 0:
      gameswf::String::resize((gameswf::String::Self *)a2, 9);
      LOBYTE(v3) = *(uint8_t *)a2;
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v3 = (char *)a2[1];
        v4 = a2[3];
      }
      else
      {
        v3 = (char *)(char)(uintptr_t)(v3);
        v4 = (gameswf::Self *)((char *)a2 + 1);
      }
      v5 = (gameswf::Self *)"undefined";
      goto LABEL_5;
    case 1:
      v18 = 5;
      v15 = "false";
      if ( *((uint8_t *)self + 4) != 0 )
      {
        LOBYTE(v18) = 4;
        v15 = "true";
      }
      gameswf::String::resize((gameswf::String::Self *)a2, v18);
      goto LABEL_28;
    case 2:
      snprintf(s, 0x32u, "%.14g", *((uint32_t *)self + 1), *((uint32_t *)self + 2));
      gameswf::String::resize((gameswf::String::Self *)a2, strlen(s));
      LOBYTE(v19) = *(uint8_t *)a2;
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v19 = (char *)a2[1];
        v20 = a2[3];
      }
      else
      {
        v19 = (char *)(char)(uintptr_t)(v19);
        v20 = (gameswf::Self *)((char *)a2 + 1);
      }
      gameswf::Strcpy_s(v20, v19, (gameswf::Self *)s);
      a2[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a2[4]) | 0x7FFFFF);
      return (gameswf::String::Self *)a2;
    case 3:
    case 4:
      return *((gameswf::String::Self **)self + 1);
    case 5:
      v14 = *((uint32_t *)self + 1);
      if ( v14 == 0 )
      {
        gameswf::String::resize((gameswf::String::Self *)a2, 4);
        LOBYTE(v25) = *(uint8_t *)a2;
        if ( *(uint8_t *)a2 == 0xFF )
        {
          v25 = (char *)a2[1];
          v26 = a2[3];
        }
        else
        {
          v25 = (char *)(char)(uintptr_t)(v25);
          v26 = (gameswf::Self *)((char *)a2 + 1);
        }
        gameswf::Strcpy_s(v26, v25, (gameswf::Self *)"null");
LABEL_6:
        a2[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a2[4]) | 0x7FFFFF);
        return (gameswf::String::Self *)a2;
      }
      v15 = (char *)G4_VCALL<int>(v14, 12);
      result = (gameswf::String::Self *)a2;
      if ( v15 != nullptr )
      {
        v27 = strlen(v15);
        gameswf::String::resize((gameswf::String::Self *)a2, v27);
LABEL_28:
        LOBYTE(v16) = *(uint8_t *)a2;
        if ( *(uint8_t *)a2 == 0xFF )
        {
          v16 = (char *)a2[1];
          v17 = a2[3];
        }
        else
        {
          v16 = (char *)(char)(uintptr_t)(v16);
          v17 = (gameswf::Self *)((char *)a2 + 1);
        }
        gameswf::Strcpy_s(v17, v16, (gameswf::Self *)v15);
        goto LABEL_6;
      }
      return result;
    case 6:
      v30[0] = 0;
      v30[1] = 0;
      gameswf::ASValue::getProperty((gameswf::ASProperty::Self **)self, (gameswf::ASValue::Self *)v30);
      s[0] = 1;
      v33 = -1;
      s[1] = 0;
      v34 = 127;
      v35 |= 1u;
      v7 = (gameswf::String::Self *)gameswf::ASValue::toString((gameswf::ASValue::Self *)v30, (gameswf::String::Self *)s);
      v29 = v7;
      if ( a2 != (gameswf::Self **)v7 )
      {
        v8 = *(uint8_t *)v7;
        if ( v8 == -1 )
          v9 = *((uint32_t *)v29 + 1) - 1;
        else
          v9 = v8 - 1;
        gameswf::String::resize((gameswf::String::Self *)a2, v9);
        v10 = (gameswf::Self *)((gameswf::String::Self *)((char *)v29 + 1));
        if ( *(uint8_t *)v29 == 0xFF )
          v10 = *((gameswf::Self **)v29 + 3);
        LOBYTE(v11) = *(uint8_t *)a2;
        if ( *(uint8_t *)a2 == 0xFF )
        {
          v11 = (char *)a2[1];
          v12 = a2[3];
        }
        else
        {
          v11 = (char *)(char)(uintptr_t)(v11);
          v12 = (gameswf::Self *)((char *)a2 + 1);
        }
        gameswf::Strcpy_s(v12, v11, v10);
        v28 = *((uint32_t *)v29 + 4);
        if ( (uint8_t *)(v28 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *(uint8_t *)v29 == 0xFF )
          {
            v22 = *((char **)v29 + 3);
            v21 = *((uint32_t *)v29 + 1) - 1;
          }
          else
          {
            v21 = *(char *)v29 - 1;
            v22 = (char *)v29 + 1;
          }
          v13 = 5381;
          if ( v21 > 0 )
          {
            do
            {
              --v21;
              v23 = 33 * v13;
              v24 = (uint8_t)v22[v21] + 32;
              if ( (uint8_t)(v22[v21] - 65) > 0x19u )
                v24 = (uint8_t)v22[v21];
              v13 = v23 ^ v24;
            }
            while ( v21 != 0 );
            v2 = (gameswf::String::Self *)a2;
            v13 = v13 << 9 >> 9;
          }
          *((uint32_t *)v29 + 4) = v13 & 0x7FFFFF | v28 & 0xFF800000;
        }
        else
        {
          v13 = v28 << 9 >> 9;
        }
        *((uint32_t *)v2 + 4) = v13 & 0x7FFFFF | *((uint32_t *)v2 + 4) & 0xFF800000;
      }
      if ( s[0] == -1 && (v35 & 1) != 0 )
        gameswf::free_internal(v32);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
      return v2;
    default:
      gameswf::String::resize((gameswf::String::Self *)a2, 0);
      LOBYTE(v3) = *(uint8_t *)a2;
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v3 = (char *)a2[1];
        v4 = a2[3];
      }
      else
      {
        v3 = (char *)(char)(uintptr_t)(v3);
        v4 = (gameswf::Self *)((char *)a2 + 1);
      }
      v5 = (gameswf::Self *)&unk_1B15112;
LABEL_5:
      gameswf::Strcpy_s(v4, v3, v5);
      goto LABEL_6;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASValue::getProperty  (binary VA: 0x11115c0)
// Original: gameswf::ASValue::getProperty
// ----------------------------------------------------------------------------
int * gameswf::ASValue::getProperty(gameswf::ASProperty::Self **self, const gameswf::ASValue::Self *a2, gameswf::ASValue::Self *a3)
{
  return gameswf::ASProperty::get(*(self + 2), a2, a3);
}


