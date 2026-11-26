#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorDivideInt.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorDivideInt::Destroy  (binary VA: 0x13a7440)
// Original: grapher::ActorDivideInt::~ActorDivideInt
// ----------------------------------------------------------------------------
void grapher::ActorDivideInt::Destroy(grapher::ActorDivideInt::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20946C8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDivideInt::Destroy_ea13a7470  (binary VA: 0x13a7470)
// Original: grapher::ActorDivideInt::~ActorDivideInt
// ----------------------------------------------------------------------------
void grapher::ActorDivideInt::Destroy_ea13a7470(grapher::ActorDivideInt::Self *self)
{
  grapher::ActorDivideInt::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDivideInt::Init  (binary VA: 0x13a9ce0)
// Original: grapher::ActorDivideInt::Init
// ----------------------------------------------------------------------------
int grapher::ActorDivideInt::Init(grapher::ActorDivideInt::Self *self)
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
  void *v17;
  int result;
  void *v19;
  typedef void *_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef void *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef void *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29[5];
  typedef int _g4_t_v30[4];
  typedef int _g4_t_v31[4];
  typedef int _g4_t_v32[4];
  typedef int _g4_t_v33[4];
  typedef int _g4_t_v34[4];
  typedef int _g4_t_v35[4];
  typedef int _g4_t_v36[4];
  typedef int _g4_t_v37[4];
  typedef int _g4_t_v38[4];
  typedef int _g4_t_v39[4];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47[4];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v24)) > _g4_s4 ? (8u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v26)) > _g4_s6 ? (36u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v27)) > _g4_s7 ? (40u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v28)) > _g4_s8 ? (44u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v29)) > _g4_s9 ? (48u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v30)) > _g4_s10 ? (68u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v31)) > _g4_s11 ? (84u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v32)) > _g4_s12 ? (100u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v33)) > _g4_s13 ? (116u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v34)) > _g4_s14 ? (132u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (148u + sizeof(_g4_t_v35)) > _g4_s15 ? (148u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (164u + sizeof(_g4_t_v36)) > _g4_s16 ? (164u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (180u + sizeof(_g4_t_v37)) > _g4_s17 ? (180u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (196u + sizeof(_g4_t_v38)) > _g4_s18 ? (196u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (212u + sizeof(_g4_t_v39)) > _g4_s19 ? (212u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (228u + sizeof(_g4_t_v40)) > _g4_s20 ? (228u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (232u + sizeof(_g4_t_v41)) > _g4_s21 ? (232u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (236u + sizeof(_g4_t_v42)) > _g4_s22 ? (236u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (240u + sizeof(_g4_t_v43)) > _g4_s23 ? (240u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (244u + sizeof(_g4_t_v44)) > _g4_s24 ? (244u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (248u + sizeof(_g4_t_v45)) > _g4_s25 ? (248u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (252u + sizeof(_g4_t_v46)) > _g4_s26 ? (252u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (256u + sizeof(_g4_t_v47)) > _g4_s27 ? (256u + sizeof(_g4_t_v47)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 132u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 148u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 164u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 180u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 196u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 212u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 228u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 232u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 236u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 240u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 244u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 248u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 252u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 256u);

  grapher::ActorBase::SetArraySize(self, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Divide Int", (int)(uintptr_t)(&v25));
  grapher::ActorBase::SetDisplayName(self, &v40);
  v1 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "In", (int)(uintptr_t)(&v25) + 1);
  grapher::ActorBase::AddPin(self, 0, &v41, 1, -1);
  v2 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Out", (int)(uintptr_t)(&v25) + 2);
  grapher::ActorBase::AddPin(self, 1, &v42, 0, -1);
  v3 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), (char *)&unk_1B15112, (int)(uintptr_t)(&v26) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "A", (int)(uintptr_t)(&v25) + 3);
  v20 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 111);
  grapher::ActorVariable::Construct(v20, v30, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "A", (int)(uintptr_t)(&v26));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v43), v20, 1, 1, (int)(uintptr_t)(v31), 1);
  v4 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v30[0] - 12);
  if ( (uint32_t *)(v30[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v31[0] - 12);
  if ( (uint32_t *)(v31[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v27));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v32), "B", (int)(uintptr_t)(&v26) + 2);
  v21 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 112);
  grapher::ActorVariable::Construct(v21, v32, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "B", (int)(uintptr_t)(&v26) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(&v44), v21, 1, 1, (int)(uintptr_t)(v33), 1);
  v7 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v32[0] - 12);
  if ( (uint32_t *)(v32[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v33[0] - 12);
  if ( (uint32_t *)(v33[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "Result in INT", (int)(uintptr_t)(&v27) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v34), "Int Result", (int)(uintptr_t)(&v27) + 1);
  v22 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 113);
  grapher::ActorVariable::Construct(v22, v34, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Int Result", (int)(uintptr_t)(&v27) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 2, (int)(uintptr_t)(&v45), v22, 1, 1, (int)(uintptr_t)(v35), 2);
  v10 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Result in FLOAT", (int)(uintptr_t)(&v28) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v36), "Float Result", (int)(uintptr_t)(&v28));
  v23 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 114);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v23), (int)(uintptr_t)(v36), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Float Result", (int)(uintptr_t)(&v28) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 3, (int)(uintptr_t)(&v46), v23, 1, 0, (int)(uintptr_t)(v37), 2);
  v13 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v37[0] - 12);
  if ( (uint32_t *)(v37[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v39), "Remainder", (int)(uintptr_t)(v29) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v38), "Remainder Result", (int)(uintptr_t)(&v28) + 3);
  v24 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorMath.cpp"), 115);
  grapher::ActorVariable::Construct(v24, v38, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v47), "Remainder Result", (int)(uintptr_t)(v29));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 4, (int)(uintptr_t)(v47), v24, 1, 0, (int)(uintptr_t)(v39), 2);
  v16 = (void *)(v47[0] - 12);
  if ( (uint32_t *)(v47[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v38[0] - 12);
  if ( (uint32_t *)(v38[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  result = v39[0];
  v19 = (void *)(v39[0] - 12);
  if ( (uint32_t *)(v39[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v19); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13abfb0 (size: 173 bytes)
// Symbol:    _ZN7grapher14ActorDivideIntC1Ej
// Demangled: grapher::ActorDivideInt::ActorDivideInt(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher14ActorDivideIntC2Ej'
void (**grapher::ActorDivideInt::ActorDivideInt(
        grapher::ActorDivideInt::Self *self,
        unsigned int a2))(grapher::ActorDivideInt::Self * self)
{
  void *v2;
  uint16_t v4[3];

  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20946C8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "Math", (int)(uintptr_t)(v4));
  grapher::ActorBase::SetCategoryName(self, &v4[1]);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094428);
  return (void (**)(grapher::ActorDivideInt::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094428));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorDivideInt::Event  (binary VA: 0x13ace40)
// Original: grapher::ActorDivideInt::Event
// ----------------------------------------------------------------------------
void grapher::ActorDivideInt::Event(grapher::ActorDivideInt::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  uint32_t *v5;
  int v6;
  grapher::ActorVariable::Self *v7;
  grapher::HolderT<int> *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  grapher::ActorVariable::Self *v14;
  grapher::HolderT<float> *v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  grapher::ActorVariable::Self *v21;
  grapher::HolderT<int> *v22;
  int v23;
  int v24;
  int v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef grapher::ActorContext::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef grapher::ActorContext::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef grapher::ActorContext::Self *_g4_t_v42;
  typedef grapher::ActorContext::Self *_g4_t_v43;
  typedef grapher::ActorContext::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef grapher::ActorContext::Self *_g4_t_v50;
  typedef grapher::ActorContext::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v34)) > _g4_s8 ? (28u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v36)) > _g4_s10 ? (28u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v37)) > _g4_s11 ? (32u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v38)) > _g4_s12 ? (32u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v39)) > _g4_s13 ? (32u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v40)) > _g4_s14 ? (36u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v41)) > _g4_s15 ? (36u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v42)) > _g4_s16 ? (36u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v43)) > _g4_s17 ? (36u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v44)) > _g4_s18 ? (36u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v45)) > _g4_s19 ? (40u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v46)) > _g4_s20 ? (40u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v47)) > _g4_s21 ? (40u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v48)) > _g4_s22 ? (40u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v49)) > _g4_s23 ? (40u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v50)) > _g4_s24 ? (44u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v51)) > _g4_s25 ? (44u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v52)) > _g4_s26 ? (44u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v53)) > _g4_s27 ? (44u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v54)) > _g4_s28 ? (44u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v55)) > _g4_s29 ? (48u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_v56)) > _g4_s30 ? (52u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v57)) > _g4_s31 ? (56u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v58)) > _g4_s32 ? (60u + sizeof(_g4_t_v58)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);

  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    v38 = sub_837200((int)(uintptr_t)(self), Variable, a3, v26, v28, v30, v32, v34, v37, v40, v45, v50);
    v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 1);
    v36 = sub_837200((int)(uintptr_t)(self), v4, a3, v27, v29, v31, v33, v35, (int)(uintptr_t)(v38), v41, v46, v51);
    v55 = v39 / (int)(uintptr_t)(v36);
    v42 = a3;
    if ( a3 == nullptr )
    {
      v42 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v56 = 0;
    v57 = 0;
    v58 = 0;
    grapher::ActorBase::GetVariables(self, 2, (int)(uintptr_t)(&v56));
    v5 = (uint32_t *)v56;
    v47 = (v57 - v56) >> 2;
    if ( v47 != 0 )
    {
      v52 = 0;
      v6 = 0;
      do
      {
        v7 = (grapher::ActorVariable::Self *)v5[v6];
        if ( v7 != nullptr )
        {
          v8 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v8 = (uint32_t)(uintptr_t)(&off_205C508);
          grapher::HolderT_int_id_fe4c74::From(v8, &v55);
          v9 = *((uint32_t *)v7 + 3);
          if ( v9 != 0 )
            *(uint8_t *)(v9 + 20) = 0;
          v10 = G4_VCALL<int>(v8, 48);
          v11 = *((uint32_t *)v7 + 1);
          *((uint32_t *)v7 + 1) = v10;
          if ( v11 != 0 )
            G4_VCALL<void>(v11, 44);
          G4_VCALL<void>(v8, 44);
          grapher::ActorContext::SaveAVar(v42, v7);
          v5 = (uint32_t *)v56;
        }
        v6 = ++v52;
      }
      while ( v47 != v52 );
    }
    if ( v5 != nullptr )
      opDelete(v5);
    v43 = a3;
    *(float *)&v55 = (float)v39 / (float)(int)(uintptr_t)(v36);
    if ( a3 == nullptr )
    {
      v43 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v56 = 0;
    v57 = 0;
    v58 = 0;
    grapher::ActorBase::GetVariables(self, 3, (int)(uintptr_t)(&v56));
    v12 = (uint32_t *)v56;
    v48 = (v57 - v56) >> 2;
    if ( v48 != 0 )
    {
      v53 = 0;
      v13 = 0;
      do
      {
        v14 = (grapher::ActorVariable::Self *)v12[v13];
        if ( v14 != nullptr )
        {
          v15 = (grapher::HolderT<float> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v15 = (uint32_t)(uintptr_t)(&off_205C4C8);
          grapher::HolderT_float_id_458ea9::From(v15, (const float *)&v55);
          v16 = *((uint32_t *)v14 + 3);
          if ( v16 != 0 )
            *(uint8_t *)(v16 + 20) = 0;
          v17 = G4_VCALL<int>(v15, 48);
          v18 = *((uint32_t *)v14 + 1);
          *((uint32_t *)v14 + 1) = v17;
          if ( v18 != 0 )
            G4_VCALL<void>(v18, 44);
          G4_VCALL<void>(v15, 44);
          grapher::ActorContext::SaveAVar(v43, v14);
          v12 = (uint32_t *)v56;
        }
        v13 = ++v53;
      }
      while ( v48 != v53 );
    }
    if ( v12 != nullptr )
      opDelete(v12);
    v55 = v39 % (int)(uintptr_t)(v36);
    v44 = a3;
    if ( a3 == nullptr )
    {
      v44 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v56 = 0;
    v57 = 0;
    v58 = 0;
    grapher::ActorBase::GetVariables(self, 4, (int)(uintptr_t)(&v56));
    v19 = (uint32_t *)v56;
    v49 = (v57 - v56) >> 2;
    if ( v49 != 0 )
    {
      v54 = 0;
      v20 = 0;
      do
      {
        v21 = (grapher::ActorVariable::Self *)v19[v20];
        if ( v21 != nullptr )
        {
          v22 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v22 = (uint32_t)(uintptr_t)(&off_205C508);
          grapher::HolderT_int_id_fe4c74::From(v22, &v55);
          v23 = *((uint32_t *)v21 + 3);
          if ( v23 != 0 )
            *(uint8_t *)(v23 + 20) = 0;
          v24 = G4_VCALL<int>(v22, 48);
          v25 = *((uint32_t *)v21 + 1);
          *((uint32_t *)v21 + 1) = v24;
          if ( v25 != 0 )
            G4_VCALL<void>(v25, 44);
          G4_VCALL<void>(v22, 44);
          grapher::ActorContext::SaveAVar(v44, v21);
          v19 = (uint32_t *)v56;
        }
        v20 = ++v54;
      }
      while ( v49 != v54 );
    }
    if ( v19 != nullptr )
      opDelete(v19);
    grapher::ActorBase::FireEvent(self, 1, a3);
  }
}


