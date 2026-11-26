#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorCancel.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorCancel::Destroy  (binary VA: 0x139f8d0)
// Original: grapher::ActorCancel::~ActorCancel
// ----------------------------------------------------------------------------
void grapher::ActorCancel::Destroy(grapher::ActorCancel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093F88);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorCancel::Destroy_ea139f900  (binary VA: 0x139f900)
// Original: grapher::ActorCancel::~ActorCancel
// ----------------------------------------------------------------------------
void grapher::ActorCancel::Destroy_ea139f900(grapher::ActorCancel::Self *self)
{
  grapher::ActorCancel::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorCancel::Init  (binary VA: 0x139f940)
// Original: grapher::ActorCancel::Init
// ----------------------------------------------------------------------------
int grapher::ActorCancel::Init(grapher::ActorCancel::Self *self)
{
  void *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  int result;
  void *v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  typedef int _g4_t_v14[2];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v15)) > _g4_s5 ? (56u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v16)) > _g4_s6 ? (60u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v17)) > _g4_s7 ? (64u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v18)) > _g4_s8 ? (68u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v19)) > _g4_s9 ? (72u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v20)) > _g4_s10 ? (76u + sizeof(_g4_t_v20)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);

  grapher::ActorBase::SetArraySize(self, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "CANCEL", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(self, &v15);
  v1 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(self, &v16);
  v2 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(self, 0, &v17, 1, -1);
  v3 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(self, 1, &v18, 0, -1);
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "CANCEL", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(self, 2, &v19, 0, -1);
  v5 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "Is the cancel command will spread to all the box of the branch it is link", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Recurse", (int)(uintptr_t)(&v12) + 1);
  v10 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorCancel.cpp"), 36);
  grapher::ActorVariable::Construct(v10, v13, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "Recurse", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(v20), v10, 0, 0, (int)(uintptr_t)(v14), 3);
  v6 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v13[0] - 12);
  if ( (uint32_t *)(v13[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  result = v14[0];
  v9 = (void *)(v14[0] - 12);
  if ( (uint32_t *)(v14[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v9); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x139fd30 (size: 67 bytes)
// Symbol:    _ZN7grapher11ActorCancelC1Ej
// Demangled: grapher::ActorCancel::ActorCancel(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher11ActorCancelC2Ej'
void (**grapher::ActorCancel::ActorCancel(
        grapher::ActorCancel::Self *self,
        unsigned int a2))(grapher::ActorCancel::Self * self)
{
  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093F88);
  return (void (**)(grapher::ActorCancel::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2093F88));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorCancel::Event  (binary VA: 0x139fd80)
// Original: grapher::ActorCancel::Event
// ----------------------------------------------------------------------------
int grapher::ActorCancel::Event(grapher::ActorCancel::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4;
  bool v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  bool v15;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
  v4 = sub_837730((int)(uintptr_t)(self), Variable, a3, v8, v9, v10, v11, v12, v13, v14);
  v5 = v4;
  if ( byte_20D5B50 == 0 )
  {
    v15 = v4;
    v7 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
    v5 = v15;
    if ( v7 != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      v5 = v15;
    }
  }
  grapher::ActorManager::Cancel((grapher::ActorManager::Self *)&unk_20D5B60, self, a3, v5, 2);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 1, a3));
}


