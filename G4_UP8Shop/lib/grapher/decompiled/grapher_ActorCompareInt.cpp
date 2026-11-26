#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorCompareInt.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareInt::Destroy  (binary VA: 0x139ff60)
// Original: grapher::ActorCompareInt::~ActorCompareInt
// ----------------------------------------------------------------------------
void grapher::ActorCompareInt::Destroy(grapher::ActorCompareInt::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20940E8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareInt::Destroy_ea139ff90  (binary VA: 0x139ff90)
// Original: grapher::ActorCompareInt::~ActorCompareInt
// ----------------------------------------------------------------------------
void grapher::ActorCompareInt::Destroy_ea139ff90(grapher::ActorCompareInt::Self *self)
{
  grapher::ActorCompareInt::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareInt::Init  (binary VA: 0x13a0520)
// Original: grapher::ActorCompareInt::Init
// ----------------------------------------------------------------------------
int grapher::ActorCompareInt::Init(grapher::ActorCompareInt::Self *self)
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
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  int result;
  void *v15;
  typedef void *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[4];
  typedef int _g4_t_v22[4];
  typedef int _g4_t_v23[4];
  typedef int _g4_t_v24[4];
  typedef int _g4_t_v25[2];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v18)) > _g4_s2 ? (32u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v19)) > _g4_s3 ? (36u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v20)) > _g4_s4 ? (40u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v21)) > _g4_s5 ? (44u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v22)) > _g4_s6 ? (60u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v23)) > _g4_s7 ? (76u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v24)) > _g4_s8 ? (92u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v25)) > _g4_s9 ? (108u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v26)) > _g4_s10 ? (116u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v27)) > _g4_s11 ? (120u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v28)) > _g4_s12 ? (124u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v29)) > _g4_s13 ? (128u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v30)) > _g4_s14 ? (132u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v31)) > _g4_s15 ? (136u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v32)) > _g4_s16 ? (140u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v33)) > _g4_s17 ? (144u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v34)) > _g4_s18 ? (148u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v35)) > _g4_s19 ? (152u + sizeof(_g4_t_v35)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 108u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);

  grapher::ActorBase::SetArraySize(self, 7, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Compare Int", (int)(uintptr_t)(&v18));
  grapher::ActorBase::SetDisplayName(self, &v26);
  v1 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddPin(self, 0, &v27, 1, -1);
  v2 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "A==B", (int)(uintptr_t)(&v18) + 2);
  grapher::ActorBase::AddPin(self, 1, &v28, 0, -1);
  v3 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "A<=B", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddPin(self, 2, &v29, 0, -1);
  v4 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "A>B", (int)(uintptr_t)(&v19));
  grapher::ActorBase::AddPin(self, 3, &v30, 0, -1);
  v5 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "A!=B", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddPin(self, 4, &v31, 0, -1);
  v6 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "A<B", (int)(uintptr_t)(&v19) + 2);
  grapher::ActorBase::AddPin(self, 5, &v32, 0, -1);
  v7 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "A>=B", (int)(uintptr_t)(&v19) + 3);
  grapher::ActorBase::AddPin(self, 6, &v33, 0, -1);
  v8 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "A", (int)(uintptr_t)(&v20));
  v16 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorCompare.cpp"), 40);
  grapher::ActorVariable::Construct(v16, v22, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "A", (int)(uintptr_t)(&v20) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v34), v16, 1, 1, (int)(uintptr_t)(v23), 1);
  v9 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), (char *)&unk_1B15112, (int)(uintptr_t)(v21) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "B", (int)(uintptr_t)(&v20) + 3);
  v17 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorCompare.cpp"), 41);
  grapher::ActorVariable::Construct(v17, v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "B", (int)(uintptr_t)(v21));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(v35), v17, 1, 1, (int)(uintptr_t)(v25), 1);
  v12 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  result = v25[0];
  v15 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v15); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13a13e0 (size: 173 bytes)
// Symbol:    _ZN7grapher15ActorCompareIntC1Ej
// Demangled: grapher::ActorCompareInt::ActorCompareInt(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher15ActorCompareIntC2Ej'
void (**grapher::ActorCompareInt::ActorCompareInt(
        grapher::ActorCompareInt::Self *self,
        unsigned int a2))(grapher::ActorCompareInt::Self * self)
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094028);
  return (void (**)(grapher::ActorCompareInt::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094028));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorCompareInt::Event  (binary VA: 0x13a15f0)
// Original: grapher::ActorCompareInt::Event
// ----------------------------------------------------------------------------
int grapher::ActorCompareInt::Event(grapher::ActorContext::Self *a1, grapher::ActorCompareInt::Self *self, int a3, grapher::ActorContext::Self *a4)
{
  int result;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorContext::Self *v8;
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
  grapher::ActorContext::Self *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  grapher::ActorContext::Self *v26;

  result = a3;
  if ( a3 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    v6 = sub_837200((int)(uintptr_t)(self), Variable, a4, v9, v11, v13, v15, v17, v20, v22, v24, a1);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 1);
    v8 = sub_837200((int)(uintptr_t)(self), v7, a4, v10, v12, v14, v16, v18, v21, v23, v25, v26);
    if ( v6 == v8 )
    {
      grapher::ActorBase::FireEvent(self, 1, a4);
      grapher::ActorBase::FireEvent(self, 2, a4);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 6, a4));
    }
    v19 = v8;
    grapher::ActorBase::FireEvent(self, 4, a4);
    if ( (int)(uintptr_t)(v6) >= (int)(uintptr_t)(v19) )
    {
      grapher::ActorBase::FireEvent(self, 3, a4);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 6, a4));
    }
    grapher::ActorBase::FireEvent(self, 5, a4);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 2, a4));
  }
  return result;
}


