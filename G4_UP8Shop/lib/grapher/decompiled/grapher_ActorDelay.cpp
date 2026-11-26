#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorDelay.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorDelay::Destroy  (binary VA: 0x13a4340)
// Original: grapher::ActorDelay::~ActorDelay
// ----------------------------------------------------------------------------
void grapher::ActorDelay::Destroy(grapher::ActorDelay::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20942A8);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDelay::Destroy_ea13a4370  (binary VA: 0x13a4370)
// Original: grapher::ActorDelay::~ActorDelay
// ----------------------------------------------------------------------------
void grapher::ActorDelay::Destroy_ea13a4370(grapher::ActorDelay::Self *self)
{
  grapher::ActorDelay::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDelay::Init  (binary VA: 0x13a43b0)
// Original: grapher::ActorDelay::Init
// ----------------------------------------------------------------------------
int grapher::ActorDelay::Init(grapher::ActorDelay::Self *self)
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
  int result;
  void *v17;
  typedef void *_g4_t_v18;
  typedef void *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  typedef int _g4_t_v26[4];
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
  typedef int _g4_t_v40[4];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v21)) > _g4_s3 ? (32u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v22)) > _g4_s4 ? (36u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v25)) > _g4_s7 ? (64u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v26)) > _g4_s8 ? (80u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v27)) > _g4_s9 ? (96u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v28)) > _g4_s10 ? (112u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v29)) > _g4_s11 ? (128u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v30)) > _g4_s12 ? (144u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (152u + sizeof(_g4_t_v31)) > _g4_s13 ? (152u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (156u + sizeof(_g4_t_v32)) > _g4_s14 ? (156u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (160u + sizeof(_g4_t_v33)) > _g4_s15 ? (160u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (164u + sizeof(_g4_t_v34)) > _g4_s16 ? (164u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (168u + sizeof(_g4_t_v35)) > _g4_s17 ? (168u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (172u + sizeof(_g4_t_v36)) > _g4_s18 ? (172u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (176u + sizeof(_g4_t_v37)) > _g4_s19 ? (176u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (180u + sizeof(_g4_t_v38)) > _g4_s20 ? (180u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (184u + sizeof(_g4_t_v39)) > _g4_s21 ? (184u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (188u + sizeof(_g4_t_v40)) > _g4_s22 ? (188u + sizeof(_g4_t_v40)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 144u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 152u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 156u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 160u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 164u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 168u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 172u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 176u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 180u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 184u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 188u);

  grapher::ActorBase::SetArraySize(self, 5, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Delay (%Delay) [C]", (int)(uintptr_t)(&v21));
  grapher::ActorBase::SetDisplayName(self, &v31);
  v1 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Timing", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::SetCategoryName(self, &v32);
  v2 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Start", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddPin(self, 0, &v33, 1, -1);
  v3 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Pause", (int)(uintptr_t)(&v21) + 3);
  grapher::ActorBase::AddPin(self, 1, &v34, 1, -1);
  v4 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Stop", (int)(uintptr_t)(&v22));
  grapher::ActorBase::AddPin(self, 2, &v35, 1, -1);
  v5 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v22) + 1);
  grapher::ActorBase::AddPin(self, 3, &v36, 0, -1);
  v6 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Delay", (int)(uintptr_t)(&v22) + 2);
  grapher::ActorBase::AddPin(self, 4, &v37, 0, -1);
  v7 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v23) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Delay (ms)", (int)(uintptr_t)(&v22) + 3);
  v18 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorDelay.cpp"), 40);
  grapher::ActorVariable::Construct(v18, v25, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Delay", (int)(uintptr_t)(&v23));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(&v38), v18, 1, 1, (int)(uintptr_t)(v26), 1);
  v8 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v26[0] - 12);
  if ( (uint32_t *)(v26[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Elapsed time", (int)(uintptr_t)(&v24));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "Elapsed (ms)", (int)(uintptr_t)(&v23) + 2);
  v19 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorDelay.cpp"), 41);
  grapher::ActorVariable::Construct(v19, v27, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Elapsed", (int)(uintptr_t)(&v23) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 1, (int)(uintptr_t)(&v39), v19, 1, 0, (int)(uintptr_t)(v28), 2);
  v11 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v27[0] - 12);
  if ( (uint32_t *)(v27[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v28[0] - 12);
  if ( (uint32_t *)(v28[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "Start will Restart", (int)(uintptr_t)(&v24) + 1);
  v20 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorDelay.cpp"), 42);
  grapher::ActorVariable::Construct(v20, v29, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v40), "Start will restart", (int)(uintptr_t)(&v24) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 2, (int)(uintptr_t)(v40), v20, 0, 0, (int)(uintptr_t)(v30), 1);
  v14 = (void *)(v40[0] - 12);
  if ( (uint32_t *)(v40[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v29[0] - 12);
  if ( (uint32_t *)(v29[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  result = v30[0];
  v17 = (void *)(v30[0] - 12);
  if ( (uint32_t *)(v30[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v17); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDelay::Update  (binary VA: 0x13a5160)
// Original: grapher::ActorDelay::Update
// ----------------------------------------------------------------------------
int * grapher::ActorDelay::Update(grapher::ActorDelay::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  char *v3;
  char *v4;
  char *v5;
  grapher::ActorDelay::Self *v6;
  unsigned int v7;
  char *v8;
  char *v9;
  grapher::ActorDelay::Self *v10;
  unsigned int v11;
  char *v12;
  char *v13;
  int *result;
  grapher::ActorDelay::Self *v15;
  int v16;
  bool v17;
  int v18;
  uint32_t *v19;
  int i;
  grapher::ActorVariable::Self *v21;
  grapher::HolderT<int> *v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  char *v27;
  uint32_t *v28;
  char *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  char *v33;
  char *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  char *v43;
  char *v44;
  int v45;
  char *v46;
  char *v47;
  uint32_t *v48;
  char *v49;
  char *v50;
  typedef g4_cxa_guard_t *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55[3];
  typedef int _g4_t_v56;
  typedef unsigned int _g4_t_v57[2];
  typedef unsigned int _g4_t_v58[2];
  typedef unsigned int _g4_t_v59[2];
  typedef unsigned int _g4_t_v60[2];
  typedef unsigned int _g4_t_v61[2];
  typedef void *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v51)) > _g4_s0 ? (12u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v52)) > _g4_s1 ? (16u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v53)) > _g4_s2 ? (20u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v54)) > _g4_s3 ? (24u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v55)) > _g4_s4 ? (28u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v56)) > _g4_s5 ? (40u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v57)) > _g4_s6 ? (44u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v58)) > _g4_s7 ? (52u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v59)) > _g4_s8 ? (60u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v60)) > _g4_s9 ? (68u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v61)) > _g4_s10 ? (76u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v62)) > _g4_s11 ? (84u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v63)) > _g4_s12 ? (88u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v64)) > _g4_s13 ? (92u + sizeof(_g4_t_v64)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 92u);

  v3 = (char *)self + 56;
  v52 = (char *)a3 + 8;
  v4 = *((char **)a3 + 3);
  if ( v4 == nullptr )
    goto LABEL_135;
  v5 = (char *)a3 + 8;
  do
  {
    while ( (unsigned int)(uintptr_t)(v3) <= *((uint32_t *)v4 + 4) )
    {
      v5 = v4;
      v4 = *((char **)v4 + 2);
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = *((char **)v4 + 3);
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( v52 == v5 || (unsigned int)(uintptr_t)(v3) < *((uint32_t *)v5 + 4) )
  {
LABEL_135:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v40 = (uint32_t *)dword_20D672C;
    v41 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v3) <= v40[4] )
        {
          v41 = v40;
          v40 = (uint32_t *)v40[2];
        }
        else
        {
          v40 = (uint32_t *)v40[3];
        }
      }
      while ( v40 != nullptr );
      if ( v41 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v3) < v41[4] )
        v41 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)self + 14) = *(uint32_t *)(v41[5] + 4);
    v42 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    v43 = (char *)a3 + 8;
    *v42 = (uint32_t)(uintptr_t)(&off_205CD10);
    v42[1] = *((uint32_t *)self + 14);
    v44 = *((char **)a3 + 3);
    if ( v44 == nullptr )
      goto LABEL_111;
    do
    {
      if ( (unsigned int)(uintptr_t)(v3) <= *((uint32_t *)v44 + 4) )
      {
        v43 = v44;
        v44 = *((char **)v44 + 2);
      }
      else
      {
        v44 = *((char **)v44 + 3);
      }
    }
    while ( v44 != nullptr );
    if ( v52 == v43 || (unsigned int)(uintptr_t)(v3) < *((uint32_t *)v43 + 4) )
    {
LABEL_111:
      v57[0] = (unsigned int)(uintptr_t)(self) + 56;
      v57[1] = 0;
      sub_13A4C00(v55, (uint32_t *)a3 + 1, v43, v57);
      v43 = (char *)v55[0];
    }
    *((uint32_t *)v43 + 5) = (uint32_t)(uintptr_t)(v42);
    v6 = self;
  }
  else
  {
    v6 = self;
    *((uint32_t *)self + 14) = *(uint32_t *)(*((uint32_t *)v5 + 5) + 4);
  }
  v7 = (unsigned int)(uintptr_t)(v6) + 52;
  v8 = *((char **)a3 + 3);
  if ( v8 == nullptr )
    goto LABEL_137;
  v9 = (char *)a3 + 8;
  do
  {
    while ( v7 <= *((uint32_t *)v8 + 4) )
    {
      v9 = v8;
      v8 = *((char **)v8 + 2);
      if ( v8 == nullptr )
        goto LABEL_14;
    }
    v8 = *((char **)v8 + 3);
  }
  while ( v8 != nullptr );
LABEL_14:
  if ( v52 == v9 || v7 < *((uint32_t *)v9 + 4) )
  {
LABEL_137:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v35 = (uint32_t *)dword_20D672C;
    v36 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( v7 <= v35[4] )
        {
          v36 = v35;
          v35 = (uint32_t *)v35[2];
        }
        else
        {
          v35 = (uint32_t *)v35[3];
        }
      }
      while ( v35 != nullptr );
      if ( v36 != (uint32_t *)&unk_20D6728 && v7 < v36[4] )
        v36 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)self + 13) = *(uint32_t *)(v36[5] + 4);
    v37 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    v38 = (char *)a3 + 8;
    *v37 = (uint32_t)(uintptr_t)(&off_205CD10);
    v37[1] = *((uint32_t *)self + 13);
    v39 = *((char **)a3 + 3);
    if ( v39 == nullptr )
      goto LABEL_115;
    do
    {
      if ( v7 <= *((uint32_t *)v39 + 4) )
      {
        v38 = v39;
        v39 = *((char **)v39 + 2);
      }
      else
      {
        v39 = *((char **)v39 + 3);
      }
    }
    while ( v39 != nullptr );
    if ( v52 == v38 || v7 < *((uint32_t *)v38 + 4) )
    {
LABEL_115:
      v58[0] = v7;
      v58[1] = 0;
      sub_13A4C00(v55, (uint32_t *)a3 + 1, v38, v58);
      v38 = (char *)v55[0];
    }
    *((uint32_t *)v38 + 5) = (uint32_t)(uintptr_t)(v37);
    v10 = self;
  }
  else
  {
    v10 = self;
    *((uint32_t *)self + 13) = *(uint32_t *)(*((uint32_t *)v9 + 5) + 4);
  }
  v11 = (unsigned int)(uintptr_t)(v10) + 60;
  v12 = *((char **)a3 + 3);
  if ( v12 == nullptr )
    goto LABEL_133;
  v13 = (char *)a3 + 8;
  do
  {
    while ( v11 <= *((uint32_t *)v12 + 4) )
    {
      v13 = v12;
      v12 = *((char **)v12 + 2);
      if ( v12 == nullptr )
        goto LABEL_22;
    }
    v12 = *((char **)v12 + 3);
  }
  while ( v12 != nullptr );
LABEL_22:
  if ( v52 == v13 || v11 < *((uint32_t *)v13 + 4) )
  {
LABEL_133:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v30 = (uint32_t *)dword_20D672C;
    v31 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( v11 <= v30[4] )
        {
          v31 = v30;
          v30 = (uint32_t *)v30[2];
        }
        else
        {
          v30 = (uint32_t *)v30[3];
        }
      }
      while ( v30 != nullptr );
      if ( v31 != (uint32_t *)&unk_20D6728 && v11 < v31[4] )
        v31 = (uint32_t *)(&unk_20D6728);
    }
    *((uint8_t *)self + 60) = *(uint8_t *)(v31[5] + 4);
    v32 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v32 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v32 + 4) = *((uint8_t *)self + 60);
    v33 = *((char **)a3 + 3);
    v34 = (char *)a3 + 8;
    if ( v33 == nullptr )
      goto LABEL_119;
    do
    {
      if ( v11 <= *((uint32_t *)v33 + 4) )
      {
        v34 = v33;
        v33 = *((char **)v33 + 2);
      }
      else
      {
        v33 = *((char **)v33 + 3);
      }
    }
    while ( v33 != nullptr );
    if ( v52 == v34 || v11 < *((uint32_t *)v34 + 4) )
    {
LABEL_119:
      v59[0] = v11;
      v51 = (g4_cxa_guard_t *)v32;
      v59[1] = 0;
      sub_13A4C00(v55, (uint32_t *)a3 + 1, v34, v59);
      v34 = (char *)v55[0];
      v32 = (int)(uintptr_t)(v51);
    }
    *((uint32_t *)v34 + 5) = v32;
    result = (int *)*((uint8_t *)self + 60);
  }
  else
  {
    result = (int *)*(uint8_t *)(*((uint32_t *)v13 + 5) + 4);
    *((uint8_t *)self + 60) = (uint8_t)(uintptr_t)result;
  }
  if ( (uint8_t)(uintptr_t)result != 0 )
  {
    v15 = self;
    v16 = *((uint32_t *)self + 13) - a2;
    v17 = *((uint32_t *)self + 13) == a2;
    *((uint32_t *)self + 13) = v16;
    if ( v16 < 0 || v17 )
    {
      v45 = *(uint32_t *)self;
      *((uint32_t *)self + 14) = 0;
      *((uint32_t *)self + 13) = 0;
      (*(void (**)(grapher::ActorDelay::Self *, int, grapher::ActorContext::Self *))(v45 + 36))(self, 2, a3);
      grapher::ActorBase::FireEvent(self, 4, a3);
      v46 = *((char **)a3 + 3);
      if ( v46 == nullptr )
        goto LABEL_103;
      v47 = (char *)a3 + 8;
      do
      {
        if ( (unsigned int)(uintptr_t)(v3) <= *((uint32_t *)v46 + 4) )
        {
          v47 = v46;
          v46 = *((char **)v46 + 2);
        }
        else
        {
          v46 = *((char **)v46 + 3);
        }
      }
      while ( v46 != nullptr );
      if ( v52 == v47 || (unsigned int)(uintptr_t)(v3) < *((uint32_t *)v47 + 4) )
      {
LABEL_103:
        v48 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        v49 = (char *)a3 + 8;
        *v48 = (uint32_t)(uintptr_t)(&off_205CD10);
        v48[1] = *((uint32_t *)self + 14);
        v50 = *((char **)a3 + 3);
        if ( v50 == nullptr )
          goto LABEL_141;
        do
        {
          if ( (unsigned int)(uintptr_t)(v3) <= *((uint32_t *)v50 + 4) )
          {
            v49 = v50;
            v50 = *((char **)v50 + 2);
          }
          else
          {
            v50 = *((char **)v50 + 3);
          }
        }
        while ( v50 != nullptr );
        if ( v52 == v49 || (unsigned int)(uintptr_t)(v3) < *((uint32_t *)v49 + 4) )
        {
LABEL_141:
          v60[0] = (unsigned int)(uintptr_t)(self) + 56;
          v60[1] = 0;
          sub_13A4C00(v55, (uint32_t *)a3 + 1, v49, v60);
          v49 = (char *)v55[0];
        }
        v15 = self;
        *((uint32_t *)v49 + 5) = (uint32_t)(uintptr_t)(v48);
        v16 = *((uint32_t *)self + 13);
      }
      else
      {
        v15 = self;
        *(uint32_t *)(*((uint32_t *)v47 + 5) + 4) = *((uint32_t *)self + 14);
        v16 = *((uint32_t *)self + 13);
      }
    }
    v18 = *((uint32_t *)v15 + 14);
    v62 = nullptr;
    v63 = 0;
    v56 = v18 - v16;
    v64 = 0;
    grapher::ActorBase::GetVariables(v15, 1, (int)(uintptr_t)(&v62));
    v19 = (uint32_t *)(v62);
    v53 = (v63 - (int)(uintptr_t)(v62)) >> 2;
    if ( v53 != 0 )
    {
      v54 = v7;
      for ( i = 0; i != v53; ++i )
      {
        v21 = (grapher::ActorVariable::Self *)v19[i];
        if ( v21 != nullptr )
        {
          v22 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
          *(uint32_t *)v22 = (uint32_t)(uintptr_t)(&off_205C508);
          grapher::HolderT_int_id_fe4c74::From(v22, &v56);
          v23 = *((uint32_t *)v21 + 3);
          if ( v23 != 0 )
            *(uint8_t *)(v23 + 20) = 0;
          v24 = G4_VCALL<int>(v22, 48);
          v25 = *((uint32_t *)v21 + 1);
          *((uint32_t *)v21 + 1) = v24;
          if ( v25 != 0 )
            G4_VCALL<void>(v25, 44);
          G4_VCALL<void>(v22, 44);
          grapher::ActorContext::SaveAVar(a3, v21);
          v19 = (uint32_t *)(v62);
        }
      }
      v7 = v54;
    }
    if ( v19 != nullptr )
      opDelete(v19);
    v26 = *((char **)a3 + 3);
    if ( v26 != nullptr )
    {
      v27 = (char *)a3 + 8;
      do
      {
        while ( v7 <= *((uint32_t *)v26 + 4) )
        {
          v27 = v26;
          v26 = *((char **)v26 + 2);
          if ( v26 == nullptr )
            goto LABEL_44;
        }
        v26 = *((char **)v26 + 3);
      }
      while ( v26 != nullptr );
LABEL_44:
      if ( v52 != v27 && v7 >= *((uint32_t *)v27 + 4) )
      {
        result = *((int **)v27 + 5);
        result[1] = *((uint32_t *)self + 13);
        return result;
      }
    }
    v28 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    v29 = (char *)a3 + 8;
    *v28 = (uint32_t)(uintptr_t)(&off_205CD10);
    v28[1] = *((uint32_t *)self + 13);
    result = *((int **)a3 + 3);
    if ( result != nullptr )
    {
      do
      {
        if ( v7 <= result[4] )
        {
          v29 = (char *)result;
          result = (int *)result[2];
        }
        else
        {
          result = (int *)result[3];
        }
      }
      while ( result != nullptr );
      if ( v52 != v29 )
      {
        if ( v7 >= *((uint32_t *)v29 + 4) )
        {
LABEL_56:
          *((uint32_t *)v29 + 5) = (uint32_t)(uintptr_t)(v28);
          return result;
        }
        v52 = v29;
      }
    }
    v61[0] = v7;
    v61[1] = 0;
    result = sub_13A4C00(v55, (uint32_t *)a3 + 1, v52, v61);
    v29 = (char *)v55[0];
    goto LABEL_56;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDelay::Construct  (binary VA: 0x13a5a90)
// Original: grapher::ActorDelay::ActorDelay
// ----------------------------------------------------------------------------
grapher::ActorDelay::Self * grapher::ActorDelay::Construct(grapher::ActorDelay::Self *self, unsigned int a2)
{
  char *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  char *v18;
  uint32_t *v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  grapher::ActorDelay::Self *result;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36[3];
  typedef unsigned int _g4_t_v37[2];
  typedef unsigned int _g4_t_v38[2];
  typedef unsigned int _g4_t_v39[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v28)) > _g4_s3 ? (12u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v29)) > _g4_s4 ? (12u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v30)) > _g4_s5 ? (12u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v31)) > _g4_s6 ? (12u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v32)) > _g4_s7 ? (12u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v33)) > _g4_s8 ? (12u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v34)) > _g4_s9 ? (16u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v35)) > _g4_s10 ? (16u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v36)) > _g4_s11 ? (28u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v37)) > _g4_s12 ? (40u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v38)) > _g4_s13 ? (48u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v39)) > _g4_s14 ? (56u + sizeof(_g4_t_v39)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);

  grapher::ActorBase::Construct(self, a2);
  *((uint32_t *)self + 13) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20942A8);
  *((uint32_t *)self + 14) = 0;
  *((uint8_t *)self + 60) = 0;
  v2 = (char *)self + 56;
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v3 = (uint32_t *)dword_20D672C;
  if ( dword_20D672C == 0 )
    goto LABEL_56;
  v4 = (uint32_t *)(&unk_20D6728);
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= v3[4] )
    {
      v4 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_7;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_7:
  if ( v4 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v2) < v4[4] )
  {
LABEL_56:
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
  }
  else
  {
    v25 = v4;
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
    v5[1] = 0;
    v6 = v25[5];
    if ( v6 != 0 )
    {
      v26 = v5;
      G4_VCALL<void>(v6, 4);
      v5 = v26;
    }
  }
  v7 = (uint32_t *)dword_20D672C;
  v8 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_63;
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= v7[4] )
    {
      v8 = v7;
      v7 = (uint32_t *)v7[2];
      if ( v7 == nullptr )
        goto LABEL_16;
    }
    v7 = (uint32_t *)v7[3];
  }
  while ( v7 != nullptr );
LABEL_16:
  if ( v8 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v2) < v8[4] )
  {
LABEL_63:
    v32 = v5;
    v37[0] = (unsigned int)(uintptr_t)(self) + 56;
    v37[1] = 0;
    sub_13A4C00(v36, &dword_20D6724, v8, v37);
    v8 = (uint32_t *)v36[0];
    v5 = v32;
  }
  v8[5] = (uint32_t)(uintptr_t)(v5);
  v9 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  v34 = v9;
  v10 = (char *)self + 52;
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v11 = (uint32_t *)dword_20D672C;
  if ( dword_20D672C == 0 )
    goto LABEL_55;
  v12 = (uint32_t *)(&unk_20D6728);
  do
  {
    while ( (unsigned int)(uintptr_t)(v10) <= v11[4] )
    {
      v12 = v11;
      v11 = (uint32_t *)v11[2];
      if ( v11 == nullptr )
        goto LABEL_24;
    }
    v11 = (uint32_t *)v11[3];
  }
  while ( v11 != nullptr );
LABEL_24:
  if ( v12 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v10) < v12[4] )
  {
LABEL_55:
    v13 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *v13 = (uint32_t)(uintptr_t)(&off_205CD10);
    v13[1] = v34;
  }
  else
  {
    v27 = v12;
    v13 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *v13 = (uint32_t)(uintptr_t)(&off_205CD10);
    v13[1] = v34;
    v14 = v27[5];
    if ( v14 != 0 )
    {
      v28 = v13;
      G4_VCALL<void>(v14, 4);
      v13 = v28;
    }
  }
  v15 = (uint32_t *)dword_20D672C;
  v16 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_64;
  do
  {
    while ( (unsigned int)(uintptr_t)(v10) <= v15[4] )
    {
      v16 = v15;
      v15 = (uint32_t *)v15[2];
      if ( v15 == nullptr )
        goto LABEL_33;
    }
    v15 = (uint32_t *)v15[3];
  }
  while ( v15 != nullptr );
LABEL_33:
  if ( v16 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v10) < v16[4] )
  {
LABEL_64:
    v33 = v13;
    v38[0] = (unsigned int)(uintptr_t)(self) + 52;
    v38[1] = 0;
    sub_13A4C00(v36, &dword_20D6724, v16, v38);
    v16 = (uint32_t *)v36[0];
    v13 = v33;
  }
  v16[5] = (uint32_t)(uintptr_t)(v13);
  *((uint32_t *)self + 13) = v34;
  v35 = *((uint8_t *)self + 60);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v17 = (uint32_t *)dword_20D672C;
  v18 = (char *)self + 60;
  if ( dword_20D672C == 0 )
    goto LABEL_54;
  v19 = (uint32_t *)(&unk_20D6728);
  do
  {
    while ( v17[4] >= (unsigned int)(uintptr_t)(v18) )
    {
      v19 = v17;
      v17 = (uint32_t *)v17[2];
      if ( v17 == nullptr )
        goto LABEL_41;
    }
    v17 = (uint32_t *)v17[3];
  }
  while ( v17 != nullptr );
LABEL_41:
  if ( v19 == (uint32_t *)&unk_20D6728 || v19[4] > (unsigned int)(uintptr_t)(v18) )
  {
LABEL_54:
    v20 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v20 + 4) = v35;
  }
  else
  {
    v29 = v19;
    v20 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v20 + 4) = v35;
    v21 = v29[5];
    if ( v21 != 0 )
    {
      v30 = v20;
      G4_VCALL<void>(v21, 4);
      v20 = v30;
    }
  }
  v22 = (uint32_t *)dword_20D672C;
  v23 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_52;
  do
  {
    while ( v22[4] >= (unsigned int)(uintptr_t)(v18) )
    {
      v23 = v22;
      v22 = (uint32_t *)v22[2];
      if ( v22 == nullptr )
        goto LABEL_50;
    }
    v22 = (uint32_t *)v22[3];
  }
  while ( v22 != nullptr );
LABEL_50:
  result = (grapher::ActorDelay::Self *)&unk_20D6728;
  if ( v23 == (uint32_t *)&unk_20D6728 || v23[4] > (unsigned int)(uintptr_t)(v18) )
  {
LABEL_52:
    v31 = v20;
    v39[0] = (unsigned int)(uintptr_t)(self) + 60;
    v39[1] = 0;
    result = (grapher::ActorDelay::Self *)sub_13A4C00(v36, &dword_20D6724, v23, v39);
    v23 = (uint32_t *)v36[0];
    v20 = v31;
  }
  v23[5] = v20;
  *((uint8_t *)self + 60) = v35;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorDelay::Event  (binary VA: 0x13a6000)
// Original: grapher::ActorDelay::Event
// ----------------------------------------------------------------------------
int * grapher::ActorDelay::Event(grapher::ActorDelay::Self *self, int *a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorDelay::Self *v3;
  grapher::ActorContext::Self *v4;
  char *v5;
  grapher::ActorContext::Self *v6;
  unsigned int v7;
  grapher::ActorContext::Self *v8;
  grapher::ActorContext::Self *v9;
  unsigned int v10;
  grapher::ActorContext::Self *v11;
  grapher::ActorContext::Self *v12;
  int *result;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  grapher::ActorContext::Self *v18;
  grapher::ActorContext::Self *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  grapher::ActorContext::Self *v23;
  grapher::ActorContext::Self *v24;
  grapher::ActorVariable::Self *Variable;
  char v26;
  grapher::ActorBase::Self *v27;
  grapher::ActorVariable::Self *v28;
  grapher::ActorContext::Self *v29;
  grapher::ActorContext::Self *v30;
  grapher::ActorContext::Self *v31;
  grapher::ActorContext::Self *v32;
  int v33;
  grapher::ActorContext::Self *v34;
  grapher::ActorContext::Self *v35;
  grapher::ActorContext::Self *v36;
  grapher::ActorContext::Self *v37;
  int v38;
  grapher::ActorContext::Self *v39;
  grapher::ActorContext::Self *v40;
  grapher::ActorContext::Self *v41;
  void *v42;
  grapher::ActorContext::Self *v43;
  grapher::ActorContext::Self *v44;
  grapher::ActorContext::Self *v45;
  grapher::ActorContext::Self *v46;
  int v47;
  grapher::ActorContext::Self *v48;
  uint32_t *v49;
  grapher::ActorContext::Self *v50;
  grapher::ActorContext::Self *v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef grapher::ActorBase::Self *_g4_t_v63;
  typedef grapher::ActorBase::Self *_g4_t_v64;
  typedef grapher::ActorBase::Self *_g4_t_v65;
  typedef grapher::ActorBase::Self *_g4_t_v66;
  typedef grapher::ActorBase::Self *_g4_t_v67;
  typedef grapher::ActorBase::Self *_g4_t_v68;
  typedef grapher::ActorBase::Self *_g4_t_v69;
  typedef grapher::ActorBase::Self *_g4_t_v70;
  typedef grapher::ActorBase::Self *_g4_t_v71;
  typedef grapher::ActorBase::Self *_g4_t_v72;
  typedef grapher::ActorBase::Self *_g4_t_v73;
  typedef grapher::ActorBase::Self *_g4_t_v74;
  typedef grapher::ActorBase::Self *_g4_t_v75;
  typedef grapher::ActorBase::Self *_g4_t_v76;
  typedef grapher::ActorBase::Self *_g4_t_v77;
  typedef grapher::ActorBase::Self *_g4_t_v78;
  typedef void *_g4_t_v79;
  typedef void *_g4_t_v80;
  typedef grapher::ActorContext::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef grapher::ActorContext::Self *_g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef grapher::ActorContext::Self *_g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef void *_g4_t_v89;
  typedef grapher::ActorContext::Self *_g4_t_v90[3];
  typedef unsigned int _g4_t_v91[2];
  typedef unsigned int _g4_t_v92[2];
  typedef unsigned int _g4_t_v93[2];
  typedef unsigned int _g4_t_v94[2];
  typedef unsigned int _g4_t_v95[2];
  typedef unsigned int _g4_t_v96[2];
  typedef unsigned int _g4_t_v97[9];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v57)) > _g4_s0 ? (12u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v58)) > _g4_s1 ? (12u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v59)) > _g4_s2 ? (16u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v60)) > _g4_s3 ? (16u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v61)) > _g4_s4 ? (20u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v62)) > _g4_s5 ? (20u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v63)) > _g4_s6 ? (24u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v64)) > _g4_s7 ? (24u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v65)) > _g4_s8 ? (24u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v66)) > _g4_s9 ? (24u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v67)) > _g4_s10 ? (24u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v68)) > _g4_s11 ? (24u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v69)) > _g4_s12 ? (24u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v70)) > _g4_s13 ? (24u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v71)) > _g4_s14 ? (24u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v72)) > _g4_s15 ? (24u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v73)) > _g4_s16 ? (24u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v74)) > _g4_s17 ? (24u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v75)) > _g4_s18 ? (24u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v76)) > _g4_s19 ? (24u + sizeof(_g4_t_v76)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v77)) > _g4_s20 ? (24u + sizeof(_g4_t_v77)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v78)) > _g4_s21 ? (24u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v79)) > _g4_s22 ? (28u + sizeof(_g4_t_v79)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v80)) > _g4_s23 ? (28u + sizeof(_g4_t_v80)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v81)) > _g4_s24 ? (32u + sizeof(_g4_t_v81)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v82)) > _g4_s25 ? (32u + sizeof(_g4_t_v82)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v83)) > _g4_s26 ? (32u + sizeof(_g4_t_v83)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v84)) > _g4_s27 ? (36u + sizeof(_g4_t_v84)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v85)) > _g4_s28 ? (36u + sizeof(_g4_t_v85)) : _g4_s28,
    _g4_s30 = (36u + sizeof(_g4_t_v86)) > _g4_s29 ? (36u + sizeof(_g4_t_v86)) : _g4_s29,
    _g4_s31 = (36u + sizeof(_g4_t_v87)) > _g4_s30 ? (36u + sizeof(_g4_t_v87)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v88)) > _g4_s31 ? (40u + sizeof(_g4_t_v88)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v89)) > _g4_s32 ? (40u + sizeof(_g4_t_v89)) : _g4_s32,
    _g4_s34 = (44u + sizeof(_g4_t_v90)) > _g4_s33 ? (44u + sizeof(_g4_t_v90)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v91)) > _g4_s34 ? (56u + sizeof(_g4_t_v91)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v92)) > _g4_s35 ? (64u + sizeof(_g4_t_v92)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v93)) > _g4_s36 ? (72u + sizeof(_g4_t_v93)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v94)) > _g4_s37 ? (80u + sizeof(_g4_t_v94)) : _g4_s37,
    _g4_s39 = (88u + sizeof(_g4_t_v95)) > _g4_s38 ? (88u + sizeof(_g4_t_v95)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v96)) > _g4_s39 ? (96u + sizeof(_g4_t_v96)) : _g4_s39,
    _g4_s41 = (104u + sizeof(_g4_t_v97)) > _g4_s40 ? (104u + sizeof(_g4_t_v97)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 24u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 24u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 24u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 24u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 24u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 24u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 24u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 28u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 28u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 32u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 36u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 36u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 36u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 40u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 64u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 72u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 80u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 88u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 96u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 104u);

  v3 = self;
  v81 = (grapher::ActorContext::Self *)((char *)a3 + 8);
  v4 = *((grapher::ActorContext::Self **)a3 + 3);
  v5 = (char *)self + 56;
  if ( v4 == nullptr )
    goto LABEL_191;
  v6 = (grapher::ActorContext::Self *)((char *)a3 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v5) <= *((uint32_t *)v4 + 4) )
    {
      v6 = v4;
      v4 = *((grapher::ActorContext::Self **)v4 + 2);
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = *((grapher::ActorContext::Self **)v4 + 3);
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( v81 == v6 || (unsigned int)(uintptr_t)(v5) < *((uint32_t *)v6 + 4) )
  {
LABEL_191:
    if ( byte_20D6700 == 0 )
    {
      v55 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v3 = self;
      if ( v55 != 0 )
      {
        v79 = &unk_20D6720;
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v3 = self;
      }
    }
    v20 = (uint32_t *)dword_20D672C;
    v21 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v5) <= v20[4] )
        {
          v21 = v20;
          v20 = (uint32_t *)v20[2];
        }
        else
        {
          v20 = (uint32_t *)v20[3];
        }
      }
      while ( v20 != nullptr );
      if ( v21 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v5) < v21[4] )
        v21 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)v3 + 14) = *(uint32_t *)(v21[5] + 4);
    v64 = (grapher::ActorBase::Self *)(v3);
    v22 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v22 = (uint32_t)(uintptr_t)(&off_205CD10);
    v3 = (grapher::ActorDelay::Self *)(v64);
    v22[1] = *((uint32_t *)v64 + 14);
    v23 = *((grapher::ActorContext::Self **)a3 + 3);
    v24 = (grapher::ActorContext::Self *)((char *)a3 + 8);
    if ( v23 == nullptr )
      goto LABEL_136;
    do
    {
      if ( (unsigned int)(uintptr_t)(v5) <= *((uint32_t *)v23 + 4) )
      {
        v24 = v23;
        v23 = *((grapher::ActorContext::Self **)v23 + 2);
      }
      else
      {
        v23 = *((grapher::ActorContext::Self **)v23 + 3);
      }
    }
    while ( v23 != nullptr );
    if ( v81 == v24 || (unsigned int)(uintptr_t)(v5) < *((uint32_t *)v24 + 4) )
    {
LABEL_136:
      v91[0] = (unsigned int)(uintptr_t)(self) + 56;
      v91[1] = 0;
      sub_13A4C00((int *)v90, (uint32_t *)a3 + 1, v24, v91);
      v24 = v90[0];
      v3 = (grapher::ActorDelay::Self *)(v64);
    }
    *((uint32_t *)v24 + 5) = (uint32_t)(uintptr_t)(v22);
  }
  else
  {
    *((uint32_t *)self + 14) = *(uint32_t *)(*((uint32_t *)v6 + 5) + 4);
  }
  v7 = (unsigned int)(uintptr_t)(v3) + 52;
  v8 = *((grapher::ActorContext::Self **)a3 + 3);
  if ( v8 == nullptr )
    goto LABEL_192;
  v9 = (grapher::ActorContext::Self *)((char *)a3 + 8);
  do
  {
    while ( v7 <= *((uint32_t *)v8 + 4) )
    {
      v9 = v8;
      v8 = *((grapher::ActorContext::Self **)v8 + 2);
      if ( v8 == nullptr )
        goto LABEL_14;
    }
    v8 = *((grapher::ActorContext::Self **)v8 + 3);
  }
  while ( v8 != nullptr );
LABEL_14:
  if ( v81 == v9 || v7 < *((uint32_t *)v9 + 4) )
  {
LABEL_192:
    if ( byte_20D6700 == 0 )
    {
      v78 = (grapher::ActorBase::Self *)(v3);
      v56 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v3 = (grapher::ActorDelay::Self *)(v78);
      if ( v56 != 0 )
      {
        v79 = &unk_20D6720;
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v3 = (grapher::ActorDelay::Self *)(v78);
      }
    }
    v15 = (uint32_t *)dword_20D672C;
    v16 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( v7 <= v15[4] )
        {
          v16 = v15;
          v15 = (uint32_t *)v15[2];
        }
        else
        {
          v15 = (uint32_t *)v15[3];
        }
      }
      while ( v15 != nullptr );
      if ( v16 != (uint32_t *)&unk_20D6728 && v7 < v16[4] )
        v16 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)v3 + 13) = *(uint32_t *)(v16[5] + 4);
    v63 = (grapher::ActorBase::Self *)(v3);
    v17 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v17 = (uint32_t)(uintptr_t)(&off_205CD10);
    v3 = (grapher::ActorDelay::Self *)(v63);
    v17[1] = *((uint32_t *)v63 + 13);
    v18 = *((grapher::ActorContext::Self **)a3 + 3);
    v19 = (grapher::ActorContext::Self *)((char *)a3 + 8);
    if ( v18 == nullptr )
      goto LABEL_140;
    do
    {
      if ( v7 <= *((uint32_t *)v18 + 4) )
      {
        v19 = v18;
        v18 = *((grapher::ActorContext::Self **)v18 + 2);
      }
      else
      {
        v18 = *((grapher::ActorContext::Self **)v18 + 3);
      }
    }
    while ( v18 != nullptr );
    if ( v81 == v19 || v7 < *((uint32_t *)v19 + 4) )
    {
LABEL_140:
      v84 = (char *)a3 + 4;
      v92[0] = v7;
      v92[1] = 0;
      sub_13A4C00((int *)v90, (uint32_t *)a3 + 1, v19, v92);
      v19 = v90[0];
      v3 = (grapher::ActorDelay::Self *)(v63);
    }
    *((uint32_t *)v19 + 5) = (uint32_t)(uintptr_t)(v17);
  }
  else
  {
    *((uint32_t *)v3 + 13) = *(uint32_t *)(*((uint32_t *)v9 + 5) + 4);
  }
  v10 = (unsigned int)(uintptr_t)(v3) + 60;
  v11 = *((grapher::ActorContext::Self **)a3 + 3);
  if ( v11 == nullptr )
    goto LABEL_193;
  v12 = (grapher::ActorContext::Self *)((char *)a3 + 8);
  do
  {
    while ( v10 <= *((uint32_t *)v11 + 4) )
    {
      v12 = v11;
      v11 = *((grapher::ActorContext::Self **)v11 + 2);
      if ( v11 == nullptr )
        goto LABEL_22;
    }
    v11 = *((grapher::ActorContext::Self **)v11 + 3);
  }
  while ( v11 != nullptr );
LABEL_22:
  if ( v81 == v12 || v10 < *((uint32_t *)v12 + 4) )
  {
LABEL_193:
    if ( byte_20D6700 == 0 )
    {
      v77 = (grapher::ActorBase::Self *)(v3);
      v54 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v3 = (grapher::ActorDelay::Self *)(v77);
      if ( v54 != 0 )
      {
        v79 = &unk_20D6720;
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v3 = (grapher::ActorDelay::Self *)(v77);
      }
    }
    v84 = (char *)dword_20D672C;
    v89 = &unk_20D6728;
    if ( dword_20D672C != 0 )
    {
      v14 = (uint32_t *)dword_20D672C;
      do
      {
        if ( v10 <= v14[4] )
        {
          v89 = v14;
          v14 = (uint32_t *)v14[2];
        }
        else
        {
          v14 = (uint32_t *)v14[3];
        }
      }
      while ( v14 != nullptr );
      v42 = &unk_20D6728;
      if ( v89 != &unk_20D6728 )
      {
        if ( v10 >= *((uint32_t *)v89 + 4) )
          v42 = v89;
        v89 = v42;
      }
    }
    *((uint8_t *)v3 + 60) = *(uint8_t *)(*((uint32_t *)v89 + 5) + 4);
    v72 = (grapher::ActorBase::Self *)(v3);
    v88 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v88 = (uint32_t)(uintptr_t)(&off_206CC10);
    v3 = (grapher::ActorDelay::Self *)(v72);
    *(uint8_t *)(v88 + 4) = *((uint8_t *)v72 + 60);
    v43 = *((grapher::ActorContext::Self **)a3 + 3);
    v44 = (grapher::ActorContext::Self *)((char *)a3 + 8);
    if ( v43 == nullptr )
      goto LABEL_144;
    do
    {
      if ( v10 <= *((uint32_t *)v43 + 4) )
      {
        v44 = v43;
        v43 = *((grapher::ActorContext::Self **)v43 + 2);
      }
      else
      {
        v43 = *((grapher::ActorContext::Self **)v43 + 3);
      }
    }
    while ( v43 != nullptr );
    if ( v81 == v44 || v10 < *((uint32_t *)v44 + 4) )
    {
LABEL_144:
      v84 = (char *)a3 + 4;
      v93[0] = v10;
      v93[1] = 0;
      sub_13A4C00((int *)v90, (uint32_t *)a3 + 1, v44, v93);
      v44 = v90[0];
      v3 = (grapher::ActorDelay::Self *)(v72);
    }
    *((uint32_t *)v44 + 5) = v88;
  }
  else
  {
    *((uint8_t *)v3 + 60) = *(uint8_t *)(*((uint32_t *)v12 + 5) + 4);
  }
  result = a2;
  if ( a2 == nullptr )
  {
    v65 = (grapher::ActorBase::Self *)(v3);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v26 = sub_837730((int)(uintptr_t)(v65), Variable, a3, v57, v59, v61, (int)(uintptr_t)(v65), (int)(uintptr_t)(v79), (int)(uintptr_t)(v81), (int)(uintptr_t)(v84));
    v27 = v66;
    if ( v26 == 0 && *((uint8_t *)v66 + 60) != 0 )
      goto LABEL_75;
    v28 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v66, 0);
    v29 = sub_837200((int)(uintptr_t)(v66), v28, a3, v58, v60, v62, (int)(uintptr_t)(v66), (int)(uintptr_t)(v80), v82, v85, v88, v90[0]);
    v27 = v67;
    v86 = v29;
    *((uint32_t *)v67 + 13) = (uint32_t)(uintptr_t)(v29);
    *((uint32_t *)v67 + 14) = (uint32_t)(uintptr_t)(v29);
    *((uint8_t *)v67 + 60) = 1;
    v30 = *((grapher::ActorContext::Self **)a3 + 3);
    if ( v30 == nullptr )
      goto LABEL_106;
    v31 = v83;
    do
    {
      if ( (unsigned int)(uintptr_t)(v5) <= *((uint32_t *)v30 + 4) )
      {
        v31 = v30;
        v30 = *((grapher::ActorContext::Self **)v30 + 2);
      }
      else
      {
        v30 = *((grapher::ActorContext::Self **)v30 + 3);
      }
    }
    while ( v30 != nullptr );
    if ( v83 == v31 || (unsigned int)(uintptr_t)(v5) < *((uint32_t *)v31 + 4) )
    {
LABEL_106:
      v87 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
      *v87 = (uint32_t)(uintptr_t)(&off_205CD10);
      v27 = v67;
      v87[1] = *((uint32_t *)v67 + 14);
      v40 = *((grapher::ActorContext::Self **)a3 + 3);
      v41 = v83;
      if ( v40 == nullptr )
        goto LABEL_183;
      do
      {
        if ( (unsigned int)(uintptr_t)(v5) <= *((uint32_t *)v40 + 4) )
        {
          v41 = v40;
          v40 = *((grapher::ActorContext::Self **)v40 + 2);
        }
        else
        {
          v40 = *((grapher::ActorContext::Self **)v40 + 3);
        }
      }
      while ( v40 != nullptr );
      if ( v83 == v41 || (unsigned int)(uintptr_t)(v5) < *((uint32_t *)v41 + 4) )
      {
LABEL_183:
        v94[0] = (unsigned int)(uintptr_t)(self) + 56;
        v94[1] = 0;
        sub_13A4C00((int *)v90, (uint32_t *)a3 + 1, v41, v94);
        v41 = v90[0];
        v27 = v67;
      }
      *((uint32_t *)v41 + 5) = (uint32_t)(uintptr_t)(v87);
    }
    else
    {
      *(uint32_t *)(*((uint32_t *)v31 + 5) + 4) = (uint32_t)(uintptr_t)(v86);
    }
    v36 = *((grapher::ActorContext::Self **)a3 + 3);
    if ( v36 == nullptr )
      goto LABEL_160;
    v37 = v83;
    do
    {
      if ( v7 <= *((uint32_t *)v36 + 4) )
      {
        v37 = v36;
        v36 = *((grapher::ActorContext::Self **)v36 + 2);
      }
      else
      {
        v36 = *((grapher::ActorContext::Self **)v36 + 3);
      }
    }
    while ( v36 != nullptr );
    if ( v83 == v37 || v7 < *((uint32_t *)v37 + 4) )
    {
LABEL_160:
      v74 = v27;
      v49 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
      *v49 = (uint32_t)(uintptr_t)(&off_205CD10);
      v27 = v74;
      v49[1] = *((uint32_t *)v74 + 13);
      v50 = *((grapher::ActorContext::Self **)a3 + 3);
      v51 = v83;
      if ( v50 == nullptr )
        goto LABEL_187;
      do
      {
        if ( v7 <= *((uint32_t *)v50 + 4) )
        {
          v51 = v50;
          v50 = *((grapher::ActorContext::Self **)v50 + 2);
        }
        else
        {
          v50 = *((grapher::ActorContext::Self **)v50 + 3);
        }
      }
      while ( v50 != nullptr );
      if ( v83 == v51 || v7 < *((uint32_t *)v51 + 4) )
      {
LABEL_187:
        v95[0] = v7;
        v95[1] = 0;
        sub_13A4C00((int *)v90, (uint32_t *)a3 + 1, v51, v95);
        v51 = v90[0];
        v27 = v74;
      }
      *((uint32_t *)v51 + 5) = (uint32_t)(uintptr_t)(v49);
    }
    else
    {
      *(uint32_t *)(*((uint32_t *)v37 + 5) + 4) = *((uint32_t *)v27 + 13);
    }
    v45 = *((grapher::ActorContext::Self **)a3 + 3);
    if ( v45 != nullptr )
    {
      v46 = v83;
      do
      {
        if ( v10 <= *((uint32_t *)v45 + 4) )
        {
          v46 = v45;
          v45 = *((grapher::ActorContext::Self **)v45 + 2);
        }
        else
        {
          v45 = *((grapher::ActorContext::Self **)v45 + 3);
        }
      }
      while ( v45 != nullptr );
      if ( v83 != v46 && v10 >= *((uint32_t *)v46 + 4) )
      {
        *(uint8_t *)(*((uint32_t *)v46 + 5) + 4) = *((uint8_t *)v27 + 60);
LABEL_75:
        if ( byte_20D5B50 == 0 )
        {
          v69 = v27;
          v33 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
          v27 = v69;
          if ( v33 != 0 )
          {
            grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
            __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
            v27 = v69;
          }
        }
        v68 = v27;
        result = (grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v27, a3), (int *)0);
        v3 = (grapher::ActorDelay::Self *)(v68);
        goto LABEL_28;
      }
    }
    v73 = v27;
    v47 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *(uint32_t *)v47 = (uint32_t)(uintptr_t)(&off_206CC10);
    v27 = v73;
    *(uint8_t *)(v47 + 4) = *((uint8_t *)v73 + 60);
    v48 = *((grapher::ActorContext::Self **)a3 + 3);
    v32 = v83;
    if ( v48 != nullptr )
    {
      do
      {
        if ( v10 <= *((uint32_t *)v48 + 4) )
        {
          v32 = v48;
          v48 = *((grapher::ActorContext::Self **)v48 + 2);
        }
        else
        {
          v48 = *((grapher::ActorContext::Self **)v48 + 3);
        }
      }
      while ( v48 != nullptr );
      if ( v83 != v32 )
      {
        if ( v10 >= *((uint32_t *)v32 + 4) )
        {
LABEL_74:
          *((uint32_t *)v32 + 5) = v47;
          goto LABEL_75;
        }
        v83 = v32;
      }
    }
    v96[0] = v10;
    v96[1] = 0;
    sub_13A4C00((int *)v90, (uint32_t *)a3 + 1, v83, v96);
    v32 = v90[0];
    v27 = v73;
    goto LABEL_74;
  }
  if ( a2 != (int *)((char *)&dword_0 + 1) )
  {
    if ( a2 != (int *)((char *)&dword_0 + 2) )
      goto LABEL_28;
    if ( byte_20D5B50 == 0 )
    {
      v76 = (grapher::ActorBase::Self *)(v3);
      v53 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
      v3 = (grapher::ActorDelay::Self *)(v76);
      if ( v53 != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        v3 = (grapher::ActorDelay::Self *)(v76);
      }
    }
    v71 = (grapher::ActorBase::Self *)(v3);
    grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v3, a3);
    v3 = (grapher::ActorDelay::Self *)(v71);
    *((uint8_t *)v71 + 60) = 0;
    v34 = *((grapher::ActorContext::Self **)a3 + 3);
    if ( v34 != nullptr )
    {
      v35 = (grapher::ActorContext::Self *)((char *)a3 + 8);
      do
      {
        if ( v10 <= *((uint32_t *)v34 + 4) )
        {
          v35 = v34;
          v34 = *((grapher::ActorContext::Self **)v34 + 2);
        }
        else
        {
          v34 = *((grapher::ActorContext::Self **)v34 + 3);
        }
      }
      while ( v34 != nullptr );
      if ( v81 != v35 && v10 >= *((uint32_t *)v35 + 4) )
      {
        result = *((int **)v35 + 5);
        *((uint8_t *)result + 4) = 0;
        goto LABEL_28;
      }
    }
    v38 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *(uint32_t *)v38 = (uint32_t)(uintptr_t)(&off_206CC10);
    v3 = (grapher::ActorDelay::Self *)(v71);
    *(uint8_t *)(v38 + 4) = *((uint8_t *)v71 + 60);
    result = *((int **)a3 + 3);
    v39 = (grapher::ActorContext::Self *)((char *)a3 + 8);
    if ( result != nullptr )
    {
      do
      {
        if ( v10 <= result[4] )
        {
          v39 = (grapher::ActorContext::Self *)result;
          result = (int *)result[2];
        }
        else
        {
          result = (int *)result[3];
        }
      }
      while ( result != nullptr );
      if ( v81 != v39 )
      {
        if ( v10 >= *((uint32_t *)v39 + 4) )
        {
LABEL_180:
          *((uint32_t *)v39 + 5) = v38;
          goto LABEL_28;
        }
        v81 = v39;
      }
    }
    v97[0] = v10;
    v97[1] = 0;
    result = sub_13A4C00((int *)v90, (uint32_t *)a3 + 1, v81, v97);
    v39 = v90[0];
    v3 = (grapher::ActorDelay::Self *)(v71);
    goto LABEL_180;
  }
  if ( byte_20D5B50 == 0 )
  {
    v75 = (grapher::ActorBase::Self *)(v3);
    v52 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
    v3 = (grapher::ActorDelay::Self *)(v75);
    if ( v52 != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      v3 = (grapher::ActorDelay::Self *)(v75);
    }
  }
  v70 = (grapher::ActorBase::Self *)(v3);
  result = (grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v3, a3), (int *)0);
  v3 = (grapher::ActorDelay::Self *)(v70);
LABEL_28:
  if ( *((uint8_t *)v3 + 60) != 0 )
    return (int *)grapher::ActorBase::FireEvent(v3, 3, a3);
  return result;
}


