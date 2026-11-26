#include "Core/Utils/DecompTypes.h"
#include "gameswf_AS3FunctionBinding.h"

// ----------------------------------------------------------------------------
// Function: gameswf::AS3FunctionBinding::thisAlive  (binary VA: 0x106eec0)
// Original: gameswf::AS3FunctionBinding::thisAlive
// ----------------------------------------------------------------------------
int gameswf::AS3FunctionBinding::thisAlive(gameswf::AS3FunctionBinding::Self *self)
{
  int v1;
  int result;

  gameswf::ASObject::thisAlive(self);
  v1 = *((uint32_t *)self + 10);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 76))(*((uint32_t *)self + 10));
  result = *((uint32_t *)self + 11);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 76))(*((uint32_t *)self + 11));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3FunctionBinding::toString  (binary VA: 0x106ef70)
// Original: gameswf::AS3FunctionBinding::toString
// ----------------------------------------------------------------------------
char * gameswf::AS3FunctionBinding::toString(gameswf::AS3FunctionBinding::Self *self)
{
  int v1;

  v1 = (*(int (**)(uint32_t))(**((uint32_t **)self + 10) + 12))(*((uint32_t *)self + 10));
  snprintf(((char *)(&byte_20E2E00)), 0x40u, "%s (binding)", v1);
  return (char *)(uintptr_t)(((char *)(&byte_20E2E00)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3FunctionBinding::clearRefs  (binary VA: 0x106f0e0)
// Original: gameswf::AS3FunctionBinding::clearRefs
// ----------------------------------------------------------------------------
int gameswf::AS3FunctionBinding::clearRefs(gameswf::RefCounted::Self **self, int a2)
{
  int v2;
  int result;

  gameswf::ASObject::clearRefs((gameswf::ASObject::Self *)self, a2);
  v2 = (int)(uintptr_t)(*(self + 10));
  if ( v2 != 0 && a2 > *(uint32_t *)(v2 + 20) )
  {
    gameswf::RefCounted::dropRef(*(self + 10));
    *(self + 10) = nullptr;
  }
  result = (int)(uintptr_t)(*(self + 11));
  if ( result != 0 && a2 > *(uint32_t *)(result + 20) )
  {
    result = gameswf::RefCounted::dropRef(*(self + 11));
    *(self + 11) = nullptr;
  }
  return result;
}



// ============================================================================
// Address:   0x106f430 (size: 244 bytes)
// Symbol:    _ZN7gameswf18AS3FunctionBindingclERKNS_12FunctionCallE
// Demangled: gameswf::AS3FunctionBinding::operator()(gameswf::FunctionCall const&)
// ============================================================================
int gameswf::AS3FunctionBinding::opCall(int a1, int *a2)
{
  gameswf::RefCounted::Self *v2;
  int v3;
  int v4;
  int v5;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef gameswf::RefCounted::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v14)) > _g4_s6 ? (32u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v15)) > _g4_s7 ? (36u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v16)) > _g4_s8 ? (40u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v17)) > _g4_s9 ? (44u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v18)) > _g4_s10 ? (48u + sizeof(_g4_t_v18)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v13 = a2[6];
  v2 = *(gameswf::RefCounted::Self **)(a1 + 44);
  v12 = a2[5];
  v3 = a2[3];
  v4 = a2[4];
  LOWORD(v14) = 5;
  v15 = v2;
  if ( v2 != nullptr )
  {
    v11 = v4;
    v10 = v3;
    gameswf::RefCounted::addRef(v2);
    v5 = *a2;
    v18[4] = v11;
    v18[5] = v12;
    v18[6] = v13;
    v18[0] = v5;
    v18[2] = (uint32_t)(uintptr_t)(&v14);
    v18[3] = v10;
  }
  else
  {
    v18[4] = v4;
    v7 = *a2;
    v18[5] = v12;
    v18[0] = v7;
    v18[3] = v3;
    v18[6] = v13;
    v18[2] = (uint32_t)(uintptr_t)(&v14);
  }
  v18[1] = (uint32_t)(uintptr_t)(v15);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v14);
  return (*(int (**)(uint32_t, uint32_t *, int, int, int, int, int, int, int, gameswf::RefCounted::Self *, int, int))(**(uint32_t **)(a1 + 40) + 104))(
           *(uint32_t *)(a1 + 40),
           v18,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           v17);
}
// ----------------------------------------------------------------------------
// Function: gameswf::AS3FunctionBinding::is  (binary VA: 0x1079870)
// Original: gameswf::AS3FunctionBinding::is
// ----------------------------------------------------------------------------
bool gameswf::AS3FunctionBinding::is(gameswf::AS3FunctionBinding::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 9 && a2 != 5 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3FunctionBinding::getMemberByName  (binary VA: 0x1079970)
// Original: gameswf::AS3FunctionBinding::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::AS3FunctionBinding::getMemberByName(gameswf::AS3FunctionBinding::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  char builtin;
  int v4;

  builtin = gameswf::get_builtin(7, (int)(uintptr_t)(a2), a3);
  v4 = 1;
  if ( builtin == 0 )
    return gameswf::ASObject::getMemberByName(self, a2, a3);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3FunctionBinding::Destroy  (binary VA: 0x1079af0)
// Original: gameswf::AS3FunctionBinding::~AS3FunctionBinding
// ----------------------------------------------------------------------------
void gameswf::AS3FunctionBinding::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E208);
  if ( *(self + 11) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 11));
  if ( *(self + 10) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 10));
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3FunctionBinding::Destroy_ea1079b60  (binary VA: 0x1079b60)
// Original: gameswf::AS3FunctionBinding::~AS3FunctionBinding
// ----------------------------------------------------------------------------
void gameswf::AS3FunctionBinding::Destroy_ea1079b60(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E208);
  if ( *(self + 11) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 11));
  if ( *(self + 10) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 10));
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


