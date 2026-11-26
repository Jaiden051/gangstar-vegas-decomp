#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorEnd.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorEnd::Destroy  (binary VA: 0x13a6c30)
// Original: grapher::ActorEnd::~ActorEnd
// ----------------------------------------------------------------------------
void grapher::ActorEnd::Destroy(grapher::ActorEnd::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094308);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorEnd::Destroy_ea13a6c60  (binary VA: 0x13a6c60)
// Original: grapher::ActorEnd::~ActorEnd
// ----------------------------------------------------------------------------
void grapher::ActorEnd::Destroy_ea13a6c60(grapher::ActorEnd::Self *self)
{
  grapher::ActorEnd::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorEnd::Init  (binary VA: 0x13a6ca0)
// Original: grapher::ActorEnd::Init
// ----------------------------------------------------------------------------
int grapher::ActorEnd::Init(grapher::ActorEnd::Self *self)
{
  void *v1;
  void *v2;
  void *v3;
  uint32_t *v4;
  void *v5;
  void *v6;
  void *v7;
  int result;
  void *v9;
  typedef int *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  typedef int _g4_t_v18[4];
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v13)) > _g4_s3 ? (46u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v15)) > _g4_s5 ? (52u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v16)) > _g4_s6 ? (56u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v17)) > _g4_s7 ? (60u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v18)) > _g4_s8 ? (76u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v19)) > _g4_s9 ? (92u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v20)) > _g4_s10 ? (108u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v21)) > _g4_s11 ? (124u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v22)) > _g4_s12 ? (128u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v23)) > _g4_s13 ? (132u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v24)) > _g4_s14 ? (136u + sizeof(_g4_t_v24)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 46u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 108u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 124u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 128u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 132u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 136u);

  grapher::ActorBase::SetArraySize(self, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "End", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(self, &v21);
  v1 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::SetCategoryName(self, &v22);
  v2 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "In", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddPin(self, 0, &v23, 1, -1);
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Script Name", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 1);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v4;
  grapher::HolderT_string_e830be::From(v4, v17);
  v19 = v11;
  v12 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorEnd.cpp"), 27);
  grapher::ActorVariable::Construct(v12, v18, 4, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Script Name", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(v24), v12, 1, 0, (int)(uintptr_t)(v20), 1);
  v5 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v10 = &v16;
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44, v10);
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
  result = v20[0];
  v9 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v9); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13a7060 (size: 67 bytes)
// Symbol:    _ZN7grapher8ActorEndC1Ej
// Demangled: grapher::ActorEnd::ActorEnd(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher8ActorEndC2Ej'
void (**grapher::ActorEnd::ActorEnd(
        grapher::ActorEnd::Self *self,
        unsigned int a2))(grapher::ActorEnd::Self * self)
{
  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094308);
  return (void (**)(grapher::ActorEnd::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094308));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorEnd::Event  (binary VA: 0x13a70b0)
// Original: grapher::ActorEnd::Event
// ----------------------------------------------------------------------------
char * grapher::ActorEnd::Event(grapher::ActorEnd::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  void *v6;
  void *v7;
  const char *v8;
  char *result;
  char *v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef g4_cxa_guard_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21[4];
  typedef uint32_t _g4_t_v22[3];
  typedef int _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v16)) > _g4_s4 ? (12u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v17)) > _g4_s5 ? (16u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v18)) > _g4_s6 ? (20u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v19)) > _g4_s7 ? (24u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v20)) > _g4_s8 ? (28u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v21)) > _g4_s9 ? (32u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v22)) > _g4_s10 ? (48u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v23)) > _g4_s11 ? (60u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  v23[3] = (int)(uintptr_t)(&self);
  v3 = (grapher::ActorBase::Self *)(self);
  v4 = a3;
  grapher::ActorBase::FireEvent(self, a2, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
  sub_837C70(v22, (int)(uintptr_t)(v3), Variable, v4, v12, v13, (int)(uintptr_t)(v22), v15, v17, v18, v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "END_", (int)(uintptr_t)(&v20));
  g4_std::string::construct_copy(v21, v23);
  g4_std::string::append_str(v21, v14);
  v6 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = v21[0];
  if ( byte_20D5B50 == 0 )
  {
    v16 = v21[0];
    v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
    v8 = v16;
    if ( v11 != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      v8 = v16;
    }
  }
  grapher::ActorManager::FireManualEvent((grapher::ActorManager::Self *)&unk_20D5B60, v8, v4);
  result = v21[0];
  v10 = v21[0] - 12;
  if ( (uint32_t *)v21[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v21[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v10), (char *)0);
  }
  return result;
}


