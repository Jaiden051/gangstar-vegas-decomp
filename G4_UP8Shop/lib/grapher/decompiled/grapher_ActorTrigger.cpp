#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorTrigger.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorTrigger::Loaded  (binary VA: 0x13b3f60)
// Original: grapher::ActorTrigger::Loaded
// ----------------------------------------------------------------------------
void grapher::ActorTrigger::Loaded()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorTrigger::Update  (binary VA: 0x13b3f70)
// Original: grapher::ActorTrigger::Update
// ----------------------------------------------------------------------------
void grapher::ActorTrigger::Update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorTrigger::Destroy  (binary VA: 0x13b3f80)
// Original: grapher::ActorTrigger::~ActorTrigger
// ----------------------------------------------------------------------------
void grapher::ActorTrigger::Destroy(grapher::ActorTrigger::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B88);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorTrigger::Destroy_ea13b3fb0  (binary VA: 0x13b3fb0)
// Original: grapher::ActorTrigger::~ActorTrigger
// ----------------------------------------------------------------------------
void grapher::ActorTrigger::Destroy_ea13b3fb0(grapher::ActorTrigger::Self *self)
{
  grapher::ActorTrigger::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorTrigger::Init  (binary VA: 0x13b3ff0)
// Original: grapher::ActorTrigger::Init
// ----------------------------------------------------------------------------
int grapher::ActorTrigger::Init(grapher::ActorTrigger::Self *self)
{
  void *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int result;
  void *v8;
  typedef grapher::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  typedef int _g4_t_v14[4];
  typedef int _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v10)) > _g4_s1 ? (14u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v15)) > _g4_s6 ? (60u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v16)) > _g4_s7 ? (76u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v17)) > _g4_s8 ? (80u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v18)) > _g4_s9 ? (84u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v19)) > _g4_s10 ? (88u + sizeof(_g4_t_v19)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 14u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);

  grapher::ActorBase::SetArraySize(self, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Trigger", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(self, &v16);
  v1 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "DEBUG", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(self, &v17);
  v2 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Pressed", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddPin(self, 0, &v18, 0, -1);
  v3 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Key to use to toggle this box", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Key", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "t", (int)(uintptr_t)(&v11) + 2);
  v9 = (grapher::Self *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorTrigger.cpp"), 32);
  grapher::ActorVariable::Construct(v9, (int)(uintptr_t)(v13), (int)(uintptr_t)(v14), 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Key", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(v19), v9, 1, 1, (int)(uintptr_t)(v15), 1);
  v4 = (void *)(v19[0] - 12);
  if ( (uint32_t *)(v19[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v14[0] - 12);
  if ( (uint32_t *)(v14[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v13[0] - 12);
  if ( (uint32_t *)(v13[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  result = v15[0];
  v8 = (void *)(v15[0] - 12);
  if ( (uint32_t *)(v15[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v8); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13b4340 (size: 67 bytes)
// Symbol:    _ZN7grapher12ActorTriggerC1Ej
// Demangled: grapher::ActorTrigger::ActorTrigger(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher12ActorTriggerC2Ej'
void (**grapher::ActorTrigger::ActorTrigger(
        grapher::ActorTrigger::Self *self,
        unsigned int a2))(grapher::ActorTrigger::Self * self)
{
  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B88);
  return (void (**)(grapher::ActorTrigger::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094B88));
}

