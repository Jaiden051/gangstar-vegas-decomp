#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorProperty.h"

// ============================================================================
// G4_UP8Shop/lib/grapher/decompiled/grapher_ActorProperty.cpp
// Library: grapher | Module: grapher_ActorProperty
// Binary Address Span: 0x13cc5d0 .. 0x13cd010 (11 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13cc5d0 (size: 280 bytes)
// Symbol:    _ZN7grapher13ActorPropertyC1Ev
// Demangled: grapher::ActorProperty::ActorProperty(void)
// ============================================================================
// Alternative name is '_ZN7grapher13ActorPropertyC2Ev'
struct grapher::ActorProperty::Self *grapher::ActorProperty::Construct(grapher::ActorProperty::Self *self)
{
  struct grapher::ActorProperty::Self *result;
  int v2;
  void *obj;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 16) = 0;
  *((uint32_t *)self + 5) = 0;
  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, (int)(uintptr_t)(obj)) != 0 )
  {
    v2 = gll_operator_new(0xCu, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorProperty.cpp"), 19);
    *(uint8_t *)v2 = 0;
    *(uint8_t *)(v2 + 1) = 0;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v2 + 8) = 3;
    *((uint32_t *)self + 5) = v2;
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  result = (struct grapher::ActorProperty::Self *)(dword_20D5BE0 & 5);
  if ( result != (struct grapher::ActorProperty::Self *)((char *)&loc_4 + 1) )
  {
    result = *((struct grapher::ActorProperty::Self **)self + 5);
    if ( result != nullptr )
      *(uint8_t *)result = 0;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::Construct  (binary VA: 0x13cc6f0)
// Original: grapher::ActorProperty::ActorProperty
// ----------------------------------------------------------------------------
uint8_t * grapher::ActorProperty::Construct(int a1, char a2, char a3, int a4, int a5)
{
  char v5; // di
  uint8_t *result;
  uint8_t *v7;
  void *obj;
  uint8_t *v9;

  v5 = a3;
  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint8_t *)(a1 + 16) = 1;
  *(uint32_t *)(a1 + 20) = 0;
  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, (int)(uintptr_t)(obj)) != 0 )
  {
    v7 = (uint8_t *)gll_operator_new(0xCu, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorProperty.cpp"), 34);
    *v7 = a3;
    v7[1] = a2;
    v9 = v7;
    g4_std::string::construct_copy(v7 + 4, a4);
    *((uint32_t *)v9 + 2) = a5;
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v9);
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  result = (uint8_t *)(dword_20D5BE0 & 5);
  if ( result != (uint8_t *)&loc_4 + 1 )
  {
    result = *(uint8_t **)(a1 + 20);
    if ( result != nullptr )
    {
      if ( result[1] == 0 )
        v5 = 0;
      *result = v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::opAssign  (binary VA: 0x13cc850)
// Original: grapher::ActorProperty::operator=
// ----------------------------------------------------------------------------
grapher::ActorProperty::Self * grapher::ActorProperty::opAssign(grapher::ActorProperty::Self *self, const grapher::ActorProperty::Self *a2)
{
  char *dest;
  unsigned int v3;
  int v4;
  char *v5;
  void *v6;
  int v7;
  int v8;
  size_t n;
  int v11;
  unsigned int v12;
  size_t v13;
  char *v14;
  char *v15;
  char *src;
  uint8_t *v17;
  char *v18;

  if ( self != a2 )
  {
    dest = *((char **)self + 1);
    *((uint8_t *)self + 16) = *((uint8_t *)a2 + 16);
    v11 = *((uint32_t *)a2 + 2);
    v3 = (v11 - *((uint32_t *)a2 + 1)) >> 2;
    src = *((char **)a2 + 1);
    if ( v3 <= (*((uint32_t *)self + 3) - (int)(uintptr_t)(dest)) >> 2 )
    {
      v17 = *((uint8_t **)self + 2);
      v12 = (v17 - (uint8_t *)(dest)) >> 2;
      if ( v3 <= v12 )
      {
        if ( v3 != 0 )
        {
          n = 4 * v3;
          memmove(dest, src, n);
          dest = (char *)(n + *((uint32_t *)self + 1));
        }
      }
      else
      {
        v18 = &src[4 * ((v17 - (uint8_t *)(dest)) >> 2)];
        if ( v12 != 0 )
        {
          memmove(dest, src, 4 * v12);
          dest = *((char **)self + 1);
          v17 = *((uint8_t **)self + 2);
          v18 = (char *)(*((uint32_t *)a2 + 1) + ((v17 - (uint8_t *)(dest)) & 0xFFFFFFFC));
          v11 = *((uint32_t *)a2 + 2);
        }
        if ( (v11 - (int)(uintptr_t)(v18)) >> 2 != 0 )
        {
          memmove(v17, v18, 4 * ((v11 - (int)(uintptr_t)(v18)) >> 2));
          dest = (char *)(*((uint32_t *)self + 1) + 4 * v3);
        }
        else
        {
          dest += 4 * v3;
        }
      }
    }
    else
    {
      v4 = 0;
      v5 = nullptr;
      if ( v3 != 0 )
      {
        if ( v3 > 0x3FFFFFFF )
          sub_18FFEE0(0, 0);
        v15 = (char *)opNew(4 * v3);
        memmove(v15, src, 4 * v3);
        v4 = 4 * v3;
        v5 = v15;
      }
      v6 = *((void **)self + 1);
      if ( v6 != nullptr )
      {
        v14 = v5;
        v13 = v4;
        opDelete(v6);
        v4 = v13;
        v5 = v14;
      }
      *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v5);
      dest = &v5[v4];
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(dest);
    }
    v7 = *((uint32_t *)self + 5);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(dest);
    *(uint32_t *)self = *(uint32_t *)a2;
    if ( v7 != 0 )
    {
      v8 = *((uint32_t *)a2 + 5);
      *(uint8_t *)v7 = *(uint8_t *)v8;
      *(uint8_t *)(v7 + 1) = *(uint8_t *)(v8 + 1);
      g4_std::string::assign_str(v7 + 4, v8 + 4);
      *(uint32_t *)(v7 + 8) = *(uint32_t *)(v8 + 8);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::Construct  (binary VA: 0x13cca80)
// Original: grapher::ActorProperty::ActorProperty
// ----------------------------------------------------------------------------
grapher::ActorProperty::Self * grapher::ActorProperty::Construct(grapher::ActorProperty::Self *self, const grapher::ActorProperty::Self *a2)
{
  int v2;
  grapher::ActorProperty::Self *v4;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0;
  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, (int)(uintptr_t)(v4)) != 0 )
  {
    v2 = gll_operator_new(0xCu, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorProperty.cpp"), 49);
    *(uint8_t *)v2 = 0;
    *(uint8_t *)(v2 + 1) = 0;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v2 + 8) = 3;
    *((uint32_t *)self + 5) = v2;
  }
  return grapher::ActorProperty::opAssign(self, a2);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::Set  (binary VA: 0x13ccb20)
// Original: grapher::ActorProperty::Set
// ----------------------------------------------------------------------------
uint8_t * grapher::ActorProperty::Set(int a1, char a2, char a3, int a4, int a5)
{
  int v5;
  uint8_t *result;

  v5 = *(uint32_t *)(a1 + 20);
  if ( v5 != 0 )
  {
    *(uint8_t *)(v5 + 1) = a2;
    g4_std::string::assign_str(*(uint32_t *)(a1 + 20) + 4, a4);
    *(uint32_t *)(*(uint32_t *)(a1 + 20) + 8) = a5;
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  result = (uint8_t *)(dword_20D5BE0 & 5);
  if ( result != (uint8_t *)&loc_4 + 1 )
  {
    result = *(uint8_t **)(a1 + 20);
    if ( result != nullptr )
    {
      if ( result[1] == 0 )
        a3 = 0;
      *result = a3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::DeleteDefaultVariable  (binary VA: 0x13ccc20)
// Original: grapher::ActorProperty::DeleteDefaultVariable
// ----------------------------------------------------------------------------
void grapher::ActorProperty::DeleteDefaultVariable(grapher::ActorProperty::Self *self)
{
  unsigned int **v1;
  unsigned int v2;
  int v3;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    v1 = *((unsigned int ***)self + 1);
    if ( (*((uint32_t *)self + 2) - (int)(uintptr_t)(v1)) >> 2 == 1 )
    {
      v2 = **v1;
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::DeleteActorVariable((grapher::ActorManager::Self *)&unk_20D5B60, v2);
      v3 = *((uint32_t *)self + 1);
      *((uint8_t *)self + 16) = 0;
      *((uint32_t *)self + 2) = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::Destroy  (binary VA: 0x13ccce0)
// Original: grapher::ActorProperty::~ActorProperty
// ----------------------------------------------------------------------------
void grapher::ActorProperty::Destroy(void **self)
{
  uint32_t *v1;
  int v2;

  grapher::ActorProperty::DeleteDefaultVariable((grapher::ActorProperty::Self *)self);
  v1 = (uint32_t *)(*(self + 5));
  if ( v1 != nullptr )
  {
    v2 = v1[1];
    if ( (uint32_t *)(v2 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v2 - 12));
    }
    opDelete(v1);
  }
  if ( *(self + 1) != nullptr )
    opDelete(*(self + 1));
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::AddVariable  (binary VA: 0x13ccd70)
// Original: grapher::ActorProperty::AddVariable
// ----------------------------------------------------------------------------
char * grapher::ActorProperty::AddVariable(const void **self, grapher::ActorVariable::Self *a2)
{
  char *src;
  int v3;
  char *result;
  unsigned int v5;
  size_t v6;
  size_t v7;
  char *v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  void *v14;
  char *v15;
  size_t v16;
  size_t v17;
  size_t v18;
  int v19;
  char *v20;
  char *dest;

  grapher::ActorProperty::DeleteDefaultVariable((grapher::ActorProperty::Self *)self);
  src = (char *)*(self + 2);
  if ( src == *(self + 3) )
  {
    v5 = (src - (char *)((uint8_t *)*(self + 1))) >> 2;
    v6 = 4;
    if ( v5 != 0 )
    {
      v6 = 0xFFFFFFFC;
      if ( v5 <= 2 * v5 && 2 * v5 <= 0x3FFFFFFF )
        v6 = 8 * v5;
    }
    v16 = v6;
    v19 = (src - (char *)((uint8_t *)*(self + 1))) >> 2;
    dest = (char *)opNew(v6);
    v7 = v16;
    v8 = &dest[4 * v19];
    if ( v8 != nullptr )
      *(uint32_t *)v8 = (uint32_t)(uintptr_t)(a2);
    v9 = 0;
    v10 = (src - (char *)((uint8_t *)*(self + 1))) >> 2;
    if ( v10 != 0 )
    {
      v9 = 4 * v10;
      memmove(dest, *(self + 1), 4 * v10);
      v7 = v16;
    }
    v11 = &dest[v9 + 4];
    v12 = 0;
    v13 = ((uint8_t *)*(self + 2) - (uint8_t *)(src)) >> 2;
    if ( v13 != 0 )
    {
      v12 = 4 * v13;
      v18 = v7;
      v20 = v11;
      memmove(v11, src, 4 * v13);
      v11 = v20;
      v7 = v18;
    }
    v14 = (void *)*(self + 1);
    v15 = &v11[v12];
    if ( v14 != nullptr )
    {
      v17 = v7;
      opDelete(v14);
      v7 = v17;
    }
    *(self + 2) = v15;
    *(self + 1) = dest;
    *(self + 3) = &dest[v7];
    return dest;
  }
  else
  {
    v3 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = (uint32_t)(uintptr_t)(a2);
      v3 = (int)(uintptr_t)(*(self + 2));
    }
    result = (char *)(v3 + 4);
    *(self + 2) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::Serialize  (binary VA: 0x13ccee0)
// Original: grapher::ActorProperty::Serialize
// ----------------------------------------------------------------------------
int grapher::ActorProperty::Serialize(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  uint32_t *v5;
  uint32_t v6[8];

  v6[0] = (*(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4)) >> 2;
  sub_192C9E0(a2, v6, 4);
  v2 = *(uint32_t *)(a1 + 4);
  result = *(uint32_t *)(a1 + 8) - v2;
  if ( result > 3 )
  {
    v4 = 0;
    do
    {
      v5 = *(uint32_t **)(v2 + 4 * v4++);
      v6[0] = *v5;
      sub_192C9E0(a2, v6, 4);
      v2 = *(uint32_t *)(a1 + 4);
      result = (*(uint32_t *)(a1 + 8) - v2) >> 2;
    }
    while ( v4 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::UnSerialize  (binary VA: 0x13ccf70)
// Original: grapher::ActorProperty::UnSerialize
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorProperty::UnSerialize(const void **a1, int a2, grapher::ActorFile::Self *a3)
{
  grapher::ActorVariable::Self *result;
  int v4;
  grapher::ActorVariable::Self *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  result = (grapher::ActorVariable::Self *)G4_VCALL<int>(a2, 12, v7, 4);
  v6 = v7[0];
  if ( v7[0] != 0 )
  {
    v4 = 0;
    do
    {
      G4_VCALL<void>(a2, 12, v7, 4);
      result = (grapher::ActorVariable::Self *)grapher::ActorFile::FindVariable(a3, v7[0]);
      v5 = result;
      if ( result != nullptr )
      {
        grapher::ActorVariable::GetName(result);
        result = (grapher::ActorVariable::Self *)grapher::ActorProperty::AddVariable(a1, v5);
      }
      ++v4;
    }
    while ( v4 != v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorProperty::SetActorName  (binary VA: 0x13cd010)
// Original: grapher::ActorProperty::SetActorName
// ----------------------------------------------------------------------------
int grapher::ActorProperty::SetActorName(int a1, int a2)
{
  int result;
  int i;
  void *v4;
  uint32_t v5[8];

  result = *(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4);
  if ( result > 3 )
  {
    for ( i = 0; i < result; ++i )
    {
      g4_std::string::construct_copy(v5, a2);
      grapher::ActorVariable::SetActorName(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 4 * i), v5);
      v4 = (void *)(v5[0] - 12);
      if ( (uint32_t *)(v5[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      result = (*(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4)) >> 2;
    }
  }
  return result;
}


