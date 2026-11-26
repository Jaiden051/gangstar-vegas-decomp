#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorRandomNumber.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorRandomNumber::Destroy  (binary VA: 0x13aed70)
// Original: grapher::ActorRandomNumber::~ActorRandomNumber
// ----------------------------------------------------------------------------
void grapher::ActorRandomNumber::Destroy(grapher::ActorRandomNumber::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20947C8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorRandomNumber::Destroy_ea13aeda0  (binary VA: 0x13aeda0)
// Original: grapher::ActorRandomNumber::~ActorRandomNumber
// ----------------------------------------------------------------------------
void grapher::ActorRandomNumber::Destroy_ea13aeda0(grapher::ActorRandomNumber::Self *self)
{
  grapher::ActorRandomNumber::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorRandomNumber::Init  (binary VA: 0x13aede0)
// Original: grapher::ActorRandomNumber::Init
// ----------------------------------------------------------------------------
int grapher::ActorRandomNumber::Init(grapher::ActorRandomNumber::Self *self)
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
  int result;
  void *v14;
  typedef void *_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  typedef int _g4_t_v23[4];
  typedef int _g4_t_v24[4];
  typedef int _g4_t_v25[4];
  typedef int _g4_t_v26[4];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34[4];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v18)) > _g4_s3 ? (30u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v20)) > _g4_s5 ? (36u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v21)) > _g4_s6 ? (40u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v22)) > _g4_s7 ? (56u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v23)) > _g4_s8 ? (72u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v24)) > _g4_s9 ? (88u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v25)) > _g4_s10 ? (104u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v26)) > _g4_s11 ? (120u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (136u + sizeof(_g4_t_v27)) > _g4_s12 ? (136u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v28)) > _g4_s13 ? (140u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v29)) > _g4_s14 ? (144u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (148u + sizeof(_g4_t_v30)) > _g4_s15 ? (148u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (152u + sizeof(_g4_t_v31)) > _g4_s16 ? (152u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (156u + sizeof(_g4_t_v32)) > _g4_s17 ? (156u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (160u + sizeof(_g4_t_v33)) > _g4_s18 ? (160u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (164u + sizeof(_g4_t_v34)) > _g4_s19 ? (164u + sizeof(_g4_t_v34)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 30u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 148u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 152u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 156u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 160u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 164u);

  grapher::ActorBase::SetArraySize(self, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Random Number", (int)(uintptr_t)(&v18));
  grapher::ActorBase::SetDisplayName(self, &v28);
  v1 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Math", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::SetCategoryName(self, &v29);
  v2 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "In", (int)(uintptr_t)(&v19));
  grapher::ActorBase::AddPin(self, 0, &v30, 1, -1);
  v3 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Out", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddPin(self, 1, &v31, 0, -1);
  v4 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Min", (int)(uintptr_t)(&v19) + 2);
  v15 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorRandomNumber.cpp"), 31);
  grapher::ActorVariable::Construct(v15, v22, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Min", (int)(uintptr_t)(&v19) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v32), v15, 1, 1, (int)(uintptr_t)(v23), 1);
  v5 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Max", (int)(uintptr_t)(&v20) + 1);
  v16 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorRandomNumber.cpp"), 32);
  grapher::ActorVariable::Construct(v16, v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Max", (int)(uintptr_t)(&v20) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(&v33), v16, 1, 1, (int)(uintptr_t)(v25), 1);
  v8 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Random number", (int)(uintptr_t)(&v21) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Result", (int)(uintptr_t)(&v21));
  v17 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorRandomNumber.cpp"), 33);
  grapher::ActorVariable::Construct(v17, v26, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v34), "Result", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 2, (int)(uintptr_t)(v34), v17, 1, 1, (int)(uintptr_t)(&v27), 2);
  v11 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v26[0] - 12);
  if ( (uint32_t *)(v26[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  result = v27;
  v14 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v14); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13af4a0 (size: 67 bytes)
// Symbol:    _ZN7grapher17ActorRandomNumberC1Ej
// Demangled: grapher::ActorRandomNumber::ActorRandomNumber(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher17ActorRandomNumberC2Ej'
void (**grapher::ActorRandomNumber::ActorRandomNumber(
        grapher::ActorRandomNumber::Self *self,
        unsigned int a2))(grapher::ActorRandomNumber::Self * self)
{
  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20947C8);
  return (void (**)(grapher::ActorRandomNumber::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20947C8));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorRandomNumber::Event  (binary VA: 0x13af4f0)
// Original: grapher::ActorRandomNumber::Event
// ----------------------------------------------------------------------------
int grapher::ActorRandomNumber::Event(grapher::ActorRandomNumber::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorContext::Self *v7;
  uint32_t *v8;
  int i;
  grapher::ActorVariable::Self *v10;
  grapher::HolderT<int> *v11;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef grapher::ActorContext::Self *_g4_t_v24;
  typedef grapher::ActorContext::Self *_g4_t_v25;
  typedef grapher::ActorContext::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef grapher::ActorContext::Self *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v22)) > _g4_s7 ? (24u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v23)) > _g4_s8 ? (24u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v24)) > _g4_s9 ? (28u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v25)) > _g4_s10 ? (28u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v26)) > _g4_s11 ? (28u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v27)) > _g4_s12 ? (32u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v28)) > _g4_s13 ? (36u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v29)) > _g4_s14 ? (40u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v30)) > _g4_s15 ? (44u + sizeof(_g4_t_v30)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);

  result = a2;
  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    v5 = sub_837200((int)(uintptr_t)(self), Variable, a3, v15, v17, v19, v21, (int)(uintptr_t)(v24), v27, (int)(uintptr_t)(v28), v29, v30);
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 1);
    v7 = sub_837200((int)(uintptr_t)(self), v6, a3, v16, v18, v20, v22, (int)(uintptr_t)(v25), v27, (int)(uintptr_t)(v28), v29, v30);
    v27 = (int)(uintptr_t)(v5) + lrand48() % (v7 - v5);
    v26 = a3;
    if ( a3 == nullptr )
    {
      v26 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v28 = nullptr;
    v29 = 0;
    v30 = nullptr;
    grapher::ActorBase::GetVariables(self, 2, (int)(uintptr_t)(&v28));
    v8 = (uint32_t *)(v28);
    v23 = (v29 - (int)(uintptr_t)(v28)) >> 2;
    if ( v23 != 0 )
    {
      for ( i = 0; i != v23; ++i )
      {
        v10 = (grapher::ActorVariable::Self *)v8[i];
        if ( v10 != nullptr )
        {
          v11 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v11 = (uint32_t)(uintptr_t)(&off_205C508);
          grapher::HolderT_int_id_fe4c74::From(v11, &v27);
          v12 = *((uint32_t *)v10 + 3);
          if ( v12 != 0 )
            *(uint8_t *)(v12 + 20) = 0;
          v13 = G4_VCALL<int>(v11, 48);
          v14 = *((uint32_t *)v10 + 1);
          *((uint32_t *)v10 + 1) = v13;
          if ( v14 != 0 )
            G4_VCALL<void>(v14, 44);
          G4_VCALL<void>(v11, 44);
          grapher::ActorContext::SaveAVar(v26, v10);
          v8 = (uint32_t *)(v28);
        }
      }
    }
    if ( v8 != nullptr )
      opDelete(v8);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 1, a3));
  }
  return result;
}


