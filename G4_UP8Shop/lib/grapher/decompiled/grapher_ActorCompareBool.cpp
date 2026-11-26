#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorCompareBool.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareBool::Destroy  (binary VA: 0x139fe80)
// Original: grapher::ActorCompareBool::~ActorCompareBool
// ----------------------------------------------------------------------------
void grapher::ActorCompareBool::Destroy(grapher::ActorCompareBool::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20940E8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareBool::Destroy_ea139feb0  (binary VA: 0x139feb0)
// Original: grapher::ActorCompareBool::~ActorCompareBool
// ----------------------------------------------------------------------------
void grapher::ActorCompareBool::Destroy_ea139feb0(grapher::ActorCompareBool::Self *self)
{
  grapher::ActorCompareBool::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareBool::Init  (binary VA: 0x139ffd0)
// Original: grapher::ActorCompareBool::Init
// ----------------------------------------------------------------------------
int grapher::ActorCompareBool::Init(grapher::ActorCompareBool::Self *self)
{
  void *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  int result;
  void *v11;
  typedef void *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[3];
  typedef int _g4_t_v17[4];
  typedef int _g4_t_v18[4];
  typedef int _g4_t_v19[4];
  typedef int _g4_t_v20[2];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v13)) > _g4_s1 ? (0u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v17)) > _g4_s5 ? (52u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v18)) > _g4_s6 ? (68u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v19)) > _g4_s7 ? (84u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v20)) > _g4_s8 ? (100u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v21)) > _g4_s9 ? (108u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v22)) > _g4_s10 ? (112u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v23)) > _g4_s11 ? (116u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v24)) > _g4_s12 ? (120u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v25)) > _g4_s13 ? (124u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v26)) > _g4_s14 ? (128u + sizeof(_g4_t_v26)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);

  grapher::ActorBase::SetArraySize(self, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Compare Bool", (int)(uintptr_t)(&v14));
  grapher::ActorBase::SetDisplayName(self, &v21);
  v1 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddPin(self, 0, &v22, 1, -1);
  v2 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "True", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddPin(self, 1, &v23, 0, -1);
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "False", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddPin(self, 2, &v24, 0, -1);
  v4 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "A", (int)(uintptr_t)(&v15));
  v12 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorCompare.cpp"), 156);
  grapher::ActorVariable::Construct(v12, v17, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "A", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v25), v12, 1, 1, (int)(uintptr_t)(v18), 1);
  v5 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v17[0] - 12);
  if ( (uint32_t *)(v17[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), (char *)&unk_1B15112, (int)(uintptr_t)(v16) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "B", (int)(uintptr_t)(&v15) + 3);
  v13 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorCompare.cpp"), 157);
  grapher::ActorVariable::Construct(v13, v19, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "B", (int)(uintptr_t)(v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(v26), v13, 1, 1, (int)(uintptr_t)(v20), 1);
  v8 = (void *)(v26[0] - 12);
  if ( (uint32_t *)(v26[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v19[0] - 12);
  if ( (uint32_t *)(v19[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  result = v20[0];
  v11 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v11); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13a1540 (size: 173 bytes)
// Symbol:    _ZN7grapher16ActorCompareBoolC1Ej
// Demangled: grapher::ActorCompareBool::ActorCompareBool(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher16ActorCompareBoolC2Ej'
void (**grapher::ActorCompareBool::ActorCompareBool(
        grapher::ActorCompareBool::Self *self,
        unsigned int a2))(grapher::ActorCompareBool::Self * self)
{
  void *v2;
  uint16_t v4[3];

  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20940E8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "Comparison", (int)(uintptr_t)(v4));
  grapher::ActorBase::SetCategoryName(self, &v4[1]);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20940A8);
  return (void (**)(grapher::ActorCompareBool::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20940A8));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareBool::Event  (binary VA: 0x13a1880)
// Original: grapher::ActorCompareBool::Event
// ----------------------------------------------------------------------------
void grapher::ActorCompareBool::Event(int a1, int a2, int a3, grapher::ActorCompareBool::Self *self, int a5, grapher::ActorContext::Self *a6)
{
  grapher::ActorVariable::Self *Variable;
  char v7; // bp
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  if ( a5 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    v7 = sub_837730((int)(uintptr_t)(self), Variable, a6, v9, v11, v13, v15, a1, a3, a2);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 1);
    if ( v7 == (uint8_t)sub_837730((int)(uintptr_t)(self), v8, a6, v10, v12, v14, v16, v17, v18, v19) )
      grapher::ActorBase::FireEvent(self, 1, a6);
    else
      grapher::ActorBase::FireEvent(self, 2, a6);
  }
}


