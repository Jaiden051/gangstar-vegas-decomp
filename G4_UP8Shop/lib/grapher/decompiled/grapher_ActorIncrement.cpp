#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorIncrement.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorIncrement::Destroy  (binary VA: 0x13a7280)
// Original: grapher::ActorIncrement::~ActorIncrement
// ----------------------------------------------------------------------------
void grapher::ActorIncrement::Destroy(grapher::ActorIncrement::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20945A8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorIncrement::Destroy_ea13a72b0  (binary VA: 0x13a72b0)
// Original: grapher::ActorIncrement::~ActorIncrement
// ----------------------------------------------------------------------------
void grapher::ActorIncrement::Destroy_ea13a72b0(grapher::ActorIncrement::Self *self)
{
  grapher::ActorIncrement::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorIncrement::Init  (binary VA: 0x13ab580)
// Original: grapher::ActorIncrement::Init
// ----------------------------------------------------------------------------
int grapher::ActorIncrement::Init(grapher::ActorIncrement::Self *self)
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
  void *v14;
  void *v15;
  void *v16;
  int result;
  void *v18;
  typedef void *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[3];
  typedef int _g4_t_v28[4];
  typedef int _g4_t_v29[4];
  typedef int _g4_t_v30[4];
  typedef int _g4_t_v31[4];
  typedef int _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44[4];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v20)) > _g4_s1 ? (0u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v21)) > _g4_s2 ? (0u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v22)) > _g4_s3 ? (30u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v23)) > _g4_s4 ? (32u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v24)) > _g4_s5 ? (36u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v25)) > _g4_s6 ? (40u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (47u + sizeof(_g4_t_v26)) > _g4_s7 ? (47u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (51u + sizeof(_g4_t_v27)) > _g4_s8 ? (51u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v28)) > _g4_s9 ? (64u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v29)) > _g4_s10 ? (80u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v30)) > _g4_s11 ? (96u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v31)) > _g4_s12 ? (112u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v32)) > _g4_s13 ? (128u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v33)) > _g4_s14 ? (144u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (148u + sizeof(_g4_t_v34)) > _g4_s15 ? (148u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (152u + sizeof(_g4_t_v35)) > _g4_s16 ? (152u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (156u + sizeof(_g4_t_v36)) > _g4_s17 ? (156u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (160u + sizeof(_g4_t_v37)) > _g4_s18 ? (160u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (164u + sizeof(_g4_t_v38)) > _g4_s19 ? (164u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (168u + sizeof(_g4_t_v39)) > _g4_s20 ? (168u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (172u + sizeof(_g4_t_v40)) > _g4_s21 ? (172u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v41)) > _g4_s22 ? (176u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v42)) > _g4_s23 ? (180u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (184u + sizeof(_g4_t_v43)) > _g4_s24 ? (184u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v44)) > _g4_s25 ? (188u + sizeof(_g4_t_v44)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 30u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 47u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 51u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 164u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 168u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 172u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 176u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 180u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 184u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 188u);

  grapher::ActorBase::SetArraySize(self, 6, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Increment", (int)(uintptr_t)(&v22));
  grapher::ActorBase::SetDisplayName(self, &v34);
  v1 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Math", (int)(uintptr_t)(&v22) + 1);
  grapher::ActorBase::SetCategoryName(self, &v35);
  v2 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Inc", (int)(uintptr_t)(&v25) + 1);
  grapher::ActorBase::AddPin(self, 0, &v39, 1, -1);
  v3 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Dec", (int)(uintptr_t)(&v25) + 2);
  grapher::ActorBase::AddPin(self, 1, &v40, 1, -1);
  v4 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Out", (int)(uintptr_t)(&v26));
  grapher::ActorBase::AddPin(self, 2, &v41, 0, -1);
  v5 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Incremented", (int)(uintptr_t)(&v26) + 2);
  grapher::ActorBase::AddPin(self, 3, &v42, 0, -1);
  v6 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Decremented", (int)(uintptr_t)(v27));
  grapher::ActorBase::AddPin(self, 4, &v43, 0, -1);
  v7 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v44), "Reached", (int)(uintptr_t)(v27) + 2);
  grapher::ActorBase::AddPin(self, 5, v44, 0, -1);
  v8 = (void *)(v44[0] - 12);
  if ( (uint32_t *)(v44[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "Limit to reach", (int)(uintptr_t)(&v23) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Limit", (int)(uintptr_t)(&v23));
  v19 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 363);
  grapher::ActorVariable::Construct(v19, v28, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Limit", (int)(uintptr_t)(&v23) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v36), v19, 1, 1, (int)(uintptr_t)(v29), 1);
  v9 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v28[0] - 12);
  if ( (uint32_t *)(v28[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v29[0] - 12);
  if ( (uint32_t *)(v29[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Value of the increment", (int)(uintptr_t)(&v24) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Step", (int)(uintptr_t)(&v23) + 3);
  v20 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 364);
  grapher::ActorVariable::Construct(v20, v30, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Step", (int)(uintptr_t)(&v24));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(&v37), v20, 1, 0, (int)(uintptr_t)(v31), 1);
  v12 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v30[0] - 12);
  if ( (uint32_t *)(v30[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v31[0] - 12);
  if ( (uint32_t *)(v31[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Initial Value", (int)(uintptr_t)(&v25));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v32), "Counter", (int)(uintptr_t)(&v24) + 2);
  v21 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 365);
  grapher::ActorVariable::Construct(v21, v32, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Counter", (int)(uintptr_t)(&v24) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 2, (int)(uintptr_t)(&v38), v21, 1, 1, (int)(uintptr_t)(&v33), 3);
  v15 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v32[0] - 12);
  if ( (uint32_t *)(v32[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  result = v33;
  v18 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v18); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13ac3d0 (size: 67 bytes)
// Symbol:    _ZN7grapher14ActorIncrementC1Ej
// Demangled: grapher::ActorIncrement::ActorIncrement(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher14ActorIncrementC2Ej'
void (**grapher::ActorIncrement::ActorIncrement(
        grapher::ActorIncrement::Self *self,
        unsigned int a2))(grapher::ActorIncrement::Self * self)
{
  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20945A8);
  return (void (**)(grapher::ActorIncrement::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20945A8));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorIncrement::Event  (binary VA: 0x13ac420)
// Original: grapher::ActorIncrement::Event
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * grapher::ActorIncrement::Event(grapher::ActorIncrement::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *v5;
  grapher::ActorContext::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorContext::Self *result;
  int v9;
  uint32_t *v10;
  int v11;
  grapher::ActorVariable::Self *v12;
  grapher::HolderT<int> *v13;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef grapher::ActorContext::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef grapher::ActorContext::Self *_g4_t_v46;
  typedef grapher::ActorContext::Self *_g4_t_v47;
  typedef grapher::ActorContext::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v21)) > _g4_s4 ? (16u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v23)) > _g4_s6 ? (20u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v24)) > _g4_s7 ? (20u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v25)) > _g4_s8 ? (20u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v26)) > _g4_s9 ? (24u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v27)) > _g4_s10 ? (24u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v28)) > _g4_s11 ? (24u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v29)) > _g4_s12 ? (28u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v30)) > _g4_s13 ? (28u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v31)) > _g4_s14 ? (28u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (30u + sizeof(_g4_t_v32)) > _g4_s15 ? (30u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (31u + sizeof(_g4_t_v33)) > _g4_s16 ? (31u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v34)) > _g4_s17 ? (32u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v35)) > _g4_s18 ? (32u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v36)) > _g4_s19 ? (32u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v37)) > _g4_s20 ? (32u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v38)) > _g4_s21 ? (36u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v39)) > _g4_s22 ? (36u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v40)) > _g4_s23 ? (36u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v41)) > _g4_s24 ? (36u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v42)) > _g4_s25 ? (40u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v43)) > _g4_s26 ? (40u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v44)) > _g4_s27 ? (40u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v45)) > _g4_s28 ? (40u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v46)) > _g4_s29 ? (44u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v47)) > _g4_s30 ? (44u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v48)) > _g4_s31 ? (44u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v49)) > _g4_s32 ? (44u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v50)) > _g4_s33 ? (48u + sizeof(_g4_t_v50)) : _g4_s33,
    _g4_s35 = (52u + sizeof(_g4_t_v51)) > _g4_s34 ? (52u + sizeof(_g4_t_v51)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v52)) > _g4_s35 ? (56u + sizeof(_g4_t_v52)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v53)) > _g4_s36 ? (60u + sizeof(_g4_t_v53)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 30u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 31u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
  v4 = sub_837200((int)(uintptr_t)(self), Variable, a3, v17, v20, v23, v26, v29, v34, v38, v42, v46);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 1);
  v6 = sub_837200((int)(uintptr_t)(self), v5, a3, v18, v21, v24, v27, v30, v35, v39, v43, v47);
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 2);
  result = sub_837200((int)(uintptr_t)(self), v7, a3, v19, v22, v25, v28, v31, v36, v40, v44, v48);
  if ( a2 != 0 )
  {
    if ( a2 != 1 )
      return result;
    v37 = 4;
    v33 = (int)(uintptr_t)(v4) >= (int)(uintptr_t)(result);
    v9 = result - v6;
    v32 = v9 <= (int)(uintptr_t)(v4);
  }
  else
  {
    v37 = 3;
    v33 = (int)(uintptr_t)(v4) <= (int)(uintptr_t)(result);
    v9 = (int)(uintptr_t)(result) + (uint32_t)(uintptr_t)(v6);
    v32 = v9 >= (int)(uintptr_t)(v4);
  }
  v50 = v9;
  v41 = a3;
  if ( a3 == nullptr )
  {
    v41 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
  }
  v51 = 0;
  v52 = 0;
  v53 = 0;
  grapher::ActorBase::GetVariables(self, 2, (int)(uintptr_t)(&v51));
  v10 = (uint32_t *)v51;
  v45 = (v52 - v51) >> 2;
  if ( v45 != 0 )
  {
    v49 = 0;
    v11 = 0;
    do
    {
      v12 = (grapher::ActorVariable::Self *)v10[v11];
      if ( v12 != nullptr )
      {
        v13 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v13 = (uint32_t)(uintptr_t)(&off_205C508);
        grapher::HolderT_int_id_fe4c74::From(v13, &v50);
        v14 = *((uint32_t *)v12 + 3);
        if ( v14 != 0 )
          *(uint8_t *)(v14 + 20) = 0;
        v15 = G4_VCALL<int>(v13, 48);
        v16 = *((uint32_t *)v12 + 1);
        *((uint32_t *)v12 + 1) = v15;
        if ( v16 != 0 )
          G4_VCALL<void>(v16, 44);
        G4_VCALL<void>(v13, 44);
        grapher::ActorContext::SaveAVar(v41, v12);
        v10 = (uint32_t *)v51;
      }
      v11 = ++v49;
    }
    while ( v45 != v49 );
  }
  if ( v10 != nullptr )
    opDelete(v10);
  grapher::ActorBase::FireEvent(self, v37, a3);
  if ( v33 != v32 )
    grapher::ActorBase::FireEvent(self, 5, a3);
  return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(self, 2, a3);
}


