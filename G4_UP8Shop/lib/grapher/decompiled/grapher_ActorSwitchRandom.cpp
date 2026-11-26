#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSwitchRandom.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitchRandom::Destroy  (binary VA: 0x13b27b0)
// Original: grapher::ActorSwitchRandom::~ActorSwitchRandom
// ----------------------------------------------------------------------------
void grapher::ActorSwitchRandom::Destroy(grapher::ActorSwitchRandom::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B48);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitchRandom::Destroy_ea13b27e0  (binary VA: 0x13b27e0)
// Original: grapher::ActorSwitchRandom::~ActorSwitchRandom
// ----------------------------------------------------------------------------
void grapher::ActorSwitchRandom::Destroy_ea13b27e0(grapher::ActorSwitchRandom::Self *self)
{
  grapher::ActorSwitchRandom::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitchRandom::Init  (binary VA: 0x13b3190)
// Original: grapher::ActorSwitchRandom::Init
// ----------------------------------------------------------------------------
int grapher::ActorSwitchRandom::Init(grapher::ActorSwitchRandom::Self *self)
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
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[5];
  typedef int _g4_t_v27[4];
  typedef int _g4_t_v28[4];
  typedef int _g4_t_v29[4];
  typedef int _g4_t_v30[2];
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
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
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v22)) > _g4_s2 ? (32u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v23)) > _g4_s3 ? (36u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v24)) > _g4_s4 ? (40u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v25)) > _g4_s5 ? (44u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v26)) > _g4_s6 ? (48u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v27)) > _g4_s7 ? (68u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v28)) > _g4_s8 ? (84u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v29)) > _g4_s9 ? (100u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v30)) > _g4_s10 ? (116u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v31)) > _g4_s11 ? (124u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v32)) > _g4_s12 ? (128u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v33)) > _g4_s13 ? (132u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v34)) > _g4_s14 ? (136u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v35)) > _g4_s15 ? (140u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v36)) > _g4_s16 ? (144u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v37)) > _g4_s17 ? (148u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v38)) > _g4_s18 ? (152u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v39)) > _g4_s19 ? (156u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v40)) > _g4_s20 ? (160u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v41)) > _g4_s21 ? (164u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v42)) > _g4_s22 ? (168u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v43)) > _g4_s23 ? (172u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v44)) > _g4_s24 ? (176u + sizeof(_g4_t_v44)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 116u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 132u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 136u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 140u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 148u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 152u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 156u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 160u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 164u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 168u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 172u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 176u);

  grapher::ActorBase::SetArraySize(self, 11, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Switch Random", (int)(uintptr_t)(&v22));
  grapher::ActorBase::SetDisplayName(self, &v31);
  v1 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "In", (int)(uintptr_t)(&v22) + 1);
  grapher::ActorBase::AddPin(self, 0, &v32, 1, -1);
  v2 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "1", (int)(uintptr_t)(&v22) + 2);
  grapher::ActorBase::AddPin(self, 1, &v33, 0, -1);
  v3 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "2", (int)(uintptr_t)(&v22) + 3);
  grapher::ActorBase::AddPin(self, 2, &v34, 0, -1);
  v4 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "3", (int)(uintptr_t)(&v23));
  grapher::ActorBase::AddPin(self, 3, &v35, 0, -1);
  v5 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "4", (int)(uintptr_t)(&v23) + 1);
  grapher::ActorBase::AddPin(self, 4, &v36, 0, -1);
  v6 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), (char *)a56789 /* "56789" */, (int)(uintptr_t)(&v23) + 2);
  grapher::ActorBase::AddPin(self, 5, &v37, 0, -1);
  v7 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), (char *)&a56789 /* "56789" */[1], (int)(uintptr_t)(&v23) + 3);
  grapher::ActorBase::AddPin(self, 6, &v38, 0, -1);
  v8 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), (char *)&a56789 /* "56789" */[2], (int)(uintptr_t)(&v24));
  grapher::ActorBase::AddPin(self, 7, &v39, 0, -1);
  v9 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), (char *)&a56789 /* "56789" */[3], (int)(uintptr_t)(&v24) + 1);
  grapher::ActorBase::AddPin(self, 8, &v40, 0, -1);
  v10 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&a56789 /* "56789" */[4], (int)(uintptr_t)(&v24) + 2);
  grapher::ActorBase::AddPin(self, 9, &v41, 0, -1);
  v11 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "10", (int)(uintptr_t)(&v24) + 3);
  grapher::ActorBase::AddPin(self, 10, &v42, 0, -1);
  v12 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Index", (int)(uintptr_t)(&v25) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "Result Index", (int)(uintptr_t)(&v25));
  v20 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorSwitch.cpp"), 40);
  grapher::ActorVariable::Construct(v20, v27, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Result Index", (int)(uintptr_t)(&v25) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v43), v20, 1, 1, (int)(uintptr_t)(v28), 2);
  v13 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v27[0] - 12);
  if ( (uint32_t *)(v27[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v28[0] - 12);
  if ( (uint32_t *)(v28[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Index", (int)(uintptr_t)(v26) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "Max", (int)(uintptr_t)(&v25) + 3);
  v21 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorSwitch.cpp"), 41);
  grapher::ActorVariable::Construct(v21, v29, 1, 10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v44), "Max", (int)(uintptr_t)(v26));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(v44), v21, 1, 1, (int)(uintptr_t)(v30), 2);
  v16 = (void *)(v44[0] - 12);
  if ( (uint32_t *)(v44[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v29[0] - 12);
  if ( (uint32_t *)(v29[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  result = v30[0];
  v19 = (void *)(v30[0] - 12);
  if ( (uint32_t *)(v30[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v19); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13b3b00 (size: 173 bytes)
// Symbol:    _ZN7grapher17ActorSwitchRandomC1Ej
// Demangled: grapher::ActorSwitchRandom::ActorSwitchRandom(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher17ActorSwitchRandomC2Ej'
void (**grapher::ActorSwitchRandom::ActorSwitchRandom(
        grapher::ActorSwitchRandom::Self *self,
        unsigned int a2))(grapher::ActorSwitchRandom::Self * self)
{
  void *v2;
  uint16_t v4[3];

  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "Switch", (int)(uintptr_t)(v4));
  grapher::ActorBase::SetCategoryName(self, &v4[1]);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094AC8);
  return (void (**)(grapher::ActorSwitchRandom::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094AC8));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitchRandom::Event  (binary VA: 0x13b3ce0)
// Original: grapher::ActorSwitchRandom::Event
// ----------------------------------------------------------------------------
void grapher::ActorSwitchRandom::Event(grapher::ActorSwitchRandom::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v4;
  uint32_t *v5;
  int i;
  grapher::ActorVariable::Self *v7;
  grapher::HolderT<int> *v8;
  int v9;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef grapher::ActorContext::Self *_g4_t_v16;
  typedef grapher::ActorContext::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef grapher::ActorContext::Self *_g4_t_v23;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v20)) > _g4_s8 ? (32u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v21)) > _g4_s9 ? (36u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v22)) > _g4_s10 ? (40u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v23)) > _g4_s11 ? (44u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 1);
    v4 = sub_837200((int)(uintptr_t)(self), Variable, a3, v12, v13, v14, (int)(uintptr_t)(v16), v18, v20, (int)(uintptr_t)(v21), v22, v23);
    v19 = lrand48() % (int)(uintptr_t)(v4) + 1;
    v20 = v19;
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
    v21 = nullptr;
    v22 = 0;
    v23 = nullptr;
    grapher::ActorBase::GetVariables(self, 0, (int)(uintptr_t)(&v21));
    v5 = (uint32_t *)(v21);
    v15 = (v22 - (int)(uintptr_t)(v21)) >> 2;
    if ( v15 != 0 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v7 = (grapher::ActorVariable::Self *)v5[i];
        if ( v7 != nullptr )
        {
          v8 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v8 = (uint32_t)(uintptr_t)(&off_205C508);
          grapher::HolderT_int_id_fe4c74::From(v8, &v20);
          v9 = *((uint32_t *)v7 + 3);
          if ( v9 != 0 )
            *(uint8_t *)(v9 + 20) = 0;
          v10 = G4_VCALL<int>(v8, 48);
          v11 = *((uint32_t *)v7 + 1);
          *((uint32_t *)v7 + 1) = v10;
          if ( v11 != 0 )
            G4_VCALL<void>(v11, 44);
          G4_VCALL<void>(v8, 44);
          grapher::ActorContext::SaveAVar(v17, v7);
          v5 = (uint32_t *)(v21);
        }
      }
    }
    if ( v5 != nullptr )
      opDelete(v5);
    grapher::ActorBase::FireEvent(self, v19, a3);
  }
}


