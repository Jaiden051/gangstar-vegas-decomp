#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorBase.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Cancel  (binary VA: 0x13b4390)
// Original: grapher::ActorBase::Cancel
// ----------------------------------------------------------------------------
int grapher::ActorBase::Cancel(grapher::ActorBase::Self *self, grapher::ActorContext::Self *a2)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  { grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, self, a2); return 0; }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Update  (binary VA: 0x13b4430)
// Original: grapher::ActorBase::Update
// ----------------------------------------------------------------------------
int grapher::ActorBase::Update(grapher::ActorBase::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  { grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, self, a3); return 0; }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetNewFileId  (binary VA: 0x13b50a0)
// Original: grapher::ActorBase::SetNewFileId
// ----------------------------------------------------------------------------
int grapher::ActorBase::SetNewFileId(grapher::ActorBase::Self *self)
{
  grapher::g_actorUniqueId = (uint32_t)(uintptr_t)(self) << 20;
  return (uint32_t)(uintptr_t)(self) << 20;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Construct  (binary VA: 0x13b5380)
// Original: grapher::ActorBase::ActorBase
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::Construct(grapher::ActorBase::Self *self)
{
  grapher::ActorBase::Self *result;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094BC8);
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 12) = 0;
  result = (grapher::ActorBase::Self *)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, v2);
  if ( (uint8_t)(uintptr_t)result != 0 )
  {
    result = (grapher::ActorBase::Self *)gll_operator_new(0x9Cu, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorBase.cpp"), 96);
    *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)((char *)result + 4);
    *((uint32_t *)result + 4) = (uint32_t)(uintptr_t)((char *)result + 4);
    *((uint32_t *)result + 9) = (uint32_t)(uintptr_t)((char *)result + 28);
    *((uint32_t *)result + 10) = (uint32_t)(uintptr_t)((char *)result + 28);
    *((uint32_t *)result + 15) = (uint32_t)(uintptr_t)((char *)result + 52);
    *((uint32_t *)result + 16) = (uint32_t)(uintptr_t)((char *)result + 52);
    *((uint32_t *)result + 1) = 0;
    *((uint32_t *)result + 18) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)result + 19) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)result + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)result + 21) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)result + 22) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)result + 23) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)result + 24) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)result + 2) = 0;
    *((uint32_t *)result + 5) = 0;
    *((uint32_t *)result + 30) = (uint32_t)(uintptr_t)((char *)result + 112);
    *((uint32_t *)result + 31) = (uint32_t)(uintptr_t)((char *)result + 112);
    *((uint32_t *)result + 7) = 0;
    *((uint32_t *)result + 8) = 0;
    *((uint32_t *)result + 11) = 0;
    *((uint32_t *)result + 13) = 0;
    *((uint32_t *)result + 14) = 0;
    *((uint32_t *)result + 17) = 0;
    *((uint32_t *)result + 28) = 0;
    *((uint32_t *)result + 29) = 0;
    *((uint32_t *)result + 32) = 0;
    *((uint32_t *)result + 34) = 0;
    *((uint32_t *)result + 35) = 0;
    *((uint32_t *)result + 38) = 0;
    *((uint32_t *)result + 36) = (uint32_t)(uintptr_t)((char *)result + 136);
    *((uint32_t *)result + 37) = (uint32_t)(uintptr_t)((char *)result + 136);
    *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Release  (binary VA: 0x13b54f0)
// Original: grapher::ActorBase::Release
// ----------------------------------------------------------------------------
grapher::ActorProperty::Self ** grapher::ActorBase::Release(grapher::ActorBase::Self *self)
{
  grapher::ActorProperty::Self **v1;
  grapher::ActorProperty::Self **result;
  grapher::ActorProperty::Self *v3;

  v1 = *((grapher::ActorProperty::Self ***)self + 8);
  result = *((grapher::ActorProperty::Self ***)self + 9);
  if ( v1 != result )
  {
    do
    {
      v3 = *v1;
      if ( *v1 != nullptr )
      {
        grapher::ActorProperty::Destroy(*v1);
        opDelete(v3);
        result = *((grapher::ActorProperty::Self ***)self + 9);
      }
      ++v1;
    }
    while ( v1 != result );
    v1 = *((grapher::ActorProperty::Self ***)self + 8);
  }
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetPinInLogType  (binary VA: 0x13b5550)
// Original: grapher::ActorBase::SetPinInLogType
// ----------------------------------------------------------------------------
int grapher::ActorBase::SetPinInLogType(grapher::ActorBase::Self *self, int a2)
{
  int result;

  result = *((uint32_t *)self + 12);
  if ( result != 0 )
    *(uint32_t *)(result + 100) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetPinOutLogType  (binary VA: 0x13b5570)
// Original: grapher::ActorBase::SetPinOutLogType
// ----------------------------------------------------------------------------
int grapher::ActorBase::SetPinOutLogType(grapher::ActorBase::Self *self, int a2)
{
  int result;

  result = *((uint32_t *)self + 12);
  if ( result != 0 )
    *(uint32_t *)(result + 104) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetName  (binary VA: 0x13b5590)
// Original: grapher::ActorBase::GetName
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetName(grapher::ActorBase::Self *self)
{
  int *v1;
  void *obj;

  if ( byte_2119220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119220) != 0 )
  {
    dword_2119230 = (int)(uintptr_t)(&dword_213B814);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2119220);
    __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119230, &unk_20D1280);
  }
  v1 = (int *)(&dword_2119230);
  if ( *((uint32_t *)self + 12) != 0
    && (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), (int)(uintptr_t)(obj)) == 0 )
  {
    return *((uint32_t *)self + 12) + 72;
  }
  return (int)(uintptr_t)(v1);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetTemplateName  (binary VA: 0x13b5640)
// Original: grapher::ActorBase::GetTemplateName
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetTemplateName(grapher::ActorBase::Self *self)
{
  int *v1;
  void *obj;

  if ( byte_2119240 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119240) != 0 )
  {
    dword_2119250 = (int)(uintptr_t)(&dword_213B814);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2119240);
    __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119250, &unk_20D1280);
  }
  v1 = (int *)(&dword_2119250);
  if ( *((uint32_t *)self + 12) != 0
    && (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), (int)(uintptr_t)(obj)) == 0 )
  {
    return *((uint32_t *)self + 12) + 76;
  }
  return (int)(uintptr_t)(v1);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetTemplateName  (binary VA: 0x13b56f0)
// Original: grapher::ActorBase::SetTemplateName
// ----------------------------------------------------------------------------
int grapher::ActorBase::SetTemplateName(int a1, int a2)
{
  int result;
  int v3;

  result = *(uint32_t *)(a1 + 48);
  if ( result != 0 )
  {
    result = grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v3);
    if ( (uint8_t)result == 0 )
      return (int)(uintptr_t)(g4_std::string::assign_str(*(uint32_t *)(a1 + 48) + 76, a2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetDisplayName  (binary VA: 0x13b5760)
// Original: grapher::ActorBase::SetDisplayName
// ----------------------------------------------------------------------------
int grapher::ActorBase::SetDisplayName(int a1, int a2)
{
  int result;
  int v3;

  result = *(uint32_t *)(a1 + 48);
  if ( result != 0 )
  {
    result = grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v3);
    if ( (uint8_t)result == 0 )
      return (int)(uintptr_t)(g4_std::string::assign_str(*(uint32_t *)(a1 + 48) + 80, a2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetCategoryName  (binary VA: 0x13b57d0)
// Original: grapher::ActorBase::SetCategoryName
// ----------------------------------------------------------------------------
void grapher::ActorBase::SetCategoryName(int a1, int a2)
{
  int v2;

  if ( *(uint32_t *)(a1 + 48) != 0 && (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v2) == 0 )
    g4_std::string::assign_str(*(uint32_t *)(a1 + 48) + 84, a2);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Construct  (binary VA: 0x13b5840)
// Original: grapher::ActorBase::ActorBase
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::Construct(grapher::ActorBase::Self *self, unsigned int a2)
{
  void *v2;
  grapher::ActorBase::Self *result;
  uint32_t *v4;
  typedef char *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v6)) > _g4_s1 ? (26u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 26u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094BC8);
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 12) = 0;
  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, (int)(uintptr_t)(v5)) != 0 )
  {
    v4 = (uint32_t *)gll_operator_new(0x9Cu, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorBase.cpp"), 118);
    v4[1] = 0;
    v4[3] = (uint32_t)(uintptr_t)(v4 + 1);
    v4[4] = (uint32_t)(uintptr_t)(v4 + 1);
    v4[2] = 0;
    v4[5] = 0;
    v4[9] = (uint32_t)(uintptr_t)(v4 + 7);
    v4[10] = (uint32_t)(uintptr_t)(v4 + 7);
    v4[7] = 0;
    v4[8] = 0;
    v4[15] = (uint32_t)(uintptr_t)(v4 + 13);
    v4[16] = (uint32_t)(uintptr_t)(v4 + 13);
    v4[11] = 0;
    v4[13] = 0;
    v4[18] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[19] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[20] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[21] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[22] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[23] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[24] = (uint32_t)(uintptr_t)(&dword_213B814);
    v4[14] = 0;
    v4[17] = 0;
    v4[30] = (uint32_t)(uintptr_t)(v4 + 28);
    v4[31] = (uint32_t)(uintptr_t)(v4 + 28);
    v4[28] = 0;
    v4[29] = 0;
    v4[32] = 0;
    v4[34] = 0;
    v4[35] = 0;
    v4[38] = 0;
    v4[36] = (uint32_t)(uintptr_t)(v4 + 34);
    v4[37] = (uint32_t)(uintptr_t)(v4 + 34);
    *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), (char *)&unk_1B15112, (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName((int)(uintptr_t)(self), (int)(uintptr_t)(v7));
  v2 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  grapher::ActorBase::SetPinInLogType(self, 3);
  result = (grapher::ActorBase::Self *)grapher::ActorBase::SetPinOutLogType(self, 2);
  if ( *((uint32_t *)self + 1) == -1 )
  {
    result = (grapher::ActorBase::Self *)grapher::NewActorUniqueId();
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetActorInputEventList  (binary VA: 0x13b5a70)
// Original: grapher::ActorBase::GetActorInputEventList
// ----------------------------------------------------------------------------
uint32_t * grapher::ActorBase::GetActorInputEventList(grapher::ActorBase::Self *self, int a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;

  result = nullptr;
  v3 = *((uint32_t **)self + 4);
  if ( v3 != nullptr )
  {
    v4 = (uint32_t *)((char *)self + 12);
    do
    {
      while ( v3[4] >= a2 )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    result = nullptr;
    if ( (uint32_t *)((char *)self + 12) != v4 && v4[4] <= a2 )
      return v4 + 5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetPinIndex  (binary VA: 0x13b5ac0)
// Original: grapher::ActorBase::GetPinIndex
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetPinIndex(int a1, void **a2, char a3)
{
  int v3;
  int v4;
  int v5;
  size_t v6;
  size_t v7;
  size_t n;
  int v9;
  int v10;
  size_t v11;
  size_t v12;
  int v13;
  int v14;
  void *s2;
  int v17;
  int v18;

  v3 = *(uint32_t *)(a1 + 48);
  if ( v3 == 0 )
    return -1;
  v4 = v3 + 24;
  if ( a3 != 0 )
    v4 = *(uint32_t *)(a1 + 48);
  v5 = *(uint32_t *)(v4 + 8);
  if ( v5 == 0 )
    return -1;
  v18 = v4 + 4;
  v17 = v4 + 4;
  s2 = *a2;
  v6 = *((uint32_t *)*a2 - 3);
  do
  {
    while ( 1 )
    {
      v7 = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
      n = v7;
      if ( v6 <= v7 )
        n = v6;
      v9 = v7 - v6;
      v10 = memcmp(*(const void **)(v5 + 16), s2, n);
      if ( v10 != 0 )
        v9 = v10;
      if ( v9 < 0 )
        break;
      v17 = v5;
      v5 = *(uint32_t *)(v5 + 8);
      if ( v5 == 0 )
        goto LABEL_13;
    }
    v5 = *(uint32_t *)(v5 + 12);
  }
  while ( v5 != 0 );
LABEL_13:
  if ( v18 == v17 )
    return -1;
  v11 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
  v12 = v11;
  if ( v6 <= v11 )
    v12 = v6;
  v13 = v6 - v11;
  v14 = memcmp(s2, *(const void **)(v17 + 16), v12);
  if ( v14 == 0 )
    v14 = v13;
  if ( v14 >= 0 )
    return *(uint32_t *)(v17 + 20);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::FindPinInfo  (binary VA: 0x13b5bd0)
// Original: grapher::ActorBase::FindPinInfo
// ----------------------------------------------------------------------------
int grapher::ActorBase::FindPinInfo(grapher::ActorBase::Self *self, int a2, bool a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = *((uint32_t *)self + 12);
  if ( v3 == 0 )
    return 0;
  v4 = v3 + 24;
  if ( a3 )
    v4 = *((uint32_t *)self + 12);
  v5 = 0;
  v6 = *(uint32_t *)(v4 + 12);
  v7 = v4 + 4;
  if ( v6 != v7 )
  {
    v5 = v6 + 20;
    if ( *(uint32_t *)(v6 + 20) != a2 )
    {
      while ( 1 )
      {
        v6 = sub_1904890(v6);
        if ( v7 == v6 )
          break;
        v5 = v6 + 20;
        if ( *(uint32_t *)(v6 + 20) == a2 )
          return v5;
      }
      return 0;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetPropertyIndex  (binary VA: 0x13b5c40)
// Original: grapher::ActorBase::GetPropertyIndex
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetPropertyIndex(int a1, void **a2)
{
  int v2;
  int v3;
  size_t v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  void *s2;
  int v15;
  int v16;

  v2 = *(uint32_t *)(a1 + 48);
  if ( v2 == 0 )
    return -1;
  v3 = *(uint32_t *)(v2 + 56);
  if ( v3 == 0 )
    return -1;
  v16 = v2 + 52;
  v15 = v2 + 52;
  s2 = *a2;
  v4 = *((uint32_t *)*a2 - 3);
  do
  {
    while ( 1 )
    {
      n = v4;
      v6 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      if ( v6 <= v4 )
        n = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v7 = v6 - v4;
      v8 = memcmp(*(const void **)(v3 + 16), s2, n);
      if ( v8 != 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v15 = v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_11;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_11:
  if ( v16 == v15 )
    return -1;
  v9 = v4;
  v10 = *(uint32_t *)(*(uint32_t *)(v15 + 16) - 12);
  if ( v10 <= v4 )
    v9 = *(uint32_t *)(*(uint32_t *)(v15 + 16) - 12);
  v11 = v4 - v10;
  v12 = memcmp(s2, *(const void **)(v15 + 16), v9);
  if ( v12 == 0 )
    v12 = v11;
  if ( v12 >= 0 )
    return *(uint32_t *)(v15 + 20);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetNumProperties  (binary VA: 0x13b5d40)
// Original: grapher::ActorBase::GetNumProperties
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetNumProperties(grapher::ActorBase::Self *self)
{
  return (*((uint32_t *)self + 9) - *((uint32_t *)self + 8)) >> 2;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetProperty  (binary VA: 0x13b5d50)
// Original: grapher::ActorBase::GetProperty
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetProperty(grapher::ActorBase::Self *self, int a2)
{
  int result;
  int v3;

  result = 0;
  if ( a2 >= 0 )
  {
    v3 = *((uint32_t *)self + 8);
    if ( a2 < (*((uint32_t *)self + 9) - v3) >> 2 )
      return *(uint32_t *)(v3 + 4 * a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::AddVariable  (binary VA: 0x13b5d80)
// Original: grapher::ActorBase::AddVariable
// ----------------------------------------------------------------------------
grapher::ActorProperty::Self * grapher::ActorBase::AddVariable(grapher::ActorBase::Self *self, int a2, grapher::ActorVariable::Self *a3)
{
  grapher::ActorProperty::Self *result;

  result = (grapher::ActorProperty::Self *)grapher::ActorBase::GetProperty(self, a2);
  if ( result != nullptr )
    return (grapher::ActorProperty::Self *)grapher::ActorProperty::AddVariable(result, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetVariable  (binary VA: 0x13b5dc0)
// Original: grapher::ActorBase::GetVariable
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetVariable(grapher::ActorBase::Self *self, int a2)
{
  int Property;
  int v3;
  int v4;
  int result;

  Property = grapher::ActorBase::GetProperty(self, a2);
  v3 = Property;
  if ( Property == 0 )
    return 0;
  v4 = *(uint32_t *)(Property + 4);
  result = 0;
  if ( *(uint32_t *)(v3 + 8) != v4 )
    return *(uint32_t *)v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::ParseAttributes  (binary VA: 0x13b5e10)
// Original: grapher::ActorBase::ParseAttributes
// ----------------------------------------------------------------------------
void grapher::ActorBase::ParseAttributes(grapher::ActorBase::Self *a1, int a2)
{
  char *v2;
  size_t v3;
  char *v4;
  size_t v5;
  size_t v6;
  int PropertyIndex;
  int Variable;
  void *v9;
  void *v10;
  void *v11;
  typedef int _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef grapher::ActorBase::Self *_g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  typedef int _g4_t_v18[4];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v13)) > _g4_s1 ? (32u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v16)) > _g4_s4 ? (48u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v17)) > _g4_s5 ? (52u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v18)) > _g4_s6 ? (72u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v19)) > _g4_s7 ? (88u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v20)) > _g4_s8 ? (92u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v21)) > _g4_s9 ? (96u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v22)) > _g4_s10 ? (100u + sizeof(_g4_t_v22)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);

  v22[3] = (uint32_t)(uintptr_t)(&a1);
  v16 = a1;
  if ( *((uint32_t *)a1 + 12) != 0 && (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v12) == 0 )
  {
    sub_B7C550(&v20);
    pugi::xml_node::attribute(v17, (int)(uintptr_t)(&a2), (glf::Self *)"name");
    v20 = v17[0];
    if ( pugi::xml_attribute::as_int(&v20) != -1 )
    {
      v2 = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v20));
      v3 = strlen(v2);
      g4_std_compat::string_assign(*((uint32_t *)v16 + 12) + 72, v2, v3);
    }
    pugi::xml_node::attribute(v17, (int)(uintptr_t)(&a2), (glf::Self *)"actortemplate");
    v20 = v17[0];
    if ( pugi::xml_attribute::as_int(&v20) != -1 )
    {
      v4 = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v20));
      g4_std::string::compare(*((uint32_t *)v16 + 12) + 76, v4);
    }
    v18[0] = (int)(uintptr_t)(&dword_213B814);
    v19 = (int)(uintptr_t)(&dword_213B814);
    pugi::xml_node::first_child(&v21, (int)(uintptr_t)(&a2));
    while ( pugi::xml_node::child(&v21) != -1 )
    {
      pugi::xml_node::attribute(v17, (int)(uintptr_t)(&v21), (glf::Self *)"name");
      v20 = v17[0];
      if ( pugi::xml_attribute::as_int(&v20) != -1 )
      {
        v13 = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v20));
        v5 = strlen(v13);
        g4_std_compat::string_assign((int)(uintptr_t)(v18), v13, v5);
        pugi::xml_node::attribute(v17, (int)(uintptr_t)(&v21), (glf::Self *)"value");
        v20 = v17[0];
        if ( pugi::xml_attribute::as_int(&v20) != -1 )
        {
          v14 = (char *)pugi::xml_attribute::value((int)(uintptr_t)(&v20));
          v6 = strlen(v14);
          g4_std_compat::string_assign((int)(uintptr_t)(&v19), v14, v6);
          PropertyIndex = grapher::ActorBase::GetPropertyIndex((int)(uintptr_t)(v16), (void **)v18);
          Variable = grapher::ActorBase::GetVariable(v16, PropertyIndex);
          if ( Variable != 0 )
          {
            v15 = Variable;
            g4_std::string::construct_copy(v22, &v19);
            grapher::ActorVariable::FromString(v15, v22);
            v9 = (void *)(v22[0] - 12);
            if ( (uint32_t *)(v22[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v9);
            }
          }
          else if ( g4_std::string::compare((int)(uintptr_t)(v18), "Comment") != 0 )
          {
            g4_std::string::compare((int)(uintptr_t)(v18), "PinName");
          }
        }
      }
      pugi::xml_node::next_sibling(v17, (int)(uintptr_t)(&v21));
      v21 = v17[0];
    }
    v10 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v18[0] - 12);
    if ( (uint32_t *)(v18[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetVariables  (binary VA: 0x13b6170)
// Original: grapher::ActorBase::GetVariables
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::GetVariables(grapher::ActorBase::Self *self, grapher::ActorBase::Self *a2, int a3)
{
  int Property;
  int v4;
  int v5;
  int v6;
  char *dest;
  unsigned int v8;
  const void *src;
  int v10;
  int v11;
  int v12;
  int v14;

  Property = grapher::ActorBase::GetProperty(a2, a3);
  v5 = Property;
  if ( Property != 0 )
  {
    v6 = 0;
    dest = nullptr;
    v8 = (*(uint32_t *)(Property + 8) - *(uint32_t *)(Property + 4)) >> 2;
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    if ( v8 != 0 )
    {
      if ( v8 > 0x3FFFFFFF )
        sub_18FFEE0(v4, 0);
      v14 = 4 * v8;
      dest = (char *)opNew(4 * v8);
      v6 = v14;
    }
    *(uint32_t *)self = (uint32_t)(uintptr_t)(dest);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(dest);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dest[v6]);
    src = *(const void **)(v5 + 4);
    v10 = *(uint32_t *)(v5 + 8) - (uint32_t)(uintptr_t)(src);
    v11 = 0;
    v12 = v10 >> 2;
    if ( v12 != 0 )
    {
      v11 = 4 * v12;
      memmove(dest, src, 4 * v12);
    }
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dest[v11]);
  }
  else
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetVariables  (binary VA: 0x13b6270)
// Original: grapher::ActorBase::GetVariables
// ----------------------------------------------------------------------------
void grapher::ActorBase::GetVariables(grapher::ActorBase::Self *a1, int a2, int a3)
{
  int Property;
  void *v4;
  void *v5;
  const void *src;
  unsigned int v7;
  int v8;
  char *v9;
  char *v10;
  size_t n;
  size_t v12;
  char *v13;
  char *dest;

  Property = grapher::ActorBase::GetProperty(a1, a2);
  v4 = *(void **)a3;
  v5 = *(void **)a3;
  *(uint32_t *)(a3 + 4) = *(uint32_t *)a3;
  if ( Property != 0 && a3 != Property + 4 )
  {
    src = *(const void **)(Property + 4);
    v7 = (*(uint32_t *)(Property + 8) - (int)(uintptr_t)(src)) >> 2;
    if ( v7 <= (*(uint32_t *)(a3 + 8) - (int)(uintptr_t)(v4)) >> 2 )
    {
      if ( v7 != 0 )
      {
        n = 4 * v7;
        memmove(v4, src, n);
        v5 = (void *)(n + *(uint32_t *)a3);
      }
      *(uint32_t *)(a3 + 4) = (uint32_t)(uintptr_t)(v5);
    }
    else
    {
      v8 = 0;
      v9 = nullptr;
      if ( v7 != 0 )
      {
        if ( v7 > 0x3FFFFFFF )
          sub_18FFEE0(0, 0);
        dest = (char *)opNew(4 * v7);
        memmove(dest, src, 4 * v7);
        v4 = *(void **)a3;
        v8 = 4 * v7;
        v9 = dest;
      }
      if ( v4 != nullptr )
      {
        v13 = v9;
        v12 = v8;
        opDelete(v4);
        v8 = v12;
        v9 = v13;
      }
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v9);
      v10 = &v9[v8];
      *(uint32_t *)(a3 + 8) = (uint32_t)(uintptr_t)(v10);
      *(uint32_t *)(a3 + 4) = (uint32_t)(uintptr_t)(v10);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetPropertyName  (binary VA: 0x13b6390)
// Original: grapher::ActorBase::GetPropertyName
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::GetPropertyName(grapher::ActorBase::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v7[7];

  v3 = *(uint32_t *)(a2 + 48);
  if ( v3 != 0 && (v4 = *(uint32_t *)(v3 + 60), (v5 = v3 + 52) != v4) )
  {
    while ( *(uint32_t *)(v4 + 20) != a3 )
    {
      v4 = sub_19048E0(v4);
      if ( v5 == v4 )
        goto LABEL_7;
    }
    g4_std::string::construct_copy(self, v4 + 16);
    return self;
  }
  else
  {
LABEL_7:
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v7));
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GenerateXMLTemplate  (binary VA: 0x13b6420)
// Original: grapher::ActorBase::GenerateXMLTemplate
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::GenerateXMLTemplate(grapher::ActorBase::Self *self, uint32_t *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int v9;
  int i;
  int v11;
  void *v12;
  void *v13;
  int v14;
  int v15;
  void *v16;
  void *v17;
  void *v18;
  uint8_t *v19;
  size_t v20;
  char *v21;
  int v22;
  size_t v23;
  char *v24;
  int v25;
  char *v26;
  int v27;
  char *v28;
  int v29;
  char *v30;
  void *v31;
  void *v32;
  void *v33;
  void *v34;
  void *v35;
  grapher::ActorVariable::Self **v36;
  int TypeName;
  void *v38;
  void *v39;
  void *v40;
  void *v41;
  void *v42;
  void *v43;
  void *v44;
  void *v45;
  void *v46;
  void *v47;
  void *v48;
  void *v49;
  void *v50;
  void *v51;
  void *v52;
  void *v53;
  void *v54;
  void *v55;
  void *v56;
  void *v57;
  void *v58;
  void *v59;
  uint32_t *v60;
  int v61;
  void *v63;
  void *v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef grapher::ActorBase::Self *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef void *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef char *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74[4];
  typedef int _g4_t_v75[4];
  typedef int _g4_t_v76[4];
  typedef int _g4_t_v77[4];
  typedef uint32_t _g4_t_v78[4];
  typedef int _g4_t_v79[4];
  typedef uint32_t _g4_t_v80[4];
  typedef int _g4_t_v81[4];
  typedef int _g4_t_v82[4];
  typedef uint32_t _g4_t_v83[4];
  typedef uint32_t _g4_t_v84[4];
  typedef int _g4_t_v85[4];
  typedef uint32_t _g4_t_v86[4];
  typedef int _g4_t_v87[4];
  typedef int _g4_t_v88[4];
  typedef int _g4_t_v89[4];
  typedef uint32_t _g4_t_v90[4];
  typedef int _g4_t_v91[4];
  typedef uint32_t _g4_t_v92[4];
  typedef int _g4_t_v93[4];
  typedef int _g4_t_v94[4];
  typedef int _g4_t_v95[4];
  typedef uint32_t _g4_t_v96[4];
  typedef int _g4_t_v97[4];
  typedef uint32_t _g4_t_v98[4];
  typedef uint32_t _g4_t_v99[4];
  typedef int _g4_t_v100[4];
  typedef uint32_t _g4_t_v101[4];
  typedef int _g4_t_v102[4];
  typedef uint32_t _g4_t_v103[4];
  typedef int _g4_t_v104[4];
  typedef uint32_t _g4_t_v105[4];
  typedef int _g4_t_v106[4];
  typedef uint32_t _g4_t_v107[2];
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113[7];
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (8u + sizeof(_g4_t_v65)) > _g4_s0 ? (8u + sizeof(_g4_t_v65)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v66)) > _g4_s1 ? (32u + sizeof(_g4_t_v66)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v67)) > _g4_s2 ? (36u + sizeof(_g4_t_v67)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v68)) > _g4_s3 ? (72u + sizeof(_g4_t_v68)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v69)) > _g4_s4 ? (76u + sizeof(_g4_t_v69)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v70)) > _g4_s5 ? (76u + sizeof(_g4_t_v70)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v71)) > _g4_s6 ? (80u + sizeof(_g4_t_v71)) : _g4_s6,
    _g4_s8 = (86u + sizeof(_g4_t_v72)) > _g4_s7 ? (86u + sizeof(_g4_t_v72)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v73)) > _g4_s8 ? (88u + sizeof(_g4_t_v73)) : _g4_s8,
    _g4_s10 = (132u + sizeof(_g4_t_v74)) > _g4_s9 ? (132u + sizeof(_g4_t_v74)) : _g4_s9,
    _g4_s11 = (148u + sizeof(_g4_t_v75)) > _g4_s10 ? (148u + sizeof(_g4_t_v75)) : _g4_s10,
    _g4_s12 = (164u + sizeof(_g4_t_v76)) > _g4_s11 ? (164u + sizeof(_g4_t_v76)) : _g4_s11,
    _g4_s13 = (180u + sizeof(_g4_t_v77)) > _g4_s12 ? (180u + sizeof(_g4_t_v77)) : _g4_s12,
    _g4_s14 = (196u + sizeof(_g4_t_v78)) > _g4_s13 ? (196u + sizeof(_g4_t_v78)) : _g4_s13,
    _g4_s15 = (212u + sizeof(_g4_t_v79)) > _g4_s14 ? (212u + sizeof(_g4_t_v79)) : _g4_s14,
    _g4_s16 = (228u + sizeof(_g4_t_v80)) > _g4_s15 ? (228u + sizeof(_g4_t_v80)) : _g4_s15,
    _g4_s17 = (244u + sizeof(_g4_t_v81)) > _g4_s16 ? (244u + sizeof(_g4_t_v81)) : _g4_s16,
    _g4_s18 = (260u + sizeof(_g4_t_v82)) > _g4_s17 ? (260u + sizeof(_g4_t_v82)) : _g4_s17,
    _g4_s19 = (276u + sizeof(_g4_t_v83)) > _g4_s18 ? (276u + sizeof(_g4_t_v83)) : _g4_s18,
    _g4_s20 = (292u + sizeof(_g4_t_v84)) > _g4_s19 ? (292u + sizeof(_g4_t_v84)) : _g4_s19,
    _g4_s21 = (308u + sizeof(_g4_t_v85)) > _g4_s20 ? (308u + sizeof(_g4_t_v85)) : _g4_s20,
    _g4_s22 = (324u + sizeof(_g4_t_v86)) > _g4_s21 ? (324u + sizeof(_g4_t_v86)) : _g4_s21,
    _g4_s23 = (340u + sizeof(_g4_t_v87)) > _g4_s22 ? (340u + sizeof(_g4_t_v87)) : _g4_s22,
    _g4_s24 = (356u + sizeof(_g4_t_v88)) > _g4_s23 ? (356u + sizeof(_g4_t_v88)) : _g4_s23,
    _g4_s25 = (372u + sizeof(_g4_t_v89)) > _g4_s24 ? (372u + sizeof(_g4_t_v89)) : _g4_s24,
    _g4_s26 = (388u + sizeof(_g4_t_v90)) > _g4_s25 ? (388u + sizeof(_g4_t_v90)) : _g4_s25,
    _g4_s27 = (404u + sizeof(_g4_t_v91)) > _g4_s26 ? (404u + sizeof(_g4_t_v91)) : _g4_s26,
    _g4_s28 = (420u + sizeof(_g4_t_v92)) > _g4_s27 ? (420u + sizeof(_g4_t_v92)) : _g4_s27,
    _g4_s29 = (436u + sizeof(_g4_t_v93)) > _g4_s28 ? (436u + sizeof(_g4_t_v93)) : _g4_s28,
    _g4_s30 = (452u + sizeof(_g4_t_v94)) > _g4_s29 ? (452u + sizeof(_g4_t_v94)) : _g4_s29,
    _g4_s31 = (468u + sizeof(_g4_t_v95)) > _g4_s30 ? (468u + sizeof(_g4_t_v95)) : _g4_s30,
    _g4_s32 = (484u + sizeof(_g4_t_v96)) > _g4_s31 ? (484u + sizeof(_g4_t_v96)) : _g4_s31,
    _g4_s33 = (500u + sizeof(_g4_t_v97)) > _g4_s32 ? (500u + sizeof(_g4_t_v97)) : _g4_s32,
    _g4_s34 = (516u + sizeof(_g4_t_v98)) > _g4_s33 ? (516u + sizeof(_g4_t_v98)) : _g4_s33,
    _g4_s35 = (532u + sizeof(_g4_t_v99)) > _g4_s34 ? (532u + sizeof(_g4_t_v99)) : _g4_s34,
    _g4_s36 = (548u + sizeof(_g4_t_v100)) > _g4_s35 ? (548u + sizeof(_g4_t_v100)) : _g4_s35,
    _g4_s37 = (564u + sizeof(_g4_t_v101)) > _g4_s36 ? (564u + sizeof(_g4_t_v101)) : _g4_s36,
    _g4_s38 = (580u + sizeof(_g4_t_v102)) > _g4_s37 ? (580u + sizeof(_g4_t_v102)) : _g4_s37,
    _g4_s39 = (596u + sizeof(_g4_t_v103)) > _g4_s38 ? (596u + sizeof(_g4_t_v103)) : _g4_s38,
    _g4_s40 = (612u + sizeof(_g4_t_v104)) > _g4_s39 ? (612u + sizeof(_g4_t_v104)) : _g4_s39,
    _g4_s41 = (628u + sizeof(_g4_t_v105)) > _g4_s40 ? (628u + sizeof(_g4_t_v105)) : _g4_s40,
    _g4_s42 = (644u + sizeof(_g4_t_v106)) > _g4_s41 ? (644u + sizeof(_g4_t_v106)) : _g4_s41,
    _g4_s43 = (660u + sizeof(_g4_t_v107)) > _g4_s42 ? (660u + sizeof(_g4_t_v107)) : _g4_s42,
    _g4_s44 = (668u + sizeof(_g4_t_v108)) > _g4_s43 ? (668u + sizeof(_g4_t_v108)) : _g4_s43,
    _g4_s45 = (672u + sizeof(_g4_t_v109)) > _g4_s44 ? (672u + sizeof(_g4_t_v109)) : _g4_s44,
    _g4_s46 = (676u + sizeof(_g4_t_v110)) > _g4_s45 ? (676u + sizeof(_g4_t_v110)) : _g4_s45,
    _g4_s47 = (680u + sizeof(_g4_t_v111)) > _g4_s46 ? (680u + sizeof(_g4_t_v111)) : _g4_s46,
    _g4_s48 = (684u + sizeof(_g4_t_v112)) > _g4_s47 ? (684u + sizeof(_g4_t_v112)) : _g4_s47,
    _g4_s49 = (688u + sizeof(_g4_t_v113)) > _g4_s48 ? (688u + sizeof(_g4_t_v113)) : _g4_s48
  };
  alignas(16) uint8_t _g4_sf[_g4_s49];
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 86u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 88u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 132u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 148u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 164u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 180u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 196u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 212u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 228u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 244u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 260u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 276u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 292u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 308u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 324u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 340u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 356u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 372u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 388u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 404u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 420u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 436u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 452u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 468u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 484u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 500u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 516u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 532u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 548u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 564u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 580u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 596u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 612u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 628u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 644u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 660u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 668u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 672u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 676u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 680u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 684u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 688u);

  v113[3] = (int)(uintptr_t)(&self);
  v67 = self;
  v68 = a2;
  if ( a2[12] == 0 || (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v65) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v67), (char *)&unk_1B15112, (int)(uintptr_t)(&v73) + 1);
  }
  else
  {
    v2 = v68[12];
    v74[0] = (int)(uintptr_t)(&dword_213B814);
    v75[0] = (int)(uintptr_t)(&dword_213B814);
    v76[0] = (int)(uintptr_t)(&dword_213B814);
    v71 = (char *)(v2 + 84);
    v69 = (void *)(v2 + 80);
    v66 = v2 + 76;
    sub_1939B80(v76, *(uint32_t *)(*(uint32_t *)(v2 + 76) - 12) + 17);
    g4_std::string::append((int)(uintptr_t)(v76), "\t<template name=\"", 0x11u);
    g4_std::string::append_str(v76, v66);
    g4_std::string::construct_copy(v77, v76);
    g4_std::string::append((int)(uintptr_t)(v77), "\" displayName=\"", 0xFu);
    g4_std::string::construct_copy(v78, v77);
    g4_std::string::append_str(v78, v69);
    g4_std::string::construct_copy(v79, v78);
    g4_std::string::append((int)(uintptr_t)(v79), "\" categoryName=\"", 0x10u);
    g4_std::string::construct_copy(v80, v79);
    g4_std::string::append_str(v80, v71);
    g4_std::string::construct_copy(&v108, v80);
    g4_std::string::append((int)(uintptr_t)(&v108), "\">\n", 3u);
    g4_std::string::assign_str(v74, &v108);
    v3 = (void *)(v108 - 12);
    if ( (uint32_t *)(v108 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v108 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v80[0] - 12);
    if ( (uint32_t *)(v80[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v80[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v79[0] - 12);
    if ( (uint32_t *)(v79[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v79[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v78[0] - 12);
    if ( (uint32_t *)(v78[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v78[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v77[0] - 12);
    if ( (uint32_t *)(v77[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v77[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v76[0] - 12);
    if ( (uint32_t *)(v76[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v76[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    g4_std::string::assign_str(v75, v74);
    v9 = v68[12];
    for ( i = *(uint32_t *)(v9 + 12); i != v9 + 4; v9 = v68[12] )
    {
      v11 = *(uint32_t *)(i + 16);
      v81[0] = (int)(uintptr_t)(&dword_213B814);
      sub_1939B80(v81, *(uint32_t *)(v11 - 12) + 13);
      g4_std::string::append((int)(uintptr_t)(v81), "\t\t<pin name=\"", 0xDu);
      g4_std::string::append_str(v81, i + 16);
      g4_std::string::construct_copy(&v109, v81);
      g4_std::string::append((int)(uintptr_t)(&v109), "\" dir=\"input\"/>\n", 0x10u);
      g4_std::string::append_str(v74, &v109);
      v12 = (void *)(v109 - 12);
      if ( (uint32_t *)(v109 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v109 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      v13 = (void *)(v81[0] - 12);
      if ( (uint32_t *)(v81[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v81[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      i = sub_19048E0(i);
    }
    v14 = *(uint32_t *)(v9 + 36);
    if ( v14 != v9 + 28 )
    {
      do
      {
        v15 = *(uint32_t *)(v14 + 16);
        v82[0] = (int)(uintptr_t)(&dword_213B814);
        sub_1939B80(v82, *(uint32_t *)(v15 - 12) + 13);
        g4_std::string::append((int)(uintptr_t)(v82), "\t\t<pin name=\"", 0xDu);
        g4_std::string::append_str(v82, v14 + 16);
        g4_std::string::construct_copy(&v110, v82);
        g4_std::string::append((int)(uintptr_t)(&v110), "\" dir=\"output\"/>\n", 0x11u);
        g4_std::string::append_str(v74, &v110);
        v16 = (void *)(v110 - 12);
        if ( (uint32_t *)(v110 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v110 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v16);
        }
        v17 = (void *)(v82[0] - 12);
        if ( (uint32_t *)(v82[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v82[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v17);
        }
        v14 = sub_19048E0(v14);
      }
      while ( v14 != v68[12] + 28 );
    }
    if ( v68[9] - v68[8] > 3 )
    {
      v70 = 0;
      grapher::ActorBase::GetPropertyName((grapher::ActorBase::Self *)v83, (int)(uintptr_t)(v68), 0);
      while ( 1 )
      {
        v60 = *(uint32_t **)(v68[8] + 4 * v70);
        v84[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v85[0] = (int)(uintptr_t)(&dword_213B814);
        v86[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v87[0] = (int)(uintptr_t)(&dword_213B814);
        v61 = v60[5];
        if ( v61 != 0 )
          g4_std::string::construct_copy(&v111, v61 + 4);
        else
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v111), (char *)&unk_1B15112, (int)(uintptr_t)(&v73) + 2);
        g4_std::string::assign_str(v84, &v111);
        v18 = (void *)(v111 - 12);
        if ( (uint32_t *)(v111 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v111 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v18);
        }
        v19 = (uint8_t *)v60[5];
        v20 = 5;
        v21 = "false";
        if ( v19 != nullptr )
        {
          LOBYTE(v20) = 4;
          v21 = "true";
          if ( *v19 == 0 )
          {
            LOBYTE(v20) = 5;
            v21 = "false";
          }
        }
        g4_std_compat::string_assign((int)(uintptr_t)(v85), v21, v20);
        v22 = v60[5];
        v23 = 5;
        v24 = "false";
        if ( v22 != 0 )
        {
          LOBYTE(v23) = 4;
          v24 = "true";
          if ( *(uint8_t *)(v22 + 1) == 0 )
          {
            LOBYTE(v23) = 5;
            v24 = "false";
          }
        }
        g4_std_compat::string_assign((int)(uintptr_t)(v87), v24, v23);
        v25 = v60[5];
        v26 = (char *)&unk_1B15112;
        if ( v25 != 0 )
        {
          v26 = "*";
          if ( (*(uint8_t *)(v25 + 8) & 4) == 0 )
            v26 = (char *)&unk_1B15112;
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v91), v26, (int)(uintptr_t)(&v73));
        v27 = v60[5];
        v28 = (char *)&unk_1B15112;
        if ( v27 != 0 )
        {
          v28 = "W";
          if ( (*(uint8_t *)(v27 + 8) & 2) == 0 )
            v28 = (char *)&unk_1B15112;
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v89), v28, (int)(uintptr_t)(&v72) + 1);
        v29 = v60[5];
        v30 = (char *)&unk_1B15112;
        if ( v29 != 0 )
        {
          v30 = "R";
          if ( (*(uint8_t *)(v29 + 8) & 1) == 0 )
            v30 = (char *)&unk_1B15112;
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v88), v30, (int)(uintptr_t)(&v72));
        g4_std::string::construct_copy(v90, v88);
        g4_std::string::append_str(v90, v89);
        g4_std::string::construct_copy(&v112, v90);
        g4_std::string::append_str(&v112, v91);
        g4_std::string::append_str(v86, &v112);
        v31 = (void *)(v112 - 12);
        if ( (uint32_t *)(v112 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v112 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v31);
        }
        v32 = (void *)(v90[0] - 12);
        if ( (uint32_t *)(v90[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v90[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v32);
        }
        v33 = (void *)(v88[0] - 12);
        if ( (uint32_t *)(v88[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v88[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v33);
        }
        v34 = (void *)(v89[0] - 12);
        if ( (uint32_t *)(v89[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v89[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v34);
        }
        v35 = (void *)(v91[0] - 12);
        if ( (uint32_t *)(v91[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v91[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v35);
        }
        grapher::ActorVariable::ToString((grapher::ActorVariable::Self *)v92);
        grapher::ActorVariable::ToString((grapher::ActorVariable::Self *)v98);
        v36 = (grapher::ActorVariable::Self **)v60[1];
        if ( (grapher::ActorVariable::Self **)v60[2] == v36 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v95), (char *)&unk_1B15112, (int)(uintptr_t)(&v73) + 3);
        }
        else
        {
          TypeName = (int)(uintptr_t)(grapher::ActorVariable::GetTypeName(*v36));
          g4_std::string::construct_copy(v95, TypeName);
        }
        v93[0] = (int)(uintptr_t)(&dword_213B814);
        sub_1939B80(v93, *(uint32_t *)(v83[0] - 12) + 18);
        g4_std::string::append((int)(uintptr_t)(v93), "\t\t<property name=\"", 0x12u);
        g4_std::string::append_str(v93, v83);
        g4_std::string::construct_copy(v94, v93);
        g4_std::string::append((int)(uintptr_t)(v94), "\" type=\"", 8u);
        g4_std::string::construct_copy(v96, v94);
        g4_std::string::append_str(v96, v95);
        g4_std::string::construct_copy(v97, v96);
        g4_std::string::append((int)(uintptr_t)(v97), "\" value=\"", 9u);
        g4_std::string::construct_copy(v99, v97);
        g4_std::string::append_str(v99, v98);
        g4_std::string::construct_copy(v100, v99);
        g4_std::string::append((int)(uintptr_t)(v100), "\" showpin=\"", 0xBu);
        g4_std::string::construct_copy(v101, v100);
        g4_std::string::append_str(v101, v85);
        g4_std::string::construct_copy(v102, v101);
        g4_std::string::append((int)(uintptr_t)(v102), "\" canshowpin=\"", 0xEu);
        g4_std::string::construct_copy(v103, v102);
        g4_std::string::append_str(v103, v87);
        g4_std::string::construct_copy(v104, v103);
        g4_std::string::append((int)(uintptr_t)(v104), "\" comment=\"", 0xBu);
        g4_std::string::construct_copy(v105, v104);
        g4_std::string::append_str(v105, v84);
        g4_std::string::construct_copy(v106, v105);
        g4_std::string::append((int)(uintptr_t)(v106), "\" hint=\"", 8u);
        g4_std::string::construct_copy(v107, v106);
        g4_std::string::append_str(v107, v86);
        g4_std::string::construct_copy(v113, v107);
        g4_std::string::append((int)(uintptr_t)(v113), "\"/>\n", 4u);
        g4_std::string::append_str(v74, v113);
        v38 = (void *)(v113[0] - 12);
        if ( (uint32_t *)(v113[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v113[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v38);
        }
        v39 = (void *)(v107[0] - 12);
        if ( (uint32_t *)(v107[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v107[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v39);
        }
        v40 = (void *)(v106[0] - 12);
        if ( (uint32_t *)(v106[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v106[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v40);
        }
        v41 = (void *)(v105[0] - 12);
        if ( (uint32_t *)(v105[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v105[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v41);
        }
        v42 = (void *)(v104[0] - 12);
        if ( (uint32_t *)(v104[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v104[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v42);
        }
        v43 = (void *)(v103[0] - 12);
        if ( (uint32_t *)(v103[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v103[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v43);
        }
        v44 = (void *)(v102[0] - 12);
        if ( (uint32_t *)(v102[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v102[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v44);
        }
        v45 = (void *)(v101[0] - 12);
        if ( (uint32_t *)(v101[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v101[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v45);
        }
        v46 = (void *)(v100[0] - 12);
        if ( (uint32_t *)(v100[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v100[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v46);
        }
        v47 = (void *)(v99[0] - 12);
        if ( (uint32_t *)(v99[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v99[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v47);
        }
        v48 = (void *)(v97[0] - 12);
        if ( (uint32_t *)(v97[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v97[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v48);
        }
        v49 = (void *)(v96[0] - 12);
        if ( (uint32_t *)(v96[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v96[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v49);
        }
        v50 = (void *)(v94[0] - 12);
        if ( (uint32_t *)(v94[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v94[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v50);
        }
        v51 = (void *)(v93[0] - 12);
        if ( (uint32_t *)(v93[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v93[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v51);
        }
        v52 = (void *)(v95[0] - 12);
        if ( (uint32_t *)(v95[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v95[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v52);
        }
        v53 = (void *)(v98[0] - 12);
        if ( (uint32_t *)(v98[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v98[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v53);
        }
        v54 = (void *)(v92[0] - 12);
        if ( (uint32_t *)(v92[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v92[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v54);
        }
        v55 = (void *)(v87[0] - 12);
        if ( (uint32_t *)(v87[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v87[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v55);
        }
        v56 = (void *)(v86[0] - 12);
        if ( (uint32_t *)(v86[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v86[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v56);
        }
        v57 = (void *)(v85[0] - 12);
        if ( (uint32_t *)(v85[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v85[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v57);
        }
        v58 = (void *)(v84[0] - 12);
        if ( (uint32_t *)(v84[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v84[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v58);
        }
        v59 = (void *)(v83[0] - 12);
        if ( (uint32_t *)(v83[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v83[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v59);
        }
        if ( ++v70 >= (v68[9] - v68[8]) >> 2 )
          break;
        grapher::ActorBase::GetPropertyName((grapher::ActorBase::Self *)v83, (int)(uintptr_t)(v68), v70);
      }
    }
    g4_std::string::append((int)(uintptr_t)(v74), "\t</template>\n", 0xDu);
    g4_std::string::append((int)(uintptr_t)(v75), "\t</template>\n", 0xDu);
    if ( *(uint32_t *)(v74[0] - 12) <= *(uint32_t *)(v75[0] - 12) )
      g4_std_compat::string_assign((int)(uintptr_t)(v74), &unk_1B15112, 0);
    g4_std::string::construct_copy(v67, v74);
    v63 = (void *)(v75[0] - 12);
    if ( (uint32_t *)(v75[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v75[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v63);
    }
    v64 = (void *)(v74[0] - 12);
    if ( (uint32_t *)(v74[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v74[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v64);
    }
  }
  return v67;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SerializeConnections  (binary VA: 0x13b7810)
// Original: grapher::ActorBase::SerializeConnections
// ----------------------------------------------------------------------------
int grapher::ActorBase::SerializeConnections(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  void (***v16)(uint32_t);
  void (***v17)(uint32_t);
  void (**v18)(uint32_t);
  int v19;
  int v20;
  int v21;
  int result;
  int v23;
  uint32_t *v24;
  char v25; // si
  int v26;
  bool v27;
  uint32_t *v28;
  uint32_t *v29;
  void (***v30)(uint32_t);
  int v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  char v35; // si
  uint32_t *v36;
  int v37;
  int v38;
  void (***v39)(uint32_t);
  int v40;
  uint32_t *v41;
  uint32_t *v42;
  int v43;
  typedef char _g4_t_v44;
  typedef void (***_g4_t_v45)(uint32_t);
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef bool _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef void (***_g4_t_v67)(uint32_t);
  typedef uint32_t *_g4_t_v68;
  typedef void (***_g4_t_v69)(uint32_t);
  typedef uint32_t *_g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef void (***_g4_t_v75)(uint32_t);
  typedef uint32_t *_g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef void (***_g4_t_v86)(uint32_t);
  typedef uint32_t *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint32_t _g4_t_v93[4];
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef void (***_g4_t_v97)(uint32_t);
  typedef int _g4_t_v98;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v44)) > _g4_s0 ? (0u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v45)) > _g4_s1 ? (0u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v46)) > _g4_s2 ? (0u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v47)) > _g4_s3 ? (4u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v48)) > _g4_s4 ? (4u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v49)) > _g4_s5 ? (8u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v50)) > _g4_s6 ? (12u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v51)) > _g4_s7 ? (16u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v52)) > _g4_s8 ? (16u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v53)) > _g4_s9 ? (16u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v54)) > _g4_s10 ? (16u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v55)) > _g4_s11 ? (16u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v56)) > _g4_s12 ? (16u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v57)) > _g4_s13 ? (16u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v58)) > _g4_s14 ? (16u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v59)) > _g4_s15 ? (16u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v60)) > _g4_s16 ? (20u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v61)) > _g4_s17 ? (28u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v62)) > _g4_s18 ? (28u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v63)) > _g4_s19 ? (28u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v64)) > _g4_s20 ? (32u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v65)) > _g4_s21 ? (32u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v66)) > _g4_s22 ? (36u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v67)) > _g4_s23 ? (36u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v68)) > _g4_s24 ? (36u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v69)) > _g4_s25 ? (36u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (36u + sizeof(_g4_t_v70)) > _g4_s26 ? (36u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v71)) > _g4_s27 ? (40u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v72)) > _g4_s28 ? (40u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v73)) > _g4_s29 ? (40u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v74)) > _g4_s30 ? (40u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v75)) > _g4_s31 ? (40u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v76)) > _g4_s32 ? (44u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v77)) > _g4_s33 ? (48u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (52u + sizeof(_g4_t_v78)) > _g4_s34 ? (52u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (52u + sizeof(_g4_t_v79)) > _g4_s35 ? (52u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (52u + sizeof(_g4_t_v80)) > _g4_s36 ? (52u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (52u + sizeof(_g4_t_v81)) > _g4_s37 ? (52u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (52u + sizeof(_g4_t_v82)) > _g4_s38 ? (52u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (52u + sizeof(_g4_t_v83)) > _g4_s39 ? (52u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (52u + sizeof(_g4_t_v84)) > _g4_s40 ? (52u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (56u + sizeof(_g4_t_v85)) > _g4_s41 ? (56u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (56u + sizeof(_g4_t_v86)) > _g4_s42 ? (56u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (56u + sizeof(_g4_t_v87)) > _g4_s43 ? (56u + sizeof(_g4_t_v87)) : _g4_s43,
    _g4_s45 = (56u + sizeof(_g4_t_v88)) > _g4_s44 ? (56u + sizeof(_g4_t_v88)) : _g4_s44,
    _g4_s46 = (56u + sizeof(_g4_t_v89)) > _g4_s45 ? (56u + sizeof(_g4_t_v89)) : _g4_s45,
    _g4_s47 = (56u + sizeof(_g4_t_v90)) > _g4_s46 ? (56u + sizeof(_g4_t_v90)) : _g4_s46,
    _g4_s48 = (56u + sizeof(_g4_t_v91)) > _g4_s47 ? (56u + sizeof(_g4_t_v91)) : _g4_s47,
    _g4_s49 = (56u + sizeof(_g4_t_v92)) > _g4_s48 ? (56u + sizeof(_g4_t_v92)) : _g4_s48,
    _g4_s50 = (60u + sizeof(_g4_t_v93)) > _g4_s49 ? (60u + sizeof(_g4_t_v93)) : _g4_s49,
    _g4_s51 = (76u + sizeof(_g4_t_v94)) > _g4_s50 ? (76u + sizeof(_g4_t_v94)) : _g4_s50,
    _g4_s52 = (80u + sizeof(_g4_t_v95)) > _g4_s51 ? (80u + sizeof(_g4_t_v95)) : _g4_s51,
    _g4_s53 = (84u + sizeof(_g4_t_v96)) > _g4_s52 ? (84u + sizeof(_g4_t_v96)) : _g4_s52,
    _g4_s54 = (88u + sizeof(_g4_t_v97)) > _g4_s53 ? (88u + sizeof(_g4_t_v97)) : _g4_s53,
    _g4_s55 = (92u + sizeof(_g4_t_v98)) > _g4_s54 ? (92u + sizeof(_g4_t_v98)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 52u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 52u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 56u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 56u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 56u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 56u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 76u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 80u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 84u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 88u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 92u);

  v2 = a2;
  v94 = a1[1];
  sub_192C9E0(a2, &v94, 4);
  v94 = a1[7];
  sub_192C9E0(a2, &v94, 4);
  v77 = (uint32_t *)a1[5];
  v76 = a1 + 3;
  if ( v77 == a1 + 3 )
    goto LABEL_38;
  do
  {
    v3 = (uint32_t *)a1[4];
    v4 = v77[4];
    if ( v3 == nullptr )
      goto LABEL_42;
    v5 = a1 + 3;
    v6 = (uint32_t *)a1[4];
    do
    {
      while ( v4 <= v6[4] )
      {
        v5 = v6;
        v6 = (uint32_t *)v6[2];
        if ( v6 == nullptr )
          goto LABEL_7;
      }
      v6 = (uint32_t *)v6[3];
    }
    while ( v6 != nullptr );
LABEL_7:
    v85 = v5;
    if ( v5 == v76 )
    {
LABEL_42:
      v95 = v77[4];
      v96 = 0;
      v98 = 0;
      v97 = nullptr;
      if ( a1[7] == 0 || (v28 = (uint32_t *)a1[6], v68 = v28, v4 <= v28[4]) )
      {
        v82 = (int)(uintptr_t)(a1 + 2);
        v5 = v3;
        if ( v3 == nullptr )
        {
          v5 = a1 + 3;
          goto LABEL_89;
        }
        v89 = v2;
        while ( 1 )
        {
          v26 = v5[4];
          if ( v4 < v26 )
          {
            v24 = (uint32_t *)v5[2];
            v25 = 1;
            if ( v24 == nullptr )
              goto LABEL_49;
          }
          else
          {
            v24 = (uint32_t *)v5[3];
            v25 = 0;
            if ( v24 == nullptr )
            {
LABEL_49:
              v74 = (int)(uintptr_t)(v5);
              v27 = v25 == 0;
              v2 = v89;
              if ( v27 )
              {
                v15 = 0;
                v86 = nullptr;
                if ( v4 <= v26 )
                  goto LABEL_24;
                goto LABEL_51;
              }
LABEL_89:
              if ( (uint32_t *)a1[5] != v5 )
              {
                v57 = v5;
                v42 = (uint32_t *)sub_19048F0(v5);
                v43 = v42[4];
                v74 = (int)(uintptr_t)(v57);
                v5 = v42;
                v15 = 0;
                v86 = nullptr;
                if ( v4 <= v43 )
                  goto LABEL_24;
LABEL_51:
                sub_13B44D0(v93, v82, 0, v74, &v95);
LABEL_73:
                v5 = (uint32_t *)v93[0];
                v86 = v97;
                v15 = v96;
                goto LABEL_24;
              }
              sub_13B44D0(v93, v82, 0, (int)(uintptr_t)(v5), &v95);
LABEL_93:
              v5 = (uint32_t *)v93[0];
              v86 = v97;
              v15 = v96;
              goto LABEL_24;
            }
          }
          v5 = v24;
        }
      }
      v62 = v28 == v76;
      v29 = (uint32_t *)gll_operator_new(0x20u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v10 = v29;
      if ( v29 != (uint32_t *)-16 )
      {
        v30 = v97;
        v29[4] = v95;
        v75 = v30;
        v31 = ((int)(uintptr_t)(v30) - v96) >> 2;
        v83 = v96;
        v29[5] = 0;
        v29[6] = 0;
        v29[7] = 0;
        v64 = 0;
        v90 = 0;
        if ( -1431655765 * v31 != 0 )
        {
          v58 = v29;
          v64 = 4 * v31;
          v90 = gll_operator_new(4 * v31, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v83 = v96;
          v75 = v97;
          v10 = v58;
        }
        v10[5] = v90;
        v10[6] = v90;
        v10[7] = v64 + v90;
        if ( (void (***)(uint32_t))v83 != v75 )
        {
          v60 = v10;
          v32 = v83;
          v33 = (uint32_t *)v90;
          do
          {
            if ( v33 != nullptr )
            {
              *v33 = (uint32_t)(uintptr_t)(&off_20678D0);
              v33[1] = *(uint32_t *)(v32 + 4);
              v33[2] = *(uint32_t *)(v32 + 8);
            }
            v32 += 12;
            v33 += 3;
          }
          while ( (void (***)(uint32_t))v32 != v75 );
          v10 = v60;
          v90 += 4 * ((unsigned int)(v32 - (v83 + 12)) >> 2) + 12;
        }
        v10[6] = v90;
      }
      v47 = v10;
      v50 = a1 + 3;
      v49 = v68;
      v44 = v62;
LABEL_23:
      v52 = v10;
      sub_1904970(v44, v47, v49, v50);
      v86 = v97;
      v15 = v96;
      ++a1[7];
      v5 = v52;
      goto LABEL_24;
    }
    if ( v4 >= v5[4] )
      goto LABEL_30;
    v95 = v77[4];
    v96 = 0;
    v66 = (int)(uintptr_t)(a1 + 2);
    v98 = 0;
    v97 = nullptr;
    v78 = (uint32_t *)a1[5];
    if ( v5 == v78 )
    {
      sub_13B44D0(v93, v66, (int)(uintptr_t)(v5), (int)(uintptr_t)(v5), &v95);
      goto LABEL_93;
    }
    v51 = v3;
    v7 = (uint32_t *)sub_1904940(v5);
    v71 = v7;
    v8 = v51;
    if ( v4 > v7[4] )
    {
      if ( v7[3] != 0 )
      {
        v9 = (uint32_t *)gll_operator_new(0x20u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v10 = v9;
        if ( v9 != (uint32_t *)-16 )
        {
          v11 = v96;
          v9[4] = v95;
          v72 = v11;
          v67 = v97;
          v12 = ((int)(uintptr_t)(v97) - v11) >> 2;
          v9[5] = 0;
          v9[6] = 0;
          v9[7] = 0;
          v61 = 0;
          v79 = 0;
          if ( -1431655765 * v12 != 0 )
          {
            v55 = v9;
            v61 = 4 * v12;
            v79 = gll_operator_new(4 * v12, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v72 = v96;
            v67 = v97;
            v10 = v55;
          }
          v10[5] = v79;
          v10[6] = v79;
          v10[7] = v61 + v79;
          if ( (void (***)(uint32_t))v72 != v67 )
          {
            v13 = v72;
            v14 = (uint32_t *)v79;
            do
            {
              if ( v14 != nullptr )
              {
                *v14 = (uint32_t)(uintptr_t)(&off_20678D0);
                v14[1] = *(uint32_t *)(v13 + 4);
                v14[2] = *(uint32_t *)(v13 + 8);
              }
              v13 += 12;
              v14 += 3;
            }
            while ( (void (***)(uint32_t))v13 != v67 );
            v79 += 4 * ((unsigned int)(v13 - (v72 + 12)) >> 2) + 12;
          }
          v10[6] = v79;
        }
        v47 = v10;
        v50 = a1 + 3;
        v49 = v85;
        v44 = 1;
      }
      else
      {
        v36 = (uint32_t *)gll_operator_new(0x20u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v10 = v36;
        if ( v36 != (uint32_t *)-16 )
        {
          v37 = v96;
          v36[4] = v95;
          v84 = v37;
          v69 = v97;
          v38 = ((int)(uintptr_t)(v97) - v37) >> 2;
          v36[5] = 0;
          v36[6] = 0;
          v36[7] = 0;
          v65 = 0;
          v92 = 0;
          if ( -1431655765 * v38 != 0 )
          {
            v59 = v36;
            v65 = 4 * v38;
            v92 = gll_operator_new(4 * v38, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v84 = v96;
            v69 = v97;
            v10 = v59;
          }
          v10[5] = v92;
          v10[6] = v92;
          v10[7] = v65 + v92;
          if ( (void (***)(uint32_t))v84 != v69 )
          {
            v63 = v4;
            v39 = v69;
            v40 = v84;
            v70 = v10;
            v41 = (uint32_t *)v92;
            do
            {
              if ( v41 != nullptr )
              {
                *v41 = (uint32_t)(uintptr_t)(&off_20678D0);
                v41[1] = *(uint32_t *)(v40 + 4);
                v41[2] = *(uint32_t *)(v40 + 8);
              }
              v40 += 12;
              v41 += 3;
            }
            while ( (void (***)(uint32_t))v40 != v39 );
            v4 = v63;
            v10 = v70;
            v92 += 4 * ((unsigned int)(v40 - (v84 + 12)) >> 2) + 12;
          }
          v10[6] = v92;
        }
        v49 = v71;
        v50 = a1 + 3;
        v47 = v10;
        v44 = v71 == v76;
      }
      goto LABEL_23;
    }
    v91 = v2;
    while ( v4 < v8[4] )
    {
      v34 = (uint32_t *)v8[2];
      v35 = 1;
      if ( v34 == nullptr )
        goto LABEL_69;
LABEL_66:
      v8 = v34;
    }
    v34 = (uint32_t *)v8[3];
    v35 = 0;
    if ( v34 != nullptr )
      goto LABEL_66;
LABEL_69:
    v27 = v35 == 0;
    v2 = v91;
    v5 = v8;
    if ( !v27 )
    {
      if ( v78 == v8 )
      {
        v48 = (int)(uintptr_t)(v8);
      }
      else
      {
        v56 = v8;
        v5 = (uint32_t *)sub_19048F0(v8);
        v15 = 0;
        v8 = v56;
        v86 = nullptr;
        if ( v4 <= v5[4] )
          goto LABEL_24;
LABEL_71:
        v48 = (int)(uintptr_t)(v8);
      }
      sub_13B44D0(v93, v66, 0, v48, &v95);
      goto LABEL_73;
    }
    v15 = 0;
    v86 = nullptr;
    if ( v4 > v8[4] )
      goto LABEL_71;
LABEL_24:
    if ( v86 != (void (***)(uint32_t))v15 )
    {
      v80 = v4;
      v73 = v2;
      v16 = v86;
      v17 = (void (***)(uint32_t))v15;
      v87 = v5;
      do
      {
        v18 = *v17;
        v45 = v17;
        v17 += 3;
        (*v18)((uint32_t)(uintptr_t)(v45));
      }
      while ( v16 != v17 );
      v4 = v80;
      v5 = v87;
      v2 = v73;
      v15 = v96;
    }
    if ( v15 != 0 )
    {
      v53 = v5;
      sub_4EB800(v15);
      v5 = v53;
    }
LABEL_30:
    v94 = v4;
    v81 = v5 + 5;
    v54 = v5;
    sub_192C9E0(v2, &v94, 4);
    v94 = -1431655765 * ((v54[6] - v54[5]) >> 2);
    sub_192C9E0(v2, &v94, 4);
    v19 = v54[5];
    if ( v19 != v54[6] )
    {
      v88 = v2;
      do
      {
        v20 = *(uint32_t *)(*(uint32_t *)(v19 + 4) + 4);
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
        }
        grapher::ActorManager::FindActor((grapher::ActorManager::Self *)&unk_20D5B60, v20);
        v94 = v20;
        sub_192C9E0(v88, &v94, 4);
        v94 = *(uint32_t *)(v19 + 8);
        v19 += 12;
        sub_192C9E0(v88, &v94, 4);
      }
      while ( v81[1] != v19 );
      v2 = v88;
    }
    v77 = (uint32_t *)sub_19048E0(v77);
  }
  while ( v77 != v76 );
LABEL_38:
  v94 = (a1[9] - a1[8]) >> 2;
  sub_192C9E0(v2, &v94, 4);
  v21 = a1[8];
  result = a1[9] - v21;
  if ( result > 3 )
  {
    v23 = 0;
    do
    {
      v46 = *(uint32_t *)(v21 + 4 * v23++);
      grapher::ActorProperty::Serialize(v46, v2);
      v21 = a1[8];
      result = (a1[9] - v21) >> 2;
    }
    while ( v23 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::ClearBreakpoints  (binary VA: 0x13b8200)
// Original: grapher::ActorBase::ClearBreakpoints
// ----------------------------------------------------------------------------
void grapher::ActorBase::ClearBreakpoints(grapher::ActorBase::Self *self)
{
  int v1;
  int v2;

  v1 = *((uint32_t *)self + 12);
  if ( v1 != 0 )
  {
    v2 = *(uint32_t *)(v1 + 120);
    if ( v2 != v1 + 112 )
    {
      do
      {
        *(uint8_t *)(v2 + 20) = 0;
        v2 = sub_1904890(v2);
      }
      while ( v2 != *((uint32_t *)self + 12) + 112 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::HasBreakpoint  (binary VA: 0x13b8250)
// Original: grapher::ActorBase::HasBreakpoint
// ----------------------------------------------------------------------------
int grapher::ActorBase::HasBreakpoint(grapher::ActorBase::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = *((uint32_t *)self + 12);
  if ( v2 == 0 )
    return v1;
  v3 = *(uint32_t *)(v2 + 120);
  v4 = v2 + 112;
  if ( v4 == v3 )
    return v1;
  v1 = 1;
  if ( *(uint8_t *)(v3 + 20) != 0 )
    return v1;
  do
  {
    v3 = sub_19048E0(v3);
    if ( v4 == v3 )
      return 0;
  }
  while ( *(uint8_t *)(v3 + 20) == 0 );
  return 1;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::HasBreakpoint  (binary VA: 0x13b82c0)
// Original: grapher::ActorBase::HasBreakpoint
// ----------------------------------------------------------------------------
int grapher::ActorBase::HasBreakpoint(grapher::ActorBase::Self *self, int a2)
{
  int v2;
  int result;
  uint32_t *v4;
  int v5;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7;
  typedef char _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v2 = *((uint32_t *)self + 12);
  result = 0;
  if ( v2 != 0 )
  {
    v4 = *(uint32_t **)(v2 + 116);
    v5 = v2 + 112;
    if ( v4 == nullptr )
      goto LABEL_9;
    do
    {
      while ( v4[4] >= a2 )
      {
        v5 = (int)(uintptr_t)(v4);
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_7;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_7:
    if ( v2 + 112 == v5 || *(uint32_t *)(v5 + 16) > a2 )
    {
LABEL_9:
      v7 = a2;
      v8 = 0;
      sub_13B4C20(v6, (uint32_t *)(v2 + 108), (uint32_t *)v5, &v7);
      v5 = v6[0];
    }
    return *(uint8_t *)(v5 + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::InitProperties  (binary VA: 0x13b8340)
// Original: grapher::ActorBase::InitProperties
// ----------------------------------------------------------------------------
void grapher::ActorBase::InitProperties(grapher::ActorBase::Self *self)
{
  grapher::Self **i;
  grapher::Self *v2;
  int v3;

  if ( *((uint32_t *)self + 12) != 0
    && (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v3) == 0 )
  {
    for ( i = *((grapher::Self ***)self + 8); i != *((grapher::Self ***)self + 9); ++i )
    {
      v2 = *i;
      grapher::ActorProperty::SetActorName(v2, *((uint32_t *)self + 12) + 72);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::UpdateDisplay  (binary VA: 0x13b83a0)
// Original: grapher::ActorBase::UpdateDisplay
// ----------------------------------------------------------------------------
void grapher::ActorBase::UpdateDisplay()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetGraphName  (binary VA: 0x13b83b0)
// Original: grapher::ActorBase::SetGraphName
// ----------------------------------------------------------------------------
int grapher::ActorBase::SetGraphName(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 48);
  if ( result != 0 )
    return (int)(uintptr_t)(g4_std::string::assign_str(result + 92, a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetGraphName  (binary VA: 0x13b83f0)
// Original: grapher::ActorBase::GetGraphName
// ----------------------------------------------------------------------------
int * grapher::ActorBase::GetGraphName(grapher::ActorBase::Self *self)
{
  int v1;
  int *v2;

  v1 = *((uint32_t *)self + 12);
  if ( v1 != 0 )
    return (int *)(v1 + 92);
  v2 = (int *)(&dword_2119270);
  if ( byte_2119260 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119260) != 0 )
  {
    dword_2119270 = (int)(uintptr_t)(&dword_213B814);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2119260);
    __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119270, &unk_20D1280);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetDebugName  (binary VA: 0x13b8490)
// Original: grapher::ActorBase::GetDebugName
// ----------------------------------------------------------------------------
int grapher::ActorBase::GetDebugName(grapher::ActorBase::Self *self)
{
  int v1;
  int *GraphName;
  int v4;
  unsigned int v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  typedef int _g4_t_Name;
  typedef uint32_t _g4_t_v12[4];
  typedef int _g4_t_v13[4];
  typedef int _g4_t_v14[2];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_Name)) > _g4_s0 ? (12u + sizeof(_g4_t_Name)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v12)) > _g4_s1 ? (32u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v13)) > _g4_s2 ? (48u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v14)) > _g4_s3 ? (64u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v15)) > _g4_s4 ? (72u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v16)) > _g4_s5 ? (76u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_Name &Name = *reinterpret_cast<_g4_t_Name *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);

  v1 = *((uint32_t *)self + 12);
  if ( v1 == 0 )
    return grapher::ActorBase::GetName(self);
  if ( *(uint32_t *)(*(uint32_t *)(v1 + 96) - 12) == 0 )
  {
    GraphName = grapher::ActorBase::GetGraphName(self);
    Name = grapher::ActorBase::GetName(self);
    v4 = sub_1938190((int)(uintptr_t)(GraphName), "\\/", -1, 2u);
    if ( v4 == -1 )
    {
      g4_std::string::construct_copy(v14, GraphName);
      g4_std::string::append((int)(uintptr_t)(v14), "::", 2u);
      g4_std::string::construct_copy(&v16, v14);
      g4_std::string::append_str(&v16, Name);
      g4_std::string::assign_str(*((uint32_t *)self + 12) + 96, &v16);
      v9 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      v10 = (void *)(v14[0] - 12);
      if ( (uint32_t *)(v14[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
    }
    else
    {
      v5 = v4 + 1;
      if ( v5 > *(uint32_t *)(*GraphName - 12) )
        sub_1900210("basic_string::substr");
      sub_193A6F0(v12, GraphName, v5, -1);
      g4_std::string::construct_copy(v13, v12);
      g4_std::string::append((int)(uintptr_t)(v13), "::", 2u);
      g4_std::string::construct_copy(&v15, v13);
      g4_std::string::append_str(&v15, Name);
      g4_std::string::assign_str(*((uint32_t *)self + 12) + 96, &v15);
      v6 = (void *)(v15 - 12);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      v7 = (void *)(v13[0] - 12);
      if ( (uint32_t *)(v13[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      v8 = (void *)(v12[0] - 12);
      if ( (uint32_t *)(v12[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
        v1 = *((uint32_t *)self + 12);
        return v1 + 96;
      }
    }
    v1 = *((uint32_t *)self + 12);
  }
  return v1 + 96;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::VerifyPin  (binary VA: 0x13b8750)
// Original: grapher::ActorBase::VerifyPin
// ----------------------------------------------------------------------------
int grapher::ActorBase::VerifyPin(grapher::ActorBase::Self *self, const grapher::PinInfo::Self *a2)
{
  int v2;
  int v3;
  int *Name;
  void *v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v2 = 0;
  if ( *((uint32_t *)self + 12) != 0 )
  {
    v3 = *((uint32_t *)a2 + 1);
    if ( v3 == 0 || (v2 = *(uint32_t *)(v3 + 12), *(uint32_t *)(v3 + 8) != -1) && v2 <= 0 )
    {
      Name = grapher::PinInfo::GetName(a2);
      g4_std::string::construct_copy(&v7, Name);
      grapher::ActorBase::GetName(self);
      grapher::ActorBase::GetGraphName(self);
      v6 = (void *)(v7 - 12);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::VerifyPins  (binary VA: 0x13b8800)
// Original: grapher::ActorBase::VerifyPins
// ----------------------------------------------------------------------------
int grapher::ActorBase::VerifyPins(grapher::ActorBase::Self *a1, int a2)
{
  int v2;
  int i;

  v2 = 0;
  if ( *((uint32_t *)a1 + 12) != 0 )
  {
    for ( i = *(uint32_t *)(a2 + 12); a2 + 4 != i; i = sub_19048E0(i) )
      v2 += grapher::ActorBase::VerifyPin(a1, (const grapher::PinInfo::Self *)(i + 20));
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Verify  (binary VA: 0x13b8870)
// Original: grapher::ActorBase::Verify
// ----------------------------------------------------------------------------
int * grapher::ActorBase::Verify(grapher::ActorBase::Self *self)
{
  int *result;
  int v2;
  int v3;
  int v4;

  result = *((int **)self + 12);
  if ( result != nullptr )
  {
    v2 = grapher::ActorBase::VerifyPins(self, *((uint32_t *)self + 12));
    v3 = *((uint32_t *)self + 12);
    if ( v2 == 0 && *(uint32_t *)(v3 + 100) != -1 && *(uint32_t *)(v3 + 20) != 0 )
    {
      grapher::ActorBase::GetName(self);
      grapher::ActorBase::GetGraphName(self);
      v3 = *((uint32_t *)self + 12);
    }
    result = (int *)grapher::ActorBase::VerifyPins(self, v3 + 24);
    v4 = *((uint32_t *)self + 12);
    if ( result == nullptr && *(uint32_t *)(v4 + 104) != -1 && *(uint32_t *)(v4 + 44) != 0 )
    {
      grapher::ActorBase::GetName(self);
      return grapher::ActorBase::GetGraphName(self);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::DBG_IncrementPinConnectionCount  (binary VA: 0x13b8910)
// Original: grapher::ActorBase::DBG_IncrementPinConnectionCount
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::DBG_IncrementPinConnectionCount(grapher::ActorBase::Self *self, int a2, bool a3)
{
  grapher::ActorBase::Self *result;

  result = self;
  if ( *((uint32_t *)self + 12) != 0 )
  {
    result = (grapher::ActorBase::Self *)grapher::ActorBase::FindPinInfo(self, a2, a3);
    if ( result != nullptr )
    {
      result = *((grapher::ActorBase::Self **)result + 1);
      if ( result != nullptr )
        ++*((uint32_t *)result + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetRawValue  (binary VA: 0x13b89c0)
// Original: grapher::ActorBase::GetRawValue
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::GetRawValue(grapher::ActorBase::Self *self, grapher::ActorBase::Self *a2, grapher::ActorContext::Self *a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  int v6;
  int v7;

  v4 = a4;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, (int)(uintptr_t)(a3));
  if ( a4 == nullptr )
  {
    v4 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
  }
  grapher::ActorContext::LoadAVar(v4, Variable);
  v6 = *((uint32_t *)Variable + 1);
  v7 = 0;
  if ( v6 != 0 )
    v7 = (*(int (**)(uint32_t))(*(uint32_t *)v6 + 48))(*((uint32_t *)Variable + 1));
  *(uint32_t *)self = v7;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::DBG_Print  (binary VA: 0x13b8aa0)
// Original: grapher::ActorBase::DBG_Print
// ----------------------------------------------------------------------------
unsigned int grapher::ActorBase::DBG_Print(grapher::ActorBase::Self *a1, uint32_t *a2)
{
  uint32_t *Name;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint8_t *v6;
  char v7;
  int v8;
  int v9;
  unsigned int result;
  int v11;
  unsigned int v12;
  const void *v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  grapher::HolderT<int> *v24;
  char *v25;
  char *v26;
  void *v27;
  int v28;
  uint32_t *v29;
  int v30;
  char v31;
  int v32;
  void *v33;
  grapher::ActorVariable::Self *Variable;
  int v35;
  int v36;
  grapher::HolderT<int> *v37;
  int v38;
  uint8_t *v39;
  char v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  char *v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef uint8_t *_g4_t_v57;
  typedef uint32_t _g4_t_v58[4];
  typedef int _g4_t_v59[4];
  typedef const char *_g4_t_v60;
  typedef const char *_g4_t_v61[2];
  typedef int _g4_t_v62;
  typedef int _g4_t_v63[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v46)) > _g4_s0 ? (4u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v47)) > _g4_s1 ? (28u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v48)) > _g4_s2 ? (28u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v49)) > _g4_s3 ? (28u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v50)) > _g4_s4 ? (32u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v51)) > _g4_s5 ? (32u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v52)) > _g4_s6 ? (32u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v53)) > _g4_s7 ? (32u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v54)) > _g4_s8 ? (32u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v55)) > _g4_s9 ? (36u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v56)) > _g4_s10 ? (40u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v57)) > _g4_s11 ? (44u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v58)) > _g4_s12 ? (64u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v59)) > _g4_s13 ? (80u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v60)) > _g4_s14 ? (96u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v61)) > _g4_s15 ? (112u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v62)) > _g4_s16 ? (120u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v63)) > _g4_s17 ? (124u + sizeof(_g4_t_v63)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 120u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 124u);

  Name = (uint32_t *)grapher::ActorBase::GetName(a1);
  g4_std_compat::ostream_write(a2, "ACTOR :", 7);
  v4 = (uint32_t *)g4_std_compat::ostream_write(a2, *Name, *(uint32_t *)(*Name - 12));
  v5 = *(uint32_t *)(*v4 - 12);
  v6 = *(uint8_t **)((char *)v4 + v5 + 124);
  if ( v6 == nullptr )
    goto LABEL_56;
  if ( v6[28] != 0 )
  {
    v7 = v6[39];
  }
  else
  {
    sub_18FFC70(*(uint32_t *)((char *)v4 + v5 + 124));
    v7 = G4_VCALL<int>(v6, 24, 10);
  }
  v8 = (int)(uintptr_t)(g4_std::ostream::put(v4, v7));
  g4_std_compat::ostream_flush(v8);
  v9 = *((uint32_t *)a1 + 8);
  result = (unsigned int)(*((uint32_t *)a1 + 9) - v9) >> 2;
  if ( result != 0 )
  {
    v56 = 0;
    while ( 1 )
    {
      v11 = *(uint32_t *)(v9 + 4 * v56);
      v12 = (*(uint32_t *)(v11 + 8) - *(uint32_t *)(v11 + 4)) >> 2;
      if ( v12 == 0 )
        break;
      if ( v12 > 0x3FFFFFFF )
        sub_18FFEE0(v56, v9);
      v57 = (uint8_t *)opNew(4 * v12);
      v13 = *(const void **)(v11 + 4);
      v14 = v57;
      v16 = (*(uint32_t *)(v11 + 8) - (int)(uintptr_t)(v13)) >> 2;
      v15 = v16;
      if ( v16 == 0 )
        goto LABEL_9;
      v17 = 4 * v16;
      memmove(v57, v13, 4 * v15);
LABEL_10:
      v55 = (&v57[v17] - v14) >> 2;
      if ( v55 != 0 )
      {
        v18 = 0;
        while ( 1 )
        {
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, v56);
          if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
          {
            grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
            __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
          }
          grapher::ActorContext::LoadAVar((grapher::ActorContext::Self *)&unk_20D6720, Variable);
          if ( *((uint32_t *)Variable + 2) == 12 )
          {
            v59[0] = (int)(uintptr_t)(&dword_213B814);
            v19 = *((uint32_t *)Variable + 1);
            if ( v19 != 0 )
              G4_VCALL<void>(v19, 32, v59);
            v20 = sub_1938090((int)(uintptr_t)(v59), "..", 0, 2u);
            if ( v20 == -1 )
            {
              v62 = 0;
              v37 = (grapher::HolderT<int> *)gll_operator_new(
                                               8u,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                               102);
              *(uint32_t *)v37 = (uint32_t)(uintptr_t)(&off_205C508);
              grapher::HolderT_int_id_fe4c74::From(v37, &v62);
              v58[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              G4_VCALL<void>(v37, 32, v58);
              G4_VCALL<void>(v37, 44);
            }
            else
            {
              v50 = v20;
              sub_193A6F0(&v60, v59, 0, v20);
              if ( (unsigned int)(v50 + 2) > *(uint32_t *)(v59[0] - 12) )
                sub_1900210("basic_string::substr");
              sub_193A6F0(v61, v59, v50 + 2, -1);
              v21 = atoi(v60);
              v22 = atoi(v61[0]);
              v23 = v22;
              if ( v21 > v22 )
              {
                v23 = v21;
                v21 = v22;
              }
              v63[0] = lrand48() % (v23 - v21 + 1) + v21;
              v24 = (grapher::HolderT<int> *)gll_operator_new(
                                               8u,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                               102);
              *(uint32_t *)v24 = (uint32_t)(uintptr_t)(&off_205C508);
              grapher::HolderT_int_id_fe4c74::From(v24, v63);
              v58[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              G4_VCALL<void>(v24, 32, v58);
              G4_VCALL<void>(v24, 44);
              v25 = (char *)(v61[0] - 12);
              if ( (uint32_t *)v61[0] - 3 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)v61[0] - 1, 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v25);
              }
              v26 = (char *)(v60 - 12);
              if ( v60 - 12 != (const char *)dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)v60 - 1, 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v26);
              }
            }
            v27 = (void *)(v59[0] - 12);
            if ( (uint32_t *)(v59[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v59[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v27);
            }
          }
          else if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v46) == 0
                 && *((uint32_t *)Variable + 2) == 11 )
          {
            v42 = *((uint32_t *)Variable + 1);
            v43 = 0;
            if ( v42 != 0 )
              v43 = (*(int (**)(uint32_t))(*(uint32_t *)v42 + 48))(*((uint32_t *)Variable + 1));
            v61[0] = (const char *)&dword_213B814;
            if ( v43 != 0 )
            {
              v53 = v43;
              G4_VCALL<void>(v43, 32, v61);
              G4_VCALL<void>(v53, 44);
            }
            v44 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
            *v44 = (uint32_t)(uintptr_t)(&off_205C408);
            v44[1] = (uint32_t)(uintptr_t)(&dword_213B814);
            v54 = v44;
            grapher::HolderT_string_e830be::From(v44, v61);
            v58[0] = (uint32_t)(uintptr_t)(&dword_213B814);
            G4_VCALL<void>(v54, 32, v58);
            G4_VCALL<void>(v54, 44);
            v45 = (char *)(v61[0] - 12);
            if ( (uint32_t *)v61[0] - 3 != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v61[0] - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v45);
            }
          }
          else
          {
            v35 = *((uint32_t *)Variable + 1);
            v36 = 0;
            if ( v35 != 0 )
              v36 = G4_VCALL<int>(v35, 48);
            v58[0] = (uint32_t)(uintptr_t)(&dword_213B814);
            if ( v36 != 0 )
            {
              G4_VCALL<void>(v36, 32, v58);
              G4_VCALL<void>(v36, 44);
            }
          }
          v51 = **(uint32_t **)&v57[4 * v18];
          v47 = (uint32_t *)grapher::ActorVariable::GetName(*(grapher::ActorVariable::Self **)&v57[4 * v18]);
          g4_std_compat::ostream_write(a2, "\tAV ", 4);
          v28 = (int)(uintptr_t)(sub_192D8B0(a2, v18));
          g4_std_compat::ostream_write(v28, " : ", 3);
          v48 = (int)(uintptr_t)(g4_std_compat::ostream_write(v28, *v47, *(uint32_t *)(*v47 - 12)));
          g4_std_compat::ostream_write(v48, " ", 1);
          v49 = (int)(uintptr_t)(sub_192D8B0(v48, v51));
          g4_std_compat::ostream_write(v49, " ", 1);
          v29 = (uint32_t *)g4_std_compat::ostream_write(v49, v58[0], *(uint32_t *)(v58[0] - 12));
          v30 = *(uint32_t *)((char *)v29 + *(uint32_t *)(*v29 - 12) + 124);
          if ( v30 == 0 )
            break;
          if ( *(uint8_t *)(v30 + 28) != 0 )
          {
            v31 = *(uint8_t *)(v30 + 39);
          }
          else
          {
            v52 = *(uint32_t *)((char *)v29 + *(uint32_t *)(*v29 - 12) + 124);
            sub_18FFC70(v30);
            v31 = G4_VCALL<int>(v52, 24, 10);
          }
          v32 = (int)(uintptr_t)(g4_std::ostream::put(v29, v31));
          g4_std_compat::ostream_flush(v32);
          v33 = (void *)(v58[0] - 12);
          if ( (uint32_t *)(v58[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v58[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v33);
          }
          if ( ++v18 == v55 )
            goto LABEL_38;
        }
LABEL_56:
        sub_18FFF30(v3);
      }
LABEL_38:
      v3 = a2;
      v38 = *(uint32_t *)(*a2 - 12);
      v39 = *(uint8_t **)((char *)a2 + v38 + 124);
      if ( v39 == nullptr )
        goto LABEL_56;
      if ( v39[28] != 0 )
      {
        v40 = v39[39];
      }
      else
      {
        sub_18FFC70(*(uint32_t *)((char *)a2 + v38 + 124));
        v40 = G4_VCALL<int>(v39, 24, 10);
      }
      v41 = (int)(uintptr_t)(g4_std::ostream::put(a2, v40));
      g4_std_compat::ostream_flush(v41);
      if ( v57 != nullptr )
        opDelete(v57);
      ++v56;
      v9 = *((uint32_t *)a1 + 8);
      result = (*((uint32_t *)a1 + 9) - v9) >> 2;
      if ( v56 >= result )
        return result;
    }
    v14 = nullptr;
    v16 = 0;
    v57 = nullptr;
LABEL_9:
    v17 = 4 * v16;
    goto LABEL_10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::OnEvent  (binary VA: 0x13b92a0)
// Original: grapher::ActorBase::OnEvent
// ----------------------------------------------------------------------------
int * grapher::ActorBase::OnEvent(grapher::ActorBase::Self *self, int a2)
{
  int *result;
  int v3;
  int v4;
  int v5;
  void *v6;
  void *v7;
  int *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  typedef int *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[2];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v11)) > _g4_s2 ? (48u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v12)) > _g4_s3 ? (64u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v13)) > _g4_s4 ? (68u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v14)) > _g4_s5 ? (72u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);

  result = *((int **)self + 12);
  if ( result != nullptr )
  {
    result = (int *)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v9);
    if ( (uint8_t)(uintptr_t)(result) == 0 )
    {
      v3 = *((uint32_t *)self + 12);
      result = *(int **)(v3 + 116);
      v4 = v3 + 112;
      if ( result == nullptr )
        goto LABEL_11;
      do
      {
        while ( result[4] >= a2 )
        {
          v4 = (int)(uintptr_t)(result);
          result = (int *)result[2];
          if ( result == nullptr )
            goto LABEL_9;
        }
        result = (int *)result[3];
      }
      while ( result != nullptr );
LABEL_9:
      if ( v3 + 112 == v4 || a2 < *(uint32_t *)(v4 + 16) )
      {
LABEL_11:
        v14[0] = a2;
        LOBYTE(v14[1]) = 0;
        result = sub_13B4C20(&v10, (uint32_t *)(v3 + 108), (uint32_t *)v4, v14);
        v4 = v10;
      }
      if ( *(uint8_t *)(v4 + 20) != 0 )
      {
        v5 = g4_std::map_int_string_less_int_grap_ac50db::opIndex(
               (std::map<int, std::string, std::less<int>, grapher::allocator<std::pair<int const, std::string>>> *)(*((uint32_t *)self + 12) + 132),
               &a2);
        g4_std::string::construct_copy(&v12, v5);
        g4_std::string::construct_copy(v11, *((uint32_t *)self + 12) + 72);
        g4_std::string::construct_copy(&v13, *((uint32_t *)self + 12) + 92);
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
        }
        grapher::GraphDebugController::Break(*(uint32_t *)&algn_20D5BD0[12], &v13, v11, &v12);
        v6 = (void *)(v13 - 12);
        if ( (uint32_t *)(v13 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        v7 = (void *)(v11[0] - 12);
        if ( (uint32_t *)(v11[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
        result = v12;
        v8 = v12 - 3;
        if ( v12 - 3 != (int *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v12 - 1, 0xFFFFFFFF) <= 0 )
          return (g4_std::string::Rep::M_destroy(v8), (int *)0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::FireEvent  (binary VA: 0x13b9540)
// Original: grapher::ActorBase::_FireEvent
// ----------------------------------------------------------------------------
grapher::ActorBase::Self ** grapher::ActorBase::FireEvent(grapher::ActorBase::Self *self, grapher::ActorBase::Self **a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self **result;
  grapher::ActorBase::Self *v4;
  grapher::ActorBase::Self *v5;
  grapher::ActorBase::Self *v6;

  result = a2;
  if ( (int)(uintptr_t)(a2) >= 0 )
  {
    result = (grapher::ActorBase::Self **)grapher::ActorBase::GetActorInputEventList(self, (int)(uintptr_t)(a2));
    if ( result != nullptr )
    {
      v4 = *result;
      v5 = result[1];
      if ( *result != v5 )
      {
        do
        {
          v6 = v4;
          v4 = (grapher::ActorBase::Self *)((char *)v4 + 12);
          result = (grapher::ActorBase::Self **)grapher::ActorInputEvent::Event(v6, a3);
        }
        while ( v5 != v4 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::FireEvent_ea13b95b0  (binary VA: 0x13b95b0)
// Original: grapher::ActorBase::FireEvent
// ----------------------------------------------------------------------------
grapher::ActorBase::Self ** grapher::ActorBase::FireEvent_ea13b95b0(grapher::ActorBase::Self *self, grapher::ActorBase::Self **a2, grapher::ActorContext::Self *a3)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (*(uint8_t *)unk_20D5BE4) != 0 )
      goto LABEL_7;
    return grapher::ActorBase::FireEvent(self, a2, a3);
  }
  if ( (*(uint8_t *)unk_20D5BE4) == 0 )
    return grapher::ActorBase::FireEvent(self, a2, a3);
LABEL_7:
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  if ( dword_20D5BCC > 0 )
    return grapher::ActorBase::FireEvent(self, a2, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return (grapher::ActorBase::Self **)grapher::ActorManager::QueueEvent(
                                  (grapher::ActorManager::Self *)&unk_20D5B60,
                                  self,
                                  (int)(uintptr_t)(a2),
                                  a3);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::FlushStringTables  (binary VA: 0x13b9720)
// Original: grapher::ActorBase::FlushStringTables
// ----------------------------------------------------------------------------
uint32_t * grapher::ActorBase::FlushStringTables(grapher::ActorBase::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *result;

  v1 = *((uint32_t **)self + 12);
  if ( v1 != nullptr )
  {
    g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(
      *((uint32_t *)self + 12),
      v1[2]);
    v1[2] = 0;
    v1[3] = (uint32_t)(uintptr_t)(v1 + 1);
    v1[4] = (uint32_t)(uintptr_t)(v1 + 1);
    v1[5] = 0;
    v2 = *((uint32_t **)self + 12);
    g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(
      v2 + 6,
      v2[8]);
    v2[8] = 0;
    v2[9] = (uint32_t)(uintptr_t)(v2 + 7);
    v2[10] = (uint32_t)(uintptr_t)(v2 + 7);
    v2[11] = 0;
    v3 = *((uint32_t **)self + 12);
    g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_erase(
      v3 + 12,
      v3[14]);
    v3[14] = 0;
    v3[15] = (uint32_t)(uintptr_t)(v3 + 13);
    v3[16] = (uint32_t)(uintptr_t)(v3 + 13);
    v3[17] = 0;
    return v3 + 13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Destroy  (binary VA: 0x13b97e0)
// Original: grapher::ActorBase::~ActorBase
// ----------------------------------------------------------------------------
void grapher::ActorBase::Destroy(grapher::ActorBase::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094BC8);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::UnloadActor((grapher::ActorManager::Self *)&unk_20D5B60, self);
  grapher::ActorBase::Release(self);
  v1 = *((uint32_t **)self + 12);
  if ( v1 != nullptr )
  {
    g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_erase(
      v1 + 33,
      v1[35]);
    g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_erase(
      v1 + 27,
      v1[29]);
    v2 = v1[24];
    if ( (uint32_t *)(v2 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v2 - 12));
    }
    v3 = v1[23];
    if ( (uint32_t *)(v3 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    }
    v4 = v1[22];
    if ( (uint32_t *)(v4 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v4 - 12));
    }
    v5 = v1[21];
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v5 - 12));
    }
    v6 = v1[20];
    if ( (uint32_t *)(v6 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v6 - 12));
    }
    v7 = v1[19];
    if ( (uint32_t *)(v7 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v7 - 12));
    }
    v8 = v1[18];
    if ( (uint32_t *)(v8 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v8 - 12));
    }
    g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_erase(
      v1 + 12,
      v1[14]);
    g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(
      v1 + 6,
      v1[8]);
    g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(
      v1,
      v1[2]);
    opDelete(v1);
  }
  if ( *((uint32_t *)self + 8) != 0 )
    sub_4EB800(*((uint32_t *)self + 8));
  g4_std::Rb_tree_int_pair_int_const_vecto_f0ed70::M_erase(
    (char *)self + 8,
    *((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::Destroy_ea13b9a80  (binary VA: 0x13b9a80)
// Original: grapher::ActorBase::~ActorBase
// ----------------------------------------------------------------------------
void grapher::ActorBase::Destroy_ea13b9a80(grapher::ActorBase::Self *self)
{
  grapher::ActorBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::AddOutputPinConnection  (binary VA: 0x13b9ac0)
// Original: grapher::ActorBase::AddOutputPinConnection
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::AddOutputPinConnection(grapher::ActorBase::Self *self, int a2, grapher::ActorBase::Self *a3, int a4)
{
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v10;
  uint32_t *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  void (***v17)(uint32_t);
  int v18;
  void (***v19)(uint32_t);
  void (***v20)(uint32_t);
  void (**v21)(uint32_t);
  typedef void (***_g4_t_v22)(uint32_t);
  typedef void (***_g4_t_v23)(uint32_t);
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void (***_g4_t_v35)(uint32_t);
  typedef int _g4_t_v36;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v23)) > _g4_s1 ? (40u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v24)) > _g4_s2 ? (48u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v25)) > _g4_s3 ? (52u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v26)) > _g4_s4 ? (52u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v27)) > _g4_s5 ? (56u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v28)) > _g4_s6 ? (56u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v29)) > _g4_s7 ? (60u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v30)) > _g4_s8 ? (64u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v31)) > _g4_s9 ? (76u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v32)) > _g4_s10 ? (80u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v33)) > _g4_s11 ? (96u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v34)) > _g4_s12 ? (100u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v35)) > _g4_s13 ? (104u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v36)) > _g4_s14 ? (108u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);

  v4 = a2;
  grapher::ActorInputEvent::ActorInputEvent((grapher::ActorInputEvent::Self *)v32, a3, a4);
  v5 = *((uint32_t **)self + 4);
  if ( v5 == nullptr )
    goto LABEL_33;
  v6 = (uint32_t *)((char *)self + 12);
  do
  {
    while ( v5[4] >= a2 )
    {
      v6 = v5;
      v5 = (uint32_t *)v5[2];
      if ( v5 == nullptr )
        goto LABEL_6;
    }
    v5 = (uint32_t *)v5[3];
  }
  while ( v5 != nullptr );
LABEL_6:
  v27 = v6;
  if ( (uint32_t *)((char *)self + 12) == v6 )
  {
LABEL_33:
    v11 = (uint32_t *)((char *)self + 8);
    v33 = a2;
    v34 = 0;
    v36 = 0;
    v35 = nullptr;
    if ( *((uint32_t *)self + 7) != 0 )
    {
      v10 = *((uint32_t *)self + 6);
      if ( *(uint32_t *)(v10 + 16) < a2 )
      {
LABEL_37:
        sub_13B44D0(&v31, (int)(uintptr_t)(v11), 0, v10, &v33);
LABEL_38:
        v6 = v31;
        v17 = v35;
        v18 = v34;
        goto LABEL_27;
      }
    }
  }
  else
  {
    if ( v6[4] <= a2 )
      goto LABEL_8;
    v33 = a2;
    v34 = 0;
    v36 = 0;
    v35 = nullptr;
    if ( *((uint32_t **)self + 5) == v6 )
    {
      sub_13B44D0(&v31, (int)(uintptr_t)(self) + 8, (int)(uintptr_t)(v6), (int)(uintptr_t)(v6), &v33);
      goto LABEL_38;
    }
    v10 = sub_1904940(v6);
    v11 = (uint32_t *)((char *)self + 8);
    if ( *(uint32_t *)(v10 + 16) < a2 )
    {
      if ( *(uint32_t *)(v10 + 12) != 0 )
      {
        v6 = (uint32_t *)gll_operator_new(0x20u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v12 = (char *)self + 12;
        if ( v6 != (uint32_t *)-16 )
        {
          v13 = v34;
          v6[4] = v33;
          v24 = v13;
          v23 = v35;
          v14 = ((int)(uintptr_t)(v35) - v13) >> 2;
          v6[5] = 0;
          v6[6] = 0;
          v6[7] = 0;
          v29 = 0;
          v25 = 0;
          if ( -1431655765 * v14 != 0 )
          {
            v29 = 4 * v14;
            v25 = gll_operator_new(4 * v14, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v24 = v34;
            v23 = v35;
            v12 = (char *)self + 12;
          }
          v6[5] = v25;
          v6[6] = v25;
          v6[7] = v29 + v25;
          if ( v23 != (void (***)(uint32_t))v24 )
          {
            v15 = v24;
            v16 = (uint32_t *)v25;
            do
            {
              if ( v16 != nullptr )
              {
                *v16 = (uint32_t)(uintptr_t)(&off_20678D0);
                v16[1] = *(uint32_t *)(v15 + 4);
                v16[2] = *(uint32_t *)(v15 + 8);
              }
              v15 += 12;
              v16 += 3;
            }
            while ( (void (***)(uint32_t))v15 != v23 );
            v4 = a2;
            v25 += 4 * ((unsigned int)(v15 - (v24 + 12)) >> 2) + 12;
          }
          v6[6] = v25;
        }
        sub_1904970(1, v6, v27, v12);
        v17 = v35;
        v18 = v34;
        ++*((uint32_t *)self + 7);
        goto LABEL_27;
      }
      goto LABEL_37;
    }
  }
  sub_13B49D0((int)(uintptr_t)(&v30), v11, &v33);
  v6 = v30;
  v17 = v35;
  v18 = v34;
LABEL_27:
  if ( (void (***)(uint32_t))v18 != v17 )
  {
    v28 = v6;
    v26 = v4;
    v19 = v17;
    v20 = (void (***)(uint32_t))v18;
    do
    {
      v21 = *v20;
      v22 = v20;
      v20 += 3;
      (*v21)((uint32_t)(uintptr_t)(v22));
    }
    while ( v20 != v19 );
    v6 = v28;
    v4 = v26;
    v18 = v34;
  }
  if ( v18 != 0 )
    sub_4EB800(v18);
LABEL_8:
  v7 = (uint32_t *)v6[6];
  if ( v7 == (uint32_t *)v6[7] )
  {
    g4_std::vector_grapher_ActorInputEvent_bd5a31::M_insert_aux(v6 + 5, v7, v32);
  }
  else
  {
    v8 = 0;
    if ( v7 != nullptr )
    {
      *v7 = (uint32_t)(uintptr_t)(&off_20678D0);
      v7[1] = v32[1];
      v7[2] = v32[2];
      v8 = v6[6];
    }
    v6[6] = v8 + 12;
  }
  v32[0] = (uint32_t)(uintptr_t)(&off_20678D0);
  return grapher::ActorBase::DBG_IncrementPinConnectionCount(self, v4, false);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::opAssign  (binary VA: 0x13b9eb0)
// Original: grapher::ActorBase::operator=
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorBase::opAssign(grapher::ActorBase::Self *self, const grapher::ActorBase::Self *a2)
{
  if ( self != a2 && *((uint32_t *)self + 12) != 0 )
    grapher::ActorBase::DebugInfos::opAssign(
      *((grapher::ActorBase::DebugInfos::Self **)self + 12),
      *((const grapher::ActorBase::DebugInfos::Self **)a2 + 12));
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SetArraySize  (binary VA: 0x13b9f00)
// Original: grapher::ActorBase::SetArraySize
// ----------------------------------------------------------------------------
unsigned int grapher::ActorBase::SetArraySize(grapher::ActorBase::Self *self, int a2, unsigned int a3)
{
  void *v3;
  int v4;
  unsigned int result;
  int v6[4];

  v3 = *((void **)self + 9);
  v4 = *((uint32_t *)self + 8);
  result = ((int)(uintptr_t)(v3) - v4) >> 2;
  if ( (int)a3 >= (int)result )
  {
    v6[0] = 0;
    if ( a3 > result )
    {
      return ((g4_std::vector_grapher_ActorProperty_gr_41e2c5::M_fill_insert(
               (int)(uintptr_t)(self) + 32,
               v3,
               a3 - result,
               (int)(uintptr_t)(v6))), (unsigned int)0);
    }
    else if ( a3 < result )
    {
      result = v4 + 4 * a3;
      *((uint32_t *)self + 9) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::UnSerializeConnections  (binary VA: 0x13b9f90)
// Original: grapher::ActorBase::UnSerializeConnections
// ----------------------------------------------------------------------------
unsigned int grapher::ActorBase::UnSerializeConnections(void **a1, int a2, grapher::ActorFile::Self *a3)
{
  unsigned int result;
  int v4;
  int v5;
  grapher::ActorBase::Self *Actor;
  int v7;
  uint8_t *v8;
  unsigned int v9;
  int j;
  grapher::ActorProperty::Self *v11;
  typedef void *_g4_t_src;
  typedef int _g4_t_v13;
  typedef grapher::ActorProperty::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_i;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_src)) > _g4_s0 ? (4u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v15)) > _g4_s3 ? (32u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v17)) > _g4_s5 ? (36u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_i)) > _g4_s6 ? (40u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v20)) > _g4_s8 ? (60u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  result = grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), (int)(uintptr_t)(src));
  if ( (uint8_t)result != 0 )
  {
    G4_VCALL<void>(a2, 12, v20, 4);
    v19 = v20[0];
    grapher::ActorBase::GetName((grapher::ActorBase::Self *)a1);
    if ( v19 != 0 )
    {
      for ( i = 0; i != v19; ++i )
      {
        G4_VCALL<void>(a2, 12, v20, 4);
        v17 = v20[0];
        G4_VCALL<void>(a2, 12, v20, 4);
        v15 = v20[0];
        if ( v20[0] != 0 )
        {
          v4 = 0;
          do
          {
            ++v4;
            G4_VCALL<void>(a2, 12, v20, 4);
            v5 = v20[0];
            G4_VCALL<void>(a2, 12, v20, 4);
            v13 = v20[0];
            Actor = (grapher::ActorBase::Self *)grapher::ActorFile::GetActor(a3, v5);
            grapher::ActorBase::GetName(Actor);
            grapher::ActorBase::AddOutputPinConnection((grapher::ActorBase::Self *)a1, v17, Actor, v13);
          }
          while ( v4 != v15 );
        }
      }
    }
    G4_VCALL<void>(a2, 12, v20, 4);
    v7 = v20[0];
    v20[0] = 0;
    v16 = v7;
    v8 = (uint8_t *)(a1[8]);
    v9 = ((uint8_t *)a1[9] - v8) >> 2;
    if ( v16 > v9 )
    {
      g4_std::vector_grapher_ActorProperty_gr_41e2c5::M_fill_insert(
        (int)(uintptr_t)(a1 + 8),
        a1[9],
        v16 - v9,
        (int)(uintptr_t)(v20));
    }
    else if ( v16 < v9 )
    {
      a1[9] = &v8[4 * v16];
    }
    grapher::ActorBase::GetName((grapher::ActorBase::Self *)a1);
    result = v16;
    if ( v16 != 0 )
    {
      for ( j = 0; j != v16; ++j )
      {
        v14 = (grapher::ActorProperty::Self *)gll_operator_new(
                                          0x18u,
                                          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorBase.cpp"),
                                          702);
        grapher::ActorProperty::Construct(v14);
        *((uint32_t *)a1[8] + j) = (uint32_t)(uintptr_t)(v14);
        **((uint32_t **)a1[8] + j) = (uint32_t)(uintptr_t)(a1);
        v11 = *((grapher::ActorProperty::Self **)a1[8] + j);
        result = (unsigned int)(uintptr_t)(grapher::ActorProperty::UnSerialize(v11, a2, a3));
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::HasBreakpoint_ea13ba1f0  (binary VA: 0x13ba1f0)
// Original: grapher::ActorBase::HasBreakpoint
// ----------------------------------------------------------------------------
int grapher::ActorBase::HasBreakpoint_ea13ba1f0(grapher::ActorBase::Self *a1, int a2)
{
  int result;
  int *v3;

  result = 0;
  if ( *((uint32_t *)a1 + 12) != 0 )
  {
    v3 = (int *)g4_std::map_string_grapher_PinInfo_l_f79ad6::opIndex(
                  *((uint32_t *)a1 + 12),
                  a2);
    return grapher::ActorBase::HasBreakpoint(a1, *v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::SwapBreakpoint  (binary VA: 0x13ba240)
// Original: grapher::ActorBase::SwapBreakpoint
// ----------------------------------------------------------------------------
int grapher::ActorBase::SwapBreakpoint(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  result = *(uint32_t *)(a1 + 48);
  if ( result != 0 )
  {
    v3 = *(uint32_t *)g4_std::map_string_grapher_PinInfo_l_f79ad6::opIndex(
                      *(uint32_t *)(a1 + 48),
                      a2);
    v4 = *(uint32_t *)(a1 + 48);
    v5 = *(uint32_t **)(v4 + 116);
    v6 = v4 + 112;
    v7 = v4 + 112;
    if ( v5 != nullptr )
    {
      v8 = *(uint32_t **)(v4 + 116);
      do
      {
        while ( v3 <= v8[4] )
        {
          v7 = (int)(uintptr_t)(v8);
          v8 = (uint32_t *)v8[2];
          if ( v8 == nullptr )
            goto LABEL_7;
        }
        v8 = (uint32_t *)v8[3];
      }
      while ( v8 != nullptr );
LABEL_7:
      if ( v6 != v7 && v3 >= *(uint32_t *)(v7 + 16) )
        goto LABEL_9;
    }
    v11 = v3;
    v12 = 0;
    sub_13B4C20(&v10, (uint32_t *)(v4 + 108), (uint32_t *)v7, &v11);
    v7 = v10;
    v4 = *(uint32_t *)(a1 + 48);
    v5 = *(uint32_t **)(v4 + 116);
    v6 = v4 + 112;
    if ( v5 != nullptr )
    {
LABEL_9:
      v9 = v6;
      do
      {
        while ( v3 <= v5[4] )
        {
          v9 = (int)(uintptr_t)(v5);
          v5 = (uint32_t *)v5[2];
          if ( v5 == nullptr )
            goto LABEL_13;
        }
        v5 = (uint32_t *)v5[3];
      }
      while ( v5 != nullptr );
LABEL_13:
      if ( v6 != v9 && v3 >= *(uint32_t *)(v9 + 16) )
        goto LABEL_16;
    }
    else
    {
      v9 = v4 + 112;
    }
    v13 = v3;
    v14 = 0;
    sub_13B4C20(&v10, (uint32_t *)(v4 + 108), (uint32_t *)v9, &v13);
    v9 = v10;
LABEL_16:
    result = *(uint8_t *)(v9 + 20) ^ 1;
    *(uint8_t *)(v7 + 20) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::AddPin  (binary VA: 0x13ba360)
// Original: grapher::ActorBase::AddPin
// ----------------------------------------------------------------------------
int grapher::ActorBase::AddPin(int a1, int a2, int a3, char a4, int a5)
{
  int v5;
  grapher::PinInfo::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  grapher::PinInfo::Self *v12;
  void *v13;
  uint32_t *v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef int _g4_t_v19[2];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v16)) > _g4_s1 ? (40u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v17)) > _g4_s2 ? (44u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v18)) > _g4_s3 ? (64u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v19)) > _g4_s4 ? (72u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);

  v5 = 0;
  v16 = a4;
  if ( *(uint32_t *)(a1 + 48) == 0 || (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v15) != 0 )
    return v5;
  grapher::PinInfo::Construct(v18, a3, a2, v16, a5);
  if ( v16 != 0 )
  {
    v7 = (grapher::PinInfo::Self *)g4_std::map_string_grapher_PinInfo_l_f79ad6::opIndex(
                               *(uint32_t *)(a1 + 48),
                               a3);
    grapher::PinInfo::opAssign(v7, (const grapher::PinInfo::Self *)v18);
    v8 = *(uint32_t *)(a1 + 48);
    v9 = *(uint32_t **)(v8 + 116);
    v10 = v8 + 112;
    if ( v9 == nullptr )
      goto LABEL_12;
    do
    {
      while ( v9[4] >= a2 )
      {
        v10 = (int)(uintptr_t)(v9);
        v9 = (uint32_t *)v9[2];
        if ( v9 == nullptr )
          goto LABEL_10;
      }
      v9 = (uint32_t *)v9[3];
    }
    while ( v9 != nullptr );
LABEL_10:
    if ( v8 + 112 == v10 || *(uint32_t *)(v10 + 16) > a2 )
    {
LABEL_12:
      v19[0] = a2;
      LOBYTE(v19[1]) = 0;
      sub_13B4C20(&v17, (uint32_t *)(v8 + 108), (uint32_t *)v10, v19);
      v10 = v17;
    }
    *(uint8_t *)(v10 + 20) = 0;
    v11 = g4_std::map_int_string_less_int_grap_ac50db::opIndex(
            (std::map<int, std::string, std::less<int>, grapher::allocator<std::pair<int const, std::string>>> *)(*(uint32_t *)(a1 + 48) + 132),
            &a2);
    g4_std::string::assign_str(v11, a3);
  }
  else
  {
    v12 = (grapher::PinInfo::Self *)g4_std::map_string_grapher_PinInfo_l_f79ad6::opIndex(
                                *(uint32_t *)(a1 + 48) + 24,
                                a3);
    grapher::PinInfo::opAssign(v12, (const grapher::PinInfo::Self *)v18);
  }
  v13 = (void *)v18[1];
  v5 = a2;
  if ( v18[1] == 0 )
    return v5;
  v14 = (uint32_t *)(*(uint32_t *)v18[1] - 12);
  if ( v14 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v18[1] - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v14);
  opDelete(v13);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::AddProperty  (binary VA: 0x13ba510)
// Original: grapher::ActorBase::AddProperty
// ----------------------------------------------------------------------------
void grapher::ActorBase::AddProperty(int a1, int a2, void **a3, grapher::ActorVariable::Self *a4, char a5, char a6, int a7, int a8)
{
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  size_t n;
  int v13;
  int v14;
  size_t v15;
  size_t v16;
  int v17;
  int v18;
  void *v19;
  grapher::ActorProperty::Self *v20;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s1;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[9];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_s2)) > _g4_s0 ? (4u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_s1)) > _g4_s1 ? (40u + sizeof(_g4_t_s1)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v23)) > _g4_s2 ? (44u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v24)) > _g4_s3 ? (56u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v25)) > _g4_s4 ? (60u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v26)) > _g4_s5 ? (72u + sizeof(_g4_t_v26)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);

  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), (int)(uintptr_t)(s2)) != 0 )
  {
    if ( a4 != nullptr )
    {
      grapher::ActorVariable::Destroy(a4);
      opDelete(a4);
    }
  }
  else
  {
    v8 = *(uint32_t *)(a1 + 48);
    if ( v8 != 0 )
    {
      v24 = v8 + 52;
      v9 = *(uint32_t *)(*(uint32_t *)(a1 + 48) + 56);
      if ( v9 == 0 )
        goto LABEL_18;
      s1 = *a3;
      v10 = *((uint32_t *)*a3 - 3);
      v23 = v8 + 52;
      do
      {
        while ( 1 )
        {
          v11 = *(uint32_t *)(*(uint32_t *)(v9 + 16) - 12);
          n = v11;
          if ( v10 <= v11 )
            n = v10;
          v13 = v11 - v10;
          v14 = memcmp(*(const void **)(v9 + 16), s1, n);
          if ( v14 == 0 )
            v14 = v13;
          if ( v14 < 0 )
            break;
          v23 = v9;
          v9 = *(uint32_t *)(v9 + 8);
          if ( v9 == 0 )
            goto LABEL_12;
        }
        v9 = *(uint32_t *)(v9 + 12);
      }
      while ( v9 != 0 );
LABEL_12:
      if ( v24 == v23 )
        goto LABEL_18;
      v15 = *(uint32_t *)(*(uint32_t *)(v23 + 16) - 12);
      v16 = v15;
      if ( v10 <= v15 )
        v16 = v10;
      v17 = v10 - v15;
      v18 = memcmp(s1, *(const void **)(v23 + 16), v16);
      if ( v18 == 0 )
        v18 = v17;
      if ( v18 < 0 )
      {
LABEL_18:
        g4_std::string::construct_copy(v26, a3);
        v26[1] = 0;
        g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert_unique(&v25);
        v23 = v25;
        v19 = (void *)(v26[0] - 12);
        if ( (uint32_t *)(v26[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v19);
        }
      }
      *(uint32_t *)(v23 + 20) = a2;
    }
    v20 = (grapher::ActorProperty::Self *)gll_operator_new(0x18u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorBase.cpp"), 403);
    grapher::ActorProperty::Construct((int)(uintptr_t)(v20), a5, a6, a7, a8);
    *(uint32_t *)v20 = a1;
    grapher::ActorProperty::AddVariable(v20, a4);
    *(uint32_t *)(*(uint32_t *)(a1 + 32) + 4 * a2) = (uint32_t)(uintptr_t)(v20);
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddActorVariable((grapher::ActorManager::Self *)&unk_20D5B60, a4);
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::DebugInfos::opAssign  (binary VA: 0x13be480)
// Original: grapher::ActorBase::DebugInfos::operator=
// ----------------------------------------------------------------------------
grapher::ActorBase::DebugInfos::Self * grapher::ActorBase::DebugInfos::opAssign(grapher::ActorBase::DebugInfos::Self *self, const grapher::ActorBase::DebugInfos::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *i;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *j;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *k;
  int *v11;
  uint32_t *v12;
  uint32_t *m;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *n;

  if ( a2 != self )
  {
    g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(
      (int)(uintptr_t)(self),
      *((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
    *((uint32_t *)self + 5) = 0;
    v2 = *((uint32_t **)a2 + 2);
    if ( v2 != nullptr )
    {
      v3 = g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
             (int)(uintptr_t)(self),
             v2,
             (int)(uintptr_t)(self) + 4);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
      for ( i = v3; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(i);
      while ( v3[3] != 0 )
        v3 = (uint32_t *)v3[3];
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3);
      *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
    }
  }
  if ( (char *)self + 24 != (char *)a2 + 24 )
  {
    g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(
      (int)(uintptr_t)(self) + 24,
      *((uint32_t *)self + 8));
    *((uint32_t *)self + 8) = 0;
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)((char *)self + 28);
    *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)((char *)self + 28);
    *((uint32_t *)self + 11) = 0;
    v5 = *((uint32_t **)a2 + 8);
    if ( v5 != nullptr )
    {
      v6 = g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
             (int)(uintptr_t)(self) + 24,
             v5,
             (int)(uintptr_t)(self) + 28);
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v6);
      for ( j = v6; j[2] != 0; j = (uint32_t *)j[2] )
        ;
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(j);
      while ( v6[3] != 0 )
        v6 = (uint32_t *)v6[3];
      *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v6);
      *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
    }
  }
  if ( (char *)self + 48 != (char *)a2 + 48 )
  {
    g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_erase(
      (int)(uintptr_t)(self) + 48,
      *((uint32_t *)self + 14));
    *((uint32_t *)self + 14) = 0;
    *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)((char *)self + 52);
    *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)((char *)self + 52);
    *((uint32_t *)self + 17) = 0;
    v8 = *((uint32_t **)a2 + 14);
    if ( v8 != nullptr )
    {
      v9 = g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
             (int)(uintptr_t)(self) + 48,
             v8,
             (int)(uintptr_t)(self) + 52);
      *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v9);
      for ( k = v9; k[2] != 0; k = (uint32_t *)k[2] )
        ;
      *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(k);
      while ( v9[3] != 0 )
        v9 = (uint32_t *)v9[3];
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v9);
      *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
    }
  }
  g4_std::string::assign_str((char *)self + 72, (char *)a2 + 72);
  g4_std::string::assign_str((char *)self + 76, (char *)a2 + 76);
  g4_std::string::assign_str((char *)self + 80, (char *)a2 + 80);
  g4_std::string::assign_str((char *)self + 84, (char *)a2 + 84);
  g4_std::string::assign_str((char *)self + 88, (char *)a2 + 88);
  g4_std::string::assign_str((char *)self + 92, (char *)a2 + 92);
  g4_std::string::assign_str((char *)self + 96, (char *)a2 + 96);
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 25);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 26);
  if ( (char *)self + 108 != (char *)a2 + 108 )
  {
    g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_erase(
      (int)(uintptr_t)(self) + 108,
      *((uint32_t *)self + 29));
    *((uint32_t *)self + 29) = 0;
    *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)((char *)self + 112);
    *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)((char *)self + 112);
    *((uint32_t *)self + 32) = 0;
    v11 = *((int **)a2 + 29);
    if ( v11 != nullptr )
    {
      v12 = g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
              (int)(uintptr_t)(self) + 108,
              v11,
              (int)(uintptr_t)(self) + 112);
      *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)(v12);
      for ( m = v12; m[2] != 0; m = (uint32_t *)m[2] )
        ;
      *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)(m);
      while ( v12[3] != 0 )
        v12 = (uint32_t *)v12[3];
      *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(v12);
      *((uint32_t *)self + 32) = *((uint32_t *)a2 + 32);
    }
  }
  if ( (char *)self + 132 != (char *)a2 + 132 )
  {
    g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_erase(
      (int)(uintptr_t)(self) + 132,
      *((uint32_t *)self + 35));
    *((uint32_t *)self + 35) = 0;
    *((uint32_t *)self + 36) = (uint32_t)(uintptr_t)((char *)self + 136);
    *((uint32_t *)self + 37) = (uint32_t)(uintptr_t)((char *)self + 136);
    *((uint32_t *)self + 38) = 0;
    v14 = *((uint32_t **)a2 + 35);
    if ( v14 != nullptr )
    {
      v15 = g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
              (int)(uintptr_t)(self) + 132,
              v14,
              (int)(uintptr_t)(self) + 136);
      *((uint32_t *)self + 35) = (uint32_t)(uintptr_t)(v15);
      for ( n = v15; n[2] != 0; n = (uint32_t *)n[2] )
        ;
      *((uint32_t *)self + 36) = (uint32_t)(uintptr_t)(n);
      while ( v15[3] != 0 )
        v15 = (uint32_t *)v15[3];
      *((uint32_t *)self + 37) = (uint32_t)(uintptr_t)(v15);
      *((uint32_t *)self + 38) = *((uint32_t *)a2 + 38);
    }
  }
  return self;
}


