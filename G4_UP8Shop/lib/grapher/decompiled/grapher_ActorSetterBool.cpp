#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSetterBool.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSetterBool::Destroy  (binary VA: 0x13afd60)
// Original: grapher::ActorSetterBool::~ActorSetterBool
// ----------------------------------------------------------------------------
void grapher::ActorSetterBool::Destroy(grapher::ActorSetterBool::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094A28);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSetterBool::Destroy_ea13afd90  (binary VA: 0x13afd90)
// Original: grapher::ActorSetterBool::~ActorSetterBool
// ----------------------------------------------------------------------------
void grapher::ActorSetterBool::Destroy_ea13afd90(grapher::ActorSetterBool::Self *self)
{
  grapher::ActorSetterBool::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSetterBool::Init  (binary VA: 0x13b00e0)
// Original: grapher::ActorSetterBool::Init
// ----------------------------------------------------------------------------
int grapher::ActorSetterBool::Init(grapher::ActorSetterBool::Self *self)
{
  void *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  typedef int _g4_t_v17[4];
  typedef int _g4_t_v18[4];
  typedef int _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v13)) > _g4_s2 ? (30u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v15)) > _g4_s4 ? (36u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v17)) > _g4_s6 ? (64u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v18)) > _g4_s7 ? (80u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v19)) > _g4_s8 ? (96u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v20)) > _g4_s9 ? (108u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v21)) > _g4_s10 ? (112u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v22)) > _g4_s11 ? (116u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v23)) > _g4_s12 ? (120u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v24)) > _g4_s13 ? (124u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 108u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 112u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 116u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 120u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 124u);

  grapher::ActorBase::SetArraySize(self, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Set Bool", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(self, &v20);
  v1 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddPin(self, 0, &v21, 1, -1);
  v2 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Out", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddPin(self, 1, &v22, 0, -1);
  v3 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Value", (int)(uintptr_t)(&v14) + 1);
  v11 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorSetter.cpp"), 134);
  grapher::ActorVariable::Construct(v11, v16, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Value", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v23), v11, 1, 1, (int)(uintptr_t)(v17), 3);
  v4 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v17[0] - 12);
  if ( (uint32_t *)(v17[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Variable to set", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Target", (int)(uintptr_t)(&v15));
  v12 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorSetter.cpp"), 135);
  grapher::ActorVariable::Construct(v12, v18, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Target", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(v24), v12, 1, 1, (int)(uintptr_t)(v19), 2);
  v7 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  result = v19[0];
  v10 = (void *)(v19[0] - 12);
  if ( (uint32_t *)(v19[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v10); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13b15f0 (size: 173 bytes)
// Symbol:    _ZN7grapher15ActorSetterBoolC1Ej
// Demangled: grapher::ActorSetterBool::ActorSetterBool(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher15ActorSetterBoolC2Ej'
void (**grapher::ActorSetterBool::ActorSetterBool(
        grapher::ActorSetterBool::Self *self,
        unsigned int a2))(grapher::ActorSetterBool::Self * self)
{
  void *v2;
  uint16_t v4[3];

  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094A28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "Set Variable", (int)(uintptr_t)(v4));
  grapher::ActorBase::SetCategoryName(self, &v4[1]);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20949E8);
  return (void (**)(grapher::ActorSetterBool::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20949E8));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorSetterBool::Event  (binary VA: 0x13b1a80)
// Original: grapher::ActorSetterBool::Event
// ----------------------------------------------------------------------------
void grapher::ActorSetterBool::Event(grapher::ActorSetterBool::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  uint32_t *v4;
  int i;
  grapher::ActorVariable::Self *v6;
  grapher::HolderT<bool> *v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef grapher::ActorContext::Self *_g4_t_v16;
  typedef grapher::ActorContext::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v18)) > _g4_s7 ? (32u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v19)) > _g4_s8 ? (36u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v20)) > _g4_s9 ? (40u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v21)) > _g4_s10 ? (44u + sizeof(_g4_t_v21)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    HIBYTE(v18) = sub_837730((int)(uintptr_t)(self), Variable, a3, v11, v12, v13, v14, (int)(uintptr_t)(v16), v18, (int)(uintptr_t)(v19));
    v17 = a3;
    if ( a3 == nullptr )
    {
      v17 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v19 = nullptr;
    v20 = 0;
    v21 = 0;
    grapher::ActorBase::GetVariables(self, 1, (int)(uintptr_t)(&v19));
    v4 = (uint32_t *)(v19);
    v15 = (v20 - (int)(uintptr_t)(v19)) >> 2;
    if ( v15 != 0 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v6 = (grapher::ActorVariable::Self *)v4[i];
        if ( v6 != nullptr )
        {
          v7 = (grapher::HolderT<bool> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v7 = (uint32_t)(uintptr_t)(&off_205C448);
          grapher::HolderT_bool_id_87484c::From(v7, (const bool *)&v18 + 3);
          v8 = *((uint32_t *)v6 + 3);
          if ( v8 != 0 )
            *(uint8_t *)(v8 + 20) = 0;
          v9 = G4_VCALL<int>(v7, 48);
          v10 = *((uint32_t *)v6 + 1);
          *((uint32_t *)v6 + 1) = v9;
          if ( v10 != 0 )
            G4_VCALL<void>(v10, 44);
          G4_VCALL<void>(v7, 44);
          grapher::ActorContext::SaveAVar(v17, v6);
          v4 = (uint32_t *)(v19);
        }
      }
    }
    if ( v4 != nullptr )
      opDelete(v4);
    grapher::ActorBase::FireEvent(self, 1, a3);
  }
}


