#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorStart.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorStart::Event  (binary VA: 0x13b1cf0)
// Original: grapher::ActorStart::Event
// ----------------------------------------------------------------------------
int grapher::ActorStart::Event(grapher::ActorStart::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, a2, a3));
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorStart::Destroy  (binary VA: 0x13b1d30)
// Original: grapher::ActorStart::~ActorStart
// ----------------------------------------------------------------------------
void grapher::ActorStart::Destroy(grapher::ActorStart::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094A68);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorStart::Destroy_ea13b1d60  (binary VA: 0x13b1d60)
// Original: grapher::ActorStart::~ActorStart
// ----------------------------------------------------------------------------
void grapher::ActorStart::Destroy_ea13b1d60(grapher::ActorStart::Self *self)
{
  grapher::ActorStart::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorStart::Init  (binary VA: 0x13b1da0)
// Original: grapher::ActorStart::Init
// ----------------------------------------------------------------------------
int grapher::ActorStart::Init(grapher::ActorStart::Self *self)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Start", (int)(uintptr_t)(&v13));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Out", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddPin(self, 0, &v23, 0, -1);
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
  v12 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorStart.cpp"), 28);
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

// ----------------------------------------------------------------------------
// Function: grapher::ActorStart::Loaded  (binary VA: 0x13b2160)
// Original: grapher::ActorStart::Loaded
// ----------------------------------------------------------------------------
int grapher::ActorStart::Loaded(grapher::ActorStart::Self *self)
{
  grapher::ActorVariable::Self *Variable;
  int v2;
  int v3;
  char *v4;
  void *v5;
  int result;
  void *v7;
  int v8;
  int v9;
  uint32_t *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  grapher::HolderT<int> *v17;
  char *v18;
  char *v19;
  grapher::HolderT<int> *v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[4];
  typedef int _g4_t_v27[4];
  typedef const char *_g4_t_v28;
  typedef const char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v22)) > _g4_s1 ? (36u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v23)) > _g4_s2 ? (36u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v24)) > _g4_s3 ? (36u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (49u + sizeof(_g4_t_v25)) > _g4_s4 ? (49u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v26)) > _g4_s5 ? (56u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v27)) > _g4_s6 ? (72u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v28)) > _g4_s7 ? (88u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v29)) > _g4_s8 ? (104u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v30)) > _g4_s9 ? (108u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v31)) > _g4_s10 ? (112u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v32)) > _g4_s11 ? (116u + sizeof(_g4_t_v32)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 49u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 116u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  grapher::ActorContext::LoadAVar((grapher::ActorContext::Self *)&unk_20D6720, Variable);
  if ( *((uint32_t *)Variable + 2) == 12 )
  {
    v27[0] = (int)(uintptr_t)(&dword_213B814);
    v12 = *((uint32_t *)Variable + 1);
    if ( v12 != 0 )
      G4_VCALL<void>(v12, 32, v27);
    v13 = sub_1938090((int)(uintptr_t)(v27), "..", 0, 2u);
    if ( v13 == -1 )
    {
      v31 = 0;
      v20 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v20, &v31);
      v26[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v20, 32, v26);
      G4_VCALL<void>(v20, 44);
    }
    else
    {
      v24 = v13;
      sub_193A6F0(&v28, v27, 0, v13);
      if ( (unsigned int)(v24 + 2) > *(uint32_t *)(v27[0] - 12) )
        sub_1900210("basic_string::substr");
      sub_193A6F0(&v29, v27, v24 + 2, -1);
      v14 = atoi(v28);
      v15 = atoi(v29);
      v16 = v15;
      if ( v14 > v15 )
      {
        v16 = v14;
        v14 = v15;
      }
      v32[0] = lrand48() % (v16 - v14 + 1) + v14;
      v17 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v17 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v17, v32);
      v26[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v17, 32, v26);
      G4_VCALL<void>(v17, 44);
      v18 = (char *)(v29 - 12);
      if ( v29 - 12 != (const char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v29 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
      v19 = (char *)(v28 - 12);
      if ( v28 - 12 != (const char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v28 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v19);
      }
    }
    v11 = (char *)(v27[0] - 12);
    if ( (uint32_t *)(v27[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      goto LABEL_20;
    }
    goto LABEL_8;
  }
  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v21) == 0
    && *((uint32_t *)Variable + 2) == 11 )
  {
    v8 = *((uint32_t *)Variable + 1);
    v9 = 0;
    if ( v8 != 0 )
      v9 = (*(int (**)(uint32_t))(*(uint32_t *)v8 + 48))(*((uint32_t *)Variable + 1));
    v29 = (const char *)&dword_213B814;
    if ( v9 != 0 )
    {
      v22 = v9;
      G4_VCALL<void>(v9, 32, &v29);
      G4_VCALL<void>(v22, 44);
    }
    v10 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
    *v10 = (uint32_t)(uintptr_t)(&off_205C408);
    v10[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    v23 = v10;
    grapher::HolderT_string_e830be::From(v10, &v29);
    v26[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    G4_VCALL<void>(v23, 32, v26);
    G4_VCALL<void>(v23, 44);
    v11 = (char *)(v29 - 12);
    if ( v29 - 12 != (const char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v29 - 1, 0xFFFFFFFF) <= 0 )
    {
LABEL_20:
      g4_std::string::Rep::M_destroy(v11);
      v4 = (char *)v26[0];
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v2 = *((uint32_t *)Variable + 1);
  v3 = 0;
  if ( v2 != 0 )
    v3 = G4_VCALL<int>(v2, 48);
  v4 = (char *)&dword_213B814;
  v26[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v3 != 0 )
  {
    G4_VCALL<void>(v3, 32, v26);
    G4_VCALL<void>(v3, 44);
LABEL_8:
    v4 = (char *)v26[0];
  }
LABEL_9:
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), v4, (int)(uintptr_t)(&v25));
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, &v30, self, 0);
  v5 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  result = v26[0];
  v7 = (void *)(v26[0] - 12);
  if ( (uint32_t *)(v26[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
  }
  return result;
}



// ============================================================================
// Address:   0x13b26e0 (size: 67 bytes)
// Symbol:    _ZN7grapher10ActorStartC1Ej
// Demangled: grapher::ActorStart::ActorStart(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher10ActorStartC2Ej'
void (**grapher::ActorStart::ActorStart(
        grapher::ActorStart::Self *self,
        unsigned int a2))(grapher::ActorStart::Self * self)
{
  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094A68);
  return (void (**)(grapher::ActorStart::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094A68));
}
// ----------------------------------------------------------------------------
// Function: grapher::ActorStart::IsStart  (binary VA: 0x13b2730)
// Original: grapher::ActorStart::IsStart
// ----------------------------------------------------------------------------
int grapher::ActorStart::IsStart()
{
  return 1;
}


