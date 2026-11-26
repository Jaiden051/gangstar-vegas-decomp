#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorSwitchSwitch.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitchSwitch::Destroy  (binary VA: 0x13b2740)
// Original: grapher::ActorSwitchSwitch::~ActorSwitchSwitch
// ----------------------------------------------------------------------------
void grapher::ActorSwitchSwitch::Destroy(grapher::ActorSwitchSwitch::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B48);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitchSwitch::Destroy_ea13b2770  (binary VA: 0x13b2770)
// Original: grapher::ActorSwitchSwitch::~ActorSwitchSwitch
// ----------------------------------------------------------------------------
void grapher::ActorSwitchSwitch::Destroy_ea13b2770(grapher::ActorSwitchSwitch::Self *self)
{
  grapher::ActorSwitchSwitch::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorSwitchSwitch::Init  (binary VA: 0x13b2820)
// Original: grapher::ActorSwitchSwitch::Init
// ----------------------------------------------------------------------------
int grapher::ActorSwitchSwitch::Init(grapher::ActorSwitchSwitch::Self *self)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Switch", (int)(uintptr_t)(&v22));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v25) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "Index", (int)(uintptr_t)(&v25));
  v20 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorSwitch.cpp"), 84);
  grapher::ActorVariable::Construct(v20, v27, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Index", (int)(uintptr_t)(&v25) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v43), v20, 1, 1, (int)(uintptr_t)(v28), 1);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), (char *)&unk_1B15112, (int)(uintptr_t)(v26) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "Max", (int)(uintptr_t)(&v25) + 3);
  v21 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorSwitch.cpp"), 85);
  grapher::ActorVariable::Construct(v21, v29, 1, 11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v44), "Max", (int)(uintptr_t)(v26));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(v44), v21, 0, 0, (int)(uintptr_t)(v30), 1);
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
// Address:   0x13b3bb0 (size: 173 bytes)
// Symbol:    _ZN7grapher17ActorSwitchSwitchC1Ej
// Demangled: grapher::ActorSwitchSwitch::ActorSwitchSwitch(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher17ActorSwitchSwitchC2Ej'
void (**grapher::ActorSwitchSwitch::ActorSwitchSwitch(
        grapher::ActorSwitchSwitch::Self *self,
        unsigned int a2))(grapher::ActorSwitchSwitch::Self * self)
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094B08);
  return (void (**)(grapher::ActorSwitchSwitch::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094B08));
}


// ============================================================================
// Address:   0x13b3c60 (size: 122 bytes)
// Symbol:    _ZN7grapher17ActorSwitchSwitch5EventEiPNS_12ActorContextE
// Demangled: grapher::ActorSwitchSwitch::Event(int,grapher::ActorContext *)
// ============================================================================

