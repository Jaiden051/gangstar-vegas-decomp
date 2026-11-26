#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorConvertorIntFloat.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorConvertorIntFloat::Destroy  (binary VA: 0x13a1b10)
// Original: grapher::ActorConvertorIntFloat::~ActorConvertorIntFloat
// ----------------------------------------------------------------------------
void grapher::ActorConvertorIntFloat::Destroy(grapher::ActorConvertorIntFloat::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094268);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorConvertorIntFloat::Destroy_ea13a1b40  (binary VA: 0x13a1b40)
// Original: grapher::ActorConvertorIntFloat::~ActorConvertorIntFloat
// ----------------------------------------------------------------------------
void grapher::ActorConvertorIntFloat::Destroy_ea13a1b40(grapher::ActorConvertorIntFloat::Self *self)
{
  grapher::ActorConvertorIntFloat::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorConvertorIntFloat::Init  (binary VA: 0x13a29c0)
// Original: grapher::ActorConvertorIntFloat::Init
// ----------------------------------------------------------------------------
int grapher::ActorConvertorIntFloat::Init(grapher::ActorConvertorIntFloat::Self *self)
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
  int result;
  void *v13;
  typedef void *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[4];
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
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v18)) > _g4_s4 ? (36u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v20)) > _g4_s6 ? (56u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v21)) > _g4_s7 ? (72u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v22)) > _g4_s8 ? (88u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v23)) > _g4_s9 ? (104u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v24)) > _g4_s10 ? (120u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (136u + sizeof(_g4_t_v25)) > _g4_s11 ? (136u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v26)) > _g4_s12 ? (144u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (148u + sizeof(_g4_t_v27)) > _g4_s13 ? (148u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (152u + sizeof(_g4_t_v28)) > _g4_s14 ? (152u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v29)) > _g4_s15 ? (156u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (160u + sizeof(_g4_t_v30)) > _g4_s16 ? (160u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (164u + sizeof(_g4_t_v31)) > _g4_s17 ? (164u + sizeof(_g4_t_v31)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 136u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 144u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 148u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 152u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 156u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 160u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 164u);

  grapher::ActorBase::SetArraySize(self, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Convert Int to Float", (int)(uintptr_t)(&v17));
  grapher::ActorBase::SetDisplayName(self, &v26);
  v1 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddPin(self, 0, &v27, 1, -1);
  v2 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Out", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddPin(self, 1, &v28, 0, -1);
  v3 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "In", (int)(uintptr_t)(&v17) + 3);
  v14 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorConvertor.cpp"), 32);
  grapher::ActorVariable::Construct(v14, v20, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "In", (int)(uintptr_t)(&v18));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v29), v14, 1, 1, (int)(uintptr_t)(v21), 1);
  v4 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v21[0] - 12);
  if ( (uint32_t *)(v21[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Converted variable", (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Float Result", (int)(uintptr_t)(&v18) + 2);
  v15 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorConvertor.cpp"), 33);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v15), (int)(uintptr_t)(v22), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Float Result", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(&v30), v15, 1, 1, (int)(uintptr_t)(v23), 2);
  v7 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Converted variable", (int)(uintptr_t)(&v19) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Double Result", (int)(uintptr_t)(&v19) + 1);
  v16 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorConvertor.cpp"), 34);
  grapher::ActorVariable::Construct(v16, v24, 3, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Double Result", (int)(uintptr_t)(&v19) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 2, (int)(uintptr_t)(v31), v16, 1, 0, (int)(uintptr_t)(v25), 2);
  v10 = (void *)(v31[0] - 12);
  if ( (uint32_t *)(v31[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  result = v25[0];
  v13 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v13); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13a3020 (size: 173 bytes)
// Symbol:    _ZN7grapher22ActorConvertorIntFloatC1Ej
// Demangled: grapher::ActorConvertorIntFloat::ActorConvertorIntFloat(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher22ActorConvertorIntFloatC2Ej'
void (**grapher::ActorConvertorIntFloat::ActorConvertorIntFloat(
        grapher::ActorConvertorIntFloat::Self *self,
        unsigned int a2))(grapher::ActorConvertorIntFloat::Self * self)
{
  void *v2;
  uint16_t v4[3];

  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094268);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "Convertors", (int)(uintptr_t)(v4));
  grapher::ActorBase::SetCategoryName(self, &v4[1]);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094168);
  return (void (**)(grapher::ActorConvertorIntFloat::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094168));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorConvertorIntFloat::Event  (binary VA: 0x13a32e0)
// Original: grapher::ActorConvertorIntFloat::Event
// ----------------------------------------------------------------------------
int grapher::ActorConvertorIntFloat::Event(grapher::ActorConvertorIntFloat::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorVariable::Self *Variable;
  uint32_t *v5;
  int i;
  grapher::ActorVariable::Self *v7;
  grapher::HolderT<float> *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int j;
  grapher::ActorVariable::Self *v14;
  grapher::HolderT<double> *v15;
  int v16;
  int v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef grapher::ActorContext::Self *_g4_t_v24;
  typedef grapher::ActorContext::Self *_g4_t_v25;
  typedef grapher::ActorContext::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef grapher::ActorContext::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef double _g4_t_v31;
  typedef void *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v24)) > _g4_s5 ? (24u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v26)) > _g4_s7 ? (24u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v27)) > _g4_s8 ? (28u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v28)) > _g4_s9 ? (28u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v29)) > _g4_s10 ? (32u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v30)) > _g4_s11 ? (36u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v31)) > _g4_s12 ? (40u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v32)) > _g4_s13 ? (52u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v33)) > _g4_s14 ? (56u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v34)) > _g4_s15 ? (60u + sizeof(_g4_t_v34)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);

  result = a2;
  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    v28 = sub_837200(
            (int)(uintptr_t)(self),
            Variable,
            a3,
            v19,
            v20,
            v21,
            (int)(uintptr_t)(v24),
            v27,
            v29,
            v30,
            SLODWORD(v31),
            (grapher::ActorContext::Self *)HIDWORD(v31));
    v25 = a3;
    *(float *)&v31 = (float)(int)(uintptr_t)(v28);
    if ( a3 == nullptr )
    {
      v25 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v32 = nullptr;
    v33 = 0;
    v34 = 0;
    grapher::ActorBase::GetVariables(self, 1, (int)(uintptr_t)(&v32));
    v5 = (uint32_t *)(v32);
    v22 = (v33 - (int)(uintptr_t)(v32)) >> 2;
    if ( v22 != 0 )
    {
      for ( i = 0; i != v22; ++i )
      {
        v7 = (grapher::ActorVariable::Self *)v5[i];
        if ( v7 != nullptr )
        {
          v8 = (grapher::HolderT<float> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v8 = (uint32_t)(uintptr_t)(&off_205C4C8);
          grapher::HolderT_float_id_458ea9::From(v8, (const float *)&v31);
          v9 = *((uint32_t *)v7 + 3);
          if ( v9 != 0 )
            *(uint8_t *)(v9 + 20) = 0;
          v10 = G4_VCALL<int>(v8, 48);
          v11 = *((uint32_t *)v7 + 1);
          *((uint32_t *)v7 + 1) = v10;
          if ( v11 != 0 )
            G4_VCALL<void>(v11, 44);
          G4_VCALL<void>(v8, 44);
          grapher::ActorContext::SaveAVar(v25, v7);
          v5 = (uint32_t *)(v32);
        }
      }
    }
    if ( v5 != nullptr )
      opDelete(v5);
    v26 = a3;
    v31 = (double)(int)(uintptr_t)(v28);
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
    v32 = nullptr;
    v33 = 0;
    v34 = 0;
    grapher::ActorBase::GetVariables(self, 2, (int)(uintptr_t)(&v32));
    v12 = (uint32_t *)(v32);
    v23 = (v33 - (int)(uintptr_t)(v32)) >> 2;
    if ( v23 != 0 )
    {
      for ( j = 0; j != v23; ++j )
      {
        v14 = (grapher::ActorVariable::Self *)v12[j];
        if ( v14 != nullptr )
        {
          v15 = (grapher::HolderT<double> *)gll_operator_new(
                                              0xCu,
                                              (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                              102);
          *(uint32_t *)v15 = (uint32_t)(uintptr_t)(&off_205C488);
          grapher::HolderT_double_id_90764b::From(v15, &v31);
          v16 = *((uint32_t *)v14 + 3);
          if ( v16 != 0 )
            *(uint8_t *)(v16 + 20) = 0;
          v17 = G4_VCALL<int>(v15, 48);
          v18 = *((uint32_t *)v14 + 1);
          *((uint32_t *)v14 + 1) = v17;
          if ( v18 != 0 )
            G4_VCALL<void>(v18, 44);
          G4_VCALL<void>(v15, 44);
          grapher::ActorContext::SaveAVar(v26, v14);
          v12 = (uint32_t *)(v32);
        }
      }
    }
    if ( v12 != nullptr )
      opDelete(v12);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 1, a3));
  }
  return result;
}


