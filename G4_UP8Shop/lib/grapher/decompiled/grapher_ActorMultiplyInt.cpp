#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorMultiplyInt.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorMultiplyInt::Destroy  (binary VA: 0x13a7360)
// Original: grapher::ActorMultiplyInt::~ActorMultiplyInt
// ----------------------------------------------------------------------------
void grapher::ActorMultiplyInt::Destroy(grapher::ActorMultiplyInt::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20945E8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorMultiplyInt::Destroy_ea13a7390  (binary VA: 0x13a7390)
// Original: grapher::ActorMultiplyInt::~ActorMultiplyInt
// ----------------------------------------------------------------------------
void grapher::ActorMultiplyInt::Destroy_ea13a7390(grapher::ActorMultiplyInt::Self *self)
{
  grapher::ActorMultiplyInt::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorMultiplyInt::Init  (binary VA: 0x13aadd0)
// Original: grapher::ActorMultiplyInt::Init
// ----------------------------------------------------------------------------
int grapher::ActorMultiplyInt::Init(grapher::ActorMultiplyInt::Self *self)
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
  int result;
  void *v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef void *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[4];
  typedef int _g4_t_v27[4];
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
  typedef int _g4_t_v40[4];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v18)) > _g4_s1 ? (0u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v19)) > _g4_s2 ? (0u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v20)) > _g4_s3 ? (0u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (14u + sizeof(_g4_t_v21)) > _g4_s4 ? (14u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v23)) > _g4_s6 ? (20u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v26)) > _g4_s9 ? (44u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v27)) > _g4_s10 ? (60u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v28)) > _g4_s11 ? (76u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v29)) > _g4_s12 ? (92u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v30)) > _g4_s13 ? (108u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (124u + sizeof(_g4_t_v31)) > _g4_s14 ? (124u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v32)) > _g4_s15 ? (140u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (156u + sizeof(_g4_t_v33)) > _g4_s16 ? (156u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v34)) > _g4_s17 ? (160u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (164u + sizeof(_g4_t_v35)) > _g4_s18 ? (164u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (168u + sizeof(_g4_t_v36)) > _g4_s19 ? (168u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (172u + sizeof(_g4_t_v37)) > _g4_s20 ? (172u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v38)) > _g4_s21 ? (176u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (180u + sizeof(_g4_t_v39)) > _g4_s22 ? (180u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (184u + sizeof(_g4_t_v40)) > _g4_s23 ? (184u + sizeof(_g4_t_v40)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 14u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 156u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 160u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 164u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 168u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 172u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 176u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 180u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 184u);

  grapher::ActorBase::SetArraySize(self, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Multiply Int", (int)(uintptr_t)(&v21));
  grapher::ActorBase::SetDisplayName(self, &v34);
  v1 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "In", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddPin(self, 0, &v35, 1, -1);
  v2 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v22));
  grapher::ActorBase::AddPin(self, 1, &v36, 0, -1);
  v3 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v22) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "A", (int)(uintptr_t)(&v22) + 1);
  v17 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 37);
  grapher::ActorVariable::Construct(v17, v26, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "A", (int)(uintptr_t)(&v22) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v37), v17, 1, 1, (int)(uintptr_t)(v27), 1);
  v4 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v26[0] - 12);
  if ( (uint32_t *)(v26[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v27[0] - 12);
  if ( (uint32_t *)(v27[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v23) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "B", (int)(uintptr_t)(&v23));
  v18 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 38);
  grapher::ActorVariable::Construct(v18, v28, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "B", (int)(uintptr_t)(&v23) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(&v38), v18, 1, 1, (int)(uintptr_t)(v29), 1);
  v7 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v28[0] - 12);
  if ( (uint32_t *)(v28[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v29[0] - 12);
  if ( (uint32_t *)(v29[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Result in INT", (int)(uintptr_t)(&v24) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Int Result", (int)(uintptr_t)(&v23) + 3);
  v19 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 39);
  grapher::ActorVariable::Construct(v19, v30, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Int Result", (int)(uintptr_t)(&v24));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 2, (int)(uintptr_t)(&v39), v19, 1, 1, (int)(uintptr_t)(v31), 2);
  v10 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v30[0] - 12);
  if ( (uint32_t *)(v30[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v31[0] - 12);
  if ( (uint32_t *)(v31[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Result in FLOAT", (int)(uintptr_t)(&v25));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v32), "Float Result", (int)(uintptr_t)(&v24) + 2);
  v20 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 40);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v20), (int)(uintptr_t)(v32), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v40), "Float Result", (int)(uintptr_t)(&v24) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 3, (int)(uintptr_t)(v40), v20, 1, 0, (int)(uintptr_t)(&v33), 2);
  v13 = (void *)(v40[0] - 12);
  if ( (uint32_t *)(v40[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v32[0] - 12);
  if ( (uint32_t *)(v32[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  result = v33;
  v16 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v16); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13abe50 (size: 173 bytes)
// Symbol:    _ZN7grapher16ActorMultiplyIntC1Ej
// Demangled: grapher::ActorMultiplyInt::ActorMultiplyInt(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher16ActorMultiplyIntC2Ej'
void (**grapher::ActorMultiplyInt::ActorMultiplyInt(
        grapher::ActorMultiplyInt::Self *self,
        unsigned int a2))(grapher::ActorMultiplyInt::Self * self)
{
  void *v2;
  uint16_t v4[3];

  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20945E8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "Math", (int)(uintptr_t)(v4));
  grapher::ActorBase::SetCategoryName(self, &v4[1]);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20943A8);
  return (void (**)(grapher::ActorMultiplyInt::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20943A8));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorMultiplyInt::Event  (binary VA: 0x13ad390)
// Original: grapher::ActorMultiplyInt::Event
// ----------------------------------------------------------------------------
int grapher::ActorMultiplyInt::Event(grapher::ActorMultiplyInt::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v5;
  grapher::ActorContext::Self *v6;
  uint32_t *v7;
  int v8;
  grapher::ActorVariable::Self *v9;
  grapher::HolderT<int> *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  grapher::ActorVariable::Self *v16;
  grapher::HolderT<float> *v17;
  int v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef grapher::ActorContext::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef grapher::ActorContext::Self *_g4_t_v29;
  typedef grapher::ActorContext::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef float _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef grapher::ActorContext::Self *_g4_t_v42;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v24)) > _g4_s3 ? (16u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v26)) > _g4_s5 ? (16u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v27)) > _g4_s6 ? (20u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v28)) > _g4_s7 ? (20u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v29)) > _g4_s8 ? (20u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v30)) > _g4_s9 ? (20u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v31)) > _g4_s10 ? (24u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v32)) > _g4_s11 ? (24u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v33)) > _g4_s12 ? (24u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v34)) > _g4_s13 ? (24u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v35)) > _g4_s14 ? (28u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v36)) > _g4_s15 ? (28u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v37)) > _g4_s16 ? (28u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v38)) > _g4_s17 ? (28u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v39)) > _g4_s18 ? (32u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v40)) > _g4_s19 ? (36u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v41)) > _g4_s20 ? (40u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v42)) > _g4_s21 ? (44u + sizeof(_g4_t_v42)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);

  result = a2;
  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    v24 = sub_837200((int)(uintptr_t)(self), Variable, a3, v21, v23, v27, v31, v35, SLODWORD(v39), v40, v41, v42);
    v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 1);
    v6 = sub_837200((int)(uintptr_t)(self), v5, a3, v22, (int)(uintptr_t)(v24), v28, v32, v36, SLODWORD(v39), v40, v41, v42);
    v26 = v25 * (uint32_t)(uintptr_t)(v6);
    v39 = *(float *)&v26;
    v29 = a3;
    if ( a3 == nullptr )
    {
      v29 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v40 = 0;
    v41 = 0;
    v42 = nullptr;
    grapher::ActorBase::GetVariables(self, 2, (int)(uintptr_t)(&v40));
    v7 = (uint32_t *)v40;
    v33 = (v41 - v40) >> 2;
    if ( v33 != 0 )
    {
      v37 = 0;
      v8 = 0;
      do
      {
        v9 = (grapher::ActorVariable::Self *)v7[v8];
        if ( v9 != nullptr )
        {
          v10 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v10 = (uint32_t)(uintptr_t)(&off_205C508);
          grapher::HolderT_int_id_fe4c74::From(v10, (const int *)&v39);
          v11 = *((uint32_t *)v9 + 3);
          if ( v11 != 0 )
            *(uint8_t *)(v11 + 20) = 0;
          v12 = G4_VCALL<int>(v10, 48);
          v13 = *((uint32_t *)v9 + 1);
          *((uint32_t *)v9 + 1) = v12;
          if ( v13 != 0 )
            G4_VCALL<void>(v13, 44);
          G4_VCALL<void>(v10, 44);
          grapher::ActorContext::SaveAVar(v29, v9);
          v7 = (uint32_t *)v40;
        }
        v8 = ++v37;
      }
      while ( v33 != v37 );
    }
    if ( v7 != nullptr )
      opDelete(v7);
    v30 = a3;
    v39 = (float)v26;
    if ( a3 == nullptr )
    {
      v30 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v40 = 0;
    v41 = 0;
    v42 = nullptr;
    grapher::ActorBase::GetVariables(self, 3, (int)(uintptr_t)(&v40));
    v14 = (uint32_t *)v40;
    v34 = (v41 - v40) >> 2;
    if ( v34 != 0 )
    {
      v38 = 0;
      v15 = 0;
      do
      {
        v16 = (grapher::ActorVariable::Self *)v14[v15];
        if ( v16 != nullptr )
        {
          v17 = (grapher::HolderT<float> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v17 = (uint32_t)(uintptr_t)(&off_205C4C8);
          grapher::HolderT_float_id_458ea9::From(v17, &v39);
          v18 = *((uint32_t *)v16 + 3);
          if ( v18 != 0 )
            *(uint8_t *)(v18 + 20) = 0;
          v19 = G4_VCALL<int>(v17, 48);
          v20 = *((uint32_t *)v16 + 1);
          *((uint32_t *)v16 + 1) = v19;
          if ( v20 != 0 )
            G4_VCALL<void>(v20, 44);
          G4_VCALL<void>(v17, 44);
          grapher::ActorContext::SaveAVar(v30, v16);
          v14 = (uint32_t *)v40;
        }
        v15 = ++v38;
      }
      while ( v34 != v38 );
    }
    if ( v14 != nullptr )
      opDelete(v14);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 1, a3));
  }
  return result;
}


