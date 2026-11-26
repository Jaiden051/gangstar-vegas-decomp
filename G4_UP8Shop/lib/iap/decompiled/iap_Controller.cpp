#include "Core/Utils/DecompTypes.h"
#include "iap_Controller.h"

// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_Controller.cpp
// Library: iap | Module: iap_Controller
// Binary Address Span: 0x1531010 .. 0x15321c0 (15 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1531010 (size: 132 bytes)
// Symbol:    _ZN3iap10ControllerC1Ev
// Demangled: iap::Controller::Controller(void)
// ============================================================================
// Alternative name is '_ZN3iap10ControllerC2Ev'
struct iap::Controller::Self *iap::Controller::Controller(iap::Controller::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  iap::ServiceRegistry::Construct((iap::Controller::Self *)((char *)self + 24), self);
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)((char *)self + 60);
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)((char *)self + 60);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)((char *)self + 80);
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)((char *)self + 80);
  *((uint32_t *)self + 19) = 0;
  *((uint8_t *)self + 96) = 0;
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)((char *)self + 88);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)((char *)self + 88);
  return (iap::Controller::Self *)((char *)self + 88);
}
// ----------------------------------------------------------------------------
// Function: iap::Controller::Initialize  (binary VA: 0x15310a0)
// Original: iap::Controller::Initialize
// ----------------------------------------------------------------------------
int iap::Controller::Initialize(iap::Controller::Self *self, const char *a2)
{
  int i;
  uint32_t v4[8];

  iap::ServiceRegistry::Begin((iap::ServiceRegistry::Self *)v4, (int)(uintptr_t)(self) + 24);
  for ( i = v4[0]; ; i = sub_1904890(i) )
  {
    iap::ServiceRegistry::End((iap::ServiceRegistry::Self *)v4, (int)(uintptr_t)(self) + 24);
    if ( i == v4[0] )
      break;
    (*(void (**)(uint32_t, uint32_t, const char *))(**(uint32_t **)(i + 20) + 8))(
      *(uint32_t *)(i + 20),
      *(uint32_t *)(i + 16),
      a2);
  }
  *((uint8_t *)self + 96) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::IsInitialized  (binary VA: 0x1531130)
// Original: iap::Controller::IsInitialized
// ----------------------------------------------------------------------------
int iap::Controller::IsInitialized(iap::Controller::Self *self)
{
  return *((uint8_t *)self + 96);
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::UpdateSettings  (binary VA: 0x1531140)
// Original: iap::Controller::UpdateSettings
// ----------------------------------------------------------------------------
int iap::Controller::UpdateSettings(iap::Controller::Self *self, const glwebtools::CustomAttribute::Self *a2)
{
  int i;
  uint32_t v4[8];

  iap::ServiceRegistry::Begin((iap::ServiceRegistry::Self *)v4, (int)(uintptr_t)(self) + 24);
  for ( i = v4[0]; ; i = sub_1904890(i) )
  {
    iap::ServiceRegistry::End((iap::ServiceRegistry::Self *)v4, (int)(uintptr_t)(self) + 24);
    if ( i == v4[0] )
      break;
    (*(void (**)(uint32_t, const glwebtools::CustomAttribute::Self *))(**(uint32_t **)(i + 20) + 20))(
      *(uint32_t *)(i + 20),
      a2);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::CancelCommand  (binary VA: 0x15311c0)
// Original: iap::Controller::CancelCommand
// ----------------------------------------------------------------------------
int iap::Controller::CancelCommand(iap::Controller::Self *self, const unsigned int *a2)
{
  int result;
  int v3;

  result = -2147483646;
  v3 = *((uint32_t *)self + 20);
  if ( (iap::Controller::Self *)v3 != (iap::Controller::Self *)((char *)self + 80) )
  {
    while ( iap::Command::GetId((iap::Command::Self *)(v3 + 8)) != *a2 )
    {
      v3 = *(uint32_t *)v3;
      if ( (iap::Controller::Self *)v3 == (iap::Controller::Self *)((char *)self + 80) )
        return -2147483646;
    }
    result = iap::Command::Cancel((iap::Command::Self *)(v3 + 8));
    if ( result >= 0 )
    {
      sub_1901940(v3);
      iap::Command::Destroy((iap::Command::Self *)(v3 + 8));
      sub_4EBEE0(v3);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::HasEvent  (binary VA: 0x1531240)
// Original: iap::Controller::HasEvent
// ----------------------------------------------------------------------------
bool iap::Controller::HasEvent(iap::Controller::Self *self)
{
  return *((uint32_t *)self + 22) != (uint32_t)(uintptr_t)(self) + 88;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::PopEvent  (binary VA: 0x1531250)
// Original: iap::Controller::PopEvent
// ----------------------------------------------------------------------------
int iap::Controller::PopEvent(iap::Controller::Self *self, iap::Event::Self *a2)
{
  bool HasEvent;
  int v3;
  int v4;

  HasEvent = iap::Controller::HasEvent(self);
  v3 = -2147483645;
  if ( HasEvent )
  {
    iap::Event::Swap(a2, (iap::Event::Self *)(*((uint32_t *)self + 22) + 8));
    v4 = *((uint32_t *)self + 22);
    sub_1901940(v4);
    iap::Event::Destroy((iap::EventData::Self **)(v4 + 8));
    sub_4EBEE0(v4);
    return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::IsRunning  (binary VA: 0x15312c0)
// Original: iap::Controller::IsRunning
// ----------------------------------------------------------------------------
int iap::Controller::IsRunning(iap::Controller::Self *self, const unsigned int *a2)
{
  int result;
  int **v3;

  result = 0;
  v3 = *((int ***)self + 20);
  if ( v3 != (int **)((char *)self + 80) )
  {
    do
    {
      if ( iap::Command::GetId((iap::Command::Self *)(v3 + 2)) == *a2 )
        return iap::Command::IsRunning((iap::Command::Self *)(v3 + 2));
      v3 = (int **)*v3;
    }
    while ( v3 != (int **)((char *)self + 80) );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::IsRuleSetAvailable  (binary VA: 0x1531330)
// Original: iap::Controller::IsRuleSetAvailable
// ----------------------------------------------------------------------------
int iap::Controller::IsRuleSetAvailable(iap::Controller::Self *self, const char *a2)
{
  int v2;
  char *v3;
  const char *Name;
  const char *v5;
  const char *v6;
  const char *v7;
  iap::Rule::Action::Self *v8;
  char *ServiceName;
  int Service;
  void *v11;
  uint8_t (*v12)(uint32_t, int);
  int RequestName;
  void *v14;
  typedef int _g4_t_v16;
  typedef iap::Rule::Action::Self *_g4_t_i;
  typedef iap::Controller::Self *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef iap::Rule::Action::Self *_g4_t_v20[2];
  typedef uint8_t _g4_t_v21[7];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[8];
  typedef uint32_t *_g4_t_v25;
  typedef iap::Controller::Self **_g4_t_v26;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_i)) > _g4_s1 ? (8u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v21)) > _g4_s5 ? (33u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v24)) > _g4_s8 ? (48u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v25)) > _g4_s9 ? (56u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v26)) > _g4_s10 ? (84u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 33u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);

  v2 = 0;
  v26 = &self;
  v18 = self;
  if ( a2 != nullptr )
  {
    iap::RuleSet::Construct((iap::RuleSet::Self *)&v23, a2);
    v3 = *((char **)v18 + 16);
    if ( v3 == nullptr )
      goto LABEL_17;
    v19 = (char *)v18 + 60;
    do
    {
      while ( 1 )
      {
        Name = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)&v23);
        v5 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v3 + 16));
        if ( strcmp(v5, Name) < 0 )
          break;
        v19 = v3;
        v3 = *((char **)v3 + 2);
        if ( v3 == nullptr )
          goto LABEL_7;
      }
      v3 = *((char **)v3 + 3);
    }
    while ( v3 != nullptr );
LABEL_7:
    if ( (char *)v18 + 60 == v19
      || (v6 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v19 + 16)),
          v7 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)&v23),
          strcmp(v7, v6) < 0) )
    {
LABEL_17:
      v2 = 0;
    }
    else
    {
      iap::RuleSet::Begin((iap::RuleSet::Self *)v20);
      for ( i = v20[0]; ; i = (iap::Rule::Action::Self *)sub_19048E0(i) )
      {
        iap::RuleSet::End((iap::RuleSet::Self *)v20);
        if ( i == v20[0] )
          break;
        iap::Rule::Begin((iap::Rule::Self *)v20);
        v8 = v20[0];
        while ( 1 )
        {
          iap::Rule::End((iap::Rule::Self *)v20);
          if ( v8 == v20[0] )
            break;
          ServiceName = (char *)iap::Rule::Action::GetServiceName(v8);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), ServiceName, (int)(uintptr_t)(v21));
          Service = iap::ServiceRegistry::GetService((int)(uintptr_t)(v18) + 24, (void **)&v22, &v21[3]);
          v11 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = Service;
            g4_std::string::Rep::M_destroy(v11);
            Service = v16;
          }
          if ( Service != 0
            || (v12 = *(uint8_t (**)(uint32_t, int))(**(uint32_t **)&v21[3] + 32),
                RequestName = iap::Rule::Action::GetRequestName(v8),
                v12(*(uint32_t *)&v21[3], RequestName) == 0) )
          {
            v2 = 0;
            goto LABEL_18;
          }
          v8 = (iap::Rule::Action::Self *)((char *)v8 + 8);
          if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)&v21[3] + 16))(*(uint32_t *)&v21[3]) == 0 )
          {
            v2 = 0;
            goto LABEL_18;
          }
        }
      }
      v2 = 1;
    }
LABEL_18:
    g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
      (int)(uintptr_t)(v24),
      v25);
    v14 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::ExecuteCommand  (binary VA: 0x15315c0)
// Original: iap::Controller::ExecuteCommand
// ----------------------------------------------------------------------------
int iap::Controller::ExecuteCommand(iap::Controller::Self *self, const char *a2, const char *a3, const char *a4, const char *a5, unsigned int *a6)
{
  char *v6;
  const char *Name;
  const char *v8;
  const char *v9;
  const char *v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  uint32_t *v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  void *v30;
  void *v31;
  typedef int _g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int _g4_t_Rule;
  typedef uint32_t *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t _g4_t_v45[4];
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47[9];
  typedef int _g4_t_v48;
  typedef uint32_t _g4_t_v49[11];
  typedef uint8_t _g4_t_v50[4];
  typedef int _g4_t_v51;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_Rule)) > _g4_s2 ? (16u + sizeof(_g4_t_Rule)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v36)) > _g4_s3 ? (16u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v37)) > _g4_s4 ? (20u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v38)) > _g4_s5 ? (20u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v39)) > _g4_s6 ? (24u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v40)) > _g4_s7 ? (24u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v41)) > _g4_s8 ? (24u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v42)) > _g4_s9 ? (28u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v43)) > _g4_s10 ? (28u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v44)) > _g4_s11 ? (28u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v45)) > _g4_s12 ? (48u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v46)) > _g4_s13 ? (64u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v47)) > _g4_s14 ? (68u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v48)) > _g4_s15 ? (104u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v49)) > _g4_s16 ? (108u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v50)) > _g4_s17 ? (152u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v51)) > _g4_s18 ? (156u + sizeof(_g4_t_v51)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_Rule &Rule = *reinterpret_cast<_g4_t_Rule *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 152u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 156u);

  if ( a2 == nullptr )
    return -2147483646;
  iap::RuleSet::Construct((iap::RuleSet::Self *)&v46, a2);
  v39 = (char *)self + 60;
  v6 = *((char **)self + 16);
  if ( v6 == nullptr )
    goto LABEL_41;
  v42 = (char *)self + 60;
  do
  {
    while ( 1 )
    {
      Name = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)&v46);
      v8 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v6 + 16));
      if ( strcmp(v8, Name) < 0 )
        break;
      v42 = v6;
      v6 = *((char **)v6 + 2);
      if ( v6 == nullptr )
        goto LABEL_7;
    }
    v6 = *((char **)v6 + 3);
  }
  while ( v6 != nullptr );
LABEL_7:
  if ( v39 == v42
    || (v9 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v42 + 16)),
        v10 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)&v46),
        strcmp(v10, v9) < 0)
    || v42 == v39 )
  {
LABEL_41:
    Rule = -2147483646;
  }
  else if ( a3 != nullptr )
  {
    iap::Rule::Construct((iap::Rule::Self *)v45);
    Rule = iap::RuleSet::GetRule((iap::RuleSet::Self *)(v42 + 16), a3, (iap::Rule::Self *)v45);
    if ( Rule >= 0 )
    {
      v11 = *((uint32_t *)self + 13) + 1;
      *((uint32_t *)self + 13) = v11;
      *a6 = v11;
      iap::Command::Construct((iap::Command::Self *)&v48, (iap::Controller::Self *)((char *)self + 24), v11);
      v12 = iap::Command::Execute((iap::Command::Self *)&v48, (const iap::Rule::Self *)v45, a4, a5);
      if ( v12 >= 0 )
      {
        v13 = sub_4EBE70(0x40u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v36 = (uint32_t *)v13;
        if ( v13 != -8 )
        {
          *(uint32_t *)(v13 + 8) = v48;
          g4_std::string::construct_copy(v13 + 12, v49);
          v14 = v49[1];
          v15 = v49[2] - v49[1];
          v16 = 0;
          v43 = v49[2];
          v36[4] = 0;
          v36[5] = 0;
          v36[6] = 0;
          v17 = 0;
          v18 = v15 >> 3;
          if ( v18 != 0 )
          {
            v33 = 8 * v18;
            v17 = sub_4EBE70(8 * v18, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            v43 = v49[2];
            v14 = v49[1];
            v16 = v33;
          }
          v36[4] = v17;
          v36[5] = v17;
          for ( v36[6] = v17 + v16; v43 != v14; v14 += 8 )
          {
            if ( v17 != 0 )
            {
              g4_std::string::construct_copy(v17, v14);
              g4_std::string::construct_copy(v17 + 4, v14 + 4);
            }
            v17 += 8;
          }
          v40 = 0;
          v36[5] = v17;
          v36[7] = v49[4];
          v36[8] = v49[5];
          v36[9] = v49[6];
          v36[10] = v49[7];
          v19 = (int *)v49[8];
          v34 = (int *)v49[9];
          v20 = (v49[9] - v49[8]) >> 3;
          v36[11] = 0;
          v36[12] = 0;
          v36[13] = 0;
          v21 = 0;
          if ( -1171354717 * v20 != 0 )
          {
            v21 = 8 * v20;
            v40 = sub_4EBE70(8 * v20, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            v34 = (int *)v49[9];
            v19 = (int *)v49[8];
          }
          v36[11] = v40;
          v36[12] = v40;
          v36[13] = v21 + v40;
          if ( v34 == v19 )
          {
            v22 = (uint32_t *)v40;
          }
          else
          {
            v22 = (uint32_t *)v40;
            v23 = v19;
            do
            {
              if ( v22 != nullptr )
              {
                v24 = *v23;
                v37 = (char *)v22 - v40;
                v22[3] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                *v22 = v24;
                v22[1] = v23[1];
                v22[2] = v23[2];
                g4_std::string::assign_str(v22 + 3, v23 + 3);
                g4_std::string::assign_str(v22 + 4, v23 + 4);
                v22[7] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[8] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[5] = v23[5];
                *(uint32_t *)&v37[v40 + 24] = v23[6];
                g4_std::string::assign_str(v22 + 7, v23 + 7);
                g4_std::string::assign_str(v22 + 8, v23 + 8);
                v22[11] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[12] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[9] = v23[9];
                *(uint32_t *)&v37[v40 + 40] = v23[10];
                g4_std::string::assign_str(v22 + 11, v23 + 11);
                g4_std::string::assign_str(v22 + 12, v23 + 12);
                v22[15] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[16] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[13] = v23[13];
                *(uint32_t *)&v37[v40 + 56] = v23[14];
                g4_std::string::assign_str(v22 + 15, v23 + 15);
                g4_std::string::assign_str(v22 + 16, v23 + 16);
                v25 = v23[17];
                v22[20] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[21] = (uint32_t)(uintptr_t)(&dword_213B814);
                v22[17] = v25;
                v22[18] = v23[18];
                *(uint32_t *)&v37[v40 + 76] = v23[19];
                g4_std::string::assign_str(v22 + 20, v23 + 20);
                g4_std::string::assign_str(v22 + 21, v23 + 21);
              }
              v23 += 22;
              v22 += 22;
            }
            while ( v23 != v34 );
          }
          v36[12] = (uint32_t)(uintptr_t)(v22);
          iap::Event::Construct((iap::Event::Self *)(v36 + 14), (const iap::Event::Self *)v50);
          g4_std::string::construct_copy(v36 + 15, &v51);
          v13 = (int)(uintptr_t)(v36);
        }
        v12 = 0;
        sub_1901920(v13, (char *)self + 80);
      }
      iap::Command::Destroy((iap::Command::Self *)&v48);
      Rule = v12;
    }
    v26 = v45[1];
    v44 = (uint32_t *)v45[2];
    if ( v45[2] != v45[1] )
    {
      v27 = (uint32_t *)v45[1];
      v38 = v45[1];
      v41 = v45[1] + 4;
      do
      {
        v28 = *(uint32_t *)((char *)v27 + v41 - v38);
        if ( (uint32_t *)(v28 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v28 - 12));
        }
        v29 = (uint32_t *)(*v27 - 12);
        if ( v29 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v27 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v29);
        v27 += 2;
      }
      while ( v44 != v27 );
      v26 = v45[1];
    }
    if ( v26 != 0 )
      sub_4EBEE0(v26);
    v30 = (void *)(v45[0] - 12);
    if ( (uint32_t *)(v45[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
  }
  else
  {
    Rule = -2147483646;
  }
  g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
    (int)(uintptr_t)(v47),
    v47[2]);
  v31 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v31);
  }
  return Rule;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::ExecuteCommand  (binary VA: 0x1531d50)
// Original: iap::Controller::ExecuteCommand
// ----------------------------------------------------------------------------
int iap::Controller::ExecuteCommand(iap::Controller::Self *self, char *a2, char *a3, char *a4, unsigned int *a5)
{
  return iap::Controller::ExecuteCommand(self, a2, a3, a4, "User", a5);
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::ProcessEvent  (binary VA: 0x1531da0)
// Original: iap::Controller::ProcessEvent
// ----------------------------------------------------------------------------
int iap::Controller::ProcessEvent(int ***self, const iap::Event::Self *a2)
{
  int v2;
  int **v3;
  int result;
  int v5;
  const char *Type;
  int Data;
  const char *v8;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  if ( strcmp((const char *)iap::Event::GetType(a2), "result") != 0 )
  {
    Type = (const char *)iap::Event::GetType(a2);
    result = -2147483646;
    if ( strcmp(Type, "command") != 0 )
      return result;
    Data = iap::Event::GetData(a2);
    if ( Data != 0 )
    {
      v8 = *(const char **)(Data + 16);
      v10[0] = 0;
      return iap::Controller::ExecuteCommand(
               (iap::Controller::Self *)self,
               *(const char **)(Data + 4),
               *(const char **)(Data + 8),
               *(const char **)(Data + 12),
               v8,
               v10);
    }
    return -2147483645;
  }
  v2 = iap::Event::GetData(a2);
  if ( v2 == 0 )
    return -2147483645;
  v3 = *(self + 20);
  v9 = *(uint32_t *)(v2 + 8);
  result = -2147483645;
  if ( v3 != (int **)(self + 20) )
  {
    while ( v9 != iap::Command::GetId((iap::Command::Self *)(v3 + 2)) )
    {
      v3 = (int **)*v3;
      if ( v3 == (int **)(self + 20) )
        return -2147483645;
    }
    v5 = iap::Command::ProcessEvent((iap::Command::Self *)(v3 + 2), a2);
    result = 0;
    if ( v5 <= 0 )
      return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::Update  (binary VA: 0x1531ed0)
// Original: iap::Controller::Update
// ----------------------------------------------------------------------------
int iap::Controller::Update(int ***self)
{
  int i;
  int v2;
  int v3;
  char *v4;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef char *_g4_t_v9;
  typedef char *_g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  typedef iap::EventData::Self *_g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  iap::ServiceRegistry::Begin((iap::ServiceRegistry::Self *)v11, (int)(uintptr_t)(self + 6));
  for ( i = v11[0]; ; i = sub_1904890(i) )
  {
    iap::ServiceRegistry::End((iap::ServiceRegistry::Self *)v11, (int)(uintptr_t)(self + 6));
    if ( i == v11[0] )
      break;
    v2 = *(uint32_t *)(i + 20);
    G4_VCALL<void>(v2, 40);
    if ( G4_VCALL<uint8_t>(v2, 44) != 0 )
    {
      iap::Event::Construct((iap::Event::Self *)v12);
      v3 = G4_VCALL<int>(v2, 48, v12);
      if ( v3 < 0 || (v3 = iap::Controller::ProcessEvent(self, (const iap::Event::Self *)v12)) < 0 )
      {
        v8 = v3;
        iap::Event::Destroy(v12);
        return v8;
      }
      iap::Event::Destroy(v12);
    }
  }
  v4 = (char *)*(self + 20);
  v9 = (char *)(self + 20);
  while ( v4 != v9 )
  {
    while ( (uint8_t)iap::Command::HasEvent((iap::Command::Self *)(v4 + 8)) == 0 )
    {
      v4 = *(char **)v4;
      if ( v4 == v9 )
        return 0;
    }
    iap::Event::Construct((iap::Event::Self *)v12);
    iap::Command::PopEvent((iap::Command::Self *)(v4 + 8), (iap::Event::Self *)v12);
    v6 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v6 != -8 )
    {
      v7 = v6;
      iap::Event::Construct((iap::Event::Self *)(v6 + 8), (const iap::Event::Self *)v12);
      v6 = v7;
    }
    sub_1901920(v6, self + 22);
    v10 = *(char **)v4;
    sub_1901940(v4);
    iap::Command::Destroy((iap::Command::Self *)(v4 + 8));
    sub_4EBEE0((int)(uintptr_t)(v4));
    iap::Event::Destroy(v12);
    v4 = v10;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::Shutdown  (binary VA: 0x15320a0)
// Original: iap::Controller::Shutdown
// ----------------------------------------------------------------------------
int iap::Controller::Shutdown(iap::Controller::Self *self)
{
  iap::ServiceRegistry::Self *v1;
  int i;
  int v3;
  char *v4;
  iap::EventData::Self **v5;
  char *v6;
  typedef char *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef uint32_t _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v1 = (iap::ServiceRegistry::Self *)((iap::Controller::Self *)((char *)self + 24));
  iap::ServiceRegistry::Begin((iap::ServiceRegistry::Self *)v10, (int)(uintptr_t)(self) + 24);
  for ( i = v10[0]; ; i = sub_1904890(i) )
  {
    iap::ServiceRegistry::End((iap::ServiceRegistry::Self *)v10, (int)(uintptr_t)(v1));
    if ( i == v10[0] )
      break;
    (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(i + 20) + 12))(*(uint32_t *)(i + 20), 0);
  }
  iap::ServiceRegistry::Clear(v1);
  g4_std::Rb_tree_iap_RuleSet_iap_RuleSet_86d84f::M_erase(
    (int)(uintptr_t)(self) + 56,
    *((uint32_t **)self + 16));
  v3 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)((char *)self + 60);
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)((char *)self + 60);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 19) = 0;
  v8 = (char *)self + 80;
  if ( (iap::Controller::Self *)v3 != (iap::Controller::Self *)((char *)self + 80) )
  {
    while ( 1 )
    {
      v4 = *(char **)v3;
      iap::Command::Destroy((iap::Command::Self *)(v3 + 8));
      sub_4EBEE0(v3);
      if ( v4 == v8 )
        break;
      v3 = (int)(uintptr_t)(v4);
    }
  }
  v5 = *((iap::EventData::Self ***)self + 22);
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v8);
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(v8);
  v9 = (char *)self + 88;
  if ( v5 != (iap::EventData::Self **)((char *)self + 88) )
  {
    while ( 1 )
    {
      v6 = (char *)*v5;
      iap::Event::Destroy(v5 + 2);
      sub_4EBEE0((int)(uintptr_t)(v5));
      if ( v6 == v9 )
        break;
      v5 = (iap::EventData::Self **)v6;
    }
  }
  *((uint8_t *)self + 96) = 0;
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(v9);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v9);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Controller::AddRuleSet  (binary VA: 0x15321c0)
// Original: iap::Controller::AddRuleSet
// ----------------------------------------------------------------------------
int iap::Controller::AddRuleSet(iap::Controller::Self *self, const iap::RuleSet::Self *a2)
{
  iap::Controller::Self *v2;
  char IsValid;
  int v4;
  iap::Rule::Action::Self *j;
  char *ServiceName;
  bool IsServiceRegistered;
  void *v8;
  char *v9;
  bool HasService;
  char *v11;
  int v12;
  void *v13;
  char *v15;
  char *v16;
  char v17;
  const char *s2;
  const char *s1;
  const char *v20;
  const char *v21;
  int v22;
  const char *v23;
  const char *v24;
  uint32_t *v25;
  int v26;
  int v27;
  int m;
  const char *Name;
  const char *v30;
  int v31;
  int k;
  typedef bool _g4_t_v33;
  typedef bool _g4_t_v34;
  typedef int _g4_t_v35;
  typedef void *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef iap::Rule::Action::Self *_g4_t_i;
  typedef iap::Rule::Action::Self *_g4_t_v41[4];
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v34)) > _g4_s1 ? (12u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v35)) > _g4_s2 ? (12u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v36)) > _g4_s3 ? (16u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v37)) > _g4_s4 ? (16u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v38)) > _g4_s5 ? (20u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v39)) > _g4_s6 ? (20u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_i)) > _g4_s7 ? (24u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v41)) > _g4_s8 ? (28u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (46u + sizeof(_g4_t_v42)) > _g4_s9 ? (46u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v43)) > _g4_s10 ? (48u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v44)) > _g4_s11 ? (52u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v45)) > _g4_s12 ? (56u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v46)) > _g4_s13 ? (60u + sizeof(_g4_t_v46)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 46u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);

  v2 = self;
  IsValid = iap::RuleSet::IsValid(a2);
  v4 = -2147483646;
  if ( IsValid == 0 )
    return v4;
  iap::RuleSet::Begin((iap::RuleSet::Self *)v41);
  for ( i = v41[0]; ; i = (iap::Rule::Action::Self *)sub_19048E0(i) )
  {
    iap::RuleSet::End((iap::RuleSet::Self *)v41);
    if ( i == v41[0] )
      break;
    iap::Rule::Begin((iap::Rule::Self *)v41);
    for ( j = v41[0]; ; j = (iap::Rule::Action::Self *)((char *)j + 8) )
    {
      iap::Rule::End((iap::Rule::Self *)v41);
      if ( j == v41[0] )
        break;
      ServiceName = (char *)iap::Rule::Action::GetServiceName(j);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), ServiceName, (int)(uintptr_t)(&v42));
      IsServiceRegistered = iap::ServiceFactoryRegistry::IsServiceRegistered((int)(uintptr_t)(self), (void **)&v44);
      v8 = (void *)(v44 - 12);
      if ( (uint32_t *)(v44 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
      {
        v33 = IsServiceRegistered;
        g4_std::string::Rep::M_destroy(v8);
        IsServiceRegistered = v33;
      }
      if ( !IsServiceRegistered )
        return -2147483641;
      v9 = (char *)iap::Rule::Action::GetServiceName(j);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), v9, (int)(uintptr_t)(&v42) + 1);
      HasService = iap::ServiceRegistry::HasService((int)(uintptr_t)(self) + 24, (void **)&v45);
      v36 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        v34 = HasService;
        g4_std::string::Rep::M_destroy(v36);
        HasService = v34;
      }
      if ( !HasService )
      {
        v11 = (char *)iap::Rule::Action::GetServiceName(j);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v46), v11, (int)(uintptr_t)(&v43));
        v12 = iap::ServiceRegistry::AddService((uint32_t *)self + 6, (void **)v46);
        v13 = (void *)(v46[0] - 12);
        if ( (uint32_t *)(v46[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v35 = v12;
          g4_std::string::Rep::M_destroy(v13);
          v12 = v35;
        }
        if ( v12 < 0 )
          return -2147483641;
      }
    }
  }
  v15 = *((char **)self + 16);
  v37 = (char *)self + 60;
  if ( v15 == nullptr )
  {
    v15 = (char *)self + 60;
LABEL_24:
    if ( *((char **)v2 + 17) == v15 )
    {
      LOBYTE(v39) = 1;
      if ( v37 != v15 )
      {
        Name = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v15 + 16));
        v30 = (const char *)iap::RuleSet::GetName(a2);
        v39 = (unsigned int)strcmp(v30, Name) >> 31;
      }
      v25 = (uint32_t *)sub_4EBE70(0x2Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v25 == (uint32_t *)-16 )
        goto LABEL_38;
      g4_std::string::construct_copy(v25 + 4, a2);
      v25[6] = 0;
      v25[7] = 0;
      v25[10] = 0;
      v25[8] = (uint32_t)(uintptr_t)(v25 + 6);
      v25[9] = (uint32_t)(uintptr_t)(v25 + 6);
      v31 = *((uint32_t *)a2 + 3);
      if ( v31 == 0 )
        goto LABEL_38;
      v27 = (int)(uintptr_t)(g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy(
              v25 + 5,
              v31,
              v25 + 6));
      v25[7] = v27;
      for ( k = v27; *(uint32_t *)(k + 8) != 0; k = *(uint32_t *)(k + 8) )
        ;
      v25[8] = k;
      while ( *(uint32_t *)(v27 + 12) != 0 )
        v27 = *(uint32_t *)(v27 + 12);
      goto LABEL_37;
    }
    v38 = (char *)sub_19048F0(v15);
    goto LABEL_26;
  }
  while ( 1 )
  {
    s2 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v15 + 16));
    s1 = (const char *)iap::RuleSet::GetName(a2);
    if ( strcmp(s1, s2) < 0 )
    {
      v16 = *((char **)v15 + 2);
      v17 = 1;
    }
    else
    {
      v16 = *((char **)v15 + 3);
      v17 = 0;
    }
    if ( v16 == nullptr )
      break;
    v15 = v16;
  }
  v2 = self;
  if ( v17 != 0 )
    goto LABEL_24;
  v38 = v15;
LABEL_26:
  v20 = (const char *)iap::RuleSet::GetName(a2);
  v21 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v38 + 16));
  v22 = strcmp(v21, v20);
  v4 = 0;
  if ( v22 < 0 )
  {
    LOBYTE(v39) = 1;
    if ( v37 != v15 )
    {
      v23 = (const char *)iap::RuleSet::GetName((iap::RuleSet::Self *)(v15 + 16));
      v24 = (const char *)iap::RuleSet::GetName(a2);
      v39 = (unsigned int)strcmp(v24, v23) >> 31;
    }
    v25 = (uint32_t *)sub_4EBE70(0x2Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v25 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v25 + 4, a2);
      v25[6] = 0;
      v25[7] = 0;
      v25[10] = 0;
      v25[8] = (uint32_t)(uintptr_t)(v25 + 6);
      v25[9] = (uint32_t)(uintptr_t)(v25 + 6);
      v26 = *((uint32_t *)a2 + 3);
      if ( v26 == 0 )
        goto LABEL_38;
      v27 = (int)(uintptr_t)(g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_copy(
              v25 + 5,
              v26,
              v25 + 6));
      v25[7] = v27;
      for ( m = v27; *(uint32_t *)(m + 8) != 0; m = *(uint32_t *)(m + 8) )
        ;
      v25[8] = m;
      while ( *(uint32_t *)(v27 + 12) != 0 )
        v27 = *(uint32_t *)(v27 + 12);
LABEL_37:
      v25[9] = v27;
      v25[10] = *((uint32_t *)a2 + 6);
    }
LABEL_38:
    sub_1904970(v39, v25, v15, v37);
    ++*((uint32_t *)v2 + 19);
    return 0;
  }
  return v4;
}


