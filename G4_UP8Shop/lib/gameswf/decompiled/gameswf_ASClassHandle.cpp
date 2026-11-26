#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASClassHandle.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassHandle::overrideMemberMethod  (binary VA: 0x1070ca0)
// Original: gameswf::ASClassHandle::overrideMemberMethod
// ----------------------------------------------------------------------------
int gameswf::ASClassHandle::overrideMemberMethod(gameswf::Self **a1, int a2, int a3)
{
  int v3;
  int v4;
  gameswf::Self *v5;
  int DeclaredMethod;
  int v7;
  gameswf::ASObject::Self *v8;
  gameswf::ASObject::Self *v9;

  v3 = 0;
  v4 = (int)(uintptr_t)(a1[1]);
  if ( v4 != 0 )
  {
    v5 = *a1;
    if ( *((uint8_t *)*a1 + 2) != 0 )
    {
      DeclaredMethod = gameswf::ASClass::findDeclaredMethod(v4, a2, 1);
      v7 = DeclaredMethod;
      if ( DeclaredMethod != 0
        && G4_VCALL<uint8_t>(DeclaredMethod, 8, 8) != 0 )
      {
        v8 = (gameswf::ASObject::Self *)opNew(0x2Cu);
        v3 = 1;
        gameswf::ASCppFunction::Construct(v8, nullptr, a3);
        v9 = *(gameswf::ASObject::Self **)(v7 + 100);
        if ( v8 != v9 )
        {
          if ( v9 != nullptr )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v7 + 100));
          *(uint32_t *)(v7 + 100) = (uint32_t)(uintptr_t)(v8);
          v3 = 1;
          if ( v8 != nullptr )
            gameswf::RefCounted::addRef(v8);
        }
      }
    }
    else
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *a1 = nullptr;
      a1[1] = nullptr;
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassHandle::overrideStaticMethod  (binary VA: 0x1070db0)
// Original: gameswf::ASClassHandle::overrideStaticMethod
// ----------------------------------------------------------------------------
int gameswf::ASClassHandle::overrideStaticMethod(gameswf::ASClass::Self **a1, gameswf::String::Self *a2, int a3)
{
  int v3;
  gameswf::Self *v4;
  int StaticMethod;
  int v6;
  gameswf::ASObject::Self *v7;
  gameswf::ASObject::Self *v8;

  v3 = 0;
  if ( a1[1] != nullptr )
  {
    v4 = (gameswf::Self *)(*a1);
    if ( *((uint8_t *)*a1 + 2) != 0 )
    {
      StaticMethod = gameswf::ASClass::findStaticMethod(a1[1], a2);
      v6 = StaticMethod;
      if ( StaticMethod != 0
        && G4_VCALL<uint8_t>(StaticMethod, 8, 8) != 0 )
      {
        v7 = (gameswf::ASObject::Self *)opNew(0x2Cu);
        v3 = 1;
        gameswf::ASCppFunction::Construct(v7, nullptr, a3);
        v8 = *(gameswf::ASObject::Self **)(v6 + 100);
        if ( v7 != v8 )
        {
          if ( v8 != nullptr )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v6 + 100));
          *(uint32_t *)(v6 + 100) = (uint32_t)(uintptr_t)(v7);
          v3 = 1;
          if ( v7 != nullptr )
            gameswf::RefCounted::addRef(v7);
        }
      }
    }
    else
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *a1 = nullptr;
      a1[1] = nullptr;
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassHandle::getMember  (binary VA: 0x1070ec0)
// Original: gameswf::ASClassHandle::getMember
// ----------------------------------------------------------------------------
gameswf::ASClassHandle::Self * gameswf::ASClassHandle::getMember(gameswf::ASClassHandle::Self *self, const gameswf::String::Self *a2, gameswf::String::Self *a3)
{
  gameswf::ASObject::Self *v3;
  gameswf::Self *v4;
  int MemberIndex;
  gameswf::ASObject::Self *v6;
  int v9;

  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 0;
  v3 = *((gameswf::ASObject::Self **)a2 + 1);
  if ( v3 != nullptr )
  {
    v4 = *(gameswf::Self **)a2;
    if ( *(uint8_t *)(*(uint32_t *)a2 + 2) != 0 )
    {
      MemberIndex = gameswf::ASObject::getMemberIndex(v3, a3);
      v6 = *((gameswf::ASObject::Self **)a2 + 1);
      if ( v6 != nullptr && *(uint8_t *)(*(uint32_t *)a2 + 2) == 0 )
      {
        v9 = MemberIndex;
        sub_7E5ED0((gameswf::Self **)a2, nullptr);
        *((uint32_t *)a2 + 1) = 0;
        v6 = nullptr;
        MemberIndex = v9;
      }
      gameswf::ASObject::getMemberAt(v6, MemberIndex, a3, self);
    }
    else
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *(uint32_t *)a2 = 0;
      *((uint32_t *)a2 + 1) = 0;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassHandle::setMember  (binary VA: 0x1070fb0)
// Original: gameswf::ASClassHandle::setMember
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASClassHandle::setMember(gameswf::ASClassHandle::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::ASObject::Self *result;
  gameswf::Self *v4;
  int MemberIndex;
  gameswf::ASObject::Self *v6;
  bool v7;
  int v8;

  result = *((gameswf::ASObject::Self **)self + 1);
  if ( result != nullptr )
  {
    v4 = *(gameswf::Self **)self;
    if ( *(uint8_t *)(*(uint32_t *)self + 2) != 0 )
    {
      MemberIndex = gameswf::ASObject::getMemberIndex(result, a2);
      v6 = *((gameswf::ASObject::Self **)self + 1);
      if ( v6 != nullptr && *(uint8_t *)(*(uint32_t *)self + 2) == 0 )
      {
        v8 = MemberIndex;
        sub_7E5ED0((gameswf::Self **)self, nullptr);
        *((uint32_t *)self + 1) = 0;
        v6 = nullptr;
        MemberIndex = v8;
      }
      return (gameswf::ASObject::Self *)gameswf::ASObject::setMemberAt(v6, MemberIndex, a2, a3);
    }
    else
    {
      result = (gameswf::ASObject::Self *)(*(uint16_t *)v4 - 1);
      v7 = *(uint16_t *)v4 == 1;
      *(uint16_t *)v4 = (uint16_t)(uintptr_t)result;
      if ( v7 )
        result = (gameswf::ASObject::Self *)gameswf::free_internal(v4);
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 1) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassHandle::invokeStaticMethod  (binary VA: 0x1072120)
// Original: gameswf::ASClassHandle::invokeStaticMethod
// ----------------------------------------------------------------------------
gameswf::ASClassHandle::Self * gameswf::ASClassHandle::invokeStaticMethod(gameswf::ASClassHandle::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3, gameswf::ASValue::Self *a4, int a5)
{
  const gameswf::String::Self *v5;
  gameswf::ASClassHandle::Self *v6;
  int v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *WeakProxy;
  char *v11;
  gameswf::ASObject::Self *v12;
  typedef const gameswf::ASValue::Self *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef gameswf::ASValue::Self *_g4_t_v18;
  typedef uint32_t _g4_t_v19[28];
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef gameswf::Self *_g4_t_v39[10];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (136u + sizeof(_g4_t_v20)) > _g4_s5 ? (136u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (137u + sizeof(_g4_t_v21)) > _g4_s6 ? (137u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (148u + sizeof(_g4_t_v22)) > _g4_s7 ? (148u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (149u + sizeof(_g4_t_v23)) > _g4_s8 ? (149u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v24)) > _g4_s9 ? (160u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (161u + sizeof(_g4_t_v25)) > _g4_s10 ? (161u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (172u + sizeof(_g4_t_v26)) > _g4_s11 ? (172u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (173u + sizeof(_g4_t_v27)) > _g4_s12 ? (173u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (184u + sizeof(_g4_t_v28)) > _g4_s13 ? (184u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (188u + sizeof(_g4_t_v29)) > _g4_s14 ? (188u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (192u + sizeof(_g4_t_v30)) > _g4_s15 ? (192u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (196u + sizeof(_g4_t_v31)) > _g4_s16 ? (196u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (200u + sizeof(_g4_t_v32)) > _g4_s17 ? (200u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (204u + sizeof(_g4_t_v33)) > _g4_s18 ? (204u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (205u + sizeof(_g4_t_v34)) > _g4_s19 ? (205u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (216u + sizeof(_g4_t_v35)) > _g4_s20 ? (216u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (220u + sizeof(_g4_t_v36)) > _g4_s21 ? (220u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (224u + sizeof(_g4_t_v37)) > _g4_s22 ? (224u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (228u + sizeof(_g4_t_v38)) > _g4_s23 ? (228u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (232u + sizeof(_g4_t_v39)) > _g4_s24 ? (232u + sizeof(_g4_t_v39)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 136u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 137u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 148u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 149u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 160u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 161u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 172u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 173u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 184u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 188u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 192u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 196u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 200u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 204u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 205u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 216u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 220u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 224u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 228u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 232u);

  v39[6] = (gameswf::Self *)&self;
  v5 = a2;
  v6 = self;
  v15 = a3;
  v18 = a4;
  v7 = *((uint32_t *)a2 + 1);
  v17 = a5;
  if ( v7 == 0 )
  {
LABEL_15:
    *(uint8_t *)v6 = 0;
    *((uint8_t *)v6 + 1) = 0;
    return v6;
  }
  v8 = *(gameswf::Self **)a2;
  if ( *(uint8_t *)(*(uint32_t *)a2 + 2) == 0 )
  {
    if ( (*(uint16_t *)v8)-- == 1 )
      gameswf::free_internal(v8);
    *(uint32_t *)v5 = 0;
    *((uint32_t *)v5 + 1) = 0;
    goto LABEL_15;
  }
  v9 = *(gameswf::Self **)(v7 + 16);
  memset(v19, 0, 16);
  v20 = 0;
  v21 = 0;
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
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39[0] = nullptr;
  v39[1] = v9;
  if ( v9 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v9);
    if ( WeakProxy != v39[0] )
    {
      v39[0] = WeakProxy;
      ++*(uint16_t *)WeakProxy;
    }
  }
  else
  {
    sub_7E5ED0(v39, nullptr);
  }
  v11 = (char *)v15 + 1;
  if ( *(uint8_t *)v15 == 0xFF )
    v11 = *((char **)v15 + 3);
  v12 = *((gameswf::ASObject::Self **)v5 + 1);
  if ( v12 != nullptr && *(uint8_t *)(*(uint32_t *)v5 + 2) == 0 )
  {
    v16 = v11;
    sub_7E5ED0((gameswf::Self **)v5, nullptr);
    *((uint32_t *)v5 + 1) = 0;
    v12 = nullptr;
    v11 = v16;
  }
  gameswf::call_method(v6, (gameswf::ASEnvironment::Self *)v19, v12, v11, v18, v17);
  gameswf::ASEnvironment::Destroy((gameswf::ASEnvironment::Self *)v19);
  return v6;
}


