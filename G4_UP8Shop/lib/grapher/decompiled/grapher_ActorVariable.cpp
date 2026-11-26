#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorVariable.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::SetNewFileId  (binary VA: 0x13cd1b0)
// Original: grapher::ActorVariable::SetNewFileId
// ----------------------------------------------------------------------------
int grapher::ActorVariable::SetNewFileId(grapher::ActorVariable::Self *self)
{
  grapher::g_variableUniqueId = (uint32_t)(uintptr_t)(self) << 20;
  return (uint32_t)(uintptr_t)(self) << 20;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::opAssign  (binary VA: 0x13cd1f0)
// Original: grapher::ActorVariable::operator=
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorVariable::opAssign(grapher::ActorVariable::Self *self, const grapher::ActorVariable::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  if ( self != a2 )
  {
    *(uint32_t *)self = *(uint32_t *)a2;
    v2 = *((uint32_t *)a2 + 1);
    v3 = 0;
    if ( v2 != 0 )
      v3 = (*(int (**)(uint32_t))(*(uint32_t *)v2 + 48))(*((uint32_t *)a2 + 1));
    v4 = *((uint32_t *)self + 1);
    *((uint32_t *)self + 1) = v3;
    if ( v4 != 0 )
      G4_VCALL<void>(v4, 44);
    v5 = *((uint32_t *)self + 3);
    *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
    if ( v5 != 0 )
    {
      v6 = *((uint32_t *)a2 + 3);
      g4_std::string::assign_str(v5, v6);
      g4_std::string::assign_str(v5 + 4, v6 + 4);
      g4_std::string::assign_str(v5 + 8, v6 + 8);
      g4_std::string::assign_str(v5 + 12, v6 + 12);
      g4_std::string::assign_str(v5 + 16, v6 + 16);
      *(uint8_t *)(v5 + 20) = *(uint8_t *)(v6 + 20);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13cd2d0)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorVariable::Construct(grapher::ActorVariable::Self *self, const grapher::ActorVariable::Self *a2)
{
  bool v2;
  uint32_t *v4;

  v2 = byte_20D5B50 == 0;
  *((uint32_t *)self + 1) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) != 0 )
      goto LABEL_6;
  }
  else if ( (dword_20D5BE0 & 0x20) != 0 )
  {
LABEL_6:
    v4 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 81);
    *v4 = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[2] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[3] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4);
  }
  return (grapher::ActorVariable::Self *)grapher::ActorVariable::opAssign(self, a2);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13cd3d0)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorVariable::Construct(grapher::ActorVariable::Self *self)
{
  bool v1;
  grapher::ActorVariable::Self *result;
  uint32_t *v3;
  grapher::Self *v4;

  v1 = byte_20D5B50 == 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) != 0 )
    {
LABEL_11:
      v3 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 181);
      *v3 = (uint32_t)(uintptr_t)(&dword_213B814);
      v1 = byte_20D5B50 == 0;
      v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v3[2] = (uint32_t)(uintptr_t)(&dword_213B814);
      v3[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v3[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v3);
      if ( !v1 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (dword_20D5BE0 & 0x20) != 0 )
  {
    goto LABEL_11;
  }
  if ( byte_20D5B50 == 0 )
  {
LABEL_12:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
  }
LABEL_4:
  if ( (dword_20D5BE0 & 5) != 5 )
  {
    *((uint32_t *)self + 2) = -1;
    *(uint32_t *)self = grapher::NewVariableUniqueId(v4);
  }
  result = *((grapher::ActorVariable::Self **)self + 3);
  if ( result != nullptr )
    *((uint8_t *)result + 20) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Destroy  (binary VA: 0x13cd540)
// Original: grapher::ActorVariable::~ActorVariable
// ----------------------------------------------------------------------------
void grapher::ActorVariable::Destroy(grapher::ActorVariable::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  typedef char *_g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v9)) > _g4_s1 ? (27u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (29u + sizeof(_g4_t_v11)) > _g4_s3 ? (29u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v12)) > _g4_s4 ? (30u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v13)) > _g4_s5 ? (31u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 27u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 29u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 30u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);

  grapher::ActorContext::UnRegisterAVar(self);
  v1 = *((uint32_t **)self + 3);
  if ( v1 != nullptr )
  {
    v2 = v1[4];
    if ( (uint32_t *)(v2 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      v8 = &v9;
      g4_std::string::Rep::M_destroy((void *)(v2 - 12));
    }
    v3 = v1[3];
    if ( (uint32_t *)(v3 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
    {
      v8 = &v10;
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    }
    v4 = v1[2];
    if ( (uint32_t *)(v4 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
    {
      v8 = &v11;
      g4_std::string::Rep::M_destroy((void *)(v4 - 12));
    }
    v5 = v1[1];
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      v8 = &v12;
      g4_std::string::Rep::M_destroy((void *)(v5 - 12));
    }
    v6 = (uint32_t *)(*v1 - 12);
    if ( v6 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v1 - 4), 0xFFFFFFFF) <= 0 )
    {
      v8 = &v13;
      g4_std::string::Rep::M_destroy(v6);
    }
    opDelete(v1);
  }
  v7 = *((uint32_t *)self + 1);
  if ( v7 != 0 )
    (*(void (**)(uint32_t, char *))(*(uint32_t *)v7 + 44))(*((uint32_t *)self + 1), v8);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::UpdateDisplay  (binary VA: 0x13cd690)
// Original: grapher::ActorVariable::UpdateDisplay
// ----------------------------------------------------------------------------
int grapher::ActorVariable::UpdateDisplay(grapher::ActorVariable::Self *self)
{
  int result;

  result = *((uint32_t *)self + 3);
  if ( result != 0 && *(uint8_t *)(result + 20) == 0 )
    *(uint8_t *)(result + 20) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::ConvertType  (binary VA: 0x13cd6b0)
// Original: grapher::ActorVariable::ConvertType
// ----------------------------------------------------------------------------
int * grapher::ActorVariable::ConvertType(int a1, int a2)
{
  int v2;

  if ( grapher::variableTypeTable[0] == a2 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    while ( grapher::variableTypeTable[2 * v2] != a2 )
    {
      if ( ++v2 == 14 )
        return (int *)(&dword_2119730);
    }
  }
  return (int *)(&grapher::variableTypeTable[2 * v2 + 1]);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Init  (binary VA: 0x13cd6f0)
// Original: grapher::ActorVariable::Init
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Init(int *a1, int a2, int a3, uint32_t *a4)
{
  int *v4;
  int v5;
  int v6;
  int result;

  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  if ( (dword_20D5BE0 & 5) != 5 )
  {
    if ( a1[3] != 0 )
    {
      v4 = grapher::ActorVariable::ConvertType((int)(uintptr_t)(a1), a3);
      g4_std::string::assign_str(a1[3] + 8, v4);
      g4_std::string::assign_str(a1[3], a2);
    }
    a1[2] = a3;
    v5 = 0;
    if ( *a4 != 0 )
      v5 = G4_VCALL<int>(*a4, 48);
    v6 = a1[1];
    a1[1] = v5;
    if ( v6 != 0 )
      G4_VCALL<void>(v6, 44);
    *a1 = grapher::NewVariableUniqueId();
  }
  result = a1[3];
  if ( result != 0 )
    *(uint8_t *)(result + 20) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13cd810)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Construct(int *a1, int a2, int a3, uint32_t *a4)
{
  bool v4;
  int v5;
  int result;
  uint32_t *v7;
  int v8[4];

  v4 = byte_20D5B50 == 0;
  a1[1] = 0;
  a1[3] = 0;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) == 0 )
      goto LABEL_3;
  }
  else if ( (dword_20D5BE0 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  v7 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 148);
  *v7 = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[3] = (int)(uintptr_t)(v7);
LABEL_3:
  v5 = 0;
  if ( *a4 != 0 )
    v5 = G4_VCALL<int>(*a4, 48);
  v8[0] = v5;
  grapher::ActorVariable::Init(a1, a2, a3, (uint32_t *)(v8));
  result = v8[0];
  if ( v8[0] != 0 )
    return G4_VCALL<int>(v8[0], 44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13cd950)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Construct(int *a1, int a2, int a3, double a4)
{
  bool v4;
  grapher::HolderT<double> *v5;
  int result;
  uint32_t *v7;
  typedef double _g4_t_v8[2];
  typedef grapher::HolderT<double> *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v8[0] = a4;
  v4 = byte_20D5B50 == 0;
  a1[1] = 0;
  a1[3] = 0;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) == 0 )
      goto LABEL_3;
  }
  else if ( (dword_20D5BE0 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  v7 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 140);
  *v7 = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[3] = (int)(uintptr_t)(v7);
LABEL_3:
  v5 = (grapher::HolderT<double> *)gll_operator_new(0xCu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
  *(uint32_t *)v5 = (uint32_t)(uintptr_t)(&off_205C488);
  grapher::HolderT_double_id_90764b::From(v5, v8);
  v9 = v5;
  grapher::ActorVariable::Init(a1, a2, a3, (uint32_t *)(&v9));
  result = (int)(uintptr_t)(v9);
  if ( v9 != nullptr )
    return G4_VCALL<int>(v9, 44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13cdad0)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Construct(int *a1, int a2, int a3, float a4)
{
  bool v4;
  grapher::HolderT<float> *v5;
  int result;
  uint32_t *v7;
  int v8[4];

  v4 = byte_20D5B50 == 0;
  a1[1] = 0;
  a1[3] = 0;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) == 0 )
      goto LABEL_3;
  }
  else if ( (dword_20D5BE0 & 0x20) == 0 )
  {
    goto LABEL_3;
  }
  v7 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 132);
  *v7 = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[3] = (int)(uintptr_t)(v7);
LABEL_3:
  v5 = (grapher::HolderT<float> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
  *(uint32_t *)v5 = (uint32_t)(uintptr_t)(&off_205C4C8);
  grapher::HolderT_float_id_458ea9::From(v5, &a4);
  v8[0] = (int)(uintptr_t)(v5);
  grapher::ActorVariable::Init(a1, a2, a3, (uint32_t *)(v8));
  result = v8[0];
  if ( v8[0] != 0 )
    return G4_VCALL<int>(v8[0], 44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13cdc40)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Construct(int *a1, int a2, unsigned int a3, int a4)
{
  bool v4;
  int result;
  uint32_t *v6;
  void *v7;
  grapher::HolderT<int> *v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[2];
  typedef uint32_t *_g4_t_v23;
  typedef grapher::HolderT<int> *_g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v18)) > _g4_s8 ? (32u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v19)) > _g4_s9 ? (36u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v20)) > _g4_s10 ? (40u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v21)) > _g4_s11 ? (44u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v22)) > _g4_s12 ? (48u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v23)) > _g4_s13 ? (56u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v24)) > _g4_s14 ? (60u + sizeof(_g4_t_v24)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);

  v4 = byte_20D5B50 == 0;
  a1[1] = 0;
  a1[3] = 0;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) != 0 )
      goto LABEL_17;
  }
  else if ( (dword_20D5BE0 & 0x20) != 0 )
  {
LABEL_17:
    v9 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 104);
    *v9 = (uint32_t)(uintptr_t)(&dword_213B814);
    v9[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    v9[2] = (uint32_t)(uintptr_t)(&dword_213B814);
    v9[3] = (uint32_t)(uintptr_t)(&dword_213B814);
    v9[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    a1[3] = (int)(uintptr_t)(v9);
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  result = dword_20D5BE0 & 5;
  if ( result != 5 )
  {
    if ( a3 <= 0xC && ((1 << a3) & 0x1C30) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 2);
      v6 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
      *v6 = (uint32_t)(uintptr_t)(&off_205C408);
      v6[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v17 = v6;
      grapher::HolderT_string_e830be::From(v6, v22);
      v23 = v17;
      grapher::ActorVariable::Init(a1, a2, a3, (uint32_t *)(&v23));
      if ( v23 != nullptr )
        G4_VCALL<void>(v23, 44);
      result = v22[0];
      v7 = (void *)(v22[0] - 12);
      if ( (uint32_t *)(v22[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
      }
    }
    else
    {
      v8 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v8 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v8, &a4);
      v24 = v8;
      grapher::ActorVariable::Init(a1, a2, a3, (uint32_t *)(&v24));
      result = (int)(uintptr_t)(v24);
      if ( v24 != nullptr )
        return G4_VCALL<int>(v24, 44, v10, v11, v12, v13, v14, v15, v16, v18, v19, v20, v21, v22[0], v22[1], v23, v24);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::ConvertType_ea13cdf10  (binary VA: 0x13cdf10)
// Original: grapher::ActorVariable::ConvertType
// ----------------------------------------------------------------------------
int grapher::ActorVariable::ConvertType_ea13cdf10(int a1, int a2)
{
  int v2;
  char *s2;
  size_t n;
  const void *s1;
  int v6;
  int result;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef void *_g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  g4_std::string::construct_copy(v10, a2);
  v2 = 0;
  GLFUtils::ToLowerCase(v10, 0, -1);
  s2 = (char *)v10[0];
  n = *((uint32_t *)v10[0] - 3);
  do
  {
    s1 = (const void *)grapher::variableTypeTable[2 * v2 + 1];
    if ( n == *((uint32_t *)s1 - 3) )
    {
      v8 = s2;
      v6 = memcmp(s1, s2, n);
      s2 = v8;
      if ( v6 == 0 )
      {
        result = grapher::variableTypeTable[2 * v2];
        goto LABEL_6;
      }
    }
    ++v2;
  }
  while ( v2 != 14 );
  result = -1;
LABEL_6:
  if ( s2 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
  {
    v9 = result;
    g4_std::string::Rep::M_destroy(s2 - 12);
    return v9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::FromString  (binary VA: 0x13cdfe0)
// Original: grapher::ActorVariable::FromString
// ----------------------------------------------------------------------------
char * grapher::ActorVariable::FromString(char *a1, int a2, const char **a3)
{
  char *result;
  uint32_t *v5;
  grapher::HolderT<double> *v6;
  grapher::HolderT<bool> *v7;
  bool *v8;
  int v9;
  grapher::HolderT<int> *v10;
  float v11; // xmm0_4
  grapher::HolderT<float> *v12;
  typedef char _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef int _g4_t_v15;
  typedef float _g4_t_v16;
  typedef double _g4_t_v17[2];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v13)) > _g4_s0 ? (14u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v14)) > _g4_s1 ? (15u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 14u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 15u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);

  result = (char *)dword_20B9FF4 + (uint32_t)jpt_13CE019[*(uint32_t *)(a2 + 8)];
  switch ( *(uint32_t *)(a2 + 8) )
  {
    case 0:
      GLFUtils::ToLowerCase(a3, 0, -1);
      if ( g4_std::string::compare((int)(uintptr_t)(a3), "true") != 0 && g4_std::string::compare((int)(uintptr_t)(a3), "1") != 0 )
      {
        v13 = 0;
        v7 = (grapher::HolderT<bool> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v7 = (uint32_t)(uintptr_t)(&off_205C448);
        v8 = (bool *)&v13;
      }
      else
      {
        v14 = true;
        v7 = (grapher::HolderT<bool> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v7 = (uint32_t)(uintptr_t)(&off_205C448);
        v8 = &v14;
      }
      result = (char *)grapher::HolderT_bool_id_87484c::From(v7, v8);
      v9 = *(uint32_t *)(a2 + 4);
      *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v7);
      if ( v9 != 0 )
        result = (char *)G4_VCALL<int>(v9, 44);
      break;
    case 1:
      v15 = atoi(*a3);
      v10 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v10 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v10, &v15);
      result = *(char **)(a2 + 4);
      *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v10);
      if ( result != nullptr )
        goto LABEL_4;
      break;
    case 2:
      v11 = strtod(*a3, nullptr);
      v16 = v11;
      v12 = (grapher::HolderT<float> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v12 = (uint32_t)(uintptr_t)(&off_205C4C8);
      grapher::HolderT_float_id_458ea9::From(v12, &v16);
      result = *(char **)(a2 + 4);
      *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v12);
      if ( result != nullptr )
        goto LABEL_4;
      break;
    case 3:
      v17[0] = strtod(*a3, nullptr);
      v6 = (grapher::HolderT<double> *)gll_operator_new(0xCu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v6 = (uint32_t)(uintptr_t)(&off_205C488);
      grapher::HolderT_double_id_90764b::From(v6, v17);
      result = *(char **)(a2 + 4);
      *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v6);
      if ( result != nullptr )
        goto LABEL_4;
      break;
    case 4:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
      *v5 = (uint32_t)(uintptr_t)(&off_205C408);
      v5[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      grapher::HolderT_string_e830be::From(v5, a3);
      result = *(char **)(a2 + 4);
      *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v5);
      if ( result != nullptr )
LABEL_4:
        result = (char *)G4_VCALL<int>(result, 44);
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      return result;
    default:
      result = a1;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::ParseAttributes  (binary VA: 0x13ce2b0)
// Original: grapher::ActorVariable::ParseAttributes
// ----------------------------------------------------------------------------
int grapher::ActorVariable::ParseAttributes(int a1, ...)
{
  int result;
  size_t v2;
  char *v3;
  int v4;
  int v5;
  int *v6;
  size_t v7;
  char *v8;
  char *v9;
  void *v10;
  va_list va;
  typedef char *_g4_t_s;
  typedef char *_g4_t_v12;
  typedef uint32_t _g4_t_v13[4];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_s)) > _g4_s0 ? (8u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  va_start(va, a1);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  result = dword_20D5BE0 & 5;
  if ( result != 5 )
  {
    sub_B7C550(&v15);
    if ( *(uint32_t *)(a1 + 12) != 0 )
    {
      pugi::xml_node::attribute(v13, ((int)(uintptr_t)g4_va_cast<void *>(va)), (glf::Self *)"name");
      v15 = v13[0];
      if ( pugi::xml_attribute::as_int(&v15) != -1 )
      {
        s = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v15));
        v2 = strlen(s);
        g4_std_compat::string_assign(*(uint32_t *)(a1 + 12), s, v2);
      }
      pugi::xml_node::attribute(v13, ((int)(uintptr_t)g4_va_cast<void *>(va)), (glf::Self *)"type");
      v15 = v13[0];
      if ( pugi::xml_attribute::as_int(&v15) != -1 )
      {
        v3 = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v15));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), v3, (int)(uintptr_t)(&v14));
        v4 = (int)(uintptr_t)(grapher::ActorVariable::ConvertType(a1, (int)(uintptr_t)(&v16)));
        v5 = v16;
        *(uint32_t *)(a1 + 8) = v4;
        if ( (uint32_t *)(v5 - 12) != dword_213B808 )
        {
          if ( __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)(v5 - 12));
          v4 = *(uint32_t *)(a1 + 8);
        }
        v6 = grapher::ActorVariable::ConvertType(a1, v4);
        g4_std::string::assign_str(*(uint32_t *)(a1 + 12) + 8, v6);
      }
      pugi::xml_node::attribute(v13, ((int)(uintptr_t)g4_va_cast<void *>(va)), (glf::Self *)"aliasof");
      v15 = v13[0];
      if ( pugi::xml_attribute::as_int(&v15) != -1 )
      {
        v12 = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v15));
        v7 = strlen(v12);
        g4_std_compat::string_assign(*(uint32_t *)(a1 + 12) + 4, v12, v7);
      }
    }
    pugi::xml_node::attribute(v13, ((int)(uintptr_t)g4_va_cast<void *>(va)), (glf::Self *)"value");
    v15 = v13[0];
    result = pugi::xml_attribute::as_int(&v15);
    if ( result != -1 )
    {
      pugi::xml_node::attribute(&v17, ((int)(uintptr_t)g4_va_cast<void *>(va)), (glf::Self *)"value");
      v8 = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v17));
      v9 = (char *)g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), v8, (int)(uintptr_t)(&v14) + 1);
      grapher::ActorVariable::FromString(v9, a1, (const char **)v18);
      result = v18[0];
      v10 = (void *)(v18[0] - 12);
      if ( (uint32_t *)(v18[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        return ((g4_std::string::Rep::M_destroy(v10)), (int)0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13ce590)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Construct(grapher::Self *a1, int a2)
{
  bool v2;
  int result;
  uint32_t *v4;

  v2 = byte_20D5B50 == 0;
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 3) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) != 0 )
    {
LABEL_11:
      v4 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 197);
      *v4 = (uint32_t)(uintptr_t)(&dword_213B814);
      v2 = byte_20D5B50 == 0;
      v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v4[2] = (uint32_t)(uintptr_t)(&dword_213B814);
      v4[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v4[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(v4);
      if ( !v2 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (dword_20D5BE0 & 0x20) != 0 )
  {
    goto LABEL_11;
  }
  if ( byte_20D5B50 == 0 )
  {
LABEL_12:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
  }
LABEL_4:
  if ( (dword_20D5BE0 & 5) != 5 )
  {
    *((uint32_t *)a1 + 2) = -1;
    grapher::ActorVariable::ParseAttributes((int)(uintptr_t)(a1), a2);
    *(uint32_t *)a1 = grapher::NewVariableUniqueId();
  }
  result = *((uint32_t *)a1 + 3);
  if ( result != 0 )
    *(uint8_t *)(result + 20) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Construct  (binary VA: 0x13ce710)
// Original: grapher::ActorVariable::ActorVariable
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Construct(grapher::Self *a1, int a2, int a3, int a4)
{
  bool v4;
  int *v5;
  char *v6;
  char *v7;
  int result;
  uint32_t *v9;
  const char *v10[4];

  v4 = byte_20D5B50 == 0;
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 3) = 0;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) != 0 )
    {
LABEL_14:
      v9 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorVariable.cpp"), 157);
      *v9 = (uint32_t)(uintptr_t)(&dword_213B814);
      v4 = byte_20D5B50 == 0;
      v9[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v9[2] = (uint32_t)(uintptr_t)(&dword_213B814);
      v9[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v9[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(v9);
      if ( !v4 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else if ( (dword_20D5BE0 & 0x20) != 0 )
  {
    goto LABEL_14;
  }
  if ( byte_20D5B50 == 0 )
  {
LABEL_15:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
  }
LABEL_4:
  if ( (dword_20D5BE0 & 5) != 5 )
  {
    if ( *((uint32_t *)a1 + 3) != 0 )
    {
      v5 = grapher::ActorVariable::ConvertType((int)(uintptr_t)(a1), a4);
      g4_std::string::assign_str(*((uint32_t *)a1 + 3) + 8, v5);
      g4_std::string::assign_str(*((uint32_t *)a1 + 3), a2);
    }
    *((uint32_t *)a1 + 2) = a4;
    v6 = (char *)g4_std::string::construct_copy(v10, a3);
    grapher::ActorVariable::FromString(v6, (int)(uintptr_t)(a1), v10);
    v7 = (char *)(v10[0] - 12);
    if ( (uint32_t *)v10[0] - 3 != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v10[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    *(uint32_t *)a1 = grapher::NewVariableUniqueId();
  }
  result = *((uint32_t *)a1 + 3);
  if ( result != 0 )
    *(uint8_t *)(result + 20) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::ToString  (binary VA: 0x13ce920)
// Original: grapher::ActorVariable::ToString
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorVariable::ToString(grapher::ActorVariable::Self *self, int a2)
{
  int v3;
  int v4;
  char *v5;
  int v6;
  void *v7;
  void *v8;
  int v9;
  void *v10;
  void *v11;
  int v12;
  void *v13;
  void *v14;
  char *v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[4];
  typedef int _g4_t_v20[4];
  typedef int _g4_t_v21[4];
  typedef uint32_t _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (14u + sizeof(_g4_t_v16)) > _g4_s0 ? (14u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v21)) > _g4_s5 ? (60u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v22)) > _g4_s6 ? (76u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 14u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  switch ( *(uint32_t *)(a2 + 8) )
  {
    case 0:
      v4 = *(uint32_t *)(a2 + 4);
      if ( v4 == 0
        || ((*(void (**)(uint32_t, char *))(*(uint32_t *)v4 + 24))(*(uint32_t *)(a2 + 4), (char *)&v18 + 1),
            v5 = "true",
            BYTE1(v18) == 0) )
      {
        v5 = "false";
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v5, (int)(uintptr_t)(&v16));
      return self;
    case 1:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), (char *)&a0[2], (int)(uintptr_t)(&v16) + 1);
      v6 = *(uint32_t *)(a2 + 4);
      if ( v6 != 0 )
      {
        v22[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        G4_VCALL<void>(v6, 32, v22);
        g4_std::string::construct_copy(self, v22);
        v7 = (void *)(v22[0] - 12);
        if ( (uint32_t *)(v22[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
      }
      else
      {
        g4_std::string::construct_copy(self, v19);
      }
      v8 = (void *)(v19[0] - 12);
      if ( (uint32_t *)(v19[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      return self;
    case 2:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "0.0", (int)(uintptr_t)(&v17));
      v9 = *(uint32_t *)(a2 + 4);
      if ( v9 != 0 )
      {
        v22[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        G4_VCALL<void>(v9, 32, v22);
        g4_std::string::construct_copy(self, v22);
        v10 = (void *)(v22[0] - 12);
        if ( (uint32_t *)(v22[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
      }
      else
      {
        g4_std::string::construct_copy(self, v20);
      }
      v11 = (void *)(v20[0] - 12);
      if ( (uint32_t *)(v20[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      return self;
    case 3:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "0.0", (int)(uintptr_t)(&v17) + 1);
      v12 = *(uint32_t *)(a2 + 4);
      if ( v12 != 0 )
      {
        v22[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        G4_VCALL<void>(v12, 32, v22);
        g4_std::string::construct_copy(self, v22);
        v13 = (void *)(v22[0] - 12);
        if ( (uint32_t *)(v22[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v13);
        }
      }
      else
      {
        g4_std::string::construct_copy(self, v21);
      }
      v14 = (void *)(v21[0] - 12);
      if ( (uint32_t *)(v21[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      return self;
    case 4:
    case 5:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
      v3 = *(uint32_t *)(a2 + 4);
      if ( v3 != 0 )
        G4_VCALL<void>(v3, 32, self);
      return self;
    case 6:
    case 7:
      v15 = (char *)&v17 + 2;
      goto LABEL_2;
    case 8:
      v15 = (char *)&v17 + 3;
      goto LABEL_2;
    default:
      v15 = (char *)&v18;
LABEL_2:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v15));
      return self;
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::Serialize  (binary VA: 0x13cecd0)
// Original: grapher::ActorVariable::Serialize
// ----------------------------------------------------------------------------
int grapher::ActorVariable::Serialize(uint32_t *a1, int a2)
{
  int v2;
  int64_t v3; // xmm0_8
  int result;
  void *v5;
  void (***v6)(uint32_t, uint64_t *);
  int v7;
  int v8;
  uint32_t *v9;
  void *v10;
  int v11;
  char v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  void *v20;
  void *v21;
  void (***v22)(uint32_t, uint64_t *);
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_Constant;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[4];
  typedef int _g4_t_v28[4];
  typedef uint32_t _g4_t_v29[3];
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[2];
  typedef uint64_t _g4_t_v32[2];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_Constant)) > _g4_s1 ? (0u + sizeof(_g4_t_Constant)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v27)) > _g4_s3 ? (24u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v28)) > _g4_s4 ? (40u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v29)) > _g4_s5 ? (56u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v30)) > _g4_s6 ? (68u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v31)) > _g4_s7 ? (72u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v32)) > _g4_s8 ? (80u + sizeof(_g4_t_v32)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_Constant &Constant = *reinterpret_cast<_g4_t_Constant *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);

  LODWORD(v32[0]) = *a1;
  sub_192C9E0(a2, v32, 4);
  LODWORD(v32[0]) = a1[2];
  sub_192C9E0(a2, v32, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v26));
  switch ( a1[2] )
  {
    case 0:
      v11 = a1[1];
      v12 = 0;
      if ( v11 != 0 )
      {
        G4_VCALL<void>(v11, 24, v32);
        v12 = v32[0];
      }
      LOBYTE(v32[0]) = v12;
      sub_192C9E0(a2, v32, 1);
      break;
    case 1:
      v6 = (void (***)(uint32_t, uint64_t *))a1[1];
      v7 = 0;
      if ( v6 != nullptr )
      {
        (**v6)((uint32_t)(uintptr_t)(v6), v32);
        v7 = v32[0];
      }
      LODWORD(v32[0]) = v7;
      goto LABEL_10;
    case 2:
      v13 = a1[1];
      v14 = 0;
      if ( v13 != 0 )
      {
        G4_VCALL<void>(v13, 8, v32);
        v14 = v32[0];
      }
      LODWORD(v32[0]) = v14;
LABEL_10:
      sub_192C9E0(a2, v32, 4);
      break;
    case 3:
      v2 = a1[1];
      v3 = 0;
      if ( v2 != 0 )
      {
        G4_VCALL<void>(v2, 16, v32);
        v3 = v32[0];
      }
      v32[0] = v3;
      sub_192C9E0(a2, v32, 8);
      break;
    case 4:
    case 0xA:
    case 0xC:
      v15 = &dword_213B814;
      v16 = a1[1];
      v31[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      if ( v16 != 0 )
      {
        G4_VCALL<void>(v16, 32, v31);
        v15 = (uint32_t *)v31[0];
      }
      LODWORD(v32[0]) = *(v15 - 3);
      sub_192C9E0(a2, v32, 4);
      sub_192C9E0(a2, v31[0], *(uint32_t *)(v31[0] - 12));
      v10 = (void *)(v31[0] - 12);
      if ( (uint32_t *)(v31[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        goto LABEL_40;
      }
      break;
    case 9:
      v8 = a1[1];
      v9 = &dword_213B814;
      v31[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      if ( v8 != 0 )
      {
        G4_VCALL<void>(v8, 32, v31);
        v9 = (uint32_t *)v31[0];
      }
      LODWORD(v32[0]) = *(v9 - 3);
      sub_192C9E0(a2, v32, 4);
      sub_192C9E0(a2, v31[0], *(uint32_t *)(v31[0] - 12));
      v10 = (void *)(v31[0] - 12);
      if ( (uint32_t *)(v31[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        goto LABEL_40;
      }
      break;
    case 0xB:
      v28[0] = (int)(uintptr_t)(&dword_213B814);
      v17 = a1[1];
      if ( v17 != 0 )
        (*(void (**)(uint32_t, int *))(*(uint32_t *)v17 + 32))(a1[1], v28);
      v24 = sub_1938090((int)(uintptr_t)(v28), ".", 0, 1u);
      v30 = &dword_213B814;
      v18 = a1[1];
      if ( v18 != 0 )
        G4_VCALL<void>(v18, 32, &v30);
      g4_std::string::assign_str(v27, &v30);
      v19 = v30 - 3;
      if ( v30 - 3 != dword_213B808 && __sync_fetch_and_add(v30 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v19);
      sub_1938090((int)(uintptr_t)(v27), ".", 0, 1u);
      if ( v24 == -1 )
      {
        v22 = (void (***)(uint32_t, uint64_t *))a1[1];
        v23 = 0;
        if ( v22 != nullptr )
        {
          (**v22)((uint32_t)(uintptr_t)(v22), v32);
          v23 = v32[0];
        }
        LODWORD(v32[0]) = v23;
        sub_192C9E0(a2, v32, 4);
      }
      else
      {
        sub_193A6F0(v29, v28, 0, v24);
        if ( (unsigned int)(v24 + 1) > *(uint32_t *)(v28[0] - 12) )
          sub_1900210("basic_string::substr");
        sub_193A6F0(v31, v28, v24 + 1, *(uint32_t *)(v28[0] - 12));
        if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
        {
          grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
          __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
        }
        Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v29, v31);
        if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
        {
          grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
          __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
        }
        grapher::DebugConstants::HasConstant(&unk_20D6760, v29, v31);
        LODWORD(v32[0]) = Constant;
        sub_192C9E0(a2, v32, 4);
        v20 = (void *)(v31[0] - 12);
        if ( (uint32_t *)(v31[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v20);
        }
        v21 = (void *)(v29[0] - 12);
        if ( (uint32_t *)(v29[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v21);
        }
      }
      v10 = (void *)(v28[0] - 12);
      if ( (uint32_t *)(v28[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
      {
LABEL_40:
        g4_std::string::Rep::M_destroy(v10);
      }
      break;
    default:
      break;
  }
  result = v27[0];
  v5 = (void *)(v27[0] - 12);
  if ( (uint32_t *)(v27[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v5)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::UnSerialize  (binary VA: 0x13cf340)
// Original: grapher::ActorVariable::UnSerialize
// ----------------------------------------------------------------------------
int grapher::ActorVariable::UnSerialize(int a1, int a2)
{
  int v2;
  int v3;
  grapher::HolderT<bool> *v4;
  int v5;
  int result;
  void *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  void *v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  void (*v17)(int, int, int);
  void (*v18)(int, int, int);
  typedef void (*_g4_t_v19)(int, int, int);
  typedef void (*_g4_t_v20)(int, int, int);
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef bool _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef double _g4_t_v28;
  typedef size_t _g4_t_v29[2];
  typedef int *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v20)) > _g4_s1 ? (0u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v21)) > _g4_s2 ? (4u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v22)) > _g4_s3 ? (4u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v26)) > _g4_s7 ? (40u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v27)) > _g4_s8 ? (44u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v28)) > _g4_s9 ? (48u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v29)) > _g4_s10 ? (56u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v30)) > _g4_s11 ? (72u + sizeof(_g4_t_v30)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);

  v30 = &a1;
  v2 = a2;
  v3 = a1;
  G4_VCALL<void>(a2, 12, a1, 4);
  G4_VCALL<void>(v2, 12, v3 + 8, 4);
  switch ( *(uint32_t *)(v3 + 8) )
  {
    case 0:
      G4_VCALL<void>(v2, 12, v29, 1);
      v23 = v29[0];
      v4 = (grapher::HolderT<bool> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_205C448);
      grapher::HolderT_bool_id_87484c::From(v4, &v23);
      goto LABEL_4;
    case 1:
      goto LABEL_3;
    case 2:
      G4_VCALL<void>(v2, 12, v29, 4);
      v26 = *(float *)v29;
      v4 = (grapher::HolderT<bool> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_205C4C8);
      grapher::HolderT_float_id_458ea9::From(v4, &v26);
      goto LABEL_4;
    case 3:
      G4_VCALL<void>(v2, 12, v29, 8);
      v28 = *(double *)v29;
      v4 = (grapher::HolderT<bool> *)gll_operator_new(0xCu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_205C488);
      grapher::HolderT_double_id_90764b::From(v4, &v28);
      goto LABEL_4;
    case 4:
    case 0xA:
    case 0xC:
      v24 = (int)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v2, 12, v29, 4);
      sub_1939D80((int)(uintptr_t)(&v24), v29[0], 0);
      v8 = v24;
      v9 = *(uint32_t *)(v24 - 12);
      if ( v9 != 0 )
      {
        v18 = *(void (**)(int, int, int))(*(uint32_t *)v2 + 12);
        if ( *(int *)(v24 - 4) >= 0 )
        {
          v20 = *(void (**)(int, int, int))(*(uint32_t *)v2 + 12);
          v22 = *(uint32_t *)(v24 - 12);
          sub_19397C0(&v24);
          v8 = v24;
          v9 = v22;
          v18 = v20;
        }
        v18(v2, v8, v9);
      }
      v10 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
      *v10 = (uint32_t)(uintptr_t)(&off_205C408);
      v10[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      grapher::HolderT_string_e830be::From(v10, &v24);
      v11 = *(uint32_t *)(v3 + 4);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v10);
      if ( v11 != 0 )
        G4_VCALL<void>(v11, 44);
      v12 = (void *)(v24 - 12);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        goto LABEL_16;
      }
      break;
    case 9:
      v24 = (int)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v2, 12, v29, 4);
      sub_1939D80((int)(uintptr_t)(&v24), v29[0], 0);
      v13 = v24;
      v14 = *(uint32_t *)(v24 - 12);
      if ( v14 != 0 )
      {
        v17 = *(void (**)(int, int, int))(*(uint32_t *)v2 + 12);
        if ( *(int *)(v24 - 4) >= 0 )
        {
          v19 = *(void (**)(int, int, int))(*(uint32_t *)v2 + 12);
          v21 = *(uint32_t *)(v24 - 12);
          sub_19397C0(&v24);
          v13 = v24;
          v14 = v21;
          v17 = v19;
        }
        v17(v2, v13, v14);
      }
      v15 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
      *v15 = (uint32_t)(uintptr_t)(&off_205C408);
      v15[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      grapher::HolderT_string_e830be::From(v15, &v24);
      v16 = *(uint32_t *)(v3 + 4);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v15);
      if ( v16 != 0 )
        G4_VCALL<void>(v16, 44);
      v12 = (void *)(v24 - 12);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
LABEL_16:
        g4_std::string::Rep::M_destroy(v12);
      }
      break;
    case 0xB:
      *(uint32_t *)(v3 + 8) = 1;
LABEL_3:
      G4_VCALL<void>(v2, 12, v29, 4);
      v25 = v29[0];
      v4 = (grapher::HolderT<bool> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v4, &v25);
LABEL_4:
      v5 = *(uint32_t *)(v3 + 4);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4);
      if ( v5 != 0 )
        G4_VCALL<void>(v5, 44);
      break;
    default:
      break;
  }
  grapher::ActorVariable::ToString((grapher::ActorVariable::Self *)&v27, v3);
  result = v27;
  v7 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::GetName  (binary VA: 0x13cf800)
// Original: grapher::ActorVariable::GetName
// ----------------------------------------------------------------------------
int * grapher::ActorVariable::GetName(grapher::ActorVariable::Self *self)
{
  int *result;

  result = (int *)(&dword_2119730);
  if ( *((uint32_t *)self + 3) != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    result = (int *)(&dword_2119730);
    if ( (dword_20D5BE0 & 5) != 5 )
      return *((int **)self + 3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::GetAliasName  (binary VA: 0x13cf8b0)
// Original: grapher::ActorVariable::GetAliasName
// ----------------------------------------------------------------------------
int * grapher::ActorVariable::GetAliasName(grapher::ActorVariable::Self *self)
{
  int v1;
  int *result;

  v1 = *((uint32_t *)self + 3);
  result = (int *)(v1 + 4);
  if ( v1 == 0 )
    return (int *)(&dword_2119730);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::GetTypeName  (binary VA: 0x13cf8e0)
// Original: grapher::ActorVariable::GetTypeName
// ----------------------------------------------------------------------------
int * grapher::ActorVariable::GetTypeName(grapher::ActorVariable::Self *self)
{
  int *result;

  result = (int *)(&dword_2119730);
  if ( *((uint32_t *)self + 3) != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    result = (int *)(&dword_2119730);
    if ( (dword_20D5BE0 & 5) != 5 )
      return (int *)(*((uint32_t *)self + 3) + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::SetGraphName  (binary VA: 0x13cf990)
// Original: grapher::ActorVariable::SetGraphName
// ----------------------------------------------------------------------------
int grapher::ActorVariable::SetGraphName(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 12);
  if ( result != 0 )
    return (int)(uintptr_t)(g4_std::string::assign_str(result + 12, a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorVariable::SetActorName  (binary VA: 0x13cf9d0)
// Original: grapher::ActorVariable::SetActorName
// ----------------------------------------------------------------------------
int grapher::ActorVariable::SetActorName(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 12);
  if ( result != 0 )
    return (int)(uintptr_t)(g4_std::string::assign_str(result + 16, a2));
  return result;
}


