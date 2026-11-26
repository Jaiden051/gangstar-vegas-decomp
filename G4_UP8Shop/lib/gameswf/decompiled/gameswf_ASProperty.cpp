#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASProperty.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASProperty::Destroy  (binary VA: 0x110e440)
// Original: gameswf::ASProperty::~ASProperty
// ----------------------------------------------------------------------------
void gameswf::ASProperty::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208F8A8);
  if ( *(self + 4) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 4));
  if ( *(self + 3) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 3));
  gameswf::RefCounted::Destroy((gameswf::RefCounted::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASProperty::Destroy_ea110e4a0  (binary VA: 0x110e4a0)
// Original: gameswf::ASProperty::~ASProperty
// ----------------------------------------------------------------------------
void gameswf::ASProperty::Destroy_ea110e4a0(gameswf::RefCounted::Self **self)
{
  gameswf::ASProperty::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASProperty::Construct  (binary VA: 0x110ff10)
// Original: gameswf::ASProperty::ASProperty
// ----------------------------------------------------------------------------
gameswf::ASProperty::Self * gameswf::ASProperty::Construct(gameswf::RefCounted::Self **self, const gameswf::ASValue::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::RefCounted::Self *v3;
  gameswf::ASProperty::Self *result;
  gameswf::RefCounted::Self *v5;
  bool v6;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self *v8;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208F8A8);
  if ( *(uint8_t *)a2 != 5 )
    goto LABEL_2;
  v5 = *((gameswf::RefCounted::Self **)a2 + 1);
  if ( v5 == nullptr )
    goto LABEL_2;
  v6 = G4_VCALL<uint8_t>(v5, 8, 5) == 0;
  v7 = *(self + 3);
  if ( v6 )
    v5 = nullptr;
  if ( v5 == v7 )
    goto LABEL_2;
  if ( v7 != nullptr )
    gameswf::RefCounted::dropRef(*(self + 3));
  *(self + 3) = v5;
  if ( v5 != nullptr )
  {
    v8 = v5;
    v3 = nullptr;
    gameswf::RefCounted::addRef(v8);
    if ( *(uint8_t *)a3 != 5 )
      goto LABEL_3;
  }
  else
  {
LABEL_2:
    v3 = nullptr;
    if ( *(uint8_t *)a3 != 5 )
      goto LABEL_3;
  }
  v3 = *((gameswf::RefCounted::Self **)a3 + 1);
  if ( v3 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v3 + 8))(*((uint32_t *)a3 + 1), 5) == 0 )
    v3 = nullptr;
LABEL_3:
  result = (gameswf::ASProperty::Self *)(*(self + 4));
  if ( v3 != (gameswf::RefCounted::Self *)(result) )
  {
    if ( result != nullptr )
      result = (gameswf::ASProperty::Self *)gameswf::RefCounted::dropRef(*(self + 4));
    *(self + 4) = v3;
    if ( v3 != nullptr )
      return (gameswf::ASProperty::Self *)(gameswf::RefCounted::addRef(v3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASProperty::get  (binary VA: 0x1110020)
// Original: gameswf::ASProperty::get
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASProperty::get(gameswf::ASProperty::Self *self, gameswf::ASObject::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::RefCounted::Self *v3;
  uint16_t *WeakProxy;
  uint32_t *v5;
  int v6;
  typedef uint32_t *_g4_t_v8;
  typedef void (*_g4_t_v9)(uint32_t *, uint32_t *);
  typedef uint32_t _g4_t_v10[5];
  typedef uint32_t _g4_t_v11[7];
  typedef uint16_t _g4_t_v12[104];
  typedef uint16_t *_g4_t_v13;
  typedef gameswf::RefCounted::Self *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v12)) > _g4_s4 ? (64u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (272u + sizeof(_g4_t_v13)) > _g4_s5 ? (272u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (276u + sizeof(_g4_t_v14)) > _g4_s6 ? (276u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 272u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 276u);

  memset(v12, 0, 16);
  v12[56] = 0;
  v3 = *((gameswf::RefCounted::Self **)a2 + 4);
  v12[62] = 0;
  v12[68] = 0;
  v12[74] = 0;
  memset(&v12[80], 0, 22);
  memset(&v12[96], 0, 16);
  v13 = nullptr;
  v14 = v3;
  if ( v3 != nullptr )
  {
    WeakProxy = (uint16_t *)gameswf::RefCounted::getWeakProxy(v3);
    if ( WeakProxy != v13 )
    {
      v13 = WeakProxy;
      ++*WeakProxy;
    }
  }
  if ( *((uint32_t *)self + 3) != 0 )
  {
    gameswf::RefCounted::addRef(a2);
    v5 = *((uint32_t **)self + 3);
    v6 = *v5;
    LOWORD(v10[0]) = 5;
    v10[1] = (uint32_t)(uintptr_t)(a2);
    v8 = v5;
    v9 = *(void (**)(uint32_t *, uint32_t *))(v6 + 104);
    gameswf::RefCounted::addRef(a2);
    v11[6] = (uint32_t)(uintptr_t)(&off_1B159F1);
    v11[0] = (uint32_t)(uintptr_t)(a3);
    v11[1] = (uint32_t)(uintptr_t)(a2);
    v11[2] = (uint32_t)(uintptr_t)(v10);
    v11[3] = (uint32_t)(uintptr_t)(v12);
    v11[4] = 0;
    v11[5] = 0;
    v9(v8, v11);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
    gameswf::RefCounted::dropRef(a2);
  }
  return sub_110E800((int)(uintptr_t)(v12));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASProperty::set  (binary VA: 0x11104b0)
// Original: gameswf::ASProperty::set
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASProperty::set(gameswf::ASProperty::Self *self, gameswf::ASObject::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::RefCounted::Self *v3;
  gameswf::Self *WeakProxy;
  gameswf::Self *v5;
  int v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  gameswf::ASValue::Self *v11;
  uint32_t *v12;
  int v13;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef gameswf::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef void (*_g4_t_v19)(uint32_t *, uint32_t *);
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[6];
  typedef uint8_t _g4_t_v22[12];
  typedef uint32_t _g4_t_v23[7];
  typedef gameswf::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint16_t _g4_t_v28[96];
  typedef gameswf::Self *_g4_t_v29;
  typedef gameswf::RefCounted::Self *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v22)) > _g4_s7 ? (48u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v24)) > _g4_s9 ? (88u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v25)) > _g4_s10 ? (92u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v26)) > _g4_s11 ? (96u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v27)) > _g4_s12 ? (100u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v28)) > _g4_s13 ? (104u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (296u + sizeof(_g4_t_v29)) > _g4_s14 ? (296u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (300u + sizeof(_g4_t_v30)) > _g4_s15 ? (300u + sizeof(_g4_t_v30)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 296u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 300u);

  v25 = 0;
  v24 = (gameswf::Self *)v28;
  v26 = 8;
  v27 = 1;
  v28[48] = 0;
  v3 = *((gameswf::RefCounted::Self **)a2 + 4);
  v28[54] = 0;
  v28[60] = 0;
  v28[66] = 0;
  memset(&v28[72], 0, 22);
  memset(&v28[88], 0, 16);
  v29 = nullptr;
  v30 = v3;
  if ( v3 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
    v5 = v29;
    if ( WeakProxy != v29 )
    {
      if ( v29 != nullptr && (*(uint16_t *)v29)-- == 1 )
      {
        v17 = WeakProxy;
        gameswf::free_internal(v5);
        WeakProxy = v17;
      }
      v29 = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  v7 = v25;
  v8 = v26;
  v9 = v25 + 1;
  if ( v25 + 1 <= v26 || v27 != 0 )
  {
    v10 = v24;
  }
  else
  {
    v20 = v9 + (v9 >> 1);
    v26 = v20;
    if ( v20 != 0 )
    {
      if ( v24 != nullptr )
        v10 = (gameswf::Self *)gameswf::realloc_internal(v24, 12 * v20, 12 * v8);
      else
        v10 = (gameswf::Self *)gameswf::malloc_internal(12 * v20);
      v24 = v10;
      v7 = v25;
      v9 = v25 + 1;
    }
    else
    {
      if ( v24 != nullptr )
      {
        gameswf::free_internal(v24);
        v7 = v25;
        v9 = v25 + 1;
      }
      v24 = nullptr;
      v10 = nullptr;
    }
  }
  v11 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v10 + 12 * v7));
  if ( v11 != nullptr )
  {
    *(uint8_t *)v11 = 0;
    *((uint8_t *)v11 + 1) = 0;
    v15 = v9;
    gameswf::ASValue::opAssign(v11, a3);
    v9 = v15;
  }
  v25 = v9;
  if ( *((uint32_t *)self + 4) != 0 )
  {
    v22[0] = 0;
    v22[1] = 0;
    gameswf::RefCounted::addRef(a2);
    v12 = *((uint32_t **)self + 4);
    v13 = *v12;
    LOWORD(v21[0]) = 5;
    v21[1] = (uint32_t)(uintptr_t)(a2);
    v16 = v12;
    v19 = *(void (**)(uint32_t *, uint32_t *))(v13 + 104);
    v18 = v25 - 1;
    gameswf::RefCounted::addRef(a2);
    v23[3] = (uint32_t)(uintptr_t)(&v24);
    v23[5] = v18;
    v23[6] = (uint32_t)(uintptr_t)("set");
    v23[2] = (uint32_t)(uintptr_t)(v21);
    v23[1] = (uint32_t)(uintptr_t)(a2);
    v23[0] = (uint32_t)(uintptr_t)(v22);
    v23[4] = 1;
    v19(v16, v23);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v21);
    gameswf::RefCounted::dropRef(a2);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
  }
  return sub_110E800((int)(uintptr_t)(&v24));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASProperty::get  (binary VA: 0x1111540)
// Original: gameswf::ASProperty::get
// ----------------------------------------------------------------------------
int * gameswf::ASProperty::get(gameswf::ASProperty::Self *self, const gameswf::ASValue::Self *a2, gameswf::ASValue::Self *a3)
{
  int *result;
  int v4;
  int (*v5)(int *, uint32_t *);
  int v6;
  uint32_t v7[10];

  result = *((int **)self + 3);
  if ( result != nullptr )
  {
    v4 = *result;
    v7[2] = (uint32_t)(uintptr_t)(a2);
    memset(&v7[3], 0, 12);
    v5 = *(int (**)(int *, uint32_t *))(v4 + 104);
    v7[0] = (uint32_t)(uintptr_t)(a3);
    v7[6] = (uint32_t)(uintptr_t)(&off_1B159F1);
    v6 = 0;
    if ( *(uint8_t *)a2 == 5 )
      v6 = *((uint32_t *)a2 + 1);
    v7[1] = v6;
    return (int *)v5(result, v7);
  }
  return result;
}


