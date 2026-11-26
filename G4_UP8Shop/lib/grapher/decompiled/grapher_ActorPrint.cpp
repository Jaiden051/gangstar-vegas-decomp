#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorPrint.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorPrint::Destroy  (binary VA: 0x13ae840)
// Original: grapher::ActorPrint::~ActorPrint
// ----------------------------------------------------------------------------
void grapher::ActorPrint::Destroy(grapher::ActorPrint::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094788);
  grapher::ActorBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorPrint::Destroy_ea13ae870  (binary VA: 0x13ae870)
// Original: grapher::ActorPrint::~ActorPrint
// ----------------------------------------------------------------------------
void grapher::ActorPrint::Destroy_ea13ae870(grapher::ActorPrint::Self *self)
{
  grapher::ActorPrint::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorPrint::Event  (binary VA: 0x13ae8b0)
// Original: grapher::ActorPrint::Event
// ----------------------------------------------------------------------------
int grapher::ActorPrint::Event(grapher::ActorPrint::Self *self, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorVariable::Self *Variable;
  void *v5;
  uint32_t v6[4];

  result = a2;
  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(self, 0);
    grapher::ActorContext::LoadAVar(a3, Variable);
    if ( Variable != nullptr )
    {
      grapher::ActorVariable::ToString((grapher::ActorVariable::Self *)v6);
      printf("GRAPHER(Context=%p) : %s\n", a3, v6[0]);
      v5 = (void *)(v6[0] - 12);
      if ( (uint32_t *)(v6[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(self, 1, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorPrint::Init  (binary VA: 0x13ae990)
// Original: grapher::ActorPrint::Init
// ----------------------------------------------------------------------------
int grapher::ActorPrint::Init(grapher::ActorPrint::Self *self)
{
  void *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int result;
  void *v8;
  typedef uint8_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[3];
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16[4];
  typedef int _g4_t_v17[3];
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (46u + sizeof(_g4_t_v11)) > _g4_s2 ? (46u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v12)) > _g4_s3 ? (48u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v13)) > _g4_s4 ? (52u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (57u + sizeof(_g4_t_v14)) > _g4_s5 ? (57u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v15)) > _g4_s6 ? (60u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v16)) > _g4_s7 ? (76u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v17)) > _g4_s8 ? (92u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v18)) > _g4_s9 ? (104u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v19)) > _g4_s10 ? (108u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v20)) > _g4_s11 ? (112u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v21)) > _g4_s12 ? (116u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v22)) > _g4_s13 ? (120u + sizeof(_g4_t_v22)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 46u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 57u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 108u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 112u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 116u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 120u);

  grapher::ActorBase::SetArraySize(self, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Print Console", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(self, &v18);
  v1 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "DEBUG", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(self, &v19);
  v2 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(self, 0, &v20, 1, -1);
  v3 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Out", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(self, 1, &v21, 0, -1);
  v4 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Text", (int)(uintptr_t)(&v12) + 2);
  v15[0] = 0;
  v10 = (void *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Actors/ActorPrint.cpp"), 31);
  grapher::ActorVariable::Construct(v10, v16, 10, v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Text", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(self), 0, (int)(uintptr_t)(v22), v10, 1, 1, (int)(uintptr_t)(v17), 1);
  v5 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v9 = v14;
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v15[0] != 0 )
    G4_VCALL<void>(v15[0], 44, v9);
  v6 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  result = v17[0];
  v8 = (void *)(v17[0] - 12);
  if ( (uint32_t *)(v17[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v8); return 0; }
  }
  return result;
}



// ============================================================================
// Address:   0x13aed20 (size: 67 bytes)
// Symbol:    _ZN7grapher10ActorPrintC1Ej
// Demangled: grapher::ActorPrint::ActorPrint(unsigned int)
// ============================================================================
// Alternative name is '_ZN7grapher10ActorPrintC2Ej'
void (**grapher::ActorPrint::ActorPrint(
        grapher::ActorPrint::Self *self,
        unsigned int a2))(grapher::ActorPrint::Self * self)
{
  grapher::ActorBase::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094788);
  return (void (**)(grapher::ActorPrint::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094788));
}

