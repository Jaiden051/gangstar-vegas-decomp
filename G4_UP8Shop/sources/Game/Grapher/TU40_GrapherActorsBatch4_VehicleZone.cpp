#include "Core/Utils/DecompTypes.h"
#include "TU40_GrapherActorsBatch4_VehicleZone.h"

// ----------------------------------------------------------------------------
// Function: sub_C3F080  (binary VA: 0xc3f080)
// Original: sub_C3F080
// ----------------------------------------------------------------------------
int sub_C3F080()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DEA44);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DEA44, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA48), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA48, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA4C), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA4C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA50), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA50, &unk_20D1280);
  dword_20DEA54 = 1056964608;
  dword_20DEA58 = 1056964608;
  dword_20DEA5C = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F180_eac3f180  (binary VA: 0xc3f180)
// Original: sub_C3F180
// ----------------------------------------------------------------------------
int sub_C3F180_eac3f180(int a1, int a2)
{
  { sub_C3F190(a1 - 52, a2); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3F190  (binary VA: 0xc3f190)
// Original: sub_C3F190
// ----------------------------------------------------------------------------
void sub_C3F190(int a1, uint8_t *a2)
{
  if ( a2 != nullptr && G4_VCALL<int>(a2, 8) == 20 )
    a2[8] = *(uint8_t *)(a1 + 64);
}

// ----------------------------------------------------------------------------
// Function: ActorGameItemShop::Destroy_eac3f1d0  (binary VA: 0xc3f1d0)
// Original: ActorGameItemShop::~ActorGameItemShop
// ----------------------------------------------------------------------------
void ActorGameItemShop::Destroy_eac3f1d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameTimer::Destroy_eac3f200  (binary VA: 0xc3f200)
// Original: ActorGameTimer::~ActorGameTimer
// ----------------------------------------------------------------------------
void ActorGameTimer::Destroy_eac3f200(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDTutorial::Destroy_eac3f230  (binary VA: 0xc3f230)
// Original: ActorGameHUDTutorial::~ActorGameHUDTutorial
// ----------------------------------------------------------------------------
void ActorGameHUDTutorial::Destroy_eac3f230(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetVarText::Destroy_eac3f260  (binary VA: 0xc3f260)
// Original: ActorGameHUDSetVarText::~ActorGameHUDSetVarText
// ----------------------------------------------------------------------------
void ActorGameHUDSetVarText::Destroy_eac3f260(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CAC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHudSetWarning::Destroy_eac3f290  (binary VA: 0xc3f290)
// Original: ActorGameHudSetWarning::~ActorGameHudSetWarning
// ----------------------------------------------------------------------------
void ActorGameHudSetWarning::Destroy_eac3f290(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetText::Destroy_eac3f2c0  (binary VA: 0xc3f2c0)
// Original: ActorGameHUDSetText::~ActorGameHUDSetText
// ----------------------------------------------------------------------------
void ActorGameHUDSetText::Destroy_eac3f2c0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetInteractionButton::Destroy  (binary VA: 0xc3f2f0)
// Original: ActorGameHUDSetInteractionButton::~ActorGameHUDSetInteractionButton
// ----------------------------------------------------------------------------
void ActorGameHUDSetInteractionButton::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C9A8);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_206C9E0);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDHighlight::Destroy_eac3f320  (binary VA: 0xc3f320)
// Original: ActorGameHUDHighlight::~ActorGameHUDHighlight
// ----------------------------------------------------------------------------
void ActorGameHUDHighlight::Destroy_eac3f320(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C968);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDGenericText::Destroy_eac3f350  (binary VA: 0xc3f350)
// Original: ActorGameHUDGenericText::~ActorGameHUDGenericText
// ----------------------------------------------------------------------------
void ActorGameHUDGenericText::Destroy_eac3f350(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C928);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDControls::Destroy_eac3f380  (binary VA: 0xc3f380)
// Original: ActorGameHUDControls::~ActorGameHUDControls
// ----------------------------------------------------------------------------
void ActorGameHUDControls::Destroy_eac3f380(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C8E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDRaceLockControls::Destroy_eac3f3b0  (binary VA: 0xc3f3b0)
// Original: ActorGameHUDRaceLockControls::~ActorGameHUDRaceLockControls
// ----------------------------------------------------------------------------
void ActorGameHUDRaceLockControls::Destroy_eac3f3b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C8A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDFollowerStatus::Destroy_eac3f3e0  (binary VA: 0xc3f3e0)
// Original: ActorGameHUDFollowerStatus::~ActorGameHUDFollowerStatus
// ----------------------------------------------------------------------------
void ActorGameHUDFollowerStatus::Destroy_eac3f3e0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C868);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUD::Destroy_eac3f410  (binary VA: 0xc3f410)
// Original: ActorGameHUD::~ActorGameHUD
// ----------------------------------------------------------------------------
void ActorGameHUD::Destroy_eac3f410(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C828);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesRetrieveMember::Destroy_eac3f440  (binary VA: 0xc3f440)
// Original: ActorGameGangBattlesRetrieveMember::~ActorGameGangBattlesRetrieveMember
// ----------------------------------------------------------------------------
void ActorGameGangBattlesRetrieveMember::Destroy_eac3f440(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesResetMemberList::Destroy_eac3f470  (binary VA: 0xc3f470)
// Original: ActorGameGangBattlesResetMemberList::~ActorGameGangBattlesResetMemberList
// ----------------------------------------------------------------------------
void ActorGameGangBattlesResetMemberList::Destroy_eac3f470(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesApplyProfile::Destroy_eac3f4a0  (binary VA: 0xc3f4a0)
// Original: ActorGameGangBattlesApplyProfile::~ActorGameGangBattlesApplyProfile
// ----------------------------------------------------------------------------
void ActorGameGangBattlesApplyProfile::Destroy_eac3f4a0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C768);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameScriptLODFilter::Destroy_eac3f4d0  (binary VA: 0xc3f4d0)
// Original: ActorGameScriptLODFilter::~ActorGameScriptLODFilter
// ----------------------------------------------------------------------------
void ActorGameScriptLODFilter::Destroy_eac3f4d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C728);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventsHudOnTouch::Destroy_eac3f500  (binary VA: 0xc3f500)
// Original: ActorGameEventsHudOnTouch::~ActorGameEventsHudOnTouch
// ----------------------------------------------------------------------------
void ActorGameEventsHudOnTouch::Destroy_eac3f500(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C6E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionWantedLevel::Destroy_eac3f530  (binary VA: 0xc3f530)
// Original: ActorGameConditionWantedLevel::~ActorGameConditionWantedLevel
// ----------------------------------------------------------------------------
void ActorGameConditionWantedLevel::Destroy_eac3f530(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C548);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionLanded::Destroy_eac3f560  (binary VA: 0xc3f560)
// Original: ActorGameConditionLanded::~ActorGameConditionLanded
// ----------------------------------------------------------------------------
void ActorGameConditionLanded::Destroy_eac3f560(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C4C8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsIdle::Destroy_eac3f590  (binary VA: 0xc3f590)
// Original: ActorGameConditionIsIdle::~ActorGameConditionIsIdle
// ----------------------------------------------------------------------------
void ActorGameConditionIsIdle::Destroy_eac3f590(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C488);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAttacked::Destroy_eac3f5c0  (binary VA: 0xc3f5c0)
// Original: ActorGameConditionIsAttacked::~ActorGameConditionIsAttacked
// ----------------------------------------------------------------------------
void ActorGameConditionIsAttacked::Destroy_eac3f5c0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C448);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionHasVehicle::Destroy_eac3f5f0  (binary VA: 0xc3f5f0)
// Original: ActorGameConditionHasVehicle::~ActorGameConditionHasVehicle
// ----------------------------------------------------------------------------
void ActorGameConditionHasVehicle::Destroy_eac3f5f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C388);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameHudSetObjective::Destroy_eac3f620  (binary VA: 0xc3f620)
// Original: ActorGameHudSetObjective::~ActorGameHudSetObjective
// ----------------------------------------------------------------------------
void ActorGameHudSetObjective::Destroy_eac3f620(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA48);
  g4_std::string::Destroy((char *)a1 + 52);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3F670_eac3f670  (binary VA: 0xc3f670)
// Original: sub_C3F670
// ----------------------------------------------------------------------------
int sub_C3F670_eac3f670(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F6B0_eac3f6b0  (binary VA: 0xc3f6b0)
// Original: sub_C3F6B0
// ----------------------------------------------------------------------------
int * sub_C3F6B0_eac3f6b0(int a1, int a2)
{
  int *result;

  result = (int *)(&dword_20DA2A0);
  if ( dword_20DA2A0 == 0 )
    return (int *)G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F6F0_eac3f6f0  (binary VA: 0xc3f6f0)
// Original: sub_C3F6F0
// ----------------------------------------------------------------------------
int sub_C3F6F0_eac3f6f0(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F730_eac3f730  (binary VA: 0xc3f730)
// Original: sub_C3F730
// ----------------------------------------------------------------------------
int sub_C3F730_eac3f730(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F770  (binary VA: 0xc3f770)
// Original: sub_C3F770
// ----------------------------------------------------------------------------
int sub_C3F770(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F7B0  (binary VA: 0xc3f7b0)
// Original: sub_C3F7B0
// ----------------------------------------------------------------------------
int sub_C3F7B0(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F7F0_eac3f7f0  (binary VA: 0xc3f7f0)
// Original: sub_C3F7F0
// ----------------------------------------------------------------------------
int sub_C3F7F0_eac3f7f0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint32_t *v4;
  int *v5;
  char v7;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = (uint32_t *)v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
      {
LABEL_9:
        grapher::ActorBase::FireEvent(a1, 1, a3);
        v7 = sub_9878A0(v4);
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3 - (v7 != 0), a3));
      }
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(&dword_20D75F0) )
          goto LABEL_9;
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C3F8C0  (binary VA: 0xc3f8c0)
// Original: sub_C3F8C0
// ----------------------------------------------------------------------------
int * sub_C3F8C0(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = (unsigned int)*a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C3F980  (binary VA: 0xc3f980)
// Original: sub_C3F980
// ----------------------------------------------------------------------------
int * sub_C3F980(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = (unsigned int)*a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C3FA40  (binary VA: 0xc3fa40)
// Original: sub_C3FA40
// ----------------------------------------------------------------------------
int sub_C3FA40(int a1, int a2, int *a3)
{
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  char v7; // bp
  unsigned int v8;
  int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = *(uint32_t **)(a2 + 8);
  if ( v4 == nullptr )
  {
    v4 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v5 = *a3;
  while ( 1 )
  {
    v8 = v4[4];
    if ( v8 <= v5 )
      break;
    v6 = (uint32_t *)v4[2];
    v7 = 1;
    if ( v6 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v6;
  }
  v6 = (uint32_t *)v4[3];
  v7 = 0;
  if ( v6 != nullptr )
    goto LABEL_4;
LABEL_7:
  v12 = (int)(uintptr_t)(v4);
  if ( v7 == 0 )
  {
    if ( v5 <= v8 )
      goto LABEL_9;
LABEL_13:
    sub_C3F980(v13, a2, 0, v12, a3);
LABEL_14:
    v10 = v13[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v10;
    return a1;
  }
LABEL_11:
  if ( *(uint32_t **)(a2 + 12) == v4 )
  {
    sub_C3F980(v13, a2, 0, (int)(uintptr_t)(v4), a3);
    goto LABEL_14;
  }
  v12 = (int)(uintptr_t)(v4);
  v4 = (uint32_t *)sub_19048F0(v4);
  if ( (unsigned int)*a3 > v4[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C3FB20  (binary VA: 0xc3fb20)
// Original: sub_C3FB20
// ----------------------------------------------------------------------------
int * sub_C3FB20(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v5;
  unsigned int v6;
  int v7;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);

  v5 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 && *(uint32_t *)(a2[4] + 16) < (unsigned int)*a4 )
    {
      sub_C3F980(a1, (int)(uintptr_t)(a2), 0, a2[4], a4);
      return a1;
    }
    goto LABEL_15;
  }
  v6 = *a4;
  if ( (unsigned int)*a4 < *(uint32_t *)(a3 + 16) )
  {
    if ( a3 == a2[3] )
    {
      sub_C3F980(a1, (int)(uintptr_t)(a2), a3, a3, a4);
      return a1;
    }
    v10 = (int)(uintptr_t)(a2);
    v7 = sub_1904940(a3);
    a2 = (uint32_t *)v10;
    v5 = a4;
    if ( v6 > *(uint32_t *)(v7 + 16) )
    {
      if ( *(uint32_t *)(v7 + 12) != 0 )
        sub_C3F980(a1, v10, a3, a3, a4);
      else
        sub_C3F980(a1, v10, 0, v7, a4);
      return a1;
    }
LABEL_15:
    sub_C3FA40((int)(uintptr_t)(v12), (int)(uintptr_t)(a2), v5);
    *a1 = v12[0];
    return a1;
  }
  if ( (unsigned int)*a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  if ( a3 == a2[4] )
  {
    sub_C3F980(a1, (int)(uintptr_t)(a2), 0, a3, a4);
    return a1;
  }
  v11 = (int)(uintptr_t)(a2);
  v9 = sub_19048E0(a3);
  a2 = (uint32_t *)v11;
  v5 = a4;
  if ( v6 >= *(uint32_t *)(v9 + 16) )
    goto LABEL_15;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    sub_C3F980(a1, v11, v9, v9, a4);
  else
    sub_C3F980(a1, v11, 0, a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C3FCD0_eac3fcd0  (binary VA: 0xc3fcd0)
// Original: sub_C3FCD0
// ----------------------------------------------------------------------------
void sub_C3FCD0_eac3fcd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FD10_eac3fd10  (binary VA: 0xc3fd10)
// Original: sub_C3FD10
// ----------------------------------------------------------------------------
void sub_C3FD10_eac3fd10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FD50_eac3fd50  (binary VA: 0xc3fd50)
// Original: sub_C3FD50
// ----------------------------------------------------------------------------
void sub_C3FD50_eac3fd50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CAC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FD90_eac3fd90  (binary VA: 0xc3fd90)
// Original: sub_C3FD90
// ----------------------------------------------------------------------------
void sub_C3FD90_eac3fd90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FDD0_eac3fdd0  (binary VA: 0xc3fdd0)
// Original: sub_C3FDD0
// ----------------------------------------------------------------------------
void sub_C3FDD0_eac3fdd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FE10_eac3fe10  (binary VA: 0xc3fe10)
// Original: sub_C3FE10
// ----------------------------------------------------------------------------
void sub_C3FE10_eac3fe10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FE50_eac3fe50  (binary VA: 0xc3fe50)
// Original: sub_C3FE50
// ----------------------------------------------------------------------------
void sub_C3FE50_eac3fe50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C388);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FE90_eac3fe90  (binary VA: 0xc3fe90)
// Original: sub_C3FE90
// ----------------------------------------------------------------------------
void sub_C3FE90_eac3fe90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C548);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FED0_eac3fed0  (binary VA: 0xc3fed0)
// Original: sub_C3FED0
// ----------------------------------------------------------------------------
void sub_C3FED0_eac3fed0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FF10_eac3ff10  (binary VA: 0xc3ff10)
// Original: sub_C3FF10
// ----------------------------------------------------------------------------
void sub_C3FF10_eac3ff10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C4C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FF50_eac3ff50  (binary VA: 0xc3ff50)
// Original: sub_C3FF50
// ----------------------------------------------------------------------------
void sub_C3FF50_eac3ff50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C448);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FF90_eac3ff90  (binary VA: 0xc3ff90)
// Original: sub_C3FF90
// ----------------------------------------------------------------------------
void sub_C3FF90_eac3ff90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C488);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FFD0_eac3ffd0  (binary VA: 0xc3ffd0)
// Original: sub_C3FFD0
// ----------------------------------------------------------------------------
void sub_C3FFD0_eac3ffd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C768);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40010_eac40010  (binary VA: 0xc40010)
// Original: sub_C40010
// ----------------------------------------------------------------------------
void sub_C40010_eac40010(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C728);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40050_eac40050  (binary VA: 0xc40050)
// Original: sub_C40050
// ----------------------------------------------------------------------------
void sub_C40050_eac40050(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C6E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40090_eac40090  (binary VA: 0xc40090)
// Original: sub_C40090
// ----------------------------------------------------------------------------
void sub_C40090_eac40090(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C928);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C400D0_eac400d0  (binary VA: 0xc400d0)
// Original: sub_C400D0
// ----------------------------------------------------------------------------
void sub_C400D0_eac400d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C968);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40110  (binary VA: 0xc40110)
// Original: sub_C40110
// ----------------------------------------------------------------------------
void sub_C40110(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C9A8);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_206C9E0);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40160_eac40160  (binary VA: 0xc40160)
// Original: sub_C40160
// ----------------------------------------------------------------------------
void sub_C40160_eac40160(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C868);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C401A0_eac401a0  (binary VA: 0xc401a0)
// Original: sub_C401A0
// ----------------------------------------------------------------------------
void sub_C401A0_eac401a0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C8A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C401E0_eac401e0  (binary VA: 0xc401e0)
// Original: sub_C401E0
// ----------------------------------------------------------------------------
void sub_C401E0_eac401e0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C8E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40220_eac40220  (binary VA: 0xc40220)
// Original: sub_C40220
// ----------------------------------------------------------------------------
void sub_C40220_eac40220(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40260_eac40260  (binary VA: 0xc40260)
// Original: sub_C40260
// ----------------------------------------------------------------------------
void sub_C40260_eac40260(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C828);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C402A0_eac402a0  (binary VA: 0xc402a0)
// Original: sub_C402A0
// ----------------------------------------------------------------------------
void sub_C402A0_eac402a0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA48);
  g4_std::string::Destroy((char *)a1 + 52);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C402F0  (binary VA: 0xc402f0)
// Original: sub_C402F0
// ----------------------------------------------------------------------------
int * sub_C402F0(int *result)
{
  int *v1;
  int v2;
  int v3;
  gameswf::ASValue::Self *v4;

  v1 = result;
  v2 = result[1];
  v3 = *result;
  if ( v2 != *result )
  {
    do
    {
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v3 + 4));
      v4 = (gameswf::ASValue::Self *)v3;
      v3 += 16;
      result = (g4_std::string::Destroy(v4), (int *)0);
    }
    while ( v2 != v3 );
    v3 = *v1;
  }
  if ( v3 != 0 )
    return (int *)sub_4EB870(v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C40350  (binary VA: 0xc40350)
// Original: sub_C40350
// ----------------------------------------------------------------------------
void sub_C40350(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  v25 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v25[3];
      v20 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v21 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v22 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v23 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v24 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v19 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)v8[3];
                                  if ( v9 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      sub_C40350(a1, v9[3]);
                                      v18 = (uint32_t *)v9[2];
                                      opDelete(v9);
                                      if ( v18 == nullptr )
                                        break;
                                      v9 = v18;
                                    }
                                  }
                                  v10 = (uint32_t *)v8[2];
                                  opDelete(v8);
                                  if ( v10 == nullptr )
                                    break;
                                  v8 = v10;
                                }
                              }
                              v11 = (uint32_t *)v19[2];
                              opDelete(v19);
                              if ( v11 == nullptr )
                                break;
                              v19 = v11;
                              v7 = v11;
                            }
                          }
                          v12 = (uint32_t *)v24[2];
                          opDelete(v24);
                          if ( v12 == nullptr )
                            break;
                          v24 = v12;
                          v6 = v12;
                        }
                      }
                      v13 = (uint32_t *)v23[2];
                      opDelete(v23);
                      if ( v13 == nullptr )
                        break;
                      v23 = v13;
                      v5 = v13;
                    }
                  }
                  v14 = (uint32_t *)v22[2];
                  opDelete(v22);
                  if ( v14 == nullptr )
                    break;
                  v22 = v14;
                  v4 = v14;
                }
              }
              v15 = (uint32_t *)v21[2];
              opDelete(v21);
              if ( v15 == nullptr )
                break;
              v21 = v15;
              v3 = v15;
            }
          }
          v16 = (uint32_t *)v20[2];
          opDelete(v20);
          if ( v16 == nullptr )
            break;
          v20 = v16;
          v2 = v16;
        }
      }
      v17 = (uint32_t *)v25[2];
      opDelete(v25);
      if ( v17 == nullptr )
        break;
      v25 = v17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C40500  (binary VA: 0xc40500)
// Original: sub_C40500
// ----------------------------------------------------------------------------
int sub_C40500(int a1, char *a2, int a3, int a4, int a5, gameswf::ASValue::Self *a6, int *a7)
{
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v15)) > _g4_s1 ? (31u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);

  if ( a2 == nullptr )
    a2 = "null";
  v8 = 0;
  g4_std::string::construct_from_cstr(a1, a2, (int)(uintptr_t)(v15));
  g4_std::string::construct_copy(a1 + 4, a5);
  g4_std::string::construct_copy(a1 + 8, a3);
  g4_std::string::construct_copy(a1 + 12, a4);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a1 + 16), a6);
  v9 = a7[1] - *a7;
  result = 0;
  *(uint32_t *)(a1 + 28) = 0;
  v11 = v9 >> 4;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  if ( v11 != 0 )
  {
    v8 = 16 * v11;
    result = sub_4EB830(16 * v11);
  }
  *(uint32_t *)(a1 + 28) = result;
  *(uint32_t *)(a1 + 32) = result;
  *(uint32_t *)(a1 + 36) = result + v8;
  v12 = *a7;
  v14 = a7[1];
  v13 = result;
  if ( v14 != *a7 )
  {
    do
    {
      if ( v13 != 0 )
      {
        g4_std::string::construct_copy(v13, v12);
        *(uint8_t *)(v13 + 4) = 0;
        *(uint8_t *)(v13 + 5) = 0;
        result = (int)(uintptr_t)(gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v13 + 4), (const gameswf::ASValue::Self *)(v12 + 4)));
      }
      v13 += 16;
      v12 += 16;
    }
    while ( v14 != v12 );
  }
  *(uint32_t *)(a1 + 32) = v13;
  *(uint8_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 1;
  *(uint32_t *)(a1 + 48) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C40640  (binary VA: 0xc40640)
// Original: sub_C40640
// ----------------------------------------------------------------------------
int sub_C40640(int *a1, int a2, int a3)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int *_g4_t_v34;
  typedef char _g4_t_v35[4];
  typedef uint8_t _g4_t_v36[40];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v25)) > _g4_s1 ? (24u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v26)) > _g4_s2 ? (24u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v27)) > _g4_s3 ? (24u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v28)) > _g4_s4 ? (28u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v29)) > _g4_s5 ? (32u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v31)) > _g4_s6 ? (36u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v32)) > _g4_s7 ? (36u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v33)) > _g4_s8 ? (40u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v34)) > _g4_s9 ? (44u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v35)) > _g4_s10 ? (48u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v36)) > _g4_s11 ? (52u + sizeof(_g4_t_v36)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);

  v4 = a1;
  v5 = a1[1];
  if ( v5 != a1[2] )
  {
    v6 = 0;
    if ( v5 != 0 )
    {
      v25 = v5;
      g4_std::string::construct_copy(v5, v5 - 16);
      *(uint8_t *)(v25 + 4) = 0;
      *(uint8_t *)(v25 + 5) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v25 + 4), (const gameswf::ASValue::Self *)(v25 - 12));
      v6 = v4[1];
    }
    v4[1] = v6 + 16;
    g4_std::string::construct_copy(v35, a3);
    v36[0] = 0;
    v36[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v36, (const gameswf::ASValue::Self *)(a3 + 4));
    v7 = v4[1] - 32;
    v8 = (v7 - a2) >> 4;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        g4_std::string::assign_str(v7, v7 - 16);
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v7 + 4), (const gameswf::ASValue::Self *)(v7 - 12));
        if ( --v8 == 0 )
          break;
        v7 -= 16;
      }
    }
    g4_std::string::assign_str(a2, v35);
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a2 + 4), (const gameswf::ASValue::Self *)v36);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v36);
    return ((g4_std::string::Destroy(v35)), (int)0);
  }
  v10 = *a1;
  v11 = (v5 - v10) >> 4;
  if ( v11 != 0 )
  {
    v23 = 2 * v11;
    if ( v11 > 2 * v11 || v23 > 0xFFFFFFF )
    {
      v33 = -16;
      v12 = (a2 - v10) >> 4;
    }
    else
    {
      v33 = 32 * v11;
      v12 = (a2 - v10) >> 4;
      if ( v23 == 0 )
      {
        v13 = 16;
        v29 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v33 = 16;
    v12 = (a2 - v10) >> 4;
  }
  v26 = v12;
  v29 = sub_4EB830(v33);
  v13 = v29 + 16;
  v12 = v26;
LABEL_12:
  v14 = v29 + 16 * v12;
  if ( v14 != 0 )
  {
    v28 = v13;
    v27 = v14;
    g4_std::string::construct_copy(v14, a3);
    *(uint8_t *)(v27 + 4) = 0;
    *(uint8_t *)(v27 + 5) = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v27 + 4), (const gameswf::ASValue::Self *)(a3 + 4));
    v13 = v28;
  }
  if ( a2 != *v4 )
  {
    v34 = v4;
    v15 = v29;
    v16 = *v4;
    do
    {
      if ( v15 != 0 )
      {
        g4_std::string::construct_copy(v15, v16);
        *(uint8_t *)(v15 + 4) = 0;
        *(uint8_t *)(v15 + 5) = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v15 + 4), (const gameswf::ASValue::Self *)(v16 + 4));
      }
      v16 += 16;
      v15 += 16;
    }
    while ( a2 != v16 );
    v4 = v34;
    v13 = v15 + 16;
  }
  v17 = v4[1];
  v18 = v13;
  if ( a2 != v17 )
  {
    v19 = a2;
    v31 = v4;
    v20 = v4[1];
    do
    {
      if ( v18 != 0 )
      {
        g4_std::string::construct_copy(v18, v19);
        *(uint8_t *)(v18 + 4) = 0;
        *(uint8_t *)(v18 + 5) = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v18 + 4), (const gameswf::ASValue::Self *)(v19 + 4));
      }
      v19 += 16;
      v18 += 16;
    }
    while ( v20 != v19 );
    v4 = v31;
    v17 = v31[1];
  }
  v21 = *v4;
  if ( v17 != *v4 )
  {
    v32 = v4;
    v22 = v17;
    do
    {
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v21 + 4));
      v24 = v21;
      v21 += 16;
      g4_std::string::Destroy(v24);
    }
    while ( v22 != v21 );
    v4 = v32;
    v21 = *v32;
  }
  if ( v21 != 0 )
    sub_4EB870(v21);
  *v4 = v29;
  v4[1] = v18;
  v4[2] = v29 + v33;
  return v29;
}

// ----------------------------------------------------------------------------
// Function: sub_C40920_eac40920  (binary VA: 0xc40920)
// Original: sub_C40920
// ----------------------------------------------------------------------------
int sub_C40920_eac40920(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint8_t *v3;

  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D2D64 == 0 )
    v3 = (uint8_t *)(&unk_20D2D60);
  v3[91] = a2 == 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C409E0  (binary VA: 0xc409e0)
// Original: sub_C409E0
// ----------------------------------------------------------------------------
int sub_C409E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint8_t *v3;

  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D2D64 == 0 )
    v3 = (uint8_t *)(&unk_20D2D60);
  v3[92] = a2 == 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C40AA0  (binary VA: 0xc40aa0)
// Original: sub_C40AA0
// ----------------------------------------------------------------------------
void sub_C40AA0(int a1, void *a2)
{
  int *v2;
  uint32_t *v3;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  uint32_t *v8;

  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D54A8 == 0 )
    v2 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v2), 27, a1 + 52);
  v3 = *(uint32_t **)(a1 + 56);
  v4 = (uint32_t *)(a1 + 56);
  if ( v3 != (uint32_t *)(a1 + 56) )
  {
    v5 = a2;
    v8 = (uint32_t *)(a1 + 56);
    while ( 1 )
    {
      v6 = (uint32_t *)*v3;
      if ( (void *)v3[2] != v5 )
        goto LABEL_6;
      if ( &a2 == (void **)(uintptr_t)(v3 + 2) )
        break;
      v7 = v5;
      sub_1901940(v3);
      opDelete(v3);
      v5 = v7;
      if ( v4 == v6 )
      {
LABEL_11:
        if ( v4 != v8 )
        {
          sub_1901940(v8);
          opDelete(v8);
        }
        return;
      }
LABEL_7:
      v3 = v6;
    }
    v8 = v3;
LABEL_6:
    if ( v4 == v6 )
      goto LABEL_11;
    goto LABEL_7;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C40BD0_eac40bd0  (binary VA: 0xc40bd0)
// Original: sub_C40BD0
// ----------------------------------------------------------------------------
int sub_C40BD0_eac40bd0(int a1)
{
  return ((sub_C40BE0((void *)(a1 - 52))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C40BE0  (binary VA: 0xc40be0)
// Original: sub_C40BE0
// ----------------------------------------------------------------------------
void sub_C40BE0(grapher::ActorBase::Self *a1)
{
  bool v1;
  int *v2;
  void **v3;
  void **v4;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C688);
  v1 = byte_20D5480 == 0;
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C6C0);
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D54A8 == 0 )
    v2 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v2), 27, (int)(uintptr_t)(a1) + 52);
  v3 = *((void ***)a1 + 14);
  if ( v3 != (void **)((char *)a1 + 56) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)((char *)a1 + 56) )
        break;
      v3 = v4;
    }
  }
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_204BDE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40CE0_eac40ce0  (binary VA: 0xc40ce0)
// Original: sub_C40CE0
// ----------------------------------------------------------------------------
int sub_C40CE0_eac40ce0(int a1)
{
  return ((ActorGameEventOnPickUp::Destroy(a1 - 52)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnPickUp::Destroy  (binary VA: 0xc40cf0)
// Original: ActorGameEventOnPickUp::~ActorGameEventOnPickUp
// ----------------------------------------------------------------------------
void ActorGameEventOnPickUp::Destroy(grapher::ActorBase::Self *a1)
{
  bool v1;
  int *v2;
  uint32_t *v3;
  uint32_t *v4;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C688);
  v1 = byte_20D5480 == 0;
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C6C0);
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D54A8 == 0 )
    v2 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v2), 27, (int)(uintptr_t)(a1) + 52);
  v3 = *((uint32_t **)a1 + 14);
  if ( v3 != (uint32_t *)((char *)a1 + 56) )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == (uint32_t *)((char *)a1 + 56) )
        break;
      v3 = v4;
    }
  }
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_204BDE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40DE0_eac40de0  (binary VA: 0xc40de0)
// Original: sub_C40DE0
// ----------------------------------------------------------------------------
int sub_C40DE0_eac40de0(int a1)
{
  return ((ActorGameEventOnKill::Destroy(a1 - 52)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnKill::Destroy  (binary VA: 0xc40df0)
// Original: ActorGameEventOnKill::~ActorGameEventOnKill
// ----------------------------------------------------------------------------
void ActorGameEventOnKill::Destroy(grapher::ActorBase::Self *a1)
{
  bool v1;
  int *v2;
  uint32_t *v3;
  uint32_t *v4;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C628);
  v1 = byte_20D5480 == 0;
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C660);
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D54A8 == 0 )
    v2 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v2), 21, (int)(uintptr_t)(a1) + 52);
  v3 = *((uint32_t **)a1 + 14);
  if ( v3 != (uint32_t *)((char *)a1 + 56) )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == (uint32_t *)((char *)a1 + 56) )
        break;
      v3 = v4;
    }
  }
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_204BDE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40EE0_eac40ee0  (binary VA: 0xc40ee0)
// Original: sub_C40EE0
// ----------------------------------------------------------------------------
int sub_C40EE0_eac40ee0(int a1)
{
  return ((ActorGameEventLockLootDrop::Destroy(a1 - 52)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventLockLootDrop::Destroy  (binary VA: 0xc40ef0)
// Original: ActorGameEventLockLootDrop::~ActorGameEventLockLootDrop
// ----------------------------------------------------------------------------
void ActorGameEventLockLootDrop::Destroy(grapher::ActorBase::Self *a1)
{
  bool v1;
  int *v2;
  uint32_t *v3;
  uint32_t *v4;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C5C8);
  v1 = byte_20D5480 == 0;
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C600);
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D54A8 == 0 )
    v2 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v2), 20, (int)(uintptr_t)(a1) + 52);
  v3 = *((uint32_t **)a1 + 14);
  if ( v3 != (uint32_t *)((char *)a1 + 56) )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == (uint32_t *)((char *)a1 + 56) )
        break;
      v3 = v4;
    }
  }
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_204BDE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40FE0  (binary VA: 0xc40fe0)
// Original: sub_C40FE0
// ----------------------------------------------------------------------------
int sub_C40FE0(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int *v6;
  int v8;
  uint32_t *v9;

  v2 = (uint32_t *)(a1 + 56);
  v3 = *(uint32_t **)(a1 + 56);
  if ( v3 == (uint32_t *)(a1 + 56) )
    goto LABEL_10;
  v4 = a2;
  v9 = (uint32_t *)(a1 + 56);
  while ( 1 )
  {
    v5 = (uint32_t *)*v3;
    if ( v3[2] == v4 )
    {
      if ( &a2 != (int *)(uintptr_t)(v3 + 2) )
        break;
      v9 = v3;
    }
    if ( v2 == v5 )
      goto LABEL_8;
LABEL_4:
    v3 = v5;
  }
  v8 = v4;
  sub_1901940(v3);
  opDelete(v3);
  v4 = v8;
  if ( v2 != v5 )
    goto LABEL_4;
LABEL_8:
  if ( v2 != v9 )
  {
    sub_1901940(v9);
    opDelete(v9);
  }
LABEL_10:
  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D54A8 == 0 )
    v6 = (int *)(&dword_20D54A0);
  return sub_A6C300((int)(uintptr_t)(v6), 21, a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: sub_C41110  (binary VA: 0xc41110)
// Original: sub_C41110
// ----------------------------------------------------------------------------
int sub_C41110(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int *v6;
  int v8;
  uint32_t *v9;

  v2 = (uint32_t *)(a1 + 56);
  v3 = *(uint32_t **)(a1 + 56);
  if ( v3 == (uint32_t *)(a1 + 56) )
    goto LABEL_10;
  v4 = a2;
  v9 = (uint32_t *)(a1 + 56);
  while ( 1 )
  {
    v5 = (uint32_t *)*v3;
    if ( v3[2] == v4 )
    {
      if ( &a2 != (int *)(uintptr_t)(v3 + 2) )
        break;
      v9 = v3;
    }
    if ( v2 == v5 )
      goto LABEL_8;
LABEL_4:
    v3 = v5;
  }
  v8 = v4;
  sub_1901940(v3);
  opDelete(v3);
  v4 = v8;
  if ( v2 != v5 )
    goto LABEL_4;
LABEL_8:
  if ( v2 != v9 )
  {
    sub_1901940(v9);
    opDelete(v9);
  }
LABEL_10:
  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D54A8 == 0 )
    v6 = (int *)(&dword_20D54A0);
  return sub_A6C300((int)(uintptr_t)(v6), 20, a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: sub_C41240_eac41240  (binary VA: 0xc41240)
// Original: sub_C41240
// ----------------------------------------------------------------------------
int sub_C41240_eac41240(int a1)
{
  return ((sub_C41250((void *)(a1 - 52))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C41250  (binary VA: 0xc41250)
// Original: sub_C41250
// ----------------------------------------------------------------------------
void sub_C41250(grapher::ActorBase::Self *a1)
{
  bool v1;
  int *v2;
  void **v3;
  void **v4;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C628);
  v1 = byte_20D5480 == 0;
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C660);
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D54A8 == 0 )
    v2 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v2), 21, (int)(uintptr_t)(a1) + 52);
  v3 = *((void ***)a1 + 14);
  if ( v3 != (void **)((char *)a1 + 56) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)((char *)a1 + 56) )
        break;
      v3 = v4;
    }
  }
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_204BDE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C41350_eac41350  (binary VA: 0xc41350)
// Original: sub_C41350
// ----------------------------------------------------------------------------
int sub_C41350_eac41350(int a1)
{
  return ((sub_C41360((void *)(a1 - 52))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C41360  (binary VA: 0xc41360)
// Original: sub_C41360
// ----------------------------------------------------------------------------
void sub_C41360(grapher::ActorBase::Self *a1)
{
  bool v1;
  int *v2;
  void **v3;
  void **v4;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C5C8);
  v1 = byte_20D5480 == 0;
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C600);
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D54A8 == 0 )
    v2 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v2), 20, (int)(uintptr_t)(a1) + 52);
  v3 = *((void ***)a1 + 14);
  if ( v3 != (void **)((char *)a1 + 56) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)((char *)a1 + 56) )
        break;
      v3 = v4;
    }
  }
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_204BDE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C41460  (binary VA: 0xc41460)
// Original: sub_C41460
// ----------------------------------------------------------------------------
int sub_C41460(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v4;
  int *v5;

  G4_VCALL<void>(a1, 28, a3);
  if ( a2 == 0 )
  {
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(a3);
    sub_1901920(v4, (char *)a1 + 56);
    if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
    {
      sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
      __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D54A8 == 0 )
      v5 = (int *)(&dword_20D54A0);
    sub_A6C280((int)(uintptr_t)(v5), 27, (int)(uintptr_t)(a1) + 52);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C41590  (binary VA: 0xc41590)
// Original: sub_C41590
// ----------------------------------------------------------------------------
int sub_C41590(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v4;
  int *v5;

  G4_VCALL<void>(a1, 28, a3);
  if ( a2 == 0 )
  {
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(a3);
    sub_1901920(v4, (char *)a1 + 56);
    if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
    {
      sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
      __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D54A8 == 0 )
      v5 = (int *)(&dword_20D54A0);
    sub_A6C280((int)(uintptr_t)(v5), 21, (int)(uintptr_t)(a1) + 52);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C416C0  (binary VA: 0xc416c0)
// Original: sub_C416C0
// ----------------------------------------------------------------------------
int sub_C416C0(uint32_t *a1)
{
  int v2;
  int v3;
  gameswf::ASValue::Self *v5;

  v2 = a1[8];
  v3 = a1[7];
  if ( v2 != v3 )
  {
    do
    {
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v3 + 4));
      v5 = (gameswf::ASValue::Self *)v3;
      v3 += 16;
      g4_std::string::Destroy(v5);
    }
    while ( v2 != v3 );
    v3 = a1[7];
  }
  if ( v3 != 0 )
    sub_4EB870(v3);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(a1 + 4));
  g4_std::string::Destroy(a1 + 3);
  g4_std::string::Destroy(a1 + 2);
  g4_std::string::Destroy(a1 + 1);
  return ((g4_std::string::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C41750_eac41750  (binary VA: 0xc41750)
// Original: sub_C41750
// ----------------------------------------------------------------------------
int sub_C41750_eac41750(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  *((uint8_t *)a1 + 61) = 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C41820_eac41820  (binary VA: 0xc41820)
// Original: sub_C41820
// ----------------------------------------------------------------------------
int sub_C41820_eac41820(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  G4_VCALL<void>(a1, 28, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C418F0_eac418f0  (binary VA: 0xc418f0)
// Original: sub_C418F0
// ----------------------------------------------------------------------------
int sub_C418F0_eac418f0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  if ( a2 == 0 )
    *((uint8_t *)a1 + 52) = 0;
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C419C0_eac419c0  (binary VA: 0xc419c0)
// Original: sub_C419C0
// ----------------------------------------------------------------------------
char sub_C419C0_eac419c0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  g4_cxa_guard_t *v6;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 == 0 )
    return v3;
  v3 = *(uint32_t *)(*(uint32_t *)(v3 + 408) - 12);
  if ( v3 == 0 )
    return v3;
  v3 = *(uint32_t *)(v4 + 404);
  if ( v3 == 0 )
    return v3;
  if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 36))(*(uint32_t *)(v4 + 404)) != 0 )
  {
    v6 = (g4_cxa_guard_t *)(*(uint32_t *)(**(uint32_t **)(v4 + 780) - 12) + *(uint32_t *)(v4 + 780));
    if ( G4_VCALL<uint8_t>(v6, 220) == 0 )
    {
      LOBYTE(v3) = G4_VCALL<int>(v4, 432);
      if ( (uint8_t)v3 == 0 )
        return v3;
    }
  }
  else
  {
    v3 = *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12);
    if ( v3 == 0 )
      return v3;
    v3 = *(uint32_t *)(v4 + 404);
    if ( v3 == 0 )
      return v3;
    LOBYTE(v3) = (*(int (**)(uint32_t))(*(uint32_t *)v3 + 32))(*(uint32_t *)(v4 + 404));
    if ( (v3 & 2) == 0 )
      return v3;
    if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(v4 + 1836) + 44))(*(uint32_t *)(v4 + 1836)) == 0 )
    {
      LOBYTE(v3) = sub_97EB90(v4);
      if ( (uint8_t)v3 == 0 )
        return v3;
    }
    LOBYTE(v3) = sub_9873F0(v4, 13);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 12);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 10);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 11);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 12);
    if ( (uint8_t)v3 != 0 )
      return v3;
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_C41BC0  (binary VA: 0xc41bc0)
// Original: sub_C41BC0
// ----------------------------------------------------------------------------
int sub_C41BC0(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  char v8; // bp
  unsigned int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_C3F8C0(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < (unsigned int)*a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C41D00  (binary VA: 0xc41d00)
// Original: sub_C41D00
// ----------------------------------------------------------------------------
int sub_C41D00(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef uint8_t _g4_t_v3[7];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Lock Access To Skills", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Menus", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Lock", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Unlock", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C41E80_eac41e80  (binary VA: 0xc41e80)
// Original: sub_C41E80
// ----------------------------------------------------------------------------
int sub_C41E80_eac41e80(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef uint8_t _g4_t_v3[7];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Lock Access To Items", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Menus", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Lock", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Unlock", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C42000_eac42000  (binary VA: 0xc42000)
// Original: sub_C42000
// ----------------------------------------------------------------------------
int sub_C42000_eac42000(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef uint8_t _g4_t_v3[7];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Tutorial", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "HUD", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Begin", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "End", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C42180_eac42180  (binary VA: 0xc42180)
// Original: sub_C42180
// ----------------------------------------------------------------------------
int sub_C42180_eac42180(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v3)) > _g4_s1 ? (29u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v4)) > _g4_s2 ? (32u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v5)) > _g4_s3 ? (36u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v6)) > _g4_s4 ? (40u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v7)) > _g4_s5 ? (44u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v8)) > _g4_s6 ? (48u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v9)) > _g4_s7 ? (52u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v10)) > _g4_s8 ? (56u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v11)) > _g4_s9 ? (60u + sizeof(_g4_t_v11)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 29u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 32u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 36u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "HUD Highlight", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Deprecated", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "The name of the HUD to highlight", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Group", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Group", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 1, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C423B0_eac423b0  (binary VA: 0xc423b0)
// Original: sub_C423B0
// ----------------------------------------------------------------------------
int sub_C423B0_eac423b0(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef uint8_t _g4_t_v3[7];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "HUD Controls", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Deprecated", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Show", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Hide", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C42530_eac42530  (binary VA: 0xc42530)
// Original: sub_C42530
// ----------------------------------------------------------------------------
int sub_C42530_eac42530(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef uint8_t _g4_t_v3[7];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Lock Race Controls", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Deprecated", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Lock", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Unlock", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C426B0_eac426b0  (binary VA: 0xc426b0)
// Original: sub_C426B0
// ----------------------------------------------------------------------------
int sub_C426B0_eac426b0(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef void *_g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (26u + sizeof(_g4_t_v4)) > _g4_s2 ? (26u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v6)) > _g4_s4 ? (32u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v7)) > _g4_s5 ? (36u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v8)) > _g4_s6 ? (40u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v9)) > _g4_s7 ? (44u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v10)) > _g4_s8 ? (48u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v11)) > _g4_s9 ? (52u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v12)) > _g4_s10 ? (56u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v13)) > _g4_s11 ? (60u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v14)) > _g4_s12 ? (64u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v15)) > _g4_s13 ? (68u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v16)) > _g4_s14 ? (72u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v17)) > _g4_s15 ? (76u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v18)) > _g4_s16 ? (80u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v19)) > _g4_s17 ? (84u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v20)) > _g4_s18 ? (88u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v21)) > _g4_s19 ? (92u + sizeof(_g4_t_v21)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 26u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 6, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Wanted (Imm=%Immediate) [C]", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Conditions", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v17, 0, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "<", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 2, &v18, 0, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), ">", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 3, &v19, 0, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "==", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "!=", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 5, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(&v5) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Immediate", (int)(uintptr_t)(&v5));
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v10, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Immediate", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v2, 1, 0, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Watend level to compare from", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Wanted Level", (int)(uintptr_t)(&v5) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v13, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Level", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v14), v3, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v13);
  return ((g4_std::string::Destroy(&v15)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C42AF0_eac42af0  (binary VA: 0xc42af0)
// Original: sub_C42AF0
// ----------------------------------------------------------------------------
int sub_C42AF0_eac42af0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39[4];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v10)) > _g4_s5 ? (24u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v11)) > _g4_s6 ? (24u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v12)) > _g4_s7 ? (48u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v13)) > _g4_s8 ? (52u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v14)) > _g4_s9 ? (56u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v15)) > _g4_s10 ? (60u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v16)) > _g4_s11 ? (64u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v17)) > _g4_s12 ? (68u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v18)) > _g4_s13 ? (84u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v19)) > _g4_s14 ? (100u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v20)) > _g4_s15 ? (116u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v21)) > _g4_s16 ? (120u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v22)) > _g4_s17 ? (124u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v23)) > _g4_s18 ? (128u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v24)) > _g4_s19 ? (132u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v25)) > _g4_s20 ? (136u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v26)) > _g4_s21 ? (140u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v27)) > _g4_s22 ? (144u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v28)) > _g4_s23 ? (148u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v29)) > _g4_s24 ? (152u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v30)) > _g4_s25 ? (156u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v31)) > _g4_s26 ? (160u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v32)) > _g4_s27 ? (164u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (168u + sizeof(_g4_t_v33)) > _g4_s28 ? (168u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v34)) > _g4_s29 ? (172u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v35)) > _g4_s30 ? (176u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v36)) > _g4_s31 ? (180u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v37)) > _g4_s32 ? (184u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (188u + sizeof(_g4_t_v38)) > _g4_s33 ? (188u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v39)) > _g4_s34 ? (192u + sizeof(_g4_t_v39)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 116u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 120u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 124u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 128u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 132u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 136u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 140u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 144u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 148u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 152u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 156u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 160u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 164u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 168u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 172u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 176u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 180u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 184u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 188u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 192u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Has Vehicle (Imm=%Immediate) [C]", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Conditions", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "In", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v16));
  grapher::ActorBase::AddPin(a1, 1, &v36, 0, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Driver", (int)(uintptr_t)(&v16) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v37, 0, -1);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Passenger", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v38, 0, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v39), "No Vehicle", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddPin(a1, 4, v39, 0, -1);
  g4_std::string::Destroy(v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Subject", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Subject", (int)(uintptr_t)(&v12) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v22, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Subject", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v7, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Check right now or check each frame.", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Immediate", (int)(uintptr_t)(&v13) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Immediate", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v5, 1, 1, (int)(uintptr_t)(&v27), 1);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Vehicle of the subject, if any", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Vehicle", (int)(uintptr_t)(&v14));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v18 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 9, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Vehicle", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 2);
  g4_std::string::Destroy(&v29);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Filter that matches vehicle the player should have (GIV_vehicleinfo.xml).", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Vehicle Filter", (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "VehicleFilter.All", (int)(uintptr_t)(&v14) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &v31);
  v19 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 11, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Vehicle Filter", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 1, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C43290_eac43290  (binary VA: 0xc43290)
// Original: sub_C43290
// ----------------------------------------------------------------------------
int sub_C43290_eac43290(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v9)) > _g4_s5 ? (16u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v10)) > _g4_s6 ? (32u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v11)) > _g4_s7 ? (36u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v12)) > _g4_s8 ? (40u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v13)) > _g4_s9 ? (44u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v14)) > _g4_s10 ? (48u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v15)) > _g4_s11 ? (52u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v16)) > _g4_s12 ? (68u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v22)) > _g4_s18 ? (104u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v23)) > _g4_s19 ? (108u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v24)) > _g4_s20 ? (112u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v25)) > _g4_s21 ? (116u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v26)) > _g4_s22 ? (120u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v27)) > _g4_s23 ? (124u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v28)) > _g4_s24 ? (128u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v29)) > _g4_s25 ? (132u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v30)) > _g4_s26 ? (136u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v31)) > _g4_s27 ? (140u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v32)) > _g4_s28 ? (144u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v33)) > _g4_s29 ? (148u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v34)) > _g4_s30 ? (152u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v35)) > _g4_s31 ? (156u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v36)) > _g4_s32 ? (160u + sizeof(_g4_t_v36)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 144u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 148u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 152u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 6, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In Range (Imm=%Immediate) [C]", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Conditions", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "In", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v31, 1, -1);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Out", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v32, 0, -1);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "In Range", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddPin(a1, 2, &v33, 0, -1);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Out of Range", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddPin(a1, 3, &v34, 0, -1);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "All in Range", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v35, 0, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v36), "All out of Range", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddPin(a1, 5, v36, 0, -1);
  g4_std::string::Destroy(v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Object to compare to the targets", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Reference", (int)(uintptr_t)(&v10) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v15 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v19, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Reference", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v5, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Targets the subject must be in range of", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Targets", (int)(uintptr_t)(&v11) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v16 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v22, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Targets", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v7, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Range to test", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Range", (int)(uintptr_t)(&v12));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v8), (int)(uintptr_t)(&v25), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Range", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v8, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Immediate", (int)(uintptr_t)(&v12) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Immediate", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v29), v9, 1, 0, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  return ((g4_std::string::Destroy(&v30)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C439E0_eac439e0  (binary VA: 0xc439e0)
// Original: sub_C439E0
// ----------------------------------------------------------------------------
int sub_C439E0_eac439e0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[20];
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v6)) > _g4_s2 ? (4u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v7)) > _g4_s3 ? (4u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v8)) > _g4_s4 ? (4u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v9)) > _g4_s5 ? (31u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v10)) > _g4_s6 ? (32u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v11)) > _g4_s7 ? (36u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v12)) > _g4_s8 ? (40u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v13)) > _g4_s9 ? (44u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v14)) > _g4_s10 ? (64u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v22)) > _g4_s18 ? (104u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v23)) > _g4_s19 ? (108u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v24)) > _g4_s20 ? (112u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v25)) > _g4_s21 ? (116u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v26)) > _g4_s22 ? (120u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v27)) > _g4_s23 ? (124u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v28)) > _g4_s24 ? (128u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v29)) > _g4_s25 ? (132u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v30)) > _g4_s26 ? (136u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v31)) > _g4_s27 ? (140u + sizeof(_g4_t_v31)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 31u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Attacked [C]", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Conditions", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetCategoryName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Out", (int)(uintptr_t)(v13));
  grapher::ActorBase::AddPin(a1, 1, &v28, 0, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Attacked", (int)(uintptr_t)(&v13[1]));
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Right Damage", (int)(uintptr_t)(&v13[2]));
  grapher::ActorBase::AddPin(a1, 4, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Wrong Damage", (int)(uintptr_t)(&v13[3]));
  grapher::ActorBase::AddPin(a1, 3, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The targets to kill or to keep alive", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Target", (int)(uintptr_t)(&v10) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v13[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 9, &v13[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( *(uint32_t *)&v13[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v13[4] + 44))(*(uint32_t *)&v13[4]);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Filter on the damage that must be done", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Damage Filter", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "DamageFilter.All", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v20);
  v14 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v21, 11, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Damage Filter", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v7, 1, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Ignore Damage under this threshold (in health points)", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Damage Threshold", (int)(uintptr_t)(&v12));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage Health Threshold", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v8, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C44010_eac44010  (binary VA: 0xc44010)
// Original: sub_C44010
// ----------------------------------------------------------------------------
int sub_C44010_eac44010(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Is Idle", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Conditions", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "In", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Out", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 0, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Idle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 0, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Not Idle", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Subject to test if idle (not in vehicle, not in cover, not in parkour, etc.)", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 1);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C44340_eac44340  (binary VA: 0xc44340)
// Original: sub_C44340
// ----------------------------------------------------------------------------
int sub_C44340_eac44340(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v9)) > _g4_s6 ? (44u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v10)) > _g4_s7 ? (48u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v11)) > _g4_s8 ? (52u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v12)) > _g4_s9 ? (56u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v13)) > _g4_s10 ? (60u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v14)) > _g4_s11 ? (64u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v15)) > _g4_s12 ? (68u + sizeof(_g4_t_v15)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Landed [C]", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Conditions", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "In", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Out", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 0, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Landed", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The gameobject that will must go in the zone", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C44620_eac44620  (binary VA: 0xc44620)
// Original: sub_C44620
// ----------------------------------------------------------------------------
int sub_C44620_eac44620(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[20];
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v8)) > _g4_s4 ? (30u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v11)) > _g4_s7 ? (40u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v13)) > _g4_s9 ? (68u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v14)) > _g4_s10 ? (72u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v22)) > _g4_s18 ? (104u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v23)) > _g4_s19 ? (108u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v24)) > _g4_s20 ? (112u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v25)) > _g4_s21 ? (116u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v26)) > _g4_s22 ? (120u + sizeof(_g4_t_v26)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Stolen [C]", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Conditions", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Out", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Stolen", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 0, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Leave", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 3, &v18, 0, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Wrong Vehicle", (int)(uintptr_t)(&v11[3]));
  grapher::ActorBase::AddPin(a1, 4, v26, 0, -1);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "the vehicle to stole", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v10));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v11[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v19, 9, &v11[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v5, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v11[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v11[4] + 44))(*(uint32_t *)&v11[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Filter that matches vehicle to steal. Exclusive with target.", (int)(uintptr_t)(&v11[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Vehicle Filter", (int)(uintptr_t)(v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "VehicleFilter.All", (int)(uintptr_t)(&v10) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v22);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 11, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Vehicle Filter", (int)(uintptr_t)(&v11[1]));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v23);
  return ((g4_std::string::Destroy(&v25)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C44B40  (binary VA: 0xc44b40)
// Original: sub_C44B40
// ----------------------------------------------------------------------------
int sub_C44B40(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef long double _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v6)) > _g4_s3 ? (30u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v8)) > _g4_s5 ? (36u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v9)) > _g4_s6 ? (48u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v10)) > _g4_s7 ? (52u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v11)) > _g4_s8 ? (56u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v12)) > _g4_s9 ? (60u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v13)) > _g4_s10 ? (64u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v14)) > _g4_s11 ? (68u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v15)) > _g4_s12 ? (72u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v16)) > _g4_s13 ? (76u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v17)) > _g4_s14 ? (80u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v18)) > _g4_s15 ? (84u + sizeof(_g4_t_v18)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 30u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "DropLoot", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Events", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "List of objects which lock/unlock drop loot", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "NPC Filter", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &dword_20D67E8);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Target", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Did the characters drop his loot?", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "DropLoot", (int)(uintptr_t)(&v7) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Drop Loot", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v5, 1, 0, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C44ED0  (binary VA: 0xc44ed0)
// Original: sub_C44ED0
// ----------------------------------------------------------------------------
int sub_C44ED0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[20];
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42[4];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v8)) > _g4_s3 ? (8u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v9)) > _g4_s4 ? (8u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v10)) > _g4_s5 ? (8u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v11)) > _g4_s6 ? (16u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v12)) > _g4_s7 ? (16u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (30u + sizeof(_g4_t_v13)) > _g4_s8 ? (30u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v14)) > _g4_s9 ? (32u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v15)) > _g4_s10 ? (36u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v16)) > _g4_s11 ? (40u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v17)) > _g4_s12 ? (44u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v18)) > _g4_s13 ? (48u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v19)) > _g4_s14 ? (68u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v20)) > _g4_s15 ? (84u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v21)) > _g4_s16 ? (92u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v22)) > _g4_s17 ? (96u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v23)) > _g4_s18 ? (100u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v24)) > _g4_s19 ? (104u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v25)) > _g4_s20 ? (108u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v26)) > _g4_s21 ? (112u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v27)) > _g4_s22 ? (116u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v28)) > _g4_s23 ? (120u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v29)) > _g4_s24 ? (124u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v30)) > _g4_s25 ? (128u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v31)) > _g4_s26 ? (132u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v32)) > _g4_s27 ? (136u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v33)) > _g4_s28 ? (140u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v34)) > _g4_s29 ? (144u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v35)) > _g4_s30 ? (148u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v36)) > _g4_s31 ? (152u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v37)) > _g4_s32 ? (156u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v38)) > _g4_s33 ? (160u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v39)) > _g4_s34 ? (164u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v40)) > _g4_s35 ? (168u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v41)) > _g4_s36 ? (172u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v42)) > _g4_s37 ? (176u + sizeof(_g4_t_v42)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 100u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 104u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 108u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 116u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 120u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 124u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 132u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 136u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 140u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 148u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 152u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 164u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 168u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "OnKill", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Events", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "In", (int)(uintptr_t)(v18));
  grapher::ActorBase::AddPin(a1, 0, &v39, 1, -1);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Out", (int)(uintptr_t)(&v18[1]));
  grapher::ActorBase::AddPin(a1, 1, &v40, 0, -1);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Kill", (int)(uintptr_t)(&v18[2]));
  grapher::ActorBase::AddPin(a1, 2, &v41, 0, -1);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v42), "Wrong Damage", (int)(uintptr_t)(&v18[3]));
  grapher::ActorBase::AddPin(a1, 3, v42, 0, -1);
  g4_std::string::Destroy(v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "List of killer that can raise kill event", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Attacker", (int)(uintptr_t)(&v14));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &dword_20D67E8);
  *(uint32_t *)&v18[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v23, 9, &v18[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Attacker", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v24), v6, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( *(uint32_t *)&v18[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v18[4] + 44))(*(uint32_t *)&v18[4]);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "List of killed that can raise kill event", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "NPC Filter", (int)(uintptr_t)(&v14) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &dword_20D67E8);
  v19 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 9, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Target", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "DamageFilter that can raise kill event", (int)(uintptr_t)(&v16) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Damage Filter", (int)(uintptr_t)(&v15) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "DamageFilter.All", (int)(uintptr_t)(&v15) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &v29);
  v20 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v30, 11, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Damage Filter", (int)(uintptr_t)(&v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v31), v10, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Max number of trigger", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Max # Triggers", (int)(uintptr_t)(&v16) + 2);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v33, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Max # Triggers", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v34), v11, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Killed Character", (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Killed", (int)(uintptr_t)(&v17) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v36, 9, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Killed", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v37), v12, 1, 1, (int)(uintptr_t)(&v38), 2);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v36);
  return ((g4_std::string::Destroy(&v38)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C45720  (binary VA: 0xc45720)
// Original: sub_C45720
// ----------------------------------------------------------------------------
int sub_C45720(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef g4_int128_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v6)) > _g4_s3 ? (23u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v8)) > _g4_s5 ? (28u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v9)) > _g4_s6 ? (32u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v10)) > _g4_s7 ? (48u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v11)) > _g4_s8 ? (52u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v12)) > _g4_s9 ? (56u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v13)) > _g4_s10 ? (60u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v14)) > _g4_s11 ? (64u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v15)) > _g4_s12 ? (68u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v16)) > _g4_s13 ? (72u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v17)) > _g4_s14 ? (76u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v18)) > _g4_s15 ? (80u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v19)) > _g4_s16 ? (84u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v20)) > _g4_s17 ? (88u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v21)) > _g4_s18 ? (92u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v22)) > _g4_s19 ? (96u + sizeof(_g4_t_v22)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 23u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "OnPickUp", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Events", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "In", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "PickedUp", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v21, 0, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Limit Reached", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 3, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Type of items to pick up", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Type", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "AllStockItems.", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v12);
  DWORD1(v9) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v13, 11, (char *)&v9 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Type", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v5, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v9) != 0 )
    G4_VCALL<void>(DWORD1(v9), 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Maximum number of items to pick up", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Limit", (int)(uintptr_t)(&v8) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Limit", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  return ((g4_std::string::Destroy(&v18)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C45B70_eac45b70  (binary VA: 0xc45b70)
// Original: sub_C45B70
// ----------------------------------------------------------------------------
int sub_C45B70_eac45b70(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int64_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v5)) > _g4_s2 ? (4u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v7)) > _g4_s4 ? (16u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v8)) > _g4_s5 ? (33u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v13)) > _g4_s10 ? (56u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v14)) > _g4_s11 ? (60u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v15)) > _g4_s12 ? (64u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v16)) > _g4_s13 ? (68u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v17)) > _g4_s14 ? (72u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v18)) > _g4_s15 ? (76u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v19)) > _g4_s16 ? (80u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v20)) > _g4_s17 ? (84u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v21)) > _g4_s18 ? (88u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v22)) > _g4_s19 ? (92u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v23)) > _g4_s20 ? (96u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v24)) > _g4_s21 ? (100u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v25)) > _g4_s22 ? (104u + sizeof(_g4_t_v25)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v26)) > _g4_s23 ? (108u + sizeof(_g4_t_v26)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v27)) > _g4_s24 ? (112u + sizeof(_g4_t_v27)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v28)) > _g4_s25 ? (116u + sizeof(_g4_t_v28)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v29)) > _g4_s26 ? (120u + sizeof(_g4_t_v29)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v30)) > _g4_s27 ? (124u + sizeof(_g4_t_v30)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v31)) > _g4_s28 ? (128u + sizeof(_g4_t_v31)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 33u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 100u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 116u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 120u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "OnHudPress", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Events", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "In", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Out", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Pressed", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Released", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "HUDElement to check for press or release.", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Hud Element", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "HudElements.", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &v15);
  HIDWORD(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v16, 11, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Hud Element", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v7, 1, 1, (int)(uintptr_t)(&v18), 1);
  g4_std::string::Destroy(&v17);
  if ( HIDWORD(v12) != 0 )
    G4_VCALL<void>(HIDWORD(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v21),
    "Amount of presses or releases after which the box cancels itself, -1 for infinite.",
    (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Count", (int)(uintptr_t)(&v9) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v19, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Count", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v3, 1, 1, (int)(uintptr_t)(&v21), 1);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Count the releases if true. If false, counts the presses instead.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Count Releases", (int)(uintptr_t)(&v10) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Count Releases", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v4, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "If the button should trigger the tutorial version or the normal menu.", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Is Tutorial Action", (int)(uintptr_t)(&v11) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Is Tutorial Action", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v26), v5, 1, 1, (int)(uintptr_t)(&v27), 1);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  return ((g4_std::string::Destroy(&v27)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C461C0_eac461c0  (binary VA: 0xc461c0)
// Original: sub_C461C0
// ----------------------------------------------------------------------------
int sub_C461C0_eac461c0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef long double _g4_t_v7 __attribute__((aligned(1)));
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v5)) > _g4_s2 ? (14u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v14)) > _g4_s11 ? (56u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v15)) > _g4_s12 ? (60u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v16)) > _g4_s13 ? (64u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v17)) > _g4_s14 ? (68u + sizeof(_g4_t_v17)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 14u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Script LOD", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Filters", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "In", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "LOD Active", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v15, 0, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "LOD Inactive", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v13),
    "The out pin will fired only if current device scriptMaxLOD is >= ScriptLOD specified",
    (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "ScriptLOD", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "ScriptLOD.VeryHigh", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v10);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "ScriptLOD", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  return ((g4_std::string::Destroy(&v13)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C46510_eac46510  (binary VA: 0xc46510)
// Original: sub_C46510
// ----------------------------------------------------------------------------
int sub_C46510_eac46510(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v5)) > _g4_s2 ? (0u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v7)) > _g4_s4 ? (12u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v8)) > _g4_s5 ? (16u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v9)) > _g4_s6 ? (20u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v10)) > _g4_s7 ? (24u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v11)) > _g4_s8 ? (28u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v12)) > _g4_s9 ? (32u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v13)) > _g4_s10 ? (48u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v14)) > _g4_s11 ? (52u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v15)) > _g4_s12 ? (56u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v16)) > _g4_s13 ? (60u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v17)) > _g4_s14 ? (64u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v18)) > _g4_s15 ? (68u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v19)) > _g4_s16 ? (72u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v20)) > _g4_s17 ? (76u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v21)) > _g4_s18 ? (80u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v22)) > _g4_s19 ? (84u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v23)) > _g4_s20 ? (88u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v24)) > _g4_s21 ? (92u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v25)) > _g4_s22 ? (96u + sizeof(_g4_t_v25)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v26)) > _g4_s23 ? (100u + sizeof(_g4_t_v26)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v27)) > _g4_s24 ? (104u + sizeof(_g4_t_v27)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v28)) > _g4_s25 ? (108u + sizeof(_g4_t_v28)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 84u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "ApplyProfileToCharacter", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "GangBattles", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Character", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Character", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Character", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Profile ID", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Profile ID", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Profile ID", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 1);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Whether the weapon should be applied", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Use weapon", (int)(uintptr_t)(&v10));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Use weapon", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 0, (int)(uintptr_t)(&v23), 1);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Whether or not fists should be replaced", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Replace fists", (int)(uintptr_t)(&v10) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Replace fists", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 0, (int)(uintptr_t)(&v26), 1);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C46AA0_eac46aa0  (binary VA: 0xc46aa0)
// Original: sub_C46AA0
// ----------------------------------------------------------------------------
int sub_C46AA0_eac46aa0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int64_t _g4_t_v6 __attribute__((aligned(1)));
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v5)) > _g4_s2 ? (17u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v7)) > _g4_s4 ? (28u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 17u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "ResetMemberList", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "GangBattles", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Clan type", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Clan", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 11, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Clan type", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 1);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  return ((g4_std::string::Destroy(&v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C46D30_eac46d30  (binary VA: 0xc46d30)
// Original: sub_C46D30
// ----------------------------------------------------------------------------
int sub_C46D30_eac46d30(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef long double _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v5)) > _g4_s2 ? (4u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (14u + sizeof(_g4_t_v6)) > _g4_s3 ? (14u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v7)) > _g4_s4 ? (16u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v8)) > _g4_s5 ? (20u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v9)) > _g4_s6 ? (32u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v10)) > _g4_s7 ? (36u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v11)) > _g4_s8 ? (40u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v12)) > _g4_s9 ? (44u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v13)) > _g4_s10 ? (48u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v14)) > _g4_s11 ? (52u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v15)) > _g4_s12 ? (56u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v16)) > _g4_s13 ? (60u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v17)) > _g4_s14 ? (64u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v18)) > _g4_s15 ? (68u + sizeof(_g4_t_v18)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 14u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "RetrieveClanMember", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "GangBattles", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Clan type", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Clan", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Clan type", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 1);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Profile id", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Profile id", (int)(uintptr_t)(&v7) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Profile ID", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 2);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C470C0_eac470c0  (binary VA: 0xc470c0)
// Original: sub_C470C0
// ----------------------------------------------------------------------------
int sub_C470C0_eac470c0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[20];
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43[4];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v8)) > _g4_s2 ? (0u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v9)) > _g4_s3 ? (0u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v10)) > _g4_s4 ? (0u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v11)) > _g4_s5 ? (0u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v12)) > _g4_s6 ? (0u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v13)) > _g4_s7 ? (0u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (31u + sizeof(_g4_t_v14)) > _g4_s8 ? (31u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v15)) > _g4_s9 ? (32u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v16)) > _g4_s10 ? (36u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v17)) > _g4_s11 ? (40u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v18)) > _g4_s12 ? (44u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v19)) > _g4_s13 ? (48u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v20)) > _g4_s14 ? (68u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v21)) > _g4_s15 ? (84u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v22)) > _g4_s16 ? (100u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v23)) > _g4_s17 ? (112u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v24)) > _g4_s18 ? (116u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v25)) > _g4_s19 ? (120u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v26)) > _g4_s20 ? (124u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v27)) > _g4_s21 ? (128u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v28)) > _g4_s22 ? (132u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v29)) > _g4_s23 ? (136u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v30)) > _g4_s24 ? (140u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v31)) > _g4_s25 ? (144u + sizeof(_g4_t_v31)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v32)) > _g4_s26 ? (148u + sizeof(_g4_t_v32)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v33)) > _g4_s27 ? (152u + sizeof(_g4_t_v33)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v34)) > _g4_s28 ? (156u + sizeof(_g4_t_v34)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v35)) > _g4_s29 ? (160u + sizeof(_g4_t_v35)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v36)) > _g4_s30 ? (164u + sizeof(_g4_t_v36)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v37)) > _g4_s31 ? (168u + sizeof(_g4_t_v37)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v38)) > _g4_s32 ? (172u + sizeof(_g4_t_v38)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v39)) > _g4_s33 ? (176u + sizeof(_g4_t_v39)) : _g4_s33,
    _g4_s35 = (180u + sizeof(_g4_t_v40)) > _g4_s34 ? (180u + sizeof(_g4_t_v40)) : _g4_s34,
    _g4_s36 = (184u + sizeof(_g4_t_v41)) > _g4_s35 ? (184u + sizeof(_g4_t_v41)) : _g4_s35,
    _g4_s37 = (188u + sizeof(_g4_t_v42)) > _g4_s36 ? (188u + sizeof(_g4_t_v42)) : _g4_s36,
    _g4_s38 = (192u + sizeof(_g4_t_v43)) > _g4_s37 ? (192u + sizeof(_g4_t_v43)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 31u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 120u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 124u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 128u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 132u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 136u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 140u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 148u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 152u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 156u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 160u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 164u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 168u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 172u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 176u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 180u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 184u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 188u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 192u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "HUD", (int)(uintptr_t)(&v14));
  grapher::ActorBase::SetDisplayName(a1, &v23);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "HUD", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetCategoryName(a1, &v24);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "In", (int)(uintptr_t)(&v19[1]));
  grapher::ActorBase::AddPin(a1, 0, &v41, 1, -1);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Reset", (int)(uintptr_t)(&v19[2]));
  grapher::ActorBase::AddPin(a1, 1, &v42, 1, -1);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v43), "Out", (int)(uintptr_t)(&v19[3]));
  grapher::ActorBase::AddPin(a1, 2, v43, 0, -1);
  g4_std::string::Destroy(v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "HUDElementsGroup to apply the action to", (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Hud Group", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "HUDElementsGroup.None", (int)(uintptr_t)(&v15) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &v25);
  *(uint32_t *)&v19[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v26, 11, &v19[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Hud Group", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v27), v7, 1, 1, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  if ( *(uint32_t *)&v19[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v19[4] + 44))(*(uint32_t *)&v19[4]);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v32),
    "Enable or disable the HUDElementsGroup. If disabled, will not respond to any command until enabled again.",
    (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Enable", (int)(uintptr_t)(&v16) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "OnOff.Ignore", (int)(uintptr_t)(&v16) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &v29);
  v20 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v30, 11, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Enable", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v9, 1, 1, (int)(uintptr_t)(&v32), 1);
  g4_std::string::Destroy(&v31);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Show or hide the HUDElementsGroup.", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Show", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "OnOff.Ignore", (int)(uintptr_t)(&v17) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &v33);
  v21 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v34, 11, &v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Show", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v35), v11, 1, 1, (int)(uintptr_t)(&v36), 1);
  g4_std::string::Destroy(&v35);
  if ( v21 != nullptr )
    G4_VCALL<void>(v21, 44);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Highlight a HUDElementsGroup or make it blink.", (int)(uintptr_t)(v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Highlight", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "HudHighlight.Ignore", (int)(uintptr_t)(&v18) + 1);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v12 = v4;
  grapher::HolderT_string_e830be::From(v4, &v37);
  v22 = v12;
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v38, 11, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Highlight", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v39), v13, 1, 1, (int)(uintptr_t)(&v40), 1);
  g4_std::string::Destroy(&v39);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v38);
  return ((g4_std::string::Destroy(&v40)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C478A0_eac478a0  (binary VA: 0xc478a0)
// Original: sub_C478A0
// ----------------------------------------------------------------------------
int sub_C478A0_eac478a0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v8)) > _g4_s4 ? (32u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v11)) > _g4_s7 ? (44u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v13)) > _g4_s9 ? (76u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v14)) > _g4_s10 ? (80u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v15)) > _g4_s11 ? (84u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v16)) > _g4_s12 ? (88u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v17)) > _g4_s13 ? (92u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v18)) > _g4_s14 ? (96u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v19)) > _g4_s15 ? (100u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v20)) > _g4_s16 ? (104u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v21)) > _g4_s17 ? (108u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v22)) > _g4_s18 ? (112u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v23)) > _g4_s19 ? (116u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v24)) > _g4_s20 ? (120u + sizeof(_g4_t_v24)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Follower Status", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "HUD", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Show", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Hide", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 2, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Which follower to display.", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The priority of this follower from FollowerPriority.", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Priority", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "FollowerPriority.Medium", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v18);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 11, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Priority", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C47D20_eac47d20  (binary VA: 0xc47d20)
// Original: sub_C47D20
// ----------------------------------------------------------------------------
int sub_C47D20_eac47d20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef void *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef void *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef void *_g4_t_v24;
  typedef void *_g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[20];
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93[4];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v9)) > _g4_s2 ? (0u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v10)) > _g4_s3 ? (0u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v11)) > _g4_s4 ? (0u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v12)) > _g4_s5 ? (0u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v13)) > _g4_s6 ? (0u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v14)) > _g4_s7 ? (0u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v15)) > _g4_s8 ? (0u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v16)) > _g4_s9 ? (0u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v17)) > _g4_s10 ? (0u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v18)) > _g4_s11 ? (0u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v19)) > _g4_s12 ? (0u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v20)) > _g4_s13 ? (0u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_v21)) > _g4_s14 ? (0u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (0u + sizeof(_g4_t_v22)) > _g4_s15 ? (0u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (0u + sizeof(_g4_t_v23)) > _g4_s16 ? (0u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (0u + sizeof(_g4_t_v24)) > _g4_s17 ? (0u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (0u + sizeof(_g4_t_v25)) > _g4_s18 ? (0u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (33u + sizeof(_g4_t_v26)) > _g4_s19 ? (33u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v27)) > _g4_s20 ? (36u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v28)) > _g4_s21 ? (40u + sizeof(_g4_t_v28)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v29)) > _g4_s22 ? (44u + sizeof(_g4_t_v29)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v30)) > _g4_s23 ? (48u + sizeof(_g4_t_v30)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v31)) > _g4_s24 ? (52u + sizeof(_g4_t_v31)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v32)) > _g4_s25 ? (56u + sizeof(_g4_t_v32)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v33)) > _g4_s26 ? (60u + sizeof(_g4_t_v33)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v34)) > _g4_s27 ? (64u + sizeof(_g4_t_v34)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v35)) > _g4_s28 ? (68u + sizeof(_g4_t_v35)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v36)) > _g4_s29 ? (72u + sizeof(_g4_t_v36)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v37)) > _g4_s30 ? (76u + sizeof(_g4_t_v37)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v38)) > _g4_s31 ? (80u + sizeof(_g4_t_v38)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v39)) > _g4_s32 ? (100u + sizeof(_g4_t_v39)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v40)) > _g4_s33 ? (116u + sizeof(_g4_t_v40)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v41)) > _g4_s34 ? (132u + sizeof(_g4_t_v41)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v42)) > _g4_s35 ? (148u + sizeof(_g4_t_v42)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v43)) > _g4_s36 ? (152u + sizeof(_g4_t_v43)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v44)) > _g4_s37 ? (156u + sizeof(_g4_t_v44)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v45)) > _g4_s38 ? (160u + sizeof(_g4_t_v45)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v46)) > _g4_s39 ? (164u + sizeof(_g4_t_v46)) : _g4_s39,
    _g4_s41 = (168u + sizeof(_g4_t_v47)) > _g4_s40 ? (168u + sizeof(_g4_t_v47)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v48)) > _g4_s41 ? (172u + sizeof(_g4_t_v48)) : _g4_s41,
    _g4_s43 = (176u + sizeof(_g4_t_v49)) > _g4_s42 ? (176u + sizeof(_g4_t_v49)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v50)) > _g4_s43 ? (180u + sizeof(_g4_t_v50)) : _g4_s43,
    _g4_s45 = (184u + sizeof(_g4_t_v51)) > _g4_s44 ? (184u + sizeof(_g4_t_v51)) : _g4_s44,
    _g4_s46 = (188u + sizeof(_g4_t_v52)) > _g4_s45 ? (188u + sizeof(_g4_t_v52)) : _g4_s45,
    _g4_s47 = (192u + sizeof(_g4_t_v53)) > _g4_s46 ? (192u + sizeof(_g4_t_v53)) : _g4_s46,
    _g4_s48 = (196u + sizeof(_g4_t_v54)) > _g4_s47 ? (196u + sizeof(_g4_t_v54)) : _g4_s47,
    _g4_s49 = (200u + sizeof(_g4_t_v55)) > _g4_s48 ? (200u + sizeof(_g4_t_v55)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v56)) > _g4_s49 ? (204u + sizeof(_g4_t_v56)) : _g4_s49,
    _g4_s51 = (208u + sizeof(_g4_t_v57)) > _g4_s50 ? (208u + sizeof(_g4_t_v57)) : _g4_s50,
    _g4_s52 = (212u + sizeof(_g4_t_v58)) > _g4_s51 ? (212u + sizeof(_g4_t_v58)) : _g4_s51,
    _g4_s53 = (216u + sizeof(_g4_t_v59)) > _g4_s52 ? (216u + sizeof(_g4_t_v59)) : _g4_s52,
    _g4_s54 = (220u + sizeof(_g4_t_v60)) > _g4_s53 ? (220u + sizeof(_g4_t_v60)) : _g4_s53,
    _g4_s55 = (224u + sizeof(_g4_t_v61)) > _g4_s54 ? (224u + sizeof(_g4_t_v61)) : _g4_s54,
    _g4_s56 = (228u + sizeof(_g4_t_v62)) > _g4_s55 ? (228u + sizeof(_g4_t_v62)) : _g4_s55,
    _g4_s57 = (232u + sizeof(_g4_t_v63)) > _g4_s56 ? (232u + sizeof(_g4_t_v63)) : _g4_s56,
    _g4_s58 = (236u + sizeof(_g4_t_v64)) > _g4_s57 ? (236u + sizeof(_g4_t_v64)) : _g4_s57,
    _g4_s59 = (240u + sizeof(_g4_t_v65)) > _g4_s58 ? (240u + sizeof(_g4_t_v65)) : _g4_s58,
    _g4_s60 = (244u + sizeof(_g4_t_v66)) > _g4_s59 ? (244u + sizeof(_g4_t_v66)) : _g4_s59,
    _g4_s61 = (248u + sizeof(_g4_t_v67)) > _g4_s60 ? (248u + sizeof(_g4_t_v67)) : _g4_s60,
    _g4_s62 = (252u + sizeof(_g4_t_v68)) > _g4_s61 ? (252u + sizeof(_g4_t_v68)) : _g4_s61,
    _g4_s63 = (256u + sizeof(_g4_t_v69)) > _g4_s62 ? (256u + sizeof(_g4_t_v69)) : _g4_s62,
    _g4_s64 = (260u + sizeof(_g4_t_v70)) > _g4_s63 ? (260u + sizeof(_g4_t_v70)) : _g4_s63,
    _g4_s65 = (264u + sizeof(_g4_t_v71)) > _g4_s64 ? (264u + sizeof(_g4_t_v71)) : _g4_s64,
    _g4_s66 = (268u + sizeof(_g4_t_v72)) > _g4_s65 ? (268u + sizeof(_g4_t_v72)) : _g4_s65,
    _g4_s67 = (272u + sizeof(_g4_t_v73)) > _g4_s66 ? (272u + sizeof(_g4_t_v73)) : _g4_s66,
    _g4_s68 = (276u + sizeof(_g4_t_v74)) > _g4_s67 ? (276u + sizeof(_g4_t_v74)) : _g4_s67,
    _g4_s69 = (280u + sizeof(_g4_t_v75)) > _g4_s68 ? (280u + sizeof(_g4_t_v75)) : _g4_s68,
    _g4_s70 = (284u + sizeof(_g4_t_v76)) > _g4_s69 ? (284u + sizeof(_g4_t_v76)) : _g4_s69,
    _g4_s71 = (288u + sizeof(_g4_t_v77)) > _g4_s70 ? (288u + sizeof(_g4_t_v77)) : _g4_s70,
    _g4_s72 = (292u + sizeof(_g4_t_v78)) > _g4_s71 ? (292u + sizeof(_g4_t_v78)) : _g4_s71,
    _g4_s73 = (296u + sizeof(_g4_t_v79)) > _g4_s72 ? (296u + sizeof(_g4_t_v79)) : _g4_s72,
    _g4_s74 = (300u + sizeof(_g4_t_v80)) > _g4_s73 ? (300u + sizeof(_g4_t_v80)) : _g4_s73,
    _g4_s75 = (304u + sizeof(_g4_t_v81)) > _g4_s74 ? (304u + sizeof(_g4_t_v81)) : _g4_s74,
    _g4_s76 = (308u + sizeof(_g4_t_v82)) > _g4_s75 ? (308u + sizeof(_g4_t_v82)) : _g4_s75,
    _g4_s77 = (312u + sizeof(_g4_t_v83)) > _g4_s76 ? (312u + sizeof(_g4_t_v83)) : _g4_s76,
    _g4_s78 = (316u + sizeof(_g4_t_v84)) > _g4_s77 ? (316u + sizeof(_g4_t_v84)) : _g4_s77,
    _g4_s79 = (320u + sizeof(_g4_t_v85)) > _g4_s78 ? (320u + sizeof(_g4_t_v85)) : _g4_s78,
    _g4_s80 = (324u + sizeof(_g4_t_v86)) > _g4_s79 ? (324u + sizeof(_g4_t_v86)) : _g4_s79,
    _g4_s81 = (328u + sizeof(_g4_t_v87)) > _g4_s80 ? (328u + sizeof(_g4_t_v87)) : _g4_s80,
    _g4_s82 = (332u + sizeof(_g4_t_v88)) > _g4_s81 ? (332u + sizeof(_g4_t_v88)) : _g4_s81,
    _g4_s83 = (336u + sizeof(_g4_t_v89)) > _g4_s82 ? (336u + sizeof(_g4_t_v89)) : _g4_s82,
    _g4_s84 = (340u + sizeof(_g4_t_v90)) > _g4_s83 ? (340u + sizeof(_g4_t_v90)) : _g4_s83,
    _g4_s85 = (344u + sizeof(_g4_t_v91)) > _g4_s84 ? (344u + sizeof(_g4_t_v91)) : _g4_s84,
    _g4_s86 = (348u + sizeof(_g4_t_v92)) > _g4_s85 ? (348u + sizeof(_g4_t_v92)) : _g4_s85,
    _g4_s87 = (352u + sizeof(_g4_t_v93)) > _g4_s86 ? (352u + sizeof(_g4_t_v93)) : _g4_s86
  };
  alignas(16) uint8_t _g4_sf[_g4_s87];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 33u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 116u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 132u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 148u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 152u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 156u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 164u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 168u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 172u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 176u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 180u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 184u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 188u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 192u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 196u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 200u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 204u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 208u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 212u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 216u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 220u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 224u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 228u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 232u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 236u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 240u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 244u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 248u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 252u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 256u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 260u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 264u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 268u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 272u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 276u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 280u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 284u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 288u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 292u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 296u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 300u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 304u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 308u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 312u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 316u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 320u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 324u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 328u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 332u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 336u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 340u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 344u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 348u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 352u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Generic Text", (int)(uintptr_t)(&v26));
  grapher::ActorBase::SetDisplayName(a1, &v43);
  g4_std::string::Destroy(&v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "HUD", (int)(uintptr_t)(&v26) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v44);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v92), "In", (int)(uintptr_t)(&v38[2]));
  grapher::ActorBase::AddPin(a1, 0, &v92, 1, -1);
  g4_std::string::Destroy(&v92);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v93), "Out", (int)(uintptr_t)(&v38[3]));
  grapher::ActorBase::AddPin(a1, 1, v93, 0, -1);
  g4_std::string::Destroy(v93);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "The title of the dialog.", (int)(uintptr_t)(&v27) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Title", (int)(uintptr_t)(&v27));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "StrID", (int)(uintptr_t)(&v26) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &v45);
  *(uint32_t *)&v38[4] = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v46, 11, &v38[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Title", (int)(uintptr_t)(&v27) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v47), v8, 1, 1, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  if ( *(uint32_t *)&v38[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v38[4] + 44))(*(uint32_t *)&v38[4]);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "The subtitle of the dialog.", (int)(uintptr_t)(&v28) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Subtitle", (int)(uintptr_t)(&v28));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "StrID", (int)(uintptr_t)(&v27) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &v49);
  v39 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v50, 11, &v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Subtitle", (int)(uintptr_t)(&v28) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v51), v10, 1, 1, (int)(uintptr_t)(&v52), 3);
  g4_std::string::Destroy(&v51);
  if ( v39 != nullptr )
    G4_VCALL<void>(v39, 44);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v50);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "The content of the dialog.", (int)(uintptr_t)(&v29) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "Content", (int)(uintptr_t)(&v29));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "StrID", (int)(uintptr_t)(&v28) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v3;
  grapher::HolderT_string_e830be::From(v3, &v53);
  v40 = v11;
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v54, 11, &v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "Content", (int)(uintptr_t)(&v29) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v55), v12, 1, 1, (int)(uintptr_t)(&v56), 3);
  g4_std::string::Destroy(&v55);
  if ( v40 != nullptr )
    G4_VCALL<void>(v40, 44);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v54);
  g4_std::string::Destroy(&v56);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "The type of dialog from dialogs_.xml.", (int)(uintptr_t)(&v30) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Type", (int)(uintptr_t)(&v30));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Dialogs", (int)(uintptr_t)(&v29) + 3);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = v4;
  grapher::HolderT_string_e830be::From(v4, &v57);
  v41 = v13;
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v58, 11, &v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Type", (int)(uintptr_t)(&v30) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v59), v14, 1, 1, (int)(uintptr_t)(&v60), 3);
  g4_std::string::Destroy(&v59);
  if ( v41 != nullptr )
    G4_VCALL<void>(v41, 44);
  g4_std::string::Destroy(&v57);
  g4_std::string::Destroy(&v58);
  g4_std::string::Destroy(&v60);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v64),
    "IconType to display for either Main Objectives (from MapIcons in menu_constants.xml) or Sub Objectives (from SubObje"
    "ctiveType in dialog_structs.xml)",
    (int)(uintptr_t)(&v31) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "IconType", (int)(uintptr_t)(&v31));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "MapIcons.None", (int)(uintptr_t)(&v30) + 3);
  v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v5 = (uint32_t)(uintptr_t)(&off_205C408);
  v5[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v15 = v5;
  grapher::HolderT_string_e830be::From(v5, &v61);
  v42 = v15;
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v62, 11, &v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "IconType", (int)(uintptr_t)(&v31) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v63), v16, 1, 1, (int)(uintptr_t)(&v64), 3);
  g4_std::string::Destroy(&v63);
  if ( v42 != nullptr )
    G4_VCALL<void>(v42, 44);
  g4_std::string::Destroy(&v61);
  g4_std::string::Destroy(&v62);
  g4_std::string::Destroy(&v64);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "The first variable to display in the title", (int)(uintptr_t)(&v32) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "Title Var1", (int)(uintptr_t)(&v31) + 3);
  v17 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v17, &v65, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "Title Var1", (int)(uintptr_t)(&v32));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v66), v17, 1, 0, (int)(uintptr_t)(&v67), 3);
  g4_std::string::Destroy(&v66);
  g4_std::string::Destroy(&v65);
  g4_std::string::Destroy(&v67);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "The second variable to display in the title", (int)(uintptr_t)(&v33));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), "Title Var2", (int)(uintptr_t)(&v32) + 2);
  v18 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v18, &v68, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "Title Var2", (int)(uintptr_t)(&v32) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v69), v18, 1, 0, (int)(uintptr_t)(&v70), 3);
  g4_std::string::Destroy(&v69);
  g4_std::string::Destroy(&v68);
  g4_std::string::Destroy(&v70);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "The third variable to display in the title", (int)(uintptr_t)(&v33) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "Title Var3", (int)(uintptr_t)(&v33) + 1);
  v19 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v19, &v71, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "Title Var3", (int)(uintptr_t)(&v33) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v72), v19, 1, 0, (int)(uintptr_t)(&v73), 3);
  g4_std::string::Destroy(&v72);
  g4_std::string::Destroy(&v71);
  g4_std::string::Destroy(&v73);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "The first variable to display in the subtitle", (int)(uintptr_t)(&v34) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "Subtitle Var1", (int)(uintptr_t)(&v34));
  v20 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v20, &v74, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "Subtitle Var1", (int)(uintptr_t)(&v34) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v75), v20, 1, 0, (int)(uintptr_t)(&v76), 3);
  g4_std::string::Destroy(&v75);
  g4_std::string::Destroy(&v74);
  g4_std::string::Destroy(&v76);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "The second variable to display in the subtitle", (int)(uintptr_t)(&v35) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "Subtitle Var2", (int)(uintptr_t)(&v34) + 3);
  v21 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v21, &v77, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), "Subtitle Var2", (int)(uintptr_t)(&v35));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 9, (int)(uintptr_t)(&v78), v21, 1, 0, (int)(uintptr_t)(&v79), 3);
  g4_std::string::Destroy(&v78);
  g4_std::string::Destroy(&v77);
  g4_std::string::Destroy(&v79);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "The third variable to display in the subtitle", (int)(uintptr_t)(&v36));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "Subtitle Var3", (int)(uintptr_t)(&v35) + 2);
  v22 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v22, &v80, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), "Subtitle Var3", (int)(uintptr_t)(&v35) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 10, (int)(uintptr_t)(&v81), v22, 1, 0, (int)(uintptr_t)(&v82), 3);
  g4_std::string::Destroy(&v81);
  g4_std::string::Destroy(&v80);
  g4_std::string::Destroy(&v82);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v85), "The first variable to display in the content", (int)(uintptr_t)(&v36) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v83), "Content Var1", (int)(uintptr_t)(&v36) + 1);
  v23 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v23, &v83, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v84), "Content Var1", (int)(uintptr_t)(&v36) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 11, (int)(uintptr_t)(&v84), v23, 1, 0, (int)(uintptr_t)(&v85), 3);
  g4_std::string::Destroy(&v84);
  g4_std::string::Destroy(&v83);
  g4_std::string::Destroy(&v85);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v88), "The second variable to display in the content", (int)(uintptr_t)(&v37) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v86), "Content Var2", (int)(uintptr_t)(&v37));
  v24 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v24, &v86, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v87), "Content Var2", (int)(uintptr_t)(&v37) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 12, (int)(uintptr_t)(&v87), v24, 1, 0, (int)(uintptr_t)(&v88), 3);
  g4_std::string::Destroy(&v87);
  g4_std::string::Destroy(&v86);
  g4_std::string::Destroy(&v88);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v91), "The third variable to display in the content", (int)(uintptr_t)(&v38[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v89), "Content Var3", (int)(uintptr_t)(&v37) + 3);
  v25 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v25, &v89, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v90), "Content Var3", (int)(uintptr_t)(v38));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 13, (int)(uintptr_t)(&v90), v25, 1, 0, (int)(uintptr_t)(&v91), 3);
  g4_std::string::Destroy(&v90);
  g4_std::string::Destroy(&v89);
  return ((g4_std::string::Destroy(&v91)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C48F10  (binary VA: 0xc48f10)
// Original: sub_C48F10
// ----------------------------------------------------------------------------
int sub_C48F10(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
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
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67[4];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v8)) > _g4_s2 ? (4u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v9)) > _g4_s3 ? (4u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v10)) > _g4_s4 ? (4u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v11)) > _g4_s5 ? (4u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v12)) > _g4_s6 ? (4u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v13)) > _g4_s7 ? (4u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v14)) > _g4_s8 ? (4u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v15)) > _g4_s9 ? (4u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v16)) > _g4_s10 ? (4u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v17)) > _g4_s11 ? (4u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v18)) > _g4_s12 ? (4u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v19)) > _g4_s13 ? (32u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v20)) > _g4_s14 ? (36u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v21)) > _g4_s15 ? (40u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v22)) > _g4_s16 ? (44u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v23)) > _g4_s17 ? (48u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v24)) > _g4_s18 ? (52u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v25)) > _g4_s19 ? (56u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v26)) > _g4_s20 ? (60u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v27)) > _g4_s21 ? (64u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v28)) > _g4_s22 ? (68u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v29)) > _g4_s23 ? (84u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v30)) > _g4_s24 ? (100u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v31)) > _g4_s25 ? (116u + sizeof(_g4_t_v31)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v32)) > _g4_s26 ? (132u + sizeof(_g4_t_v32)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v33)) > _g4_s27 ? (136u + sizeof(_g4_t_v33)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v34)) > _g4_s28 ? (140u + sizeof(_g4_t_v34)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v35)) > _g4_s29 ? (144u + sizeof(_g4_t_v35)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v36)) > _g4_s30 ? (148u + sizeof(_g4_t_v36)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v37)) > _g4_s31 ? (152u + sizeof(_g4_t_v37)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v38)) > _g4_s32 ? (156u + sizeof(_g4_t_v38)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v39)) > _g4_s33 ? (160u + sizeof(_g4_t_v39)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v40)) > _g4_s34 ? (164u + sizeof(_g4_t_v40)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v41)) > _g4_s35 ? (168u + sizeof(_g4_t_v41)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v42)) > _g4_s36 ? (172u + sizeof(_g4_t_v42)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v43)) > _g4_s37 ? (176u + sizeof(_g4_t_v43)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v44)) > _g4_s38 ? (180u + sizeof(_g4_t_v44)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v45)) > _g4_s39 ? (184u + sizeof(_g4_t_v45)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v46)) > _g4_s40 ? (188u + sizeof(_g4_t_v46)) : _g4_s40,
    _g4_s42 = (192u + sizeof(_g4_t_v47)) > _g4_s41 ? (192u + sizeof(_g4_t_v47)) : _g4_s41,
    _g4_s43 = (196u + sizeof(_g4_t_v48)) > _g4_s42 ? (196u + sizeof(_g4_t_v48)) : _g4_s42,
    _g4_s44 = (200u + sizeof(_g4_t_v49)) > _g4_s43 ? (200u + sizeof(_g4_t_v49)) : _g4_s43,
    _g4_s45 = (204u + sizeof(_g4_t_v50)) > _g4_s44 ? (204u + sizeof(_g4_t_v50)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v51)) > _g4_s45 ? (208u + sizeof(_g4_t_v51)) : _g4_s45,
    _g4_s47 = (212u + sizeof(_g4_t_v52)) > _g4_s46 ? (212u + sizeof(_g4_t_v52)) : _g4_s46,
    _g4_s48 = (216u + sizeof(_g4_t_v53)) > _g4_s47 ? (216u + sizeof(_g4_t_v53)) : _g4_s47,
    _g4_s49 = (220u + sizeof(_g4_t_v54)) > _g4_s48 ? (220u + sizeof(_g4_t_v54)) : _g4_s48,
    _g4_s50 = (224u + sizeof(_g4_t_v55)) > _g4_s49 ? (224u + sizeof(_g4_t_v55)) : _g4_s49,
    _g4_s51 = (228u + sizeof(_g4_t_v56)) > _g4_s50 ? (228u + sizeof(_g4_t_v56)) : _g4_s50,
    _g4_s52 = (232u + sizeof(_g4_t_v57)) > _g4_s51 ? (232u + sizeof(_g4_t_v57)) : _g4_s51,
    _g4_s53 = (236u + sizeof(_g4_t_v58)) > _g4_s52 ? (236u + sizeof(_g4_t_v58)) : _g4_s52,
    _g4_s54 = (240u + sizeof(_g4_t_v59)) > _g4_s53 ? (240u + sizeof(_g4_t_v59)) : _g4_s53,
    _g4_s55 = (244u + sizeof(_g4_t_v60)) > _g4_s54 ? (244u + sizeof(_g4_t_v60)) : _g4_s54,
    _g4_s56 = (248u + sizeof(_g4_t_v61)) > _g4_s55 ? (248u + sizeof(_g4_t_v61)) : _g4_s55,
    _g4_s57 = (252u + sizeof(_g4_t_v62)) > _g4_s56 ? (252u + sizeof(_g4_t_v62)) : _g4_s56,
    _g4_s58 = (256u + sizeof(_g4_t_v63)) > _g4_s57 ? (256u + sizeof(_g4_t_v63)) : _g4_s57,
    _g4_s59 = (260u + sizeof(_g4_t_v64)) > _g4_s58 ? (260u + sizeof(_g4_t_v64)) : _g4_s58,
    _g4_s60 = (264u + sizeof(_g4_t_v65)) > _g4_s59 ? (264u + sizeof(_g4_t_v65)) : _g4_s59,
    _g4_s61 = (268u + sizeof(_g4_t_v66)) > _g4_s60 ? (268u + sizeof(_g4_t_v66)) : _g4_s60,
    _g4_s62 = (272u + sizeof(_g4_t_v67)) > _g4_s61 ? (272u + sizeof(_g4_t_v67)) : _g4_s61
  };
  alignas(16) uint8_t _g4_sf[_g4_s62];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 116u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 132u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 148u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 152u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 156u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 160u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 164u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 168u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 172u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 180u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 184u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 188u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 192u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 196u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 200u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 204u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 208u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 212u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 216u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 220u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 224u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 228u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 232u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 236u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 240u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 244u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 248u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 252u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 256u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 260u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 264u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 268u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 272u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Set Interaction Button", (int)(uintptr_t)(&v19));
  grapher::ActorBase::SetDisplayName(a1, &v32);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "HUD", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v33);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "In", (int)(uintptr_t)(&v27) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v65, 1, -1);
  g4_std::string::Destroy(&v65);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "Out", (int)(uintptr_t)(&v27) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v66, 0, -1);
  g4_std::string::Destroy(&v66);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v67), "Interacted", (int)(uintptr_t)(&v27) + 3);
  grapher::ActorBase::AddPin(a1, 2, v67, 0, -1);
  g4_std::string::Destroy(v67);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "The title label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Title", (int)(uintptr_t)(&v19) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "StrID", (int)(uintptr_t)(&v19) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &v34);
  v28 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v35, 11, &v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Title", (int)(uintptr_t)(&v20));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v36), v7, 1, 1, (int)(uintptr_t)(&v37), 1);
  g4_std::string::Destroy(&v36);
  if ( v28 != nullptr )
    G4_VCALL<void>(v28, 44);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "The content label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v21) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Content", (int)(uintptr_t)(&v20) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "StrID", (int)(uintptr_t)(&v20) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &v38);
  v29 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v39, 11, &v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Content", (int)(uintptr_t)(&v21));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v40), v9, 1, 1, (int)(uintptr_t)(&v41), 1);
  g4_std::string::Destroy(&v40);
  if ( v29 != nullptr )
    G4_VCALL<void>(v29, 44);
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "IconType to display (from MapIcons in menu_constants.xml).", (int)(uintptr_t)(&v22) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "IconType", (int)(uintptr_t)(&v21) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "MapIcons.None", (int)(uintptr_t)(&v21) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &v42);
  v30 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v43, 11, &v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "IconType", (int)(uintptr_t)(&v22));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v44), v11, 1, 1, (int)(uintptr_t)(&v45), 3);
  g4_std::string::Destroy(&v44);
  if ( v30 != nullptr )
    G4_VCALL<void>(v30, 44);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "The first variable to display in the title", (int)(uintptr_t)(&v23));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Var Title 1", (int)(uintptr_t)(&v22) + 2);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v46, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Var Title 1", (int)(uintptr_t)(&v22) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v47), v12, 1, 1, (int)(uintptr_t)(&v48), 1);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "The second variable to display in the title", (int)(uintptr_t)(&v23) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Var Title 2", (int)(uintptr_t)(&v23) + 1);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v49, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Var Title 2", (int)(uintptr_t)(&v23) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v50), v13, 1, 0, (int)(uintptr_t)(&v51), 1);
  g4_std::string::Destroy(&v50);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "The first variable to display in the content", (int)(uintptr_t)(&v24) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Var Content 1", (int)(uintptr_t)(&v24));
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v52, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "Var Content 1", (int)(uintptr_t)(&v24) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v53), v14, 1, 1, (int)(uintptr_t)(&v54), 1);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v52);
  g4_std::string::Destroy(&v54);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "The second variable to display in the content", (int)(uintptr_t)(&v25) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "Var Content 2", (int)(uintptr_t)(&v24) + 3);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v55, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Var Content 2", (int)(uintptr_t)(&v25));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v56), v15, 1, 0, (int)(uintptr_t)(&v57), 1);
  g4_std::string::Destroy(&v56);
  g4_std::string::Destroy(&v55);
  g4_std::string::Destroy(&v57);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "The id of the persistent timeout", (int)(uintptr_t)(&v26) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Timeout Id", (int)(uintptr_t)(&v25) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), (char *)&unk_1B15112, (int)(uintptr_t)(&v25) + 2);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16 = v4;
  grapher::HolderT_string_e830be::From(v4, &v58);
  v31 = v16;
  v17 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v17, &v59, 11, &v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Timeout Id", (int)(uintptr_t)(&v26));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v60), v17, 1, 0, (int)(uintptr_t)(&v61), 1);
  g4_std::string::Destroy(&v60);
  if ( v31 != nullptr )
    G4_VCALL<void>(v31, 44);
  g4_std::string::Destroy(&v58);
  g4_std::string::Destroy(&v59);
  g4_std::string::Destroy(&v61);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "The delay for the persistent timeout", (int)(uintptr_t)(&v27));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "Timeout Delay", (int)(uintptr_t)(&v26) + 2);
  v18 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v18, &v62, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "Timeout Delay", (int)(uintptr_t)(&v26) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v63), v18, 1, 0, (int)(uintptr_t)(&v64), 1);
  g4_std::string::Destroy(&v63);
  g4_std::string::Destroy(&v62);
  return ((g4_std::string::Destroy(&v64)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C49BD0_eac49bd0  (binary VA: 0xc49bd0)
// Original: sub_C49BD0
// ----------------------------------------------------------------------------
int sub_C49BD0_eac49bd0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[20];
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (33u + sizeof(_g4_t_v8)) > _g4_s4 ? (33u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v11)) > _g4_s7 ? (60u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v12)) > _g4_s8 ? (64u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v13)) > _g4_s9 ? (68u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v14)) > _g4_s10 ? (72u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v22)) > _g4_s18 ? (104u + sizeof(_g4_t_v22)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 33u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set HUD Text", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "HUD", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The text label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Text", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "StrID", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v14);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 11, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Text", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Text", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 4, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Type", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C49FF0_eac49ff0  (binary VA: 0xc49ff0)
// Original: sub_C49FF0
// ----------------------------------------------------------------------------
int sub_C49FF0_eac49ff0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[20];
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56[4];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v7)) > _g4_s2 ? (0u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v8)) > _g4_s3 ? (0u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v9)) > _g4_s4 ? (0u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v10)) > _g4_s5 ? (0u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v11)) > _g4_s6 ? (0u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v12)) > _g4_s7 ? (0u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v13)) > _g4_s8 ? (0u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v14)) > _g4_s9 ? (0u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v15)) > _g4_s10 ? (0u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (17u + sizeof(_g4_t_v16)) > _g4_s11 ? (17u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v17)) > _g4_s12 ? (20u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v18)) > _g4_s13 ? (24u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v19)) > _g4_s14 ? (28u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v20)) > _g4_s15 ? (32u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v21)) > _g4_s16 ? (36u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v22)) > _g4_s17 ? (40u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v23)) > _g4_s18 ? (44u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v24)) > _g4_s19 ? (64u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v25)) > _g4_s20 ? (80u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v26)) > _g4_s21 ? (84u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v27)) > _g4_s22 ? (88u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v28)) > _g4_s23 ? (92u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v29)) > _g4_s24 ? (96u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v30)) > _g4_s25 ? (100u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v31)) > _g4_s26 ? (104u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v32)) > _g4_s27 ? (108u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v33)) > _g4_s28 ? (112u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v34)) > _g4_s29 ? (116u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v35)) > _g4_s30 ? (120u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v36)) > _g4_s31 ? (124u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v37)) > _g4_s32 ? (128u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v38)) > _g4_s33 ? (132u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v39)) > _g4_s34 ? (136u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v40)) > _g4_s35 ? (140u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v41)) > _g4_s36 ? (144u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v42)) > _g4_s37 ? (148u + sizeof(_g4_t_v42)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v43)) > _g4_s38 ? (152u + sizeof(_g4_t_v43)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v44)) > _g4_s39 ? (156u + sizeof(_g4_t_v44)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v45)) > _g4_s40 ? (160u + sizeof(_g4_t_v45)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v46)) > _g4_s41 ? (164u + sizeof(_g4_t_v46)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v47)) > _g4_s42 ? (168u + sizeof(_g4_t_v47)) : _g4_s42,
    _g4_s44 = (172u + sizeof(_g4_t_v48)) > _g4_s43 ? (172u + sizeof(_g4_t_v48)) : _g4_s43,
    _g4_s45 = (176u + sizeof(_g4_t_v49)) > _g4_s44 ? (176u + sizeof(_g4_t_v49)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v50)) > _g4_s45 ? (180u + sizeof(_g4_t_v50)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v51)) > _g4_s46 ? (184u + sizeof(_g4_t_v51)) : _g4_s46,
    _g4_s48 = (188u + sizeof(_g4_t_v52)) > _g4_s47 ? (188u + sizeof(_g4_t_v52)) : _g4_s47,
    _g4_s49 = (192u + sizeof(_g4_t_v53)) > _g4_s48 ? (192u + sizeof(_g4_t_v53)) : _g4_s48,
    _g4_s50 = (196u + sizeof(_g4_t_v54)) > _g4_s49 ? (196u + sizeof(_g4_t_v54)) : _g4_s49,
    _g4_s51 = (200u + sizeof(_g4_t_v55)) > _g4_s50 ? (200u + sizeof(_g4_t_v55)) : _g4_s50,
    _g4_s52 = (204u + sizeof(_g4_t_v56)) > _g4_s51 ? (204u + sizeof(_g4_t_v56)) : _g4_s51
  };
  alignas(16) uint8_t _g4_sf[_g4_s52];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 17u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 116u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 120u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 136u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 148u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 152u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 156u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 164u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 168u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 172u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 176u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 180u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 184u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 188u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 192u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 196u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 200u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 204u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Set Objective", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetDisplayName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "HUD", (int)(uintptr_t)(&v16) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v27);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "In", (int)(uintptr_t)(&v23[2]));
  grapher::ActorBase::AddPin(a1, 0, &v55, 1, -1);
  g4_std::string::Destroy(&v55);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v56), "Out", (int)(uintptr_t)(&v23[3]));
  grapher::ActorBase::AddPin(a1, 1, v56, 0, -1);
  g4_std::string::Destroy(v56);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "The text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Text", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "StrID", (int)(uintptr_t)(&v16) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v28);
  *(uint32_t *)&v23[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v29, 11, &v23[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Text", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v30), v6, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( *(uint32_t *)&v23[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v23[4] + 44))(*(uint32_t *)&v23[4]);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "The type of dialog from dialogs_.xml.", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Type", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Dialogs", (int)(uintptr_t)(&v17) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &v32);
  v24 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v33, 11, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Type", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v34), v8, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v39),
    "IconType to display for either Main Objectives (from MapIcons in menu_constants.xml) or Sub Objectives (from SubObje"
    "ctiveType in dialog_structs.xml)",
    (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "IconType", (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "MapIcons.None", (int)(uintptr_t)(&v18) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &v36);
  v25 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v37, 11, &v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "IconType", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v38), v10, 1, 1, (int)(uintptr_t)(&v39), 3);
  g4_std::string::Destroy(&v38);
  if ( v25 != nullptr )
    G4_VCALL<void>(v25, 44);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "The number of stars earned when reaching the next goal objective (1, 2 or 3).", (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Stars", (int)(uintptr_t)(&v19) + 3);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v40, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Stars", (int)(uintptr_t)(&v20));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v41), v11, 1, 1, (int)(uintptr_t)(&v42), 3);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v45),
    "The first variable to display in the text. For Type 'SubObjectiveDialog_Progress', this is the 'X' value.",
    (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Var1", (int)(uintptr_t)(&v20) + 2);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v43, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Var1", (int)(uintptr_t)(&v20) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v44), v12, 1, 0, (int)(uintptr_t)(&v45), 3);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v48),
    "The second variable to display in the text. For Type 'SubObjectiveDialog_Progress', this is the 'Y' value.",
    (int)(uintptr_t)(&v21) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Var2", (int)(uintptr_t)(&v21) + 1);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v46, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Var2", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v47), v13, 1, 0, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v51),
    "The third variable to display in the text. For Type 'SubObjectiveDialog_Progress', this is the color value.",
    (int)(uintptr_t)(&v22) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Var3", (int)(uintptr_t)(&v22));
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v49, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Var3", (int)(uintptr_t)(&v22) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v50), v14, 1, 0, (int)(uintptr_t)(&v51), 3);
  g4_std::string::Destroy(&v50);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "The fourth variable to display in the text", (int)(uintptr_t)(&v23[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Var4", (int)(uintptr_t)(&v22) + 3);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v52, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "Var4", (int)(uintptr_t)(v23));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v53), v15, 1, 0, (int)(uintptr_t)(&v54), 3);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v52);
  return ((g4_std::string::Destroy(&v54)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C4AAD0_eac4aad0  (binary VA: 0xc4aad0)
// Original: sub_C4AAD0
// ----------------------------------------------------------------------------
int sub_C4AAD0_eac4aad0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[20];
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v7)) > _g4_s2 ? (4u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v8)) > _g4_s3 ? (4u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v9)) > _g4_s4 ? (4u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v10)) > _g4_s5 ? (4u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v11)) > _g4_s6 ? (4u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v12)) > _g4_s7 ? (33u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v13)) > _g4_s8 ? (36u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v14)) > _g4_s9 ? (40u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v15)) > _g4_s10 ? (44u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v16)) > _g4_s11 ? (48u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v17)) > _g4_s12 ? (68u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v18)) > _g4_s13 ? (84u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v19)) > _g4_s14 ? (88u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v20)) > _g4_s15 ? (92u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v21)) > _g4_s16 ? (96u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v22)) > _g4_s17 ? (100u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v23)) > _g4_s18 ? (104u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v24)) > _g4_s19 ? (108u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v25)) > _g4_s20 ? (112u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v26)) > _g4_s21 ? (116u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v27)) > _g4_s22 ? (120u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v28)) > _g4_s23 ? (124u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v29)) > _g4_s24 ? (128u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v30)) > _g4_s25 ? (132u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v31)) > _g4_s26 ? (136u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v32)) > _g4_s27 ? (140u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v33)) > _g4_s28 ? (144u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v34)) > _g4_s29 ? (148u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v35)) > _g4_s30 ? (152u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v36)) > _g4_s31 ? (156u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v37)) > _g4_s32 ? (160u + sizeof(_g4_t_v37)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 33u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Set Warning [C]", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "HUD", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "In", (int)(uintptr_t)(&v16[1]));
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddPin(a1, 1, &v36, 0, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Elapsed", (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::AddPin(a1, 2, v37, 0, 4);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "The title text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Title", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "StrID", (int)(uintptr_t)(&v12) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v21);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v22, 11, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Title", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v6, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "The failure text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Text", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "StrID", (int)(uintptr_t)(&v13) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &v25);
  v17 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 11, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Text", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "The timer before the mission fails.", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Timer", (int)(uintptr_t)(&v14) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v29, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Timer", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v30), v9, 1, 1, (int)(uintptr_t)(&v31), 1);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "IconType to display.", (int)(uintptr_t)(v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "IconType", (int)(uintptr_t)(&v15) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v18 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 11, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "IconType", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 1, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C4B1F0_eac4b1f0  (binary VA: 0xc4b1f0)
// Original: sub_C4B1F0
// ----------------------------------------------------------------------------
int sub_C4B1F0_eac4b1f0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[20];
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46[4];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v8)) > _g4_s4 ? (8u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v9)) > _g4_s5 ? (8u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v10)) > _g4_s6 ? (8u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v11)) > _g4_s7 ? (8u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v12)) > _g4_s8 ? (8u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (30u + sizeof(_g4_t_v13)) > _g4_s9 ? (30u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v14)) > _g4_s10 ? (32u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v15)) > _g4_s11 ? (36u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v16)) > _g4_s12 ? (40u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v17)) > _g4_s13 ? (44u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v18)) > _g4_s14 ? (48u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v19)) > _g4_s15 ? (52u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v20)) > _g4_s16 ? (72u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v21)) > _g4_s17 ? (80u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v22)) > _g4_s18 ? (84u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v23)) > _g4_s19 ? (88u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v24)) > _g4_s20 ? (92u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v25)) > _g4_s21 ? (96u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v26)) > _g4_s22 ? (100u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v27)) > _g4_s23 ? (104u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v28)) > _g4_s24 ? (108u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v29)) > _g4_s25 ? (112u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v30)) > _g4_s26 ? (116u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v31)) > _g4_s27 ? (120u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v32)) > _g4_s28 ? (124u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v33)) > _g4_s29 ? (128u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v34)) > _g4_s30 ? (132u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v35)) > _g4_s31 ? (136u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v36)) > _g4_s32 ? (140u + sizeof(_g4_t_v36)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v37)) > _g4_s33 ? (144u + sizeof(_g4_t_v37)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v38)) > _g4_s34 ? (148u + sizeof(_g4_t_v38)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v39)) > _g4_s35 ? (152u + sizeof(_g4_t_v39)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v40)) > _g4_s36 ? (156u + sizeof(_g4_t_v40)) : _g4_s36,
    _g4_s38 = (160u + sizeof(_g4_t_v41)) > _g4_s37 ? (160u + sizeof(_g4_t_v41)) : _g4_s37,
    _g4_s39 = (164u + sizeof(_g4_t_v42)) > _g4_s38 ? (164u + sizeof(_g4_t_v42)) : _g4_s38,
    _g4_s40 = (168u + sizeof(_g4_t_v43)) > _g4_s39 ? (168u + sizeof(_g4_t_v43)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v44)) > _g4_s40 ? (172u + sizeof(_g4_t_v44)) : _g4_s40,
    _g4_s42 = (176u + sizeof(_g4_t_v45)) > _g4_s41 ? (176u + sizeof(_g4_t_v45)) : _g4_s41,
    _g4_s43 = (180u + sizeof(_g4_t_v46)) > _g4_s42 ? (180u + sizeof(_g4_t_v46)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 84u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 116u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 120u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 124u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 132u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 136u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 140u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 148u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 152u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 156u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 164u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 168u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 172u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 176u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 180u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Set Variable HUD Text", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "HUD", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "In", (int)(uintptr_t)(&v19[2]));
  grapher::ActorBase::AddPin(a1, 0, &v45, 1, -1);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v46), "Out", (int)(uintptr_t)(&v19[3]));
  grapher::ActorBase::AddPin(a1, 1, v46, 0, -1);
  g4_std::string::Destroy(v46);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "The text label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Text", (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "StrID", (int)(uintptr_t)(&v14));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v23);
  *(uint32_t *)&v19[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 11, &v19[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Text", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  if ( *(uint32_t *)&v19[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v19[4] + 44))(*(uint32_t *)&v19[4]);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Text", (int)(uintptr_t)(&v15));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v20 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v27, 4, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Type", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v28), v7, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "The first variable to display in the text", (int)(uintptr_t)(&v16) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Var1", (int)(uintptr_t)(&v15) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v30, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Var1", (int)(uintptr_t)(&v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v31), v8, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "The second variable to display in the text", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Var2", (int)(uintptr_t)(&v16) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v33, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Var2", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v34), v9, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "The third variable to display in the text", (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Var3", (int)(uintptr_t)(&v17) + 1);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v36, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Var3", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v37), v10, 1, 1, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "The fourth variable to display in the text", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Var4", (int)(uintptr_t)(&v18));
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v39, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Var4", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v40), v11, 1, 1, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "The fifth variable to display in the text", (int)(uintptr_t)(&v19[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Var5", (int)(uintptr_t)(&v18) + 3);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v42, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Var5", (int)(uintptr_t)(v19));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v43), v12, 1, 1, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v42);
  return ((g4_std::string::Destroy(&v44)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C4BB00  (binary VA: 0xc4bb00)
// Original: sub_C4BB00
// ----------------------------------------------------------------------------
int sub_C4BB00(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef g4_int128_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v5)) > _g4_s2 ? (4u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v7)) > _g4_s4 ? (16u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (35u + sizeof(_g4_t_v8)) > _g4_s5 ? (35u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v13)) > _g4_s10 ? (64u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v14)) > _g4_s11 ? (68u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v15)) > _g4_s12 ? (72u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v16)) > _g4_s13 ? (76u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v17)) > _g4_s14 ? (80u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v18)) > _g4_s15 ? (84u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v19)) > _g4_s16 ? (88u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v20)) > _g4_s17 ? (92u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v21)) > _g4_s18 ? (96u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v22)) > _g4_s19 ? (100u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v23)) > _g4_s20 ? (104u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v24)) > _g4_s21 ? (108u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v25)) > _g4_s22 ? (112u + sizeof(_g4_t_v25)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v26)) > _g4_s23 ? (116u + sizeof(_g4_t_v26)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v27)) > _g4_s24 ? (120u + sizeof(_g4_t_v27)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v28)) > _g4_s25 ? (124u + sizeof(_g4_t_v28)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v29)) > _g4_s26 ? (128u + sizeof(_g4_t_v29)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 35u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Anim Ended (Imm=%Immediate) [C]", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Out", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Ended", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 2, &v17, 0, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The animated character.", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v10));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( DWORD1(v12) != 0 )
    G4_VCALL<void>(DWORD1(v12), 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Immediate", (int)(uintptr_t)(&v10) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v21, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Immediate", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v3, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Is sub animation ended?", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Sub Anim", (int)(uintptr_t)(&v11) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v24, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Sub Anim", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v4, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "The returned animation clip position (in %).", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Position", (int)(uintptr_t)(&v12) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v5), (int)(uintptr_t)(&v27), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Position", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v5, 1, 1, (int)(uintptr_t)(v29), 3);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  return ((g4_std::string::Destroy(v29)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C4C0E0_eac4c0e0  (binary VA: 0xc4c0e0)
// Original: sub_C4C0E0
// ----------------------------------------------------------------------------
int sub_C4C0E0_eac4c0e0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef g4_int128_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v6)) > _g4_s3 ? (23u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v8)) > _g4_s5 ? (28u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v9)) > _g4_s6 ? (32u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v10)) > _g4_s7 ? (48u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v11)) > _g4_s8 ? (52u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v12)) > _g4_s9 ? (56u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v13)) > _g4_s10 ? (60u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v14)) > _g4_s11 ? (64u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v15)) > _g4_s12 ? (68u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v16)) > _g4_s13 ? (72u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v17)) > _g4_s14 ? (76u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v18)) > _g4_s15 ? (80u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v19)) > _g4_s16 ? (84u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v20)) > _g4_s17 ? (88u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v21)) > _g4_s18 ? (92u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v22)) > _g4_s19 ? (96u + sizeof(_g4_t_v22)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 23u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Alive (Imm=%Immediate) [C]", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Conditions", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Out", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v13, 0, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Alive", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 2, &v14, 0, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Dead", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 3, &v15, 0, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "All Dead", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 4, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "List of targets to kill or to keep alive.", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v9) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 9, (char *)&v9 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( DWORD1(v9) != 0 )
    G4_VCALL<void>(DWORD1(v9), 44);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Immediate", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v20, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Immediate", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v21), v3, 1, 0, (int)(uintptr_t)(v22), 3);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v20);
  return ((g4_std::string::Destroy(v22)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C4C550_eac4c550  (binary VA: 0xc4c550)
// Original: sub_C4C550
// ----------------------------------------------------------------------------
int sub_C4C550_eac4c550(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[20];
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36[4];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v9)) > _g4_s4 ? (20u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v10)) > _g4_s5 ? (20u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v11)) > _g4_s6 ? (20u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v12)) > _g4_s7 ? (46u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v13)) > _g4_s8 ? (48u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v14)) > _g4_s9 ? (52u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v15)) > _g4_s10 ? (56u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v16)) > _g4_s11 ? (60u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v17)) > _g4_s12 ? (80u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v18)) > _g4_s13 ? (96u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v19)) > _g4_s14 ? (104u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v20)) > _g4_s15 ? (108u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v21)) > _g4_s16 ? (112u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v22)) > _g4_s17 ? (116u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v23)) > _g4_s18 ? (120u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v24)) > _g4_s19 ? (124u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v25)) > _g4_s20 ? (128u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v26)) > _g4_s21 ? (132u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v27)) > _g4_s22 ? (136u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v28)) > _g4_s23 ? (140u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v29)) > _g4_s24 ? (144u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v30)) > _g4_s25 ? (148u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v31)) > _g4_s26 ? (152u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v32)) > _g4_s27 ? (156u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v33)) > _g4_s28 ? (160u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v34)) > _g4_s29 ? (164u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v35)) > _g4_s30 ? (168u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v36)) > _g4_s31 ? (172u + sizeof(_g4_t_v36)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 46u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 104u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 108u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 112u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 116u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 120u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 124u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 128u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 132u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 148u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 152u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 156u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 160u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 164u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 168u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 172u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Within (Imm=%Immediate) [C]", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Conditions", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Out", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v22, 0, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Inside", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v23, 0, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Outside", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 3, &v24, 0, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "List of objects that must go in the zone.", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target", (int)(uintptr_t)(&v14));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v25, 9, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v26), v7, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "List of zones where to go.", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Zone", (int)(uintptr_t)(&v14) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Zone", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Immediate", (int)(uintptr_t)(&v15) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v31, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Immediate", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v32), v5, 1, 0, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(v36),
    "Object that trapped into one of the zones. Note, that the variable is modified by module",
    (int)(uintptr_t)(&v16[3]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "ObjectIn", (int)(uintptr_t)(&v16[1]));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v18 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v34, 9, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "ObjectIn", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v35), v11, 1, 0, (int)(uintptr_t)(v36), 3);
  g4_std::string::Destroy(&v35);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v34);
  return ((g4_std::string::Destroy(v36)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C4CC70_eac4cc70  (binary VA: 0xc4cc70)
// Original: sub_C4CC70
// ----------------------------------------------------------------------------
int sub_C4CC70_eac4cc70(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int64_t _g4_t_v14 __attribute__((aligned(1)));
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v8)) > _g4_s5 ? (20u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v9)) > _g4_s6 ? (33u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v10)) > _g4_s7 ? (36u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v11)) > _g4_s8 ? (40u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v12)) > _g4_s9 ? (44u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v13)) > _g4_s10 ? (48u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v14)) > _g4_s11 ? (52u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v15)) > _g4_s12 ? (60u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v16)) > _g4_s13 ? (64u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v17)) > _g4_s14 ? (68u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v18)) > _g4_s15 ? (72u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v19)) > _g4_s16 ? (76u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v20)) > _g4_s17 ? (80u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v21)) > _g4_s18 ? (84u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v22)) > _g4_s19 ? (88u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v23)) > _g4_s20 ? (92u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v24)) > _g4_s21 ? (96u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v25)) > _g4_s22 ? (100u + sizeof(_g4_t_v25)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v26)) > _g4_s23 ? (104u + sizeof(_g4_t_v26)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v27)) > _g4_s24 ? (108u + sizeof(_g4_t_v27)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v28)) > _g4_s25 ? (112u + sizeof(_g4_t_v28)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v29)) > _g4_s26 ? (116u + sizeof(_g4_t_v29)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v30)) > _g4_s27 ? (120u + sizeof(_g4_t_v30)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v31)) > _g4_s28 ? (124u + sizeof(_g4_t_v31)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v32)) > _g4_s29 ? (128u + sizeof(_g4_t_v32)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v33)) > _g4_s30 ? (132u + sizeof(_g4_t_v33)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v34)) > _g4_s31 ? (136u + sizeof(_g4_t_v34)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v35)) > _g4_s32 ? (140u + sizeof(_g4_t_v35)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v36)) > _g4_s33 ? (144u + sizeof(_g4_t_v36)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v37)) > _g4_s34 ? (148u + sizeof(_g4_t_v37)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 33u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 116u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 120u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 132u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 136u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 140u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 148u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Timer (%Delay) [C]", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "HUD", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Start", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Pause", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddPin(a1, 1, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Stop", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Delay", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 4, &v21, 0, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Delay in ms", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Delay (ms)", (int)(uintptr_t)(&v11));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v22, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Delay", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v3, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Elapsed time", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Elapsed (ms)", (int)(uintptr_t)(&v11) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Elapsed", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v5, 1, 0, (int)(uintptr_t)(&v27), 2);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Restart the timer", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Start will Restart", (int)(uintptr_t)(&v12) + 2);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v28, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Start will restart", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v6, 0, 0, (int)(uintptr_t)(&v30), 1);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Type of dialog to display the timer.", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Dialog type", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Dialogs", (int)(uintptr_t)(&v13) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &v31);
  HIDWORD(v14) = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v32, 11, (char *)&v14 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Dialog type", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v8, 1, 0, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  if ( HIDWORD(v14) != 0 )
    G4_VCALL<void>(HIDWORD(v14), 44);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Timer will decrease instead of increase.", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Decreasing", (int)(uintptr_t)(&v14) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v35, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Decreasing", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v36), v4, 1, 0, (int)(uintptr_t)(v37), 1);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  return ((g4_std::string::Destroy(v37)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C4D420_eac4d420  (binary VA: 0xc4d420)
// Original: sub_C4D420
// ----------------------------------------------------------------------------
int * sub_C4D420_eac4d420(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *result;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D49A8 == 0 )
    result = (int *)(&dword_20D49A0);
  *((uint8_t *)result + 72) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4D4D0_eac4d4d0  (binary VA: 0xc4d4d0)
// Original: sub_C4D4D0
// ----------------------------------------------------------------------------
int sub_C4D4D0_eac4d4d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;

  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D49A8 == 0 )
    v3 = (int *)(&dword_20D49A0);
  *((uint8_t *)v3 + 72) = a2 == 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C4D590_eac4d590  (binary VA: 0xc4d590)
// Original: sub_C4D590
// ----------------------------------------------------------------------------
int sub_C4D590_eac4d590(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int *v4;
  int *v5;
  int *v7;
  int *v8;
  int *v9;

  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D49A8 == 0 )
        v7 = (int *)(&dword_20D49A0);
      sub_82D060((int)(uintptr_t)(v7), 0);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v8 = nullptr;
      if ( byte_20D49A8 == 0 )
        v8 = (int *)(&dword_20D49A0);
      sub_82A420((int)(uintptr_t)(v8), 1, 0);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D49A8 == 0 )
        v9 = (int *)(&dword_20D49A0);
      sub_82AAB0((int)(uintptr_t)(v9));
    }
  }
  else
  {
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D49A8 == 0 )
      v3 = (int *)(&dword_20D49A0);
    sub_82D430((int)(uintptr_t)(v3), 0);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D49A8 == 0 )
      v4 = (int *)(&dword_20D49A0);
    sub_82A420((int)(uintptr_t)(v4), 1, 1);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D49A8 == 0 )
      v5 = (int *)(&dword_20D49A0);
    sub_82AAC0((int)(uintptr_t)(v5));
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C4D8D0_eac4d8d0  (binary VA: 0xc4d8d0)
// Original: sub_C4D8D0
// ----------------------------------------------------------------------------
int sub_C4D8D0_eac4d8d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v4;
  int *v5;

  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v5 = nullptr;
      if ( byte_20D49A8 == 0 )
        v5 = (int *)(&dword_20D49A0);
      *((uint8_t *)v5 + 74) = 0;
    }
  }
  else
  {
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D49A8 == 0 )
      v4 = (int *)(&dword_20D49A0);
    *((uint8_t *)v4 + 74) = 1;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C4DA10  (binary VA: 0xc4da10)
// Original: sub_C4DA10
// ----------------------------------------------------------------------------
void sub_C4DA10(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v4;
  int i;
  grapher::ActorVariable::Self *v6;
  grapher::HolderT<int> *v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v12 = a2;
  if ( a3 == nullptr )
  {
    a3 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
  }
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  grapher::ActorBase::GetVariables(a1, 1, (int)(uintptr_t)(&v13));
  v4 = (uint32_t *)(v13);
  v11 = (v14 - (int)(uintptr_t)(v13)) >> 2;
  if ( v11 != 0 )
  {
    for ( i = 0; i != v11; ++i )
    {
      v6 = (grapher::ActorVariable::Self *)v4[i];
      if ( v6 != nullptr )
      {
        v7 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v7 = (uint32_t)(uintptr_t)(&off_205C508);
        grapher::HolderT_int_id_fe4c74::From(v7, &v12);
        v8 = *((uint32_t *)v6 + 3);
        if ( v8 != 0 )
          *(uint8_t *)(v8 + 20) = 0;
        v9 = G4_VCALL<int>(v7, 48);
        v10 = *((uint32_t *)v6 + 1);
        *((uint32_t *)v6 + 1) = v9;
        if ( v10 != 0 )
          G4_VCALL<void>(v10, 44);
        G4_VCALL<void>(v7, 44);
        grapher::ActorContext::SaveAVar(a3, v6);
        v4 = (uint32_t *)(v13);
      }
    }
  }
  if ( v4 != nullptr )
    opDelete(v4);
}

// ----------------------------------------------------------------------------
// Function: sub_C4DBA0  (binary VA: 0xc4dba0)
// Original: sub_C4DBA0
// ----------------------------------------------------------------------------
void sub_C4DBA0(grapher::ActorBase::Self *a1, int a2, int a3, grapher::ActorContext::Self *a4)
{
  uint32_t *v5;
  int i;
  grapher::ActorVariable::Self *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  if ( a4 == nullptr )
  {
    a4 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 )
    {
      v13 = a2;
      v12 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      a2 = v13;
      if ( v12 != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        a2 = v13;
      }
    }
  }
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  grapher::ActorBase::GetVariables(a1, a2, (int)(uintptr_t)(&v15));
  v5 = (uint32_t *)(v15);
  v14 = (v16 - (int)(uintptr_t)(v15)) >> 2;
  if ( v14 != 0 )
  {
    for ( i = 0; i != v14; ++i )
    {
      v7 = (grapher::ActorVariable::Self *)v5[i];
      if ( v7 != nullptr )
      {
        v8 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
        *v8 = (uint32_t)(uintptr_t)(&off_205C408);
        v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
        grapher::HolderT_string_e830be::From(v8, a3);
        v9 = *((uint32_t *)v7 + 3);
        if ( v9 != 0 )
          *(uint8_t *)(v9 + 20) = 0;
        v10 = G4_VCALL<int>(v8, 48);
        v11 = *((uint32_t *)v7 + 1);
        *((uint32_t *)v7 + 1) = v10;
        if ( v11 != 0 )
          G4_VCALL<void>(v11, 44);
        G4_VCALL<void>(v8, 44);
        grapher::ActorContext::SaveAVar(a4, v7);
        v5 = (uint32_t *)(v15);
      }
    }
  }
  if ( v5 != nullptr )
    opDelete(v5);
}

// ----------------------------------------------------------------------------
// Function: sub_C4DD40_eac4dd40  (binary VA: 0xc4dd40)
// Original: sub_C4DD40
// ----------------------------------------------------------------------------
void sub_C4DD40_eac4dd40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  unsigned int v4;
  char *v5;
  char *v6;
  char *v7;
  int v8;
  int v9;
  char *v10;
  char *v11;
  int v12;
  char *v13;
  char *v14;
  int v15;
  char v16;
  char v17;
  uint32_t *v18;
  uint32_t *v19;
  char *v20;
  char v21;
  unsigned int v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef uint32_t _g4_t_v31[3];
  typedef char *_g4_t_v32;
  typedef uint32_t _g4_t_v33[4];
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36[4];
  typedef int _g4_t_v37[7];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v24)) > _g4_s1 ? (20u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v25)) > _g4_s2 ? (27u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v26)) > _g4_s3 ? (28u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v27)) > _g4_s4 ? (32u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v28)) > _g4_s5 ? (48u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v29)) > _g4_s6 ? (52u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v30)) > _g4_s7 ? (56u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v31)) > _g4_s8 ? (64u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v32)) > _g4_s9 ? (76u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v33)) > _g4_s10 ? (80u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v34)) > _g4_s11 ? (96u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v35)) > _g4_s12 ? (100u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v36)) > _g4_s13 ? (112u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v37)) > _g4_s14 ? (128u + sizeof(_g4_t_v37)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 27u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 112u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);

  v33[0] = (uint32_t)(uintptr_t)(v33);
  v33[1] = (uint32_t)(uintptr_t)(v33);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v33), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v29 = (uint32_t *)v33[0];
  if ( (uint32_t *)v33[0] != v33 )
  {
    v27 = 0;
    v30 = (char *)a1 + 56;
    v26 = (char *)a1 + 52;
    v3 = (uint32_t *)v33[0];
LABEL_3:
    v4 = v3[2];
    v25 = 0;
    if ( v4 != 0 && G4_VCALL<uint8_t>(v4, 212) != 0 )
      v25 = G4_VCALL<int>(v4, 208) ^ 1;
    v5 = *((char **)a1 + 15);
    if ( v5 != nullptr )
    {
      v6 = (char *)a1 + 56;
      v7 = *((char **)a1 + 15);
      do
      {
        while ( v4 <= *((uint32_t *)v7 + 4) )
        {
          v6 = v7;
          v7 = *((char **)v7 + 2);
          if ( v7 == nullptr )
            goto LABEL_11;
        }
        v7 = *((char **)v7 + 3);
      }
      while ( v7 != nullptr );
LABEL_11:
      v23 = v6;
      if ( v30 != v6 )
      {
        if ( v4 >= *((uint32_t *)v6 + 4) )
          goto LABEL_19;
        v34 = v4;
        LOBYTE(v35) = 0;
        v28 = *((char **)a1 + 16);
        if ( v28 == v6 )
        {
          sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), (int)(uintptr_t)(v6), (int)(uintptr_t)(v6), (int *)&v34);
          v6 = v32;
          goto LABEL_19;
        }
        v6 = (char *)sub_1904940(v6);
        if ( v4 > *((uint32_t *)v6 + 4) )
        {
          if ( *((uint32_t *)v6 + 3) != 0 )
          {
            v8 = opNew(0x18u);
            if ( v8 != -16 )
            {
              v9 = v35;
              *(uint32_t *)(v8 + 16) = v34;
              *(uint32_t *)(v8 + 20) = v9;
            }
            v24 = (char *)v8;
            sub_1904970(1, v8, v23, v30);
            ++*((uint32_t *)a1 + 18);
            v6 = v24;
            goto LABEL_19;
          }
          goto LABEL_66;
        }
        while ( 1 )
        {
          v22 = *((uint32_t *)v5 + 4);
          if ( v4 < v22 )
          {
            v20 = *((char **)v5 + 2);
            v21 = 1;
            if ( v20 == nullptr )
              goto LABEL_60;
          }
          else
          {
            v20 = *((char **)v5 + 3);
            v21 = 0;
            if ( v20 == nullptr )
            {
LABEL_60:
              v6 = v5;
              if ( v21 == 0 )
              {
                if ( v4 > v22 )
                  goto LABEL_62;
LABEL_19:
                if ( v25 != v6[20] )
                {
                  v10 = *((char **)a1 + 15);
                  if ( v10 == nullptr )
                    goto LABEL_72;
                  v11 = (char *)a1 + 56;
                  do
                  {
                    while ( v4 <= *((uint32_t *)v10 + 4) )
                    {
                      v11 = v10;
                      v10 = *((char **)v10 + 2);
                      if ( v10 == nullptr )
                        goto LABEL_25;
                    }
                    v10 = *((char **)v10 + 3);
                  }
                  while ( v10 != nullptr );
LABEL_25:
                  if ( v30 == v11 )
                  {
LABEL_72:
                    v36[0] = v4;
                    LOBYTE(v36[1]) = 0;
                    if ( *((uint32_t *)a1 + 18) != 0 )
                    {
                      v12 = *((uint32_t *)a1 + 17);
                      if ( v4 > *(uint32_t *)(v12 + 16) )
                        goto LABEL_76;
                    }
                    goto LABEL_74;
                  }
                  if ( v4 < *((uint32_t *)v11 + 4) )
                  {
                    v36[0] = v4;
                    LOBYTE(v36[1]) = 0;
                    if ( *((char **)a1 + 16) == v11 )
                      goto LABEL_30;
                    v12 = sub_1904940(v11);
                    if ( v4 > *(uint32_t *)(v12 + 16) )
                    {
                      if ( *(uint32_t *)(v12 + 12) != 0 )
                      {
LABEL_30:
                        sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), (int)(uintptr_t)(v11), (int)(uintptr_t)(v11), v36);
                        v11 = v32;
                        goto LABEL_31;
                      }
LABEL_76:
                      sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, v12, v36);
                      v11 = v32;
                      goto LABEL_31;
                    }
LABEL_74:
                    sub_C3FA40((int)(uintptr_t)(v31), (int)(uintptr_t)(v26), v36);
                    v11 = (char *)v31[0];
                  }
LABEL_31:
                  v11[20] = v25;
                  v13 = *((char **)a1 + 15);
                  if ( v13 == nullptr )
                    goto LABEL_69;
                  v14 = (char *)a1 + 56;
                  do
                  {
                    while ( v4 <= *((uint32_t *)v13 + 4) )
                    {
                      v14 = v13;
                      v13 = *((char **)v13 + 2);
                      if ( v13 == nullptr )
                        goto LABEL_36;
                    }
                    v13 = *((char **)v13 + 3);
                  }
                  while ( v13 != nullptr );
LABEL_36:
                  if ( v30 == v14 )
                  {
LABEL_69:
                    v37[0] = v4;
                    LOBYTE(v37[1]) = 0;
                    if ( *((uint32_t *)a1 + 18) != 0 )
                    {
                      v15 = *((uint32_t *)a1 + 17);
                      if ( v4 > *(uint32_t *)(v15 + 16) )
                        goto LABEL_77;
                    }
                    goto LABEL_71;
                  }
                  if ( v4 < *((uint32_t *)v14 + 4) )
                  {
                    v37[0] = v4;
                    LOBYTE(v37[1]) = 0;
                    if ( *((char **)a1 + 16) == v14 )
                      goto LABEL_41;
                    v15 = sub_1904940(v14);
                    if ( v4 > *(uint32_t *)(v15 + 16) )
                    {
                      if ( *(uint32_t *)(v15 + 12) != 0 )
                      {
LABEL_41:
                        sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), (int)(uintptr_t)(v14), (int)(uintptr_t)(v14), v37);
                        v14 = v32;
                        goto LABEL_42;
                      }
LABEL_77:
                      sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, v15, v37);
                      v14 = v32;
                      goto LABEL_42;
                    }
LABEL_71:
                    sub_C3FA40((int)(uintptr_t)(v31), (int)(uintptr_t)(v26), v37);
                    v14 = (char *)v31[0];
                  }
LABEL_42:
                  if ( v14[20] != 0 )
                    grapher::ActorBase::FireEvent(a1, 2, a3);
                  else
                    grapher::ActorBase::FireEvent(a1, 3, a3);
                }
                if ( v4 != 0 && G4_VCALL<uint8_t>(v4, 212) != 0 )
                {
                  v16 = G4_VCALL<int>(v4, 208);
                  v17 = v27;
                  if ( v16 != 1 )
                    v17 = 1;
                  v27 = v17;
                }
                v3 = (uint32_t *)*v29;
                v29 = (uint32_t *)*v29;
                if ( v29 == v33 )
                {
                  if ( v27 != 0 )
                    goto LABEL_51;
                  goto LABEL_75;
                }
                goto LABEL_3;
              }
              if ( v28 != v5 )
              {
                v6 = (char *)sub_19048F0(v5);
                if ( v4 <= *((uint32_t *)v6 + 4) )
                  goto LABEL_19;
LABEL_62:
                sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, (int)(uintptr_t)(v5), (int *)&v34);
LABEL_67:
                v6 = v32;
                goto LABEL_19;
              }
LABEL_66:
              sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, (int)(uintptr_t)(v6), (int *)&v34);
              goto LABEL_67;
            }
          }
          v5 = v20;
        }
      }
    }
    v34 = v4;
    LOBYTE(v35) = 0;
    if ( *((uint32_t *)a1 + 18) == 0 || (v6 = *((char **)a1 + 17), v4 <= *((uint32_t *)v6 + 4)) )
    {
      sub_C3FA40((int)(uintptr_t)(v31), (int)(uintptr_t)(v26), (int *)&v34);
      v6 = (char *)v31[0];
      goto LABEL_19;
    }
    goto LABEL_66;
  }
LABEL_75:
  grapher::ActorBase::FireEvent(a1, 4, a3);
  G4_VCALL<void>(a1, 28, a3);
LABEL_51:
  v18 = (uint32_t *)v33[0];
  if ( (uint32_t *)v33[0] != v33 )
  {
    while ( 1 )
    {
      v19 = (uint32_t *)*v18;
      opDelete(v18);
      if ( v19 == v33 )
        break;
      v18 = v19;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C4E300_eac4e300  (binary VA: 0xc4e300)
// Original: sub_C4E300
// ----------------------------------------------------------------------------
int sub_C4E300_eac4e300(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int result;
  int v5;
  int v6;
  char v7;

  if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D3BC4 == 0 )
    v3 = (int *)(&dword_20D3BC0);
  result = sub_971F30((int)(uintptr_t)(v3));
  v5 = *((uint32_t *)a1 + 13);
  v6 = result;
  v7 = *((uint8_t *)a1 + 60);
  if ( result != v5 )
  {
    if ( (v7 & 0x20) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, a3));
      v5 = *((uint32_t *)a1 + 13);
      v7 = *((uint8_t *)a1 + 60) | 0x20;
      *((uint8_t *)a1 + 60) = v7;
    }
    if ( v6 > v5 )
    {
      if ( (v7 & 8) == 0 )
      {
        result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
        v7 = *((uint8_t *)a1 + 60) | 8;
        *((uint8_t *)a1 + 60) = v7;
        if ( (v7 & 0x10) == 0 )
          return result;
        goto LABEL_14;
      }
    }
    else if ( (v7 & 4) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      v7 = *((uint8_t *)a1 + 60) | 4;
      *((uint8_t *)a1 + 60) = v7;
    }
    goto LABEL_10;
  }
  if ( (v7 & 0x10) == 0 )
  {
    result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
    v7 = *((uint8_t *)a1 + 60) | 0x10;
    *((uint8_t *)a1 + 60) = v7;
LABEL_10:
    if ( (v7 & 0x10) == 0 )
      return result;
  }
LABEL_14:
  if ( (v7 & 0x20) != 0 && (v7 & 8) != 0 && (v7 & 4) != 0 )
    return G4_VCALL<int>(a1, 28, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4E4B0  (binary VA: 0xc4e4b0)
// Original: sub_C4E4B0
// ----------------------------------------------------------------------------
int * sub_C4E4B0(int *result, uint32_t *a2, int a3, int *a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef char _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v17)) > _g4_s4 ? (12u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v18)) > _g4_s5 ? (12u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v19)) > _g4_s6 ? (16u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v20)) > _g4_s7 ? (20u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v21)) > _g4_s8 ? (20u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v22)) > _g4_s9 ? (20u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v23)) > _g4_s10 ? (24u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);

  v19 = result;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_19;
    v10 = a2[4];
    v22 = v10;
    if ( *(uint32_t *)(v10 + 16) >= (unsigned int)*a4 )
      goto LABEL_19;
    v13 = v10 == a3;
    v11 = opNew(0x18u);
    if ( v11 != -16 )
    {
      v12 = *a4;
      *(uint32_t *)(v11 + 20) = a4[1];
      *(uint32_t *)(v11 + 16) = v12;
    }
    v18 = v11;
    sub_1904970(v13, v11, v22, a3);
    ++a2[5];
    *v19 = v18;
    return v19;
  }
  else
  {
    if ( (unsigned int)*a4 < *(uint32_t *)(a3 + 16) )
    {
      if ( a3 == a2[3] )
      {
        sub_C3F8C0(result, (int)(uintptr_t)(a2), a3, a3, a4);
        return v19;
      }
      v16 = *a4;
      v14 = a2 + 1;
      v5 = sub_1904940(a3);
      if ( v16 > *(uint32_t *)(v5 + 16) )
      {
        if ( *(uint32_t *)(v5 + 12) != 0 )
        {
          v6 = opNew(0x18u);
          v20 = v6;
          if ( v6 != -16 )
          {
            v7 = a4[1];
            *(uint32_t *)(v6 + 16) = *a4;
            *(uint32_t *)(v6 + 20) = v7;
          }
          sub_1904970(1, v6, a3, v14);
          ++a2[5];
          *v19 = v20;
          return v19;
        }
        sub_C3F8C0(v19, (int)(uintptr_t)(a2), 0, v5, a4);
        return v19;
      }
LABEL_19:
      sub_C41BC0((int)(uintptr_t)(v23), a2, a4);
      *v19 = v23[0];
      return v19;
    }
    if ( (unsigned int)*a4 <= *(uint32_t *)(a3 + 16) )
    {
      *result = a3;
      return result;
    }
    if ( a3 == a2[4] )
      goto LABEL_26;
    v17 = *a4;
    v15 = a2 + 1;
    v21 = sub_19048E0(a3);
    if ( v17 >= *(uint32_t *)(v21 + 16) )
      goto LABEL_19;
    if ( *(uint32_t *)(a3 + 12) == 0 )
    {
LABEL_26:
      sub_C3F8C0(v19, (int)(uintptr_t)(a2), 0, a3, a4);
      return v19;
    }
    v8 = opNew(0x18u);
    if ( v8 != -16 )
    {
      v9 = *a4;
      *(uint32_t *)(v8 + 20) = a4[1];
      *(uint32_t *)(v8 + 16) = v9;
    }
    sub_1904970(1, v8, v21, v15);
    ++a2[5];
    *v19 = v8;
    return v19;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C4E7B0  (binary VA: 0xc4e7b0)
// Original: sub_C4E7B0
// ----------------------------------------------------------------------------
int sub_C4E7B0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::FireEvent(a1, a2, a3);
  *((uint32_t *)a1 + 13) |= 1 << a2;
  return 1 << a2;
}

// ----------------------------------------------------------------------------
// Function: sub_C4E810  (binary VA: 0xc4e810)
// Original: sub_C4E810
// ----------------------------------------------------------------------------
void sub_C4E810(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  grapher::ActorBase::Self *v2;
  void **v3;
  void **v4;
  int v5;
  int v6;
  char v7;
  int v8;
  void **v9;
  void **v10;
  typedef int _g4_t_v11;
  typedef grapher::ActorContext::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17[2];
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef grapher::ActorBase::Self **_g4_t_v24;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v15)) > _g4_s4 ? (19u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v16)) > _g4_s5 ? (20u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v20)) > _g4_s9 ? (44u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v21)) > _g4_s10 ? (48u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v22)) > _g4_s11 ? (52u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v23)) > _g4_s12 ? (56u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v24)) > _g4_s13 ? (68u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 19u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);

  v24 = &a1;
  v2 = a1;
  v17[0] = v17;
  v17[1] = v17;
  v12 = a2;
  sub_8560A0(a1, 1, (int)(uintptr_t)(v17), (int)(uintptr_t)(a2), 0x7FFFFFFF);
  v3 = (void **)v17[0];
  v11 = 0;
  if ( v17[0] != v17 )
  {
    v4 = (void **)v17[0];
    v5 = 0;
    do
    {
      v4 = (void **)*v4;
      ++v5;
    }
    while ( v4 != v17 );
    v11 = v5;
  }
  v13 = 0;
  v14 = 0;
  if ( *((uint32_t *)v2 + 13) != 0 && v17[0] != v17 )
  {
    do
    {
      (*(void (**)(float *))(*(uint32_t *)v3[2] + 52))(&v21);
      (*(void (**)(float *))(**((uint32_t **)v2 + 13) + 52))(&v18);
      if ( fsqrt(
             (float)((float)((float)(v19 - v22) * (float)(v19 - v22)) + (float)((float)(v18 - v21) * (float)(v18 - v21)))
           + (float)((float)(v20 - v23) * (float)(v20 - v23))) <= *((float *)v2 + 14)
        && G4_VCALL<uint8_t>(v3[2], 212) != 0 )
      {
        v15 = 4;
        v6 = 4;
        v7 = 1;
        v16 = 2;
      }
      else
      {
        v15 = 8;
        v6 = 8;
        v7 = 0;
        v16 = 3;
      }
      v8 = *((char *)v2 + 61);
      *((uint8_t *)v2 + 60) = v7;
      if ( v6 != (v6 & v8) )
      {
        grapher::ActorBase::FireEvent(v2, v16, v12);
        *((uint8_t *)v2 + 61) |= v15;
        v7 = *((uint8_t *)v2 + 60);
      }
      if ( v7 != 0 )
        ++v14;
      else
        ++v13;
      v3 = (void **)*v3;
    }
    while ( v3 != v17 );
  }
  if ( v14 != v11 || (*((uint8_t *)v2 + 61) & 0x10) != 0 )
  {
    if ( v13 != v11 )
      goto LABEL_16;
  }
  else
  {
    grapher::ActorBase::FireEvent(v2, 4, v12);
    *((uint8_t *)v2 + 61) |= 0x10u;
    if ( v13 != v11 )
      goto LABEL_16;
  }
  if ( (*((uint8_t *)v2 + 61) & 0x20) == 0 )
  {
    grapher::ActorBase::FireEvent(v2, 5, v12);
    *((uint8_t *)v2 + 61) |= 0x20u;
  }
LABEL_16:
  v9 = (void **)v17[0];
  if ( v17[0] != v17 )
  {
    while ( 1 )
    {
      v10 = (void **)*v9;
      opDelete(v9);
      if ( v10 == v17 )
        break;
      v9 = v10;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C4EA40_eac4ea40  (binary VA: 0xc4ea40)
// Original: sub_C4EA40
// ----------------------------------------------------------------------------
int sub_C4EA40_eac4ea40(char *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  sub_C4E810((grapher::ActorBase::Self *)a1, a3);
  result = a1[61];
  if ( (result & 2) != 0 && (result & 4) != 0 && (result & 0x10) != 0 && (result & 8) != 0 && (result & 0x20) != 0 )
    return G4_VCALL<int>(a1, 28, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4EAA0  (binary VA: 0xc4eaa0)
// Original: sub_C4EAA0
// ----------------------------------------------------------------------------
int sub_C4EAA0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  if ( *((uint8_t *)a1 + 60) != 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a2));
  else
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_C4EAF0  (binary VA: 0xc4eaf0)
// Original: sub_C4EAF0
// ----------------------------------------------------------------------------
int sub_C4EAF0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2, int a3)
{
  int result;

  result = (1 << a3) & *((char *)a1 + 61);
  if ( 1 << a3 != result )
  {
    grapher::ActorBase::FireEvent(a1, a3, a2);
    *((uint8_t *)a1 + 61) |= 1 << a3;
    return 1 << a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4EB90  (binary VA: 0xc4eb90)
// Original: sub_C4EB90
// ----------------------------------------------------------------------------
int sub_C4EB90(int a1)
{
  if ( a1 != 0 && G4_VCALL<uint8_t>(a1, 212) != 0 )
    return G4_VCALL<int>(a1, 208) ^ 1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAlive::Construct_eac4ebf0  (binary VA: 0xc4ebf0)
// Original: ActorGameConditionIsAlive::ActorGameConditionIsAlive
// ----------------------------------------------------------------------------
uint32_t * ActorGameConditionIsAlive::Construct_eac4ebf0(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 14) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C408);
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 18) = 0;
  *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 17) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return (uint32_t *)((char *)a1 + 56);
}

// ----------------------------------------------------------------------------
// Function: sub_C4EC50  (binary VA: 0xc4ec50)
// Original: sub_C4EC50
// ----------------------------------------------------------------------------
int * sub_C4EC50(grapher::ActorBase::Self *a1, unsigned int a2, grapher::ActorContext::Self *a3)
{
  char v3;
  char v4;
  int *result;
  int *v6;
  int *v7;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef int _g4_t_v14[3];
  typedef unsigned int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef char _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef char _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v3 = 0;
  if ( a2 != 0 )
  {
    v4 = G4_VCALL<int>(a2, 212);
    v3 = 0;
    if ( v4 != 0 )
      v3 = (*(int (**)(uint32_t, unsigned int))(*(uint32_t *)a2 + 208))(0, a2) ^ 1;
  }
  result = *((int **)a1 + 15);
  v6 = (int *)((char *)a1 + 56);
  v7 = (int *)((char *)a1 + 56);
  if ( result == nullptr )
    goto LABEL_31;
  do
  {
    while ( a2 <= result[4] )
    {
      v7 = result;
      result = (int *)result[2];
      if ( result == nullptr )
        goto LABEL_9;
    }
    result = (int *)result[3];
  }
  while ( result != nullptr );
LABEL_9:
  if ( v6 == v7 || a2 < v7[4] )
  {
LABEL_31:
    v12 = v3;
    v15 = a2;
    v16 = 0;
    result = sub_C3FB20(v14, (uint32_t *)a1 + 13, (int)(uintptr_t)(v7), (int *)&v15);
    v7 = (int *)v14[0];
    v3 = v12;
  }
  if ( v3 != *((uint8_t *)v7 + 20) )
  {
    v8 = *((char **)a1 + 15);
    v9 = (char *)a1 + 56;
    if ( v8 == nullptr )
      goto LABEL_32;
    do
    {
      while ( a2 <= *((uint32_t *)v8 + 4) )
      {
        v9 = v8;
        v8 = *((char **)v8 + 2);
        if ( v8 == nullptr )
          goto LABEL_17;
      }
      v8 = *((char **)v8 + 3);
    }
    while ( v8 != nullptr );
LABEL_17:
    if ( v6 == (int *)v9 || a2 < *((uint32_t *)v9 + 4) )
    {
LABEL_32:
      v13 = v3;
      v17 = a2;
      v18 = 0;
      sub_C3FB20(v14, (uint32_t *)a1 + 13, (int)(uintptr_t)(v9), (int *)&v17);
      v9 = (char *)v14[0];
      v3 = v13;
    }
    v9[20] = v3;
    v10 = *((char **)a1 + 15);
    v11 = (char *)a1 + 56;
    if ( v10 == nullptr )
      goto LABEL_26;
    do
    {
      while ( a2 <= *((uint32_t *)v10 + 4) )
      {
        v11 = v10;
        v10 = *((char **)v10 + 2);
        if ( v10 == nullptr )
          goto LABEL_24;
      }
      v10 = *((char **)v10 + 3);
    }
    while ( v10 != nullptr );
LABEL_24:
    if ( v6 == (int *)v11 || a2 < *((uint32_t *)v11 + 4) )
    {
LABEL_26:
      v19 = a2;
      v20 = 0;
      sub_C3FB20(v14, (uint32_t *)a1 + 13, (int)(uintptr_t)(v11), (int *)&v19);
      v11 = (char *)v14[0];
    }
    if ( v11[20] != 0 )
      return (int *)grapher::ActorBase::FireEvent(a1, 2, a3);
    else
      return (int *)grapher::ActorBase::FireEvent(a1, 3, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4EE40  (binary VA: 0xc4ee40)
// Original: sub_C4EE40
// ----------------------------------------------------------------------------
int sub_C4EE40(grapher::ActorBase::Self *a1, unsigned int a2, grapher::ActorContext::Self *a3)
{
  char *v3;
  char *v4;
  typedef char *_g4_t_v6;
  typedef unsigned int _g4_t_v7;
  typedef char _g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v3 = *((char **)a1 + 15);
  v4 = (char *)a1 + 56;
  if ( v3 == nullptr )
    goto LABEL_11;
  do
  {
    while ( a2 <= *((uint32_t *)v3 + 4) )
    {
      v4 = v3;
      v3 = *((char **)v3 + 2);
      if ( v3 == nullptr )
        goto LABEL_6;
    }
    v3 = *((char **)v3 + 3);
  }
  while ( v3 != nullptr );
LABEL_6:
  if ( (char *)a1 + 56 == v4 || a2 < *((uint32_t *)v4 + 4) )
  {
LABEL_11:
    v7 = a2;
    v8 = 0;
    sub_C3FB20((int *)&v6, (uint32_t *)a1 + 13, (int)(uintptr_t)(v4), (int *)&v7);
    v4 = v6;
  }
  if ( v4[20] != 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  else
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C4EF00  (binary VA: 0xc4ef00)
// Original: sub_C4EF00
// ----------------------------------------------------------------------------
int sub_C4EF00(int a1, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  typedef int _g4_t_v5[3];
  typedef unsigned int _g4_t_v6;
  typedef char _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v2 = *(uint32_t **)(a1 + 60);
  v3 = a1 + 56;
  if ( v2 == nullptr )
    goto LABEL_8;
  do
  {
    while ( v2[4] >= a2 )
    {
      v3 = (int)(uintptr_t)(v2);
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( a1 + 56 == v3 || *(uint32_t *)(v3 + 16) > a2 )
  {
LABEL_8:
    v6 = a2;
    v7 = 0;
    sub_C3FB20(v5, (uint32_t *)(a1 + 52), v3, (int *)&v6);
    v3 = v5[0];
  }
  return *(uint8_t *)(v3 + 20);
}

// ----------------------------------------------------------------------------
// Function: sub_C4EF70  (binary VA: 0xc4ef70)
// Original: sub_C4EF70
// ----------------------------------------------------------------------------
int * sub_C4EF70(int a1, unsigned int a2, char a3)
{
  char v3;
  int *result;
  int v5;
  typedef int _g4_t_v6[3];
  typedef unsigned int _g4_t_v7;
  typedef char _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v3 = a3;
  result = *(int **)(a1 + 60);
  v5 = a1 + 56;
  if ( result == nullptr )
    goto LABEL_8;
  do
  {
    while ( result[4] >= a2 )
    {
      v5 = (int)(uintptr_t)(result);
      result = (int *)result[2];
      if ( result == nullptr )
        goto LABEL_6;
    }
    result = (int *)result[3];
  }
  while ( result != nullptr );
LABEL_6:
  if ( a1 + 56 == v5 || *(uint32_t *)(v5 + 16) > a2 )
  {
LABEL_8:
    v7 = a2;
    v8 = 0;
    result = sub_C3FB20(v6, (uint32_t *)(a1 + 52), v5, (int *)&v7);
    v5 = v6[0];
    v3 = a3;
  }
  *(uint8_t *)(v5 + 20) = v3;
  return result;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameConditionIsAttacked::ActorGameConditionIsAttacked(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameConditionIsIdle::ActorGameConditionIsIdle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameConditionLanded::ActorGameConditionLanded(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameConditionWantedLevel::ActorGameConditionWantedLevel(int, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_C4F120  (binary VA: 0xc4f120)
// Original: sub_C4F120
// ----------------------------------------------------------------------------
int sub_C4F120(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *v2;
  int result;
  int v4;
  int v5;
  char v6;

  if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D3BC4 == 0 )
    v2 = (int *)(&dword_20D3BC0);
  result = sub_971F30((int)(uintptr_t)(v2));
  v4 = *((uint32_t *)a1 + 13);
  v5 = result;
  if ( v4 == result )
  {
    if ( (*((uint8_t *)a1 + 60) & 0x10) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a2));
      *((uint8_t *)a1 + 60) |= 0x10u;
    }
  }
  else
  {
    v6 = *((uint8_t *)a1 + 60);
    if ( (v6 & 0x20) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, a2));
      v4 = *((uint32_t *)a1 + 13);
      v6 = *((uint8_t *)a1 + 60) | 0x20;
      *((uint8_t *)a1 + 60) = v6;
    }
    if ( v5 > v4 )
    {
      if ( (v6 & 8) == 0 )
      {
        result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a2));
        *((uint8_t *)a1 + 60) |= 8u;
      }
    }
    else if ( (v6 & 4) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a2));
      *((uint8_t *)a1 + 60) |= 4u;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4F280  (binary VA: 0xc4f280)
// Original: sub_C4F280
// ----------------------------------------------------------------------------
int sub_C4F280(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *v2;
  int result;
  int v4;
  int v5;
  char v6;

  if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D3BC4 == 0 )
    v2 = (int *)(&dword_20D3BC0);
  result = sub_971F30((int)(uintptr_t)(v2));
  v4 = *((uint32_t *)a1 + 13);
  v5 = result;
  if ( result == v4 )
  {
    if ( (*((uint8_t *)a1 + 60) & 0x10) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a2));
      *((uint8_t *)a1 + 60) |= 0x10u;
    }
  }
  else
  {
    v6 = *((uint8_t *)a1 + 60);
    if ( (v6 & 0x20) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, a2));
      v4 = *((uint32_t *)a1 + 13);
      v6 = *((uint8_t *)a1 + 60) | 0x20;
      *((uint8_t *)a1 + 60) = v6;
    }
    if ( v5 > v4 )
    {
      if ( (v6 & 8) == 0 )
      {
        result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a2));
        *((uint8_t *)a1 + 60) |= 8u;
      }
    }
    else if ( (v6 & 4) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a2));
      *((uint8_t *)a1 + 60) |= 4u;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4F3E0  (binary VA: 0xc4f3e0)
// Original: sub_C4F3E0
// ----------------------------------------------------------------------------
int sub_C4F3E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  result = (1 << a2) & *((char *)a1 + 60);
  if ( 1 << a2 != result )
  {
    grapher::ActorBase::FireEvent(a1, a2, a3);
    *((uint8_t *)a1 + 60) |= 1 << a2;
    return 1 << a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionWithin::Construct_eac4f480  (binary VA: 0xc4f480)
// Original: ActorGameConditionWithin::ActorGameConditionWithin
// ----------------------------------------------------------------------------
uint32_t * ActorGameConditionWithin::Construct_eac4f480(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 18) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C588);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 60);
  *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)((char *)a1 + 60);
  return (uint32_t *)((char *)a1 + 60);
}

// ----------------------------------------------------------------------------
// Function: sub_C4F4E0  (binary VA: 0xc4f4e0)
// Original: sub_C4F4E0
// ----------------------------------------------------------------------------
int sub_C4F4E0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2, int a3)
{
  int result;

  result = (1 << a3) & *((uint32_t *)a1 + 18);
  if ( 1 << a3 != result )
  {
    result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, a3, a2));
    *((uint32_t *)a1 + 18) |= 1 << a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventLockLootDrop::Construct_eac4f580  (binary VA: 0xc4f580)
// Original: ActorGameEventLockLootDrop::ActorGameEventLockLootDrop
// ----------------------------------------------------------------------------
uint32_t * ActorGameEventLockLootDrop::Construct_eac4f580(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C5C8);
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C600);
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return (uint32_t *)((char *)a1 + 56);
}



// [Deduplicated: canonical definition in Actors module] (ActorGameScriptLODFilter::ActorGameScriptLODFilter(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameGangBattlesApplyProfile::ActorGameGangBattlesApplyProfile(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_C4F650  (binary VA: 0xc4f650)
// Original: sub_C4F650
// ----------------------------------------------------------------------------
int sub_C4F650(int a1, const void **a2, int a3)
{
  int *v3;
  int result;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v11)) > _g4_s5 ? (32u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v12)) > _g4_s6 ? (36u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v13)) > _g4_s7 ? (40u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v14)) > _g4_s8 ? (44u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
  {
    sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
    __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D34C4 == 0 )
    v3 = (int *)(&dword_20D34C0);
  result = sub_5B8B10((int)(uintptr_t)(v3), a2);
  if ( result != -1 && *(uint32_t *)(dword_20D7E90 + 276 * result + 116) == 1 )
  {
    result = sub_5B5800((int)(uintptr_t)(v3), result);
    v5 = result;
    if ( result != 0 )
    {
      v11 = (int)(uintptr_t)(&dword_213B814);
      v10 = result + 220;
      v9 = result + 216;
      sub_1939B80(&v11, *(uint32_t *)(*(uint32_t *)(result + 216) - 12) + 1);
      g4_std::string::append((int)(uintptr_t)(&v11), &off_1B5AAE7, 1u);
      g4_std::string::append_str(&v11, v9);
      g4_std::string::construct_copy(&v13, &v11);
      g4_std::string::append((int)(uintptr_t)(&v13), (char *)&off_1B5AAE7 + 2, 1u);
      g4_std::string::construct_copy(&v14, &v13);
      g4_std::string::append_str(&v14, v10);
      g4_std::string::construct_copy(&v12, &v14);
      g4_std::string::append((int)(uintptr_t)(&v12), "-mesh-skin", 0xAu);
      g4_std::string::Destroy(&v14);
      g4_std::string::Destroy(&v13);
      g4_std::string::Destroy(&v11);
      G4_VCALL<void>(a3, 388, *(uint32_t *)(v5 + 216), v12, v6, v7, v8, &v12, v10, v11, v12, v13, v14);
      return ((g4_std::string::Destroy(a2)), (int)0);
    }
  }
  return result;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameGangBattlesResetMemberList::ActorGameGangBattlesResetMemberList(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameGangBattlesRetrieveMember::ActorGameGangBattlesRetrieveMember(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameHUD::ActorGameHUD(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameHUDFollowerStatus::ActorGameHUDFollowerStatus(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameHUDRaceLockControls::ActorGameHUDRaceLockControls(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameHUDControls::ActorGameHUDControls(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameHUDGenericText::Construct_eac4fa00  (binary VA: 0xc4fa00)
// Original: ActorGameHUDGenericText::ActorGameHUDGenericText
// ----------------------------------------------------------------------------
int ActorGameHUDGenericText::Construct_eac4fa00(uint8_t *a1, unsigned int a2)
{
  uint16_t *v2;
  unsigned int v3;
  int result;
  uint16_t *v5;

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  v2 = (uint16_t *)(a1 + 52);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C928);
  v3 = 256;
  if ( ((unsigned int)(uintptr_t)(a1 + 52) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 53);
    a1[52] = 0;
    LOWORD(v3) = 255;
    if ( ((unsigned int)(uintptr_t)(a1 + 53) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v3 -= 2;
  ++v2;
LABEL_3:
  result = 0;
  memset(v2, 0, 4 * (v3 >> 2));
  v5 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *v5++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v5 = 0;
  return result;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameHUDHighlight::ActorGameHUDHighlight(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameHUDSetText::ActorGameHUDSetText(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameHudSetObjective::Construct_eac4fb40  (binary VA: 0xc4fb40)
// Original: ActorGameHudSetObjective::ActorGameHudSetObjective
// ----------------------------------------------------------------------------
void * ActorGameHudSetObjective::Construct_eac4fb40(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA48);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  return &dword_213B814;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameHudSetWarning::ActorGameHudSetWarning(int, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameHUDSetVarText::ActorGameHUDSetVarText(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameHUDTutorial::ActorGameHUDTutorial(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameItemShop::ActorGameItemShop(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetInteractionButton::Construct_eac4fcb0  (binary VA: 0xc4fcb0)
// Original: ActorGameHUDSetInteractionButton::ActorGameHUDSetInteractionButton
// ----------------------------------------------------------------------------
int ActorGameHUDSetInteractionButton::Construct_eac4fcb0(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C9A8);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_206C9E0);
  *((uint32_t *)a1 + 14) = 0;
  return sub_84BB20((char *)a1 + 56, 0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventsHudOnTouch::Construct_eac4fd10  (binary VA: 0xc4fd10)
// Original: ActorGameEventsHudOnTouch::ActorGameEventsHudOnTouch
// ----------------------------------------------------------------------------
int ActorGameEventsHudOnTouch::Construct_eac4fd10(int a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C6E8);
  *(uint8_t *)(a1 + 56) = 0;
  return sub_84BB20(a1 + 52, 0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnPickUp::Construct_eac4fd70  (binary VA: 0xc4fd70)
// Original: ActorGameEventOnPickUp::ActorGameEventOnPickUp
// ----------------------------------------------------------------------------
int ActorGameEventOnPickUp::Construct_eac4fd70(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C688);
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C6C0);
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return sub_84BB20((char *)a1 + 64, 0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnKill::Construct_eac4fde0  (binary VA: 0xc4fde0)
// Original: ActorGameEventOnKill::ActorGameEventOnKill
// ----------------------------------------------------------------------------
int ActorGameEventOnKill::Construct_eac4fde0(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C628);
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C660);
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return sub_84BB20((char *)a1 + 64, 0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionHasVehicle::Construct_eac4fe50  (binary VA: 0xc4fe50)
// Original: ActorGameConditionHasVehicle::ActorGameConditionHasVehicle
// ----------------------------------------------------------------------------
int ActorGameConditionHasVehicle::Construct_eac4fe50(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C388);
  return sub_84BB20((char *)a1 + 52, 0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameTimer::Construct_eac4feb0  (binary VA: 0xc4feb0)
// Original: ActorGameTimer::ActorGameTimer
// ----------------------------------------------------------------------------
int ActorGameTimer::Construct_eac4feb0(int a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB48);
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint8_t *)(a1 + 64) = 0;
  sub_84BB20(a1 + 56, 0);
  sub_84BB20(a1 + 60, *(uint32_t *)(a1 + 60));
  sub_84BB20(a1 + 52, *(uint32_t *)(a1 + 52));
  return sub_C5A390(a1 + 64, *(uint8_t *)(a1 + 64));
}

// ----------------------------------------------------------------------------
// Function: sub_C4FF50  (binary VA: 0xc4ff50)
// Original: sub_C4FF50
// ----------------------------------------------------------------------------
int sub_C4FF50(int a1, int a2)
{
  g4_std::string::assign_str(a1, a2);
  g4_std::string::assign_str(a1 + 4, a2 + 4);
  g4_std::string::assign_str(a1 + 8, a2 + 8);
  g4_std::string::assign_str(a1 + 12, a2 + 12);
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a1 + 16), (const gameswf::ASValue::Self *)(a2 + 16));
  g4_std::vector_pair_string_gameswf_ASVa_e7213d::opAssign(
    (std::vector<std::pair<std::string, gameswf::ASValue::Self>, GameAllocator<std::pair<std::string, gameswf::ASValue::Self>>> *)(a1 + 28),
    (const std::vector<std::pair<std::string, gameswf::ASValue::Self>, GameAllocator<std::pair<std::string, gameswf::ASValue::Self>>> *)(a2 + 28));
  *(uint8_t *)(a1 + 40) = *(uint8_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 48) = *(uint32_t *)(a2 + 48);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C50000  (binary VA: 0xc50000)
// Original: sub_C50000
// ----------------------------------------------------------------------------
int sub_C50000(int a1, int a2)
{
  int result;

  *(uint8_t *)(a1 + 16) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint8_t *)(a1 + 17) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  g4_std::string::assign_str(a1, a2);
  g4_std::string::assign_str(a1 + 4, a2 + 4);
  g4_std::string::assign_str(a1 + 8, a2 + 8);
  g4_std::string::assign_str(a1 + 12, a2 + 12);
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a1 + 16), (const gameswf::ASValue::Self *)(a2 + 16));
  g4_std::vector_pair_string_gameswf_ASVa_e7213d::opAssign(
    (std::vector<std::pair<std::string, gameswf::ASValue::Self>, GameAllocator<std::pair<std::string, gameswf::ASValue::Self>>> *)(a1 + 28),
    (const std::vector<std::pair<std::string, gameswf::ASValue::Self>, GameAllocator<std::pair<std::string, gameswf::ASValue::Self>>> *)(a2 + 28));
  *(uint8_t *)(a1 + 40) = *(uint8_t *)(a2 + 40);
  *(uint32_t *)(a1 + 44) = *(uint32_t *)(a2 + 44);
  result = *(uint32_t *)(a2 + 48);
  *(uint32_t *)(a1 + 48) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C500D0  (binary VA: 0xc500d0)
// Original: sub_C500D0
// ----------------------------------------------------------------------------
int * sub_C500D0(int *a1, int a2, int a3, int a4, int a5)
{
  int v6;
  int v7;
  int v10;
  char v11;

  v11 = 1;
  v10 = a2 + 4;
  if ( a3 == 0 && a4 != a2 + 4 )
    v11 = *(uint32_t *)a5 < *(uint32_t *)(a4 + 16);
  v6 = opNew(0x5Cu);
  v7 = v6;
  if ( v6 != -16 )
  {
    *(uint32_t *)(v6 + 16) = *(uint32_t *)a5;
    *(uint32_t *)(v6 + 20) = *(uint32_t *)(a5 + 4);
    *(uint32_t *)(v6 + 24) = *(uint32_t *)(a5 + 8);
    *(uint32_t *)(v6 + 28) = *(uint32_t *)(a5 + 12);
    *(uint32_t *)(v6 + 32) = *(uint32_t *)(a5 + 16);
    *(uint32_t *)(v6 + 36) = *(uint32_t *)(a5 + 20);
    *(uint8_t *)(v6 + 56) = 0;
    *(uint32_t *)(v6 + 40) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v6 + 44) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v6 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v6 + 52) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint8_t *)(v6 + 57) = 0;
    *(uint32_t *)(v6 + 68) = 0;
    *(uint32_t *)(v6 + 72) = 0;
    *(uint32_t *)(v6 + 76) = 0;
    g4_std::string::assign_str(v6 + 40, a5 + 24);
    g4_std::string::assign_str(v7 + 44, a5 + 28);
    g4_std::string::assign_str(v7 + 48, a5 + 32);
    g4_std::string::assign_str(v7 + 52, a5 + 36);
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v7 + 56), (const gameswf::ASValue::Self *)(a5 + 40));
    g4_std::vector_pair_string_gameswf_ASVa_e7213d::opAssign(
      (std::vector<std::pair<std::string, gameswf::ASValue::Self>, GameAllocator<std::pair<std::string, gameswf::ASValue::Self>>> *)(v7 + 68),
      (const std::vector<std::pair<std::string, gameswf::ASValue::Self>, GameAllocator<std::pair<std::string, gameswf::ASValue::Self>>> *)(a5 + 52));
    *(uint8_t *)(v7 + 80) = *(uint8_t *)(a5 + 64);
    *(uint32_t *)(v7 + 84) = *(uint32_t *)(a5 + 68);
    *(uint32_t *)(v7 + 88) = *(uint32_t *)(a5 + 72);
  }
  sub_1904970(v11, v7, a4, v10);
  *a1 = v7;
  ++*(uint32_t *)(a2 + 20);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C50260  (binary VA: 0xc50260)
// Original: sub_C50260
// ----------------------------------------------------------------------------
int sub_C50260(int a1, int a2, int *a3)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  char v7; // bp
  int v8;
  int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = *(uint32_t **)(a2 + 8);
  if ( v4 == nullptr )
  {
    v4 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v5 = *a3;
  while ( 1 )
  {
    v8 = v4[4];
    if ( v8 <= v5 )
      break;
    v6 = (uint32_t *)v4[2];
    v7 = 1;
    if ( v6 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v6;
  }
  v6 = (uint32_t *)v4[3];
  v7 = 0;
  if ( v6 != nullptr )
    goto LABEL_4;
LABEL_7:
  v12 = (int)(uintptr_t)(v4);
  if ( v7 == 0 )
  {
    if ( v5 <= v8 )
      goto LABEL_9;
LABEL_13:
    sub_C500D0(v13, a2, 0, v12, (int)(uintptr_t)(a3));
LABEL_14:
    v10 = v13[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v10;
    return a1;
  }
LABEL_11:
  if ( *(uint32_t **)(a2 + 12) == v4 )
  {
    sub_C500D0(v13, a2, 0, (int)(uintptr_t)(v4), (int)(uintptr_t)(a3));
    goto LABEL_14;
  }
  v12 = (int)(uintptr_t)(v4);
  v4 = (uint32_t *)sub_19048F0(v4);
  if ( *a3 > v4[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C50340_eac50340  (binary VA: 0xc50340)
// Original: sub_C50340
// ----------------------------------------------------------------------------
void sub_C50340_eac50340(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C3C8);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C503A0_eac503a0  (binary VA: 0xc503a0)
// Original: sub_C503A0
// ----------------------------------------------------------------------------
void sub_C503A0_eac503a0(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C508);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}



// [Deduplicated: canonical definition in Actors module] (ActorGameConditionStolen::ActorGameConditionStolen(int, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameConditionStolen::Destroy_eac50450  (binary VA: 0xc50450)
// Original: ActorGameConditionStolen::~ActorGameConditionStolen
// ----------------------------------------------------------------------------
void ActorGameConditionStolen::Destroy_eac50450(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C508);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C504B0  (binary VA: 0xc504b0)
// Original: sub_C504B0
// ----------------------------------------------------------------------------
int sub_C504B0(int a1, grapher::ActorContext::Self *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  char *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int result;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[4];
  typedef int _g4_t_v32[4];
  typedef int _g4_t_v33[4];
  typedef int _g4_t_v34[3];
  typedef int _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v24)) > _g4_s1 ? (15u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v25)) > _g4_s2 ? (15u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v29)) > _g4_s5 ? (24u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (47u + sizeof(_g4_t_v30)) > _g4_s6 ? (47u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v31)) > _g4_s7 ? (48u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v32)) > _g4_s8 ? (64u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v33)) > _g4_s9 ? (80u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v34)) > _g4_s10 ? (96u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v35)) > _g4_s11 ? (108u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 15u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 15u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 47u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 108u);

  v28 = *(uint32_t **)(a1 + 60);
  v26 = (uint32_t *)(a1 + 60);
  if ( v28 != (uint32_t *)(a1 + 60) )
  {
    v24 = 0;
    v2 = *(uint32_t **)(a1 + 60);
    while ( 1 )
    {
      v3 = v2[2];
      v34[0] = 0;
      if ( v3 == 0 )
        goto LABEL_26;
      v34[0] = v3;
      sub_C5A550(v3 + 12, v34, 0);
      v4 = v34[0];
      if ( v34[0] == 0 )
        goto LABEL_26;
      v5 = *(uint32_t **)(a1 + 52);
      if ( v5 == (uint32_t *)(a1 + 52) )
        goto LABEL_24;
      while ( 1 )
      {
        v6 = v5[2];
        if ( v6 != 0 )
          break;
LABEL_10:
        v5 = (uint32_t *)*v5;
        if ( (uint32_t *)(a1 + 52) == v5 )
          goto LABEL_23;
      }
      v33[0] = v5[2];
      sub_C5A550(v6 + 12, v33, 0);
      if ( (uint8_t)sub_C170A0(v34[0]) == 0 || !sub_7394D0(v34[0], v33[0], 1) )
        break;
      if ( *(uint32_t *)(a1 + 68) != 0 )
      {
        v7 = (char *)G4_VCALL<int>(v5[2], 44);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), v7, (int)(uintptr_t)(&v30));
        v8 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
        *v8 = (uint32_t)(uintptr_t)(&off_205C408);
        v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
        grapher::HolderT_string_e830be::From(v8, v35);
        v9 = *(uint32_t *)(a1 + 68);
        v10 = *(uint32_t *)(v9 + 12);
        if ( v10 != 0 )
          *(uint8_t *)(v10 + 20) = 0;
        v22 = v9;
        v11 = G4_VCALL<int>(v8, 48);
        v12 = *(uint32_t *)(v22 + 4);
        *(uint32_t *)(v22 + 4) = v11;
        if ( v12 != 0 )
          G4_VCALL<void>(v12, 44);
        G4_VCALL<void>(v8, 44);
        g4_std::string::Destroy(v35);
        grapher::ActorContext::SaveAVar(a2, *(grapher::ActorVariable::Self **)(a1 + 68));
      }
      if ( v33[0] != 0 )
        sub_5459F0((int)(uintptr_t)(v33), v33[0] + 16);
      v33[0] = 0;
      v24 = 1;
LABEL_23:
      v4 = v34[0];
      if ( v34[0] != 0 )
LABEL_24:
        sub_5459F0((int)(uintptr_t)(v34), v4 + 16);
      v34[0] = 0;
LABEL_26:
      v2 = (uint32_t *)*v28;
      v13 = v26 == (uint32_t *)*v28;
      v28 = (uint32_t *)*v28;
      if ( v13 )
      {
        if ( v24 == 0 )
          goto LABEL_28;
        result = *(uint32_t *)(a1 + 72);
        if ( (result & 4) == 0 )
        {
          grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)a1, 2, a2);
          result = *(uint32_t *)(a1 + 72) | 4;
          *(uint32_t *)(a1 + 72) = result;
        }
LABEL_31:
        if ( (result & 8) != 0 )
          goto LABEL_55;
        return result;
      }
    }
    if ( v33[0] != 0 )
      sub_5459F0((int)(uintptr_t)(v33), v33[0] + 16);
    v33[0] = 0;
    goto LABEL_10;
  }
LABEL_28:
  result = *(uint32_t *)(a1 + 72);
  v15 = result & 4;
  if ( v15 != 4 )
  {
    if ( (result & 8) == 0 )
    {
LABEL_30:
      grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)a1, 3, a2);
      result = *(uint32_t *)(a1 + 72) | 8;
      *(uint32_t *)(a1 + 72) = result;
      goto LABEL_31;
    }
LABEL_57:
    if ( v15 == 4 )
      return G4_VCALL<int>(a1, 28, a2);
    return result;
  }
  v29 = *(uint32_t **)(a1 + 60);
  if ( v26 == v29 )
    goto LABEL_31;
  v25 = 0;
  v16 = *(uint32_t **)(a1 + 60);
  do
  {
    v17 = v16[2];
    v32[0] = 0;
    if ( v17 == 0 )
      goto LABEL_52;
    v32[0] = v17;
    sub_C5A550(v17 + 12, v32, 0);
    v18 = v32[0];
    if ( v32[0] == 0 )
      goto LABEL_52;
    v19 = *(uint32_t **)(a1 + 52);
    if ( v19 == (uint32_t *)(a1 + 52) )
      goto LABEL_50;
    while ( 1 )
    {
      v20 = v19[2];
      if ( v20 != 0 )
        break;
LABEL_42:
      v19 = (uint32_t *)*v19;
      if ( (uint32_t *)(a1 + 52) == v19 )
        goto LABEL_49;
    }
    v31[0] = v19[2];
    sub_C5A550(v20 + 12, v31, 0);
    if ( (uint8_t)sub_C170A0(v32[0]) == 0 || sub_7394D0(v32[0], v31[0], 0) )
    {
      if ( v31[0] != 0 )
        sub_5459F0((int)(uintptr_t)(v31), v31[0] + 16);
      v31[0] = 0;
      goto LABEL_42;
    }
    if ( v31[0] != 0 )
      sub_5459F0((int)(uintptr_t)(v31), v31[0] + 16);
    v31[0] = 0;
    v25 = 1;
LABEL_49:
    v18 = v32[0];
    if ( v32[0] != 0 )
LABEL_50:
      sub_5459F0((int)(uintptr_t)(v32), v18 + 16);
    v32[0] = 0;
LABEL_52:
    v16 = (uint32_t *)*v29;
    v13 = v26 == (uint32_t *)*v29;
    v29 = (uint32_t *)*v29;
  }
  while ( !v13 );
  if ( v25 != 0 )
  {
    result = a1;
    v21 = *(uint32_t *)(a1 + 72);
    if ( (v21 & 8) == 0 )
      goto LABEL_30;
LABEL_56:
    v15 = v21 & 4;
    goto LABEL_57;
  }
  result = *(uint32_t *)(a1 + 72);
  if ( (result & 8) != 0 )
  {
LABEL_55:
    LOBYTE(v21) = result;
    goto LABEL_56;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C50950  (binary VA: 0xc50950)
// Original: sub_C50950
// ----------------------------------------------------------------------------
int * sub_C50950(int a1, grapher::ActorContext::Self *a2)
{
  int *result;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  result = (int *)(&dword_20D5690);
  if ( dword_20D5690 == 0 )
    return (int *)sub_C504B0(a1, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C50A20_eac50a20  (binary VA: 0xc50a20)
// Original: sub_C50A20
// ----------------------------------------------------------------------------
int sub_C50A20_eac50a20(int a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  result = dword_20D5690;
  if ( dword_20D5690 == 0 )
    return sub_C504B0(a1, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionInRange::Destroy_eac50af0  (binary VA: 0xc50af0)
// Original: ActorGameConditionInRange::~ActorGameConditionInRange
// ----------------------------------------------------------------------------
void ActorGameConditionInRange::Destroy_eac50af0(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C3C8);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
}



// [Deduplicated: canonical definition in Actors module] (ActorGameConditionInRange::ActorGameConditionInRange(int, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameConditionAnimEnded::Destroy  (binary VA: 0xc50bb0)
// Original: ActorGameConditionAnimEnded::~ActorGameConditionAnimEnded
// ----------------------------------------------------------------------------
void ActorGameConditionAnimEnded::Destroy(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C348);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionAnimEnded::Construct_eac50c10  (binary VA: 0xc50c10)
// Original: ActorGameConditionAnimEnded::ActorGameConditionAnimEnded
// ----------------------------------------------------------------------------
int ActorGameConditionAnimEnded::Construct_eac50c10(int a1, unsigned int a2)
{
  bool v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  char v15;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v19)) > _g4_s2 ? (4u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v20)) > _g4_s3 ? (4u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v21)) > _g4_s4 ? (4u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v22)) > _g4_s5 ? (12u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v23)) > _g4_s6 ? (16u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C348);
  v2 = byte_20D6700 == 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = -1;
  *(uint8_t *)(a1 + 60) = 0;
  v23 = 0;
  v3 = a1 + 52;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v4 = (uint32_t *)dword_20D672C;
  v5 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C != 0 )
  {
    do
    {
      while ( v3 <= v4[4] )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_7;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_7:
    if ( v5 != (uint32_t *)&unk_20D6728 && v3 < v5[4] )
      v5 = (uint32_t *)(&unk_20D6728);
  }
  v17 = v5;
  v6 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
  *v6 = (uint32_t)(uintptr_t)(&off_206CC00);
  v7 = v23;
  v2 = v23 == 0;
  v6[1] = 0;
  v8 = v17;
  if ( !v2 )
  {
    v6[1] = v7;
    v18 = v6;
    sub_C5A550(v7 + 12, v6 + 1, 0);
    v6 = v18;
    v8 = v17;
  }
  if ( v8 != (uint32_t *)&unk_20D6728 )
  {
    v9 = v8[5];
    if ( v9 != 0 )
    {
      v19 = v6;
      G4_VCALL<void>(v9, 4);
      v6 = v19;
    }
  }
  v10 = (uint32_t *)dword_20D672C;
  v11 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_35;
  do
  {
    while ( v3 <= v10[4] )
    {
      v11 = v10;
      v10 = (uint32_t *)v10[2];
      if ( v10 == nullptr )
        goto LABEL_20;
    }
    v10 = (uint32_t *)v10[3];
  }
  while ( v10 != nullptr );
LABEL_20:
  if ( v11 == (uint32_t *)&unk_20D6728 || v3 < v11[4] )
  {
LABEL_35:
    v21 = v6;
    v24[0] = a1 + 52;
    v24[1] = 0;
    sub_C4E4B0(v11, v24);
    v11 = v22;
    v6 = v21;
  }
  v11[5] = (uint32_t)(uintptr_t)(v6);
  v12 = 0;
  v13 = *(uint32_t *)(a1 + 52);
  if ( v23 != 0 )
    v12 = v23 + 12;
  if ( v13 != 0 )
  {
    v20 = v12;
    sub_5459F0(a1 + 52, v13 + 16);
    v12 = v20;
  }
  if ( v12 != 0 )
  {
    v14 = 0;
    *(uint32_t *)(a1 + 52) = v12 - 12;
    if ( v12 != 12 )
      v14 = v12;
    sub_C5A550(v14, a1 + 52, 0);
  }
  else
  {
    *(uint32_t *)(a1 + 52) = 0;
  }
  if ( v23 != 0 )
    sub_5459F0(&v23, v23 + 16);
  v15 = *(uint8_t *)(a1 + 60);
  v23 = 0;
  sub_C5A390(a1 + 60, v15);
  return sub_84BB20(a1 + 56, *(uint32_t *)(a1 + 56));
}

// ----------------------------------------------------------------------------
// Function: sub_C50ED0  (binary VA: 0xc50ed0)
// Original: sub_C50ED0
// ----------------------------------------------------------------------------
void sub_C50ED0(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C348);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C50F30  (binary VA: 0xc50f30)
// Original: sub_C50F30
// ----------------------------------------------------------------------------
int sub_C50F30(uint32_t *a1, char *a2)
{
  uint32_t *v2;
  char *v3;
  char *v4;
  char *v5;
  int v6;
  int v7;
  char *v8;
  grapher::ActorBase::Self *v9;
  void *v10;
  char *v11;
  char *v12;
  grapher::ActorBase::Self *v13;
  int v14;
  uint32_t *v15;
  g4_cxa_guard_t *v16;
  grapher::ActorVariable::Self *v17;
  grapher::HolderT<float> *v18;
  int v19;
  int v20;
  int v21;
  int result;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  bool v30;
  int v31;
  int v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_obj;
  typedef const char *_g4_t_v37;
  typedef grapher::ActorContext::Self *_g4_t_v38;
  typedef grapher::ActorContext::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef grapher::ActorBase::Self *_g4_t_v41;
  typedef grapher::ActorBase::Self *_g4_t_v42;
  typedef g4_cxa_guard_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef void *_g4_t_v45[4];
  typedef void *_g4_t_v46;
  typedef void *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v35)) > _g4_s2 ? (12u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_obj)) > _g4_s3 ? (16u + sizeof(_g4_t_obj)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v37)) > _g4_s4 ? (20u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v38)) > _g4_s5 ? (24u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v39)) > _g4_s6 ? (24u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v40)) > _g4_s7 ? (28u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v41)) > _g4_s8 ? (32u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v42)) > _g4_s9 ? (32u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v43)) > _g4_s10 ? (36u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v44)) > _g4_s11 ? (40u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v45)) > _g4_s12 ? (44u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v46)) > _g4_s13 ? (60u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v47)) > _g4_s14 ? (64u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v48)) > _g4_s15 ? (68u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v49)) > _g4_s16 ? (72u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v50)) > _g4_s17 ? (76u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v51)) > _g4_s18 ? (84u + sizeof(_g4_t_v51)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);

  v51 = (uint32_t *)(&a1);
  v41 = (grapher::ActorBase::Self *)a1;
  v2 = a1 + 13;
  v3 = a2 + 8;
  v38 = (grapher::ActorContext::Self *)a2;
  v45[0] = a1 + 13;
  v4 = *((char **)a2 + 3);
  if ( v4 == nullptr )
    goto LABEL_70;
  v5 = a2 + 8;
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= *((uint32_t *)v4 + 4) )
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
  if ( v3 == v5 || (unsigned int)(uintptr_t)(v2) < *((uint32_t *)v5 + 4) )
  {
LABEL_70:
    if ( byte_20D6700 == 0 )
    {
      v43 = (g4_cxa_guard_t *)&byte_20D6700;
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        obj = (char *)&unk_20D6720;
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v24 = (uint32_t *)dword_20D672C;
    v25 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v2) <= v24[4] )
        {
          v25 = v24;
          v24 = (uint32_t *)v24[2];
        }
        else
        {
          v24 = (uint32_t *)v24[3];
        }
      }
      while ( v24 != nullptr );
      if ( v25 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v2) < v25[4] )
        v25 = (uint32_t *)(&unk_20D6728);
    }
    v26 = *(uint32_t *)(v25[5] + 4);
    v27 = v26 + 12;
    if ( v26 == 0 )
      v27 = 0;
    sub_5F7770(v2, v27);
    v28 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    v28[1] = 0;
    *v28 = (uint32_t)(uintptr_t)(&off_206CC00);
    v29 = *((uint32_t *)v41 + 13);
    v30 = v29 == 0;
    v31 = v29 + 12;
    v32 = 0;
    if ( !v30 )
      v32 = v31;
    sub_5F7770(v28 + 1, v32);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)v38 + 4), v45) = (uint32_t)(uintptr_t)(v28);
    v9 = v41;
  }
  else
  {
    v6 = *(uint32_t *)(*((uint32_t *)v5 + 5) + 4);
    if ( v6 != 0 )
      v4 = (char *)(v6 + 12);
    v7 = a1[13];
    if ( v7 != 0 )
    {
      obj = v4;
      sub_5459F0((int)(uintptr_t)(v2), v7 + 16);
      v4 = obj;
    }
    if ( v4 != nullptr )
    {
      *((uint32_t *)v41 + 13) = (uint32_t)(uintptr_t)(v4 - 12);
      v8 = nullptr;
      if ( v4 != (char *)(uintptr_t)(&byte_9[3]) )
        v8 = v4;
      sub_C5A550(v8, v2, 0);
      v9 = v41;
    }
    else
    {
      v9 = v41;
      *((uint32_t *)v41 + 13) = 0;
    }
  }
  v10 = (char *)v9 + 60;
  v45[0] = v10;
  v11 = *((char **)v38 + 3);
  if ( v11 == nullptr )
    goto LABEL_66;
  v12 = v3;
  do
  {
    while ( (unsigned int)(uintptr_t)(v10) <= *((uint32_t *)v11 + 4) )
    {
      v12 = v11;
      v11 = *((char **)v11 + 2);
      if ( v11 == nullptr )
        goto LABEL_21;
    }
    v11 = *((char **)v11 + 3);
  }
  while ( v11 != nullptr );
LABEL_21:
  if ( v3 == v12 || (unsigned int)(uintptr_t)(v10) < *((uint32_t *)v12 + 4) )
  {
LABEL_66:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      obj = (char *)&unk_20D6720;
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v46 = v10;
    g4_std::map_void_grapher_ActorContex_7fce1e::find(
      (std::map<void *,grapher::ActorContext::ICVar *> *)&v44,
      &dword_20D6724);
    *((uint8_t *)v41 + 60) = *(uint8_t *)(*(uint32_t *)(v44 + 20) + 4);
    v23 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v23 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v23 + 4) = *((uint8_t *)v41 + 60);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)v38 + 4), v45) = v23;
    v13 = v41;
  }
  else
  {
    *((uint8_t *)v41 + 60) = *(uint8_t *)(*((uint32_t *)v12 + 5) + 4);
    v13 = v41;
  }
  sub_84BD50(v38, (uint32_t *)v13 + 14);
  v14 = *((uint32_t *)v41 + 13);
  if ( v14 == 0 )
    goto LABEL_41;
  *(float *)v45 = sub_9883B0(v14 + 460);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v47 = nullptr;
  v48 = 0;
  v49 = 0;
  grapher::ActorBase::GetVariables(v41, 3, (int)(uintptr_t)(&v47));
  v15 = (uint32_t *)(v47);
  v40 = (v48 - (int)(uintptr_t)(v47)) >> 2;
  if ( v40 != 0 )
  {
    v43 = nullptr;
    v16 = nullptr;
    v37 = "../../../../../lib/grapher/inc/grapher/Core/Any.h";
    do
    {
      v17 = (grapher::ActorVariable::Self *)v15[(uint32_t)(uintptr_t)(v16)];
      if ( v17 != nullptr )
      {
        v18 = (grapher::HolderT<float> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v18 = (uint32_t)(uintptr_t)(&off_205C4C8);
        grapher::HolderT_float_id_458ea9::From(v18, (const float *)v45);
        v19 = *((uint32_t *)v17 + 3);
        if ( v19 != 0 )
          *(uint8_t *)(v19 + 20) = 0;
        v20 = G4_VCALL<int>(v18, 48);
        v21 = *((uint32_t *)v17 + 1);
        *((uint32_t *)v17 + 1) = v20;
        if ( v21 != 0 )
          G4_VCALL<void>(v21, 44);
        G4_VCALL<void>(v18, 44);
        grapher::ActorContext::SaveAVar((grapher::ActorContext::Self *)&unk_20D6720, v17);
        v15 = (uint32_t *)(v47);
      }
      v43 = (g4_cxa_guard_t *)((char *)v43 + 1);
      v16 = v43;
    }
    while ( (g4_cxa_guard_t *)v40 != v43 );
  }
  if ( v15 != nullptr )
    opDelete(v15);
  if ( *((uint8_t *)v41 + 60) != 0 )
  {
    result = *((uint32_t *)v41 + 13);
    if ( *(uint8_t *)(result + 698) == 0 )
      return result;
LABEL_41:
    G4_VCALL<void>(v41, 28, v38, v33, v34, v35, obj, v37, v38, v40, v41, v43, v44, v45[0], v45[1], v45[2], v45[3], v46, v47, v48, v49, v50);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v42, 2, v39));
  }
  result = *((uint32_t *)v41 + 13);
  if ( *(uint8_t *)(result + 654) != 0 || *((uint32_t *)v41 + 14) != *(uint32_t *)(result + 660) )
    goto LABEL_41;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C514B0  (binary VA: 0xc514b0)
// Original: sub_C514B0
// ----------------------------------------------------------------------------
int sub_C514B0(uint32_t *a1, int a2, char *a3)
{
  return sub_C50F30(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C514C0_eac514c0  (binary VA: 0xc514c0)
// Original: sub_C514C0
// ----------------------------------------------------------------------------
void sub_C514C0_eac514c0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  unsigned int v4;
  char *v5;
  char *v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  grapher::ActorVariable::Self *Variable;
  uint32_t *v12;
  int v13;
  char *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  char *v19;
  int v20;
  int v21;
  char *v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef char _g4_t_v35;
  typedef uint32_t *_g4_t_i;
  typedef uint32_t _g4_t_v37[3];
  typedef char *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41[2];
  typedef uint32_t _g4_t_v42[5];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v30)) > _g4_s7 ? (36u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v31)) > _g4_s8 ? (40u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v32)) > _g4_s9 ? (44u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v33)) > _g4_s10 ? (44u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v34)) > _g4_s11 ? (44u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (55u + sizeof(_g4_t_v35)) > _g4_s12 ? (55u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_i)) > _g4_s13 ? (56u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v37)) > _g4_s14 ? (64u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v38)) > _g4_s15 ? (76u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v39)) > _g4_s16 ? (80u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v40)) > _g4_s17 ? (84u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v41)) > _g4_s18 ? (96u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v42)) > _g4_s19 ? (104u + sizeof(_g4_t_v42)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 55u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);

  v42[0] = (uint32_t)(uintptr_t)(v42);
  v42[1] = (uint32_t)(uintptr_t)(v42);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v42), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (uint32_t *)v42[0];
  for ( i = (uint32_t *)v42[0]; i != v42; i = (uint32_t *)*i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = v3[2];
        if ( v4 != 0 )
          break;
LABEL_32:
        v3 = (uint32_t *)*v3;
        i = v3;
        if ( v3 == v42 )
          goto LABEL_33;
      }
      v35 = 0;
      if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v4 + 212))(v3[2]) != 0 )
        v35 = G4_VCALL<int>(v4, 208) ^ 1;
      v5 = *((char **)a1 + 15);
      v29 = (char *)a1 + 56;
      if ( v5 == nullptr )
        goto LABEL_60;
      v6 = (char *)a1 + 56;
      do
      {
        while ( v4 <= *((uint32_t *)v5 + 4) )
        {
          v6 = v5;
          v5 = *((char **)v5 + 2);
          if ( v5 == nullptr )
            goto LABEL_10;
        }
        v5 = *((char **)v5 + 3);
      }
      while ( v5 != nullptr );
LABEL_10:
      v29 = (char *)a1 + 56;
      v28 = (int)(uintptr_t)(v6);
      if ( (char *)a1 + 56 == v6 )
      {
LABEL_60:
        v18 = *((uint32_t *)a1 + 18);
        v39 = v4;
        LOBYTE(v40) = 0;
        v19 = (char *)a1 + 52;
        if ( v18 != 0 && (v20 = *((uint32_t *)a1 + 17), v4 > *(uint32_t *)(v20 + 16)) )
        {
          sub_C3F980((int *)&v38, (int)(uintptr_t)(v19), 0, v20, (int *)&v39);
          v6 = v38;
        }
        else
        {
          sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v19), (int *)&v39);
          v6 = (char *)v37[0];
        }
      }
      else if ( v4 < *((uint32_t *)v6 + 4) )
      {
        v7 = *((uint32_t *)a1 + 16) == (uint32_t)(uintptr_t)(v6);
        v39 = v4;
        LOBYTE(v40) = 0;
        if ( v7 )
        {
          sub_C3F980((int *)&v38, (int)(uintptr_t)(a1) + 52, (int)(uintptr_t)(v6), (int)(uintptr_t)(v6), (int *)&v39);
          v6 = v38;
        }
        else
        {
          v32 = (char *)a1 + 52;
          v8 = sub_1904940(v6);
          if ( v4 <= *(uint32_t *)(v8 + 16) )
          {
            sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v32), (int *)&v39);
            v6 = (char *)v37[0];
          }
          else if ( *(uint32_t *)(v8 + 12) != 0 )
          {
            v9 = opNew(0x18u);
            if ( v9 != -16 )
            {
              v10 = v40;
              *(uint32_t *)(v9 + 16) = v39;
              *(uint32_t *)(v9 + 20) = v10;
            }
            v33 = (char *)v9;
            sub_1904970(1, v9, v28, v29);
            ++*((uint32_t *)a1 + 18);
            v6 = v33;
          }
          else
          {
            sub_C3F980((int *)&v38, (int)(uintptr_t)(v32), 0, v8, (int *)&v39);
            v6 = v38;
          }
        }
      }
      v6[20] = v35;
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v23, v24, v25, v26, v27, v28, (int)(uintptr_t)(v29)) != 0 )
        break;
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
      v3 = (uint32_t *)*i;
      i = (uint32_t *)*i;
      if ( i == v42 )
        goto LABEL_33;
    }
    v12 = *((uint32_t **)a1 + 15);
    if ( v12 == nullptr )
      goto LABEL_50;
    v13 = v30;
    do
    {
      while ( v4 <= v12[4] )
      {
        v13 = (int)(uintptr_t)(v12);
        v12 = (uint32_t *)v12[2];
        if ( v12 == nullptr )
          goto LABEL_24;
      }
      v12 = (uint32_t *)v12[3];
    }
    while ( v12 != nullptr );
LABEL_24:
    if ( v30 == v13 )
    {
LABEL_50:
      v21 = *((uint32_t *)a1 + 18);
      v41[0] = v4;
      LOBYTE(v41[1]) = 0;
      v22 = (char *)a1 + 52;
      if ( v21 != 0 && v4 > *(uint32_t *)(*((uint32_t *)a1 + 17) + 16) )
      {
        sub_C3F980((int *)&v38, (int)(uintptr_t)(v22), 0, *((uint32_t *)a1 + 17), v41);
        v13 = (int)(uintptr_t)(v38);
      }
      else
      {
        sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v22), v41);
        v13 = v37[0];
      }
    }
    else
    {
      if ( v4 >= *(uint32_t *)(v13 + 16) )
        goto LABEL_30;
      v7 = *((uint32_t *)a1 + 16) == v13;
      v41[0] = v4;
      LOBYTE(v41[1]) = 0;
      v14 = (char *)a1 + 52;
      if ( v7 )
      {
LABEL_29:
        sub_C3F980((int *)&v38, (int)(uintptr_t)(v14), v13, v13, v41);
        v13 = (int)(uintptr_t)(v38);
        goto LABEL_30;
      }
      v31 = v13;
      v34 = (char *)a1 + 52;
      v15 = sub_1904940(v13);
      v13 = v31;
      v14 = (char *)a1 + 52;
      if ( v4 <= *(uint32_t *)(v15 + 16) )
      {
        sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v34), v41);
        v13 = v37[0];
      }
      else
      {
        if ( *(uint32_t *)(v15 + 12) != 0 )
          goto LABEL_29;
        sub_C3F980((int *)&v38, (int)(uintptr_t)(v34), 0, v15, v41);
        v13 = (int)(uintptr_t)(v38);
      }
    }
LABEL_30:
    if ( *(uint8_t *)(v13 + 20) == 0 )
    {
      grapher::ActorBase::FireEvent(a1, 3, a3);
      v3 = i;
      goto LABEL_32;
    }
    grapher::ActorBase::FireEvent(a1, 2, a3);
    v3 = (uint32_t *)*i;
  }
LABEL_33:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v16 = (uint32_t *)v42[0];
  if ( (uint32_t *)v42[0] != v42 )
  {
    while ( 1 )
    {
      v17 = (uint32_t *)*v16;
      opDelete(v16);
      if ( v17 == v42 )
        break;
      v16 = v17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C519A0  (binary VA: 0xc519a0)
// Original: sub_C519A0
// ----------------------------------------------------------------------------
int sub_C519A0(int a1, int a2, char *a3)
{
  void *v3;
  char *v4;
  char *v5;
  int v6;
  int v7;
  char *v8;
  grapher::ActorBase::Self *v9;
  void *v10;
  char *v11;
  char *v12;
  int v13;
  grapher::ActorBase::Self *v14;
  char *v15;
  int *v16;
  char *v17;
  int v18;
  char *v19;
  grapher::ActorBase::Self *v20;
  grapher::ActorVariable::Self *Variable;
  char v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v26;
  bool v27;
  char *v28;
  char *v29;
  int v30;
  char *v31;
  uint32_t *v32;
  uint32_t *v33;
  grapher::ActorBase::Self *v34;
  int v35;
  int v36;
  uint32_t *v37;
  uint32_t *v38;
  grapher::ActorVariable::Self *v39;
  uint32_t *v41;
  int v42;
  uint32_t *v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  uint32_t *v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  int v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef void *_g4_t_obj;
  typedef char *_g4_t_obja;
  typedef char *_g4_t_objb;
  typedef char *_g4_t_objc;
  typedef uint32_t *_g4_t_v61;
  typedef g4_cxa_guard_t *_g4_t_v62;
  typedef g4_cxa_guard_t *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef grapher::ActorContext::Self *_g4_t_v66;
  typedef grapher::ActorContext::Self *_g4_t_v67;
  typedef grapher::ActorBase::Self *_g4_t_v68;
  typedef grapher::ActorBase::Self *_g4_t_v69;
  typedef uint32_t _g4_t_v70[4];
  typedef void *_g4_t_v71;
  typedef void *_g4_t_v72[6];
  typedef int *_g4_t_v73;
  typedef void *_g4_t_v74;
  typedef int _g4_t_v75;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v54)) > _g4_s0 ? (4u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v56)) > _g4_s2 ? (12u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_obj)) > _g4_s3 ? (16u + sizeof(_g4_t_obj)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_obja)) > _g4_s4 ? (16u + sizeof(_g4_t_obja)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_objb)) > _g4_s5 ? (16u + sizeof(_g4_t_objb)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_objc)) > _g4_s6 ? (16u + sizeof(_g4_t_objc)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v61)) > _g4_s7 ? (20u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v62)) > _g4_s8 ? (24u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v63)) > _g4_s9 ? (24u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v64)) > _g4_s10 ? (28u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v65)) > _g4_s11 ? (28u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v66)) > _g4_s12 ? (32u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v67)) > _g4_s13 ? (32u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v68)) > _g4_s14 ? (36u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v69)) > _g4_s15 ? (36u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v70)) > _g4_s16 ? (40u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v71)) > _g4_s17 ? (56u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v72)) > _g4_s18 ? (60u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v73)) > _g4_s19 ? (84u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v74)) > _g4_s20 ? (88u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v75)) > _g4_s21 ? (92u + sizeof(_g4_t_v75)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 16u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 16u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 16u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 88u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);

  v73 = &a1;
  v66 = (grapher::ActorContext::Self *)a3;
  v64 = a3 + 8;
  v3 = (void *)(a1 + 52);
  v68 = (grapher::ActorBase::Self *)a1;
  v72[0] = (void *)(a1 + 52);
  v4 = *((char **)a3 + 3);
  if ( v4 == nullptr )
    goto LABEL_102;
  v5 = a3 + 8;
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
  if ( v64 == v5 || (unsigned int)(uintptr_t)(v3) < *((uint32_t *)v5 + 4) )
  {
LABEL_102:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v47 = (uint32_t *)dword_20D672C;
    v48 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v3) <= v47[4] )
        {
          v48 = v47;
          v47 = (uint32_t *)v47[2];
        }
        else
        {
          v47 = (uint32_t *)v47[3];
        }
      }
      while ( v47 != nullptr );
      if ( v48 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v3) < v48[4] )
        v48 = (uint32_t *)(&unk_20D6728);
    }
    v49 = *(uint32_t *)(v48[5] + 4);
    obj = nullptr;
    v50 = v49 + 12;
    if ( v49 == 0 )
      v50 = 0;
    sub_5F7770(v3, v50);
    v51 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    v51[1] = 0;
    *v51 = (uint32_t)(uintptr_t)(&off_206CC00);
    v61 = v51 + 1;
    v52 = *((uint32_t *)v68 + 13);
    v27 = v52 == 0;
    v53 = v52 + 12;
    if ( v27 )
      v53 = 0;
    sub_5F7770(v61, v53);
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v66 + 4),
                 v72) = (uint32_t)(uintptr_t)(v51);
    v9 = v68;
  }
  else
  {
    v6 = *(uint32_t *)(*((uint32_t *)v5 + 5) + 4);
    if ( v6 != 0 )
      v4 = (char *)(v6 + 12);
    v7 = *(uint32_t *)(a1 + 52);
    if ( v7 != 0 )
      sub_5459F0(v3, v7 + 16);
    if ( v4 != nullptr )
    {
      v8 = nullptr;
      if ( v4 != (char *)(uintptr_t)(&byte_9[3]) )
        v8 = v4;
      *((uint32_t *)v68 + 13) = (uint32_t)(uintptr_t)(v4 - 12);
      sub_C5A550(v8, v3, 0);
      v9 = v68;
    }
    else
    {
      v9 = v68;
      *((uint32_t *)v68 + 13) = 0;
    }
  }
  v10 = (char *)v9 + 60;
  v72[0] = v10;
  v11 = *((char **)v66 + 3);
  if ( v11 == nullptr )
    goto LABEL_104;
  v12 = v64;
  do
  {
    while ( (unsigned int)(uintptr_t)(v10) <= *((uint32_t *)v11 + 4) )
    {
      v12 = v11;
      v11 = *((char **)v11 + 2);
      if ( v11 == nullptr )
        goto LABEL_21;
    }
    v11 = *((char **)v11 + 3);
  }
  while ( v11 != nullptr );
LABEL_21:
  if ( v64 == v12 || (unsigned int)(uintptr_t)(v10) < *((uint32_t *)v12 + 4) )
  {
LABEL_104:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v71 = v10;
    g4_std::map_void_grapher_ActorContex_7fce1e::find(
      (std::map<void *,grapher::ActorContext::ICVar *> *)v70,
      &dword_20D6724);
    *((uint8_t *)v68 + 60) = *(uint8_t *)(*(uint32_t *)(v70[0] + 20) + 4);
    v46 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v46 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v46 + 4) = *((uint8_t *)v68 + 60);
    obj = (void *)v46;
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v66 + 4),
                 v72) = v46;
    v14 = v68;
  }
  else
  {
    v13 = *((uint32_t *)v12 + 5);
    v14 = v68;
    *((uint8_t *)v68 + 60) = *(uint8_t *)(v13 + 4);
  }
  v62 = (g4_cxa_guard_t *)((char *)v14 + 56);
  sub_84BD50(v66, (char *)v14 + 56);
  G4_VCALL<void>(v68, 28, v66, v54, v55, v56, obj, v61, v62, v64, v66, v68, v70[0], v70[1], v70[2], v70[3], v71, v72[0], v72[1], v72[2], v72[3], v72[4], v72[5]);
  v15 = (char *)sub_857260(v69, 0, v67);
  if ( v15 != nullptr )
  {
    obja = v15;
    v16 = (int *)G4_VCALL<int>(v15, 16);
    if ( v16 != nullptr )
    {
      if ( v16 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_87:
        v17 = obja + 12;
        goto LABEL_31;
      }
      while ( 1 )
      {
        v16 = (int *)v16[1];
        if ( v16 == nullptr )
          break;
        if ( v16 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_87;
      }
    }
  }
  v17 = nullptr;
LABEL_31:
  v18 = *((uint32_t *)v69 + 13);
  if ( v18 != 0 )
  {
    objb = v17;
    sub_5459F0(v3, v18 + 16);
    v17 = objb;
  }
  if ( v17 != nullptr )
  {
    *((uint32_t *)v69 + 13) = (uint32_t)(uintptr_t)(v17 - 12);
    v19 = nullptr;
    v75 = 0;
    v74 = v3;
    if ( v17 != (char *)(uintptr_t)(&byte_9[3]) )
      v19 = v17;
    sub_C5A550(v19, v74, v75);
    v20 = v69;
  }
  else
  {
    v20 = v69;
    *((uint32_t *)v69 + 13) = 0;
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v20, 2);
  v22 = sub_837730(v69, Variable, v67);
  v72[0] = v3;
  *((uint8_t *)v69 + 60) = v22;
  v23 = *((uint32_t **)v67 + 3);
  if ( v23 == nullptr )
    goto LABEL_75;
  v24 = v65;
  do
  {
    while ( (unsigned int)(uintptr_t)(v3) <= v23[4] )
    {
      v24 = v23;
      v23 = (uint32_t *)v23[2];
      if ( v23 == nullptr )
        goto LABEL_42;
    }
    v23 = (uint32_t *)v23[3];
  }
  while ( v23 != nullptr );
LABEL_42:
  if ( v24 == v65 || (unsigned int)(uintptr_t)(v3) < v24[4] )
  {
LABEL_75:
    v43 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v43 = (uint32_t)(uintptr_t)(&off_206CC00);
    v43[1] = 0;
    v44 = *((uint32_t *)v69 + 13);
    v73 = (int *)(v43 + 1);
    v45 = 0;
    if ( v44 != 0 )
      v45 = v44 + 12;
    sub_5F7770(v73, v45);
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v67 + 4),
                 v72) = (uint32_t)(uintptr_t)(v43);
  }
  else
  {
    v25 = v24[5];
    v26 = *((uint32_t *)v69 + 13);
    v27 = v26 == 0;
    v28 = (char *)(v26 + 12);
    v29 = (char *)v23;
    v30 = *(uint32_t *)(v25 + 4);
    if ( !v27 )
      v29 = v28;
    if ( v30 != 0 )
    {
      objc = v29;
      sub_5459F0(v25 + 4, v30 + 16);
      v29 = objc;
    }
    if ( v29 != nullptr )
    {
      v31 = nullptr;
      *(uint32_t *)(v25 + 4) = (uint32_t)(uintptr_t)(v29 - 12);
      v75 = 0;
      v74 = (void *)(v25 + 4);
      if ( v29 != (char *)(uintptr_t)(&byte_9[3]) )
        v31 = v29;
      sub_C5A550(v31, v74, v75);
    }
    else
    {
      *(uint32_t *)(v25 + 4) = 0;
    }
  }
  v72[0] = v10;
  v32 = *((uint32_t **)v67 + 3);
  if ( v32 == nullptr )
    goto LABEL_74;
  v33 = v65;
  do
  {
    while ( (unsigned int)(uintptr_t)(v10) <= v32[4] )
    {
      v33 = v32;
      v32 = (uint32_t *)v32[2];
      if ( v32 == nullptr )
        goto LABEL_57;
    }
    v32 = (uint32_t *)v32[3];
  }
  while ( v32 != nullptr );
LABEL_57:
  if ( v33 == v65 || (unsigned int)(uintptr_t)(v10) < v33[4] )
  {
LABEL_74:
    v42 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *(uint32_t *)v42 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v42 + 4) = *((uint8_t *)v69 + 60);
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v67 + 4),
                 v72) = v42;
    v34 = v69;
  }
  else
  {
    *(uint8_t *)(v33[5] + 4) = *((uint8_t *)v69 + 60);
    v34 = v69;
  }
  v35 = *((uint32_t *)v34 + 13);
  if ( v35 != 0 )
  {
    v36 = *(uint32_t *)(v35 + 660);
    *((uint32_t *)v34 + 14) = v36;
    v72[0] = v63;
    v37 = *((uint32_t **)v67 + 3);
    if ( v37 == nullptr )
      goto LABEL_73;
    v38 = v65;
    do
    {
      while ( (unsigned int)(uintptr_t)(v63) <= v37[4] )
      {
        v38 = v37;
        v37 = (uint32_t *)v37[2];
        if ( v37 == nullptr )
          goto LABEL_66;
      }
      v37 = (uint32_t *)v37[3];
    }
    while ( v37 != nullptr );
LABEL_66:
    if ( v38 == v65 || (unsigned int)(uintptr_t)(v63) < v38[4] )
    {
LABEL_73:
      v41 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
      *v41 = (uint32_t)(uintptr_t)(&off_205CD10);
      v41[1] = *((uint32_t *)v69 + 14);
      *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                   (grapher::ActorContext::Self *)((char *)v67 + 4),
                   v72) = (uint32_t)(uintptr_t)(v41);
    }
    else
    {
      *(uint32_t *)(v38[5] + 4) = v36;
    }
    v39 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v69, 1);
    if ( (uint8_t)sub_837730(v69, v39, v67) != 0 )
    {
      sub_C50F30(v69, v67);
      v34 = v69;
    }
    else
    {
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v69, v67);
      v34 = v69;
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v34, 1, v67));
}

// ----------------------------------------------------------------------------
// Function: sub_C52190  (binary VA: 0xc52190)
// Original: sub_C52190
// ----------------------------------------------------------------------------
int sub_C52190(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  void *v10;
  g4_cxa_guard_t *v11;
  int v12;
  int v13;

  G4_VCALL<void>(a1, 28, a3);
  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    *((uint8_t *)a1 + 64) = sub_837730((int)(uintptr_t)(a1), Variable, a3, v7, v8, v9, (int)(uintptr_t)(v10), (int)(uintptr_t)(v11), v12, v13);
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(a3);
    sub_1901920(v5, (char *)a1 + 56);
    if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
    {
      sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
      __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D54A8 == 0 )
      v6 = (int *)(&dword_20D54A0);
    sub_A6C280((int)(uintptr_t)(v6), 20, (int)(uintptr_t)(a1) + 52);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C522E0  (binary VA: 0xc522e0)
// Original: sub_C522E0
// ----------------------------------------------------------------------------
void sub_C522E0(grapher::ActorBase::Self *a1, int a2)
{
  grapher::ActorContext::Self **v2;
  grapher::ActorContext::Self *v3;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v5;
  grapher::ActorContext::Self *v6;
  int v7;
  int v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef grapher::ActorBase::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef grapher::ActorContext::Self *_g4_t_v29;
  typedef grapher::ActorContext::Self *_g4_t_v30;
  typedef grapher::ActorContext::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef void *_g4_t_v33;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v17)) > _g4_s7 ? (24u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v18)) > _g4_s8 ? (24u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v19)) > _g4_s9 ? (28u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v20)) > _g4_s10 ? (28u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v21)) > _g4_s11 ? (32u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v22)) > _g4_s12 ? (32u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v23)) > _g4_s13 ? (36u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v24)) > _g4_s14 ? (36u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v25)) > _g4_s15 ? (36u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v26)) > _g4_s16 ? (36u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v27)) > _g4_s17 ? (36u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v28)) > _g4_s18 ? (40u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v29)) > _g4_s19 ? (40u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v30)) > _g4_s20 ? (44u + sizeof(_g4_t_v30)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v31)) > _g4_s21 ? (44u + sizeof(_g4_t_v31)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v32)) > _g4_s22 ? (52u + sizeof(_g4_t_v32)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v33)) > _g4_s23 ? (76u + sizeof(_g4_t_v33)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);

  v2 = *((grapher::ActorContext::Self ***)a1 + 14);
  if ( v2 != (grapher::ActorContext::Self **)((char *)a1 + 56) )
  {
    v30 = (grapher::ActorContext::Self *)((grapher::ActorBase::Self *)((char *)a1 + 64));
    while ( 1 )
    {
      v3 = v2[2];
      v16 = (int)(uintptr_t)(*v2);
      sub_84BD50(v3, v30);
      v23 = *(uint32_t *)(a2 + 8);
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
      v29 = sub_837200((int)(uintptr_t)(a1), Variable, v3, v10, v12, v14, v16, v19, v21, v23, v28, v30);
      v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      v6 = sub_837200((int)(uintptr_t)(a1), v5, v3, v11, v13, v15, v17, v20, v22, v24, (int)(uintptr_t)(v29), v31);
      if ( ((int)(uintptr_t)(v6) < 0 || *((uint32_t *)a1 + 16) < (int)(uintptr_t)(v6)) && v25 == v28 )
      {
        v21 = (int)(uintptr_t)(v6);
        grapher::ActorBase::FireEvent(a1, 2, v2[2]);
        v7 = *((uint32_t *)a1 + 16) + 1;
        v33 = v30;
        *((uint32_t *)a1 + 16) = v7;
        v32 = v7;
        v8 = v21;
        if ( *((uint32_t *)v3 + 3) == 0 )
          goto LABEL_20;
        v28 = (int)(uintptr_t)(v3) + 8;
        v26 = (uint32_t *)((char *)v3 + 8);
        v9 = *((uint32_t **)v3 + 3);
        do
        {
          while ( (unsigned int)(uintptr_t)(v30) <= v9[4] )
          {
            v26 = v9;
            v9 = (uint32_t *)v9[2];
            if ( v9 == nullptr )
              goto LABEL_14;
          }
          v9 = (uint32_t *)v9[3];
        }
        while ( v9 != nullptr );
LABEL_14:
        if ( (uint32_t *)v28 == v26 || (unsigned int)(uintptr_t)(v30) < v26[4] )
        {
LABEL_20:
          v27 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
          *v27 = (uint32_t)(uintptr_t)(&off_205CD10);
          v27[1] = *((uint32_t *)a1 + 16);
          *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)v3 + 4), &v33) = (uint32_t)(uintptr_t)(v27);
          v8 = v21;
        }
        else
        {
          *(uint32_t *)(v26[5] + 4) = v32;
        }
        if ( v8 > 0 && *((uint32_t *)a1 + 16) >= v8 )
        {
          grapher::ActorBase::FireEvent(a1, 3, v2[2]);
          G4_VCALL<void>(a1, 28, v2[2]);
        }
      }
      if ( (grapher::ActorBase::Self *)((char *)a1 + 56) == v18 )
        break;
      v2 = (grapher::ActorContext::Self **)v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C524F0_eac524f0  (binary VA: 0xc524f0)
// Original: sub_C524F0
// ----------------------------------------------------------------------------
int sub_C524F0_eac524f0(int a1, int a2)
{
  return ((sub_C52500((grapher::ActorBase::Self *)(a1 - 52), a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C52500  (binary VA: 0xc52500)
// Original: sub_C52500
// ----------------------------------------------------------------------------
void sub_C52500(grapher::ActorBase::Self *a1, int a2)
{
  if ( a2 != 0 && G4_VCALL<int>(a2, 8) == 27 )
    sub_C522E0(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C52560  (binary VA: 0xc52560)
// Original: sub_C52560
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * sub_C52560(uint32_t *a1, void *a2, void *a3, int a4)
{
  grapher::ActorContext::Self *result;
  uint32_t *v5;
  uint32_t *v6;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  bool v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  char *v13;
  uint32_t *v14;
  typedef grapher::ActorContext::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef grapher::ActorContext::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef grapher::ActorContext::Self *_g4_t_v32;
  typedef grapher::ActorContext::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef void *_g4_t_v35;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v21)) > _g4_s6 ? (20u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v22)) > _g4_s7 ? (24u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v23)) > _g4_s8 ? (24u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v24)) > _g4_s9 ? (28u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v25)) > _g4_s10 ? (28u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v26)) > _g4_s11 ? (32u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v27)) > _g4_s12 ? (32u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v28)) > _g4_s13 ? (36u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v29)) > _g4_s14 ? (36u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v30)) > _g4_s15 ? (40u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v31)) > _g4_s16 ? (40u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v32)) > _g4_s17 ? (44u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v33)) > _g4_s18 ? (44u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (55u + sizeof(_g4_t_v34)) > _g4_s19 ? (55u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v35)) > _g4_s20 ? (60u + sizeof(_g4_t_v35)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 55u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);

  result = (grapher::ActorContext::Self *)(a1 + 14);
  v5 = (uint32_t *)a1[14];
  v30 = (int)(uintptr_t)(a1 + 14);
  if ( v5 != a1 + 14 )
  {
    v28 = a1 + 16;
    v32 = (grapher::ActorContext::Self *)"../../../../../lib/grapher/inc/grapher/Core/ActorContext.h";
    do
    {
      while ( 1 )
      {
        v6 = (uint32_t *)v5[2];
        sub_84BD50(v6, v28);
        LOBYTE(v24) = (uint8_t)(uintptr_t)(sub_8571D0)((grapher::ActorBase::Self *)a1, 1, a2, (int)(uintptr_t)(v6));
        LOBYTE(v26) = (uint8_t)(uintptr_t)(sub_8571D0)((grapher::ActorBase::Self *)a1, 0, a3, (int)(uintptr_t)(v6));
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)a1, 2);
        v23 = sub_837200(
                (int)(uintptr_t)(a1),
                Variable,
                (grapher::ActorContext::Self *)v6,
                v16,
                v18,
                v20,
                v22,
                v24,
                v26,
                (int)(uintptr_t)(v28),
                v30,
                v32);
        v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)a1, 3);
        result = sub_837200((int)(uintptr_t)(a1), v8, (grapher::ActorContext::Self *)v6, v17, v19, v21, (int)(uintptr_t)(v23), v25, v27, v29, v31, v33);
        v9 = true;
        if ( v22 != 0 )
          v9 = (v22 & a4) != 0;
        if ( ((int)(uintptr_t)(result) < 0 || a1[16] < (int)(uintptr_t)(result)) && (uint8_t)v24 != 0 && (uint8_t)v26 != 0 )
          break;
LABEL_20:
        v5 = (uint32_t *)*v5;
        if ( (uint32_t *)v30 == v5 )
          return result;
      }
      v15 = (grapher::ActorContext::Self *)v5[2];
      if ( v9 )
      {
        grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)a1, 2, v15);
        v10 = a1[16] + 1;
        a1[16] = v10;
        v24 = v10;
        v35 = v28;
        v11 = (uint32_t *)v6[3];
        if ( v11 == nullptr )
          goto LABEL_24;
        v26 = (int)(uintptr_t)(v6);
        v12 = v6 + 2;
        do
        {
          while ( (unsigned int)(uintptr_t)(v28) <= v11[4] )
          {
            v12 = v11;
            v11 = (uint32_t *)v11[2];
            if ( v11 == nullptr )
              goto LABEL_15;
          }
          v11 = (uint32_t *)v11[3];
        }
        while ( v11 != nullptr );
LABEL_15:
        if ( v6 + 2 == v12 || (unsigned int)(uintptr_t)(v28) < v12[4] )
        {
LABEL_24:
          v14 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)(v32), 193);
          *v14 = (uint32_t)(uintptr_t)(&off_205CD10);
          v14[1] = a1[16];
          v22 = (int)(uintptr_t)(v14);
          *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
             (std::map<void *,grapher::ActorContext::ICVar *> *)(v6 + 1),
             &v35) = (uint32_t)(uintptr_t)(v14);
        }
        else
        {
          *(uint32_t *)(v12[5] + 4) = v24;
        }
        result = (grapher::ActorContext::Self *)a2;
        if ( a2 != nullptr )
        {
          v13 = (char *)G4_VCALL<int>(a2, 44);
          v22 = (int)(uintptr_t)(&v34) + 1;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34) + 1, v13, (int)(uintptr_t)(&v34));
          sub_C4DBA0((grapher::ActorBase::Self *)a1, 4, (int)(uintptr_t)(&v34) + 1, (grapher::ActorContext::Self *)v6);
          result = (g4_std::string::Destroy((char *)&v34 + 1), (grapher::ActorContext::Self *)0);
        }
        goto LABEL_20;
      }
      result = (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)a1, 3, v15);
      v5 = (uint32_t *)*v5;
    }
    while ( (uint32_t *)v30 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C527E0_eac527e0  (binary VA: 0xc527e0)
// Original: sub_C527E0
// ----------------------------------------------------------------------------
int sub_C527E0_eac527e0(int a1, int a2)
{
  return ((sub_C527F0(a1 - 52, a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C527F0  (binary VA: 0xc527f0)
// Original: sub_C527F0
// ----------------------------------------------------------------------------
void sub_C527F0(uint32_t *a1, int a2)
{
  if ( a2 != 0 && G4_VCALL<int>(a2, 8) == 21 )
    sub_C52560(a1, *(void **)(a2 + 8), *(void **)(a2 + 12), *(uint32_t *)(a2 + 16));
}

// ----------------------------------------------------------------------------
// Function: sub_C52840_eac52840  (binary VA: 0xc52840)
// Original: sub_C52840
// ----------------------------------------------------------------------------
int sub_C52840_eac52840(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  int *v5;
  int *v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v12 = sub_857260(a2, 0, (int)(uintptr_t)(a4));
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
  sub_837200((int)(uintptr_t)(a2), Variable, a4, v8, v9, v10, (int)(uintptr_t)(v11), v12, v14, v15, v16, a1);
  if ( a3 != 0 )
  {
    if ( a3 == 1 && v13 != 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D49A8 == 0 )
        v7 = (int *)(&dword_20D49A0);
      sub_82B920((int)(uintptr_t)(v7), v13, 42);
    }
  }
  else if ( v13 != 0 )
  {
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D49A8 == 0 )
      v5 = (int *)(&dword_20D49A0);
    sub_82B8C0((int)(uintptr_t)(v5), v13, 42);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 2, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C52A00_eac52a00  (binary VA: 0xc52a00)
// Original: sub_C52A00
// ----------------------------------------------------------------------------
int sub_C52A00_eac52a00(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v13 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v5 = v4[123];
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v7 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v9, v10, v11, v12, (int)(uintptr_t)(v13), v14, v15, v16, a1);
  sub_8EA7D0(v5, (int)(uintptr_t)(v7));
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C52BD0_eac52b00  (binary VA: 0xc52b00)
// Original: sub_C52BD0
// ----------------------------------------------------------------------------
int sub_C52BD0_eac52b00(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  int *v6;
  int result;
  char v8; // di
  grapher::ActorVariable::Self *v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  int *v18;
  char v19;
  char v20;
  g4_cxa_guard_t *v21;
  g4_cxa_guard_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v11, v13, v15, (int)(uintptr_t)(v17), (int)(uintptr_t)(v21), v23, v25, v27, a1);
  if ( byte_20D4980 == 0 )
  {
    v22 = (g4_cxa_guard_t *)&byte_20D4980;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      v18 = (int *)(&dword_20D49A0);
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
  }
  v6 = nullptr;
  if ( byte_20D49A8 == 0 )
    v6 = (int *)(&dword_20D49A0);
  result = sub_82A4E0((int)(uintptr_t)(v6), (unsigned int)(uintptr_t)(v5));
  v8 = result;
  if ( *((uint8_t *)a2 + 56) != (uint8_t)result )
  {
    v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
    v10 = sub_837730((int)(uintptr_t)(a2), v9, nullptr, v12, v14, v16, (int)(uintptr_t)(v18), (int)(uintptr_t)(v22), v24, v26);
    if ( v8 != 0 )
    {
      v19 = v10;
      grapher::ActorBase::FireEvent(a2, 2, a4);
      result = *((uint32_t *)a2 + 13);
      if ( v19 != 0 )
        goto LABEL_7;
    }
    else
    {
      v20 = v10;
      grapher::ActorBase::FireEvent(a2, 3, a4);
      result = *((uint32_t *)a2 + 13);
      if ( v20 == 0 )
        goto LABEL_7;
    }
    *((uint32_t *)a2 + 13) = --result;
LABEL_7:
    *((uint8_t *)a2 + 56) = v8;
    if ( result == 0 )
      return G4_VCALL<int>(a2, 28, a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C52D50_eac52d50  (binary VA: 0xc52d50)
// Original: sub_C52D50
// ----------------------------------------------------------------------------
int sub_C52D50_eac52d50(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  bool v6;
  int v8;
  int v9;
  int v10;
  int v11;
  g4_cxa_guard_t *v12;
  int v13;
  int v14;
  int v15;

  *((uint8_t *)a2 + 56) = 0;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v8, v9, v10, v11, (int)(uintptr_t)(v12), v13, v14, v15, a1);
  v6 = byte_20D5B50 == 0;
  *((uint32_t *)a2 + 13) = (uint32_t)(uintptr_t)(v5);
  if ( v6 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C52E40_eac52e40  (binary VA: 0xc52e40)
// Original: sub_C52E40
// ----------------------------------------------------------------------------
int sub_C52E40_eac52e40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v4;
  bool v5;
  int *v6;
  grapher::ActorVariable::Self *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  int *v21;
  g4_cxa_guard_t *v22;
  g4_cxa_guard_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  grapher::ActorContext::Self *v29;

  if ( a2 == 0 )
    *((uint8_t *)a1 + 60) = 0;
  G4_VCALL<void>(a1, 28, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v14, v16, v18, (int)(uintptr_t)(v20), (int)(uintptr_t)(v22), v24, v26, v28, v29);
  v5 = byte_20D3BA0 == 0;
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v4);
  if ( v5 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    v21 = (int *)(&dword_20D3BC0);
    sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D3BC4 == 0 )
    v6 = (int *)(&dword_20D3BC0);
  *((uint32_t *)a1 + 14) = sub_971F30((int)(uintptr_t)(v6));
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v7, a3, v15, v17, v19, (int)(uintptr_t)(v21), (int)(uintptr_t)(v23), v25, v27) != 0 )
  {
    sub_C4F120(a1, a3);
  }
  else
  {
    if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
    {
      sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
      __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D3BC4 == 0 )
      v8 = (int *)(&dword_20D3BC0);
    v9 = sub_971F30((int)(uintptr_t)(v8));
    v10 = *((uint32_t *)a1 + 13);
    v11 = v9;
    if ( v9 == v10 )
    {
      if ( (*((uint8_t *)a1 + 60) & 0x10) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 4, a3);
        *((uint8_t *)a1 + 60) |= 0x10u;
      }
    }
    else
    {
      v12 = *((uint8_t *)a1 + 60);
      if ( (v12 & 0x20) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 5, a3);
        v10 = *((uint32_t *)a1 + 13);
        v12 = *((uint8_t *)a1 + 60) | 0x20;
        *((uint8_t *)a1 + 60) = v12;
      }
      if ( v11 > v10 )
      {
        if ( (v12 & 8) == 0 )
        {
          grapher::ActorBase::FireEvent(a1, 3, a3);
          *((uint8_t *)a1 + 60) |= 8u;
        }
      }
      else if ( (v12 & 4) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 2, a3);
        *((uint8_t *)a1 + 60) |= 4u;
      }
    }
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C53110_eac53110  (binary VA: 0xc53110)
// Original: sub_C53110
// ----------------------------------------------------------------------------
void sub_C53110_eac53110(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorContext::Self *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef grapher::ActorContext::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef grapher::ActorContext::Self *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v17)) > _g4_s7 ? (24u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v18)) > _g4_s8 ? (28u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v19)) > _g4_s9 ? (28u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v20)) > _g4_s10 ? (32u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v21)) > _g4_s11 ? (32u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v22)) > _g4_s12 ? (36u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v23)) > _g4_s13 ? (36u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v24)) > _g4_s14 ? (36u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v25)) > _g4_s15 ? (40u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v26)) > _g4_s16 ? (40u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v27)) > _g4_s17 ? (40u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v28)) > _g4_s18 ? (44u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v29)) > _g4_s19 ? (44u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v30)) > _g4_s20 ? (48u + sizeof(_g4_t_v30)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);

  v30[0] = (uint32_t)(uintptr_t)(v30);
  v30[1] = (uint32_t)(uintptr_t)(v30);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v30), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v23 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v10, v12, v14, v16, v18, v20, v22, v25, (grapher::ActorContext::Self *)v30);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v5 = sub_837200((int)(uintptr_t)(a1), v4, a3, v11, v13, v15, v17, v19, v21, (int)(uintptr_t)(v23), v26, v28);
  v6 = (uint32_t *)v30[0];
  v27 = (int)(uintptr_t)(v5);
  if ( (uint32_t *)v30[0] == v29 )
    return;
  do
  {
    while ( 1 )
    {
      v7 = v6[2];
      if ( v7 != 0
        && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v7 + 248))(v6[2]) != 0
        && *((uint8_t *)a1 + 52) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 2, a3);
        *((uint8_t *)a1 + 52) = 1;
      }
      if ( G4_VCALL<uint8_t>(v7, 256) != 0
        && G4_VCALL<int>(v7, 164) >= v27 )
      {
        if ( (G4_VCALL<int>(v7, 160) & v24) != 0 )
          break;
        if ( G4_VCALL<int>(v7, 160) > 0 )
          grapher::ActorBase::FireEvent(a1, 3, a3);
      }
      v6 = (uint32_t *)*v6;
      if ( v6 == v29 )
        goto LABEL_12;
    }
    grapher::ActorBase::FireEvent(a1, 4, a3);
    v6 = (uint32_t *)*v6;
  }
  while ( v6 != v29 );
LABEL_12:
  v8 = (uint32_t *)v30[0];
  if ( (uint32_t *)v30[0] != v29 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v8;
      opDelete(v8);
      if ( v9 == v29 )
        break;
      v8 = v9;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C532E0_eac532e0  (binary VA: 0xc532e0)
// Original: sub_C532E0
// ----------------------------------------------------------------------------
int sub_C532E0_eac532e0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  uint32_t *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v14 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v5 = (uint32_t *)v4[123];
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v7 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v10, v11, v12, v13, (int)(uintptr_t)(v14), v15, v16, v17, a1);
  v8 = sub_8EB230(v5, (int)(uintptr_t)(v7));
  sub_C4DA10(a2, v8, a4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C533F0_eac533f0  (binary VA: 0xc533f0)
// Original: sub_C533F0
// ----------------------------------------------------------------------------
int sub_C533F0_eac533f0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorContext::Self *v7;
  int *v8;
  int *v10;
  int *v11;
  int *v12;
  int *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  void *v32;
  void *v33;
  void *v34;
  void *v35;
  int v36;
  int v37;
  grapher::ActorContext::Self *v38;
  int v39;
  int v40;
  g4_cxa_guard_t *v41;
  g4_cxa_guard_t *v42;
  g4_cxa_guard_t *v43;
  g4_cxa_guard_t *v44;
  g4_cxa_guard_t *v45;
  int v46;
  grapher::ActorContext::Self *v47;
  int v48;
  int v49;
  int v50;
  g4_cxa_guard_t *v51;
  g4_cxa_guard_t *v52;
  g4_cxa_guard_t *v53;
  g4_cxa_guard_t *v54;

  if ( a2 != 1 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v47 = sub_837200(
            (int)(uintptr_t)(a1),
            Variable,
            a3,
            v15,
            v20,
            v24,
            v28,
            (int)(uintptr_t)(v32),
            v36,
            (int)(uintptr_t)(v41),
            v46,
            (grapher::ActorContext::Self *)v51);
    v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    v38 = sub_837200(
            (int)(uintptr_t)(a1),
            v4,
            a3,
            v16,
            v21,
            v25,
            v29,
            (int)(uintptr_t)(v33),
            v37,
            (int)(uintptr_t)(v42),
            (int)(uintptr_t)(v47),
            (grapher::ActorContext::Self *)v52);
    v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v44 = (g4_cxa_guard_t *)sub_837200(
                       (int)(uintptr_t)(a1),
                       v5,
                       a3,
                       v17,
                       v22,
                       v26,
                       v30,
                       (int)(uintptr_t)(v34),
                       (int)(uintptr_t)(v38),
                       (int)(uintptr_t)(v43),
                       v48,
                       (grapher::ActorContext::Self *)v53);
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
    v7 = sub_837200((int)(uintptr_t)(a1), v6, a3, v18, v23, v27, v31, (int)(uintptr_t)(v35), v39, (int)(uintptr_t)(v44), v49, (grapher::ActorContext::Self *)v54);
    if ( v40 == 1 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v13 = nullptr;
      if ( byte_20D49A8 == 0 )
        v13 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v13), v50, 1, 1);
    }
    if ( v7 != (grapher::ActorContext::Self *)-1 )
    {
      if ( v7 == nullptr )
      {
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v11 = nullptr;
        v19 = 0;
        if ( byte_20D49A8 == 0 )
          v11 = (int *)(&dword_20D49A0);
        goto LABEL_21;
      }
      if ( v7 != (grapher::ActorContext::Self *)((char *)&dword_0 + 2) )
      {
        if ( v7 != (grapher::ActorContext::Self *)((char *)&dword_0 + 1) )
          goto LABEL_7;
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v11 = nullptr;
        v19 = 1;
        if ( byte_20D49A8 == 0 )
          v11 = (int *)(&dword_20D49A0);
LABEL_21:
        sub_835950((int)(uintptr_t)(v11), v50, 2, v19);
        if ( v45 != (g4_cxa_guard_t *)-1 )
        {
LABEL_8:
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v8 = nullptr;
          if ( byte_20D49A8 == 0 )
            v8 = (int *)(&dword_20D49A0);
          sub_835950((int)(uintptr_t)(v8), v50, 0, v45 == (g4_cxa_guard_t *)(uintptr_t)((int *)((char *)&dword_0 + 1)));
        }
LABEL_12:
        if ( v40 == 0 )
        {
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v10 = nullptr;
          if ( byte_20D49A8 == 0 )
            v10 = (int *)(&dword_20D49A0);
          sub_835950((int)(uintptr_t)(v10), v50, 1, 0);
        }
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      }
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v14 = nullptr;
      if ( byte_20D49A8 == 0 )
        v14 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v14), v50, 3, 1);
    }
LABEL_7:
    if ( v45 != (g4_cxa_guard_t *)-1 )
      goto LABEL_8;
    goto LABEL_12;
  }
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v12 = nullptr;
  if ( byte_20D49A8 == 0 )
    v12 = (int *)(&dword_20D49A0);
  sub_82E600(v12);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C53A80_eac53940  (binary VA: 0xc53940)
// Original: sub_C53A80
// ----------------------------------------------------------------------------
int sub_C53A80_eac53940(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int *v6;
  grapher::ActorVariable::Self *Variable;
  int result;
  grapher::ActorVariable::Self *v9;
  unsigned int v10;
  size_t v11;
  int v12;
  char v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  const char *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  char *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  char *v40;
  int v41;
  int v42;
  grapher::ActorContext::Self *v43;
  int v44;
  int v45;
  const char *v46;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( byte_20D3C30 == 0 )
  {
    v27 = v3;
    v14 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30);
    v4 = v27;
    if ( v14 != 0 )
    {
      v31 = (int *)(&dword_20D3C40);
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
      v4 = v27;
    }
  }
  v5 = nullptr;
  if ( byte_20D3C44 == 0 )
    v5 = (int *)(&dword_20D3C40);
  v6 = nullptr;
  v36 = v5[123];
  if ( v4 != 0 && *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) != 0 )
  {
    v12 = *(uint32_t *)(v4 + 404);
    if ( v12 == 0 || (v27 = v4, v13 = G4_VCALL<int>(v12, 32), v4 = v27, (v13 & 2) == 0) )
    {
      v6 = nullptr;
      if ( v36 != 0 )
        goto LABEL_7;
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
    }
    sub_AB7AC0((int)(uintptr_t)(&v45), (glf::Self *)"Player");
    v31 = (int *)glf::Stricmp(*(glf::Self **)(v27 + 408), v46, v24);
    g4_std::string::Destroy(&v46);
    v4 = v27;
    if ( v31 != nullptr )
      v6 = (int *)v27;
  }
  if ( v36 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
LABEL_7:
  if ( v4 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  if ( v6 == nullptr )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( sub_837200((int)(uintptr_t)(a1), Variable, a3, v25, v27, (int)(uintptr_t)(v31), v34, v36, (int)(uintptr_t)(v40), v41, v42, v43) == (grapher::ActorContext::Self *)-1 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  result = sub_8EA4A0(v37);
  v38 = result;
  if ( result != 0 )
  {
    sub_C4F650((int)(uintptr_t)(a1), (const void **)(result + 40), (int)(uintptr_t)(v6));
    sub_C4F650((int)(uintptr_t)(a1), (const void **)(v38 + 44), (int)(uintptr_t)(v6));
    sub_C4F650((int)(uintptr_t)(a1), (const void **)(v38 + 48), (int)(uintptr_t)(v6));
    v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v9, a3, v26, v28, v32, v35, v38, (int)(uintptr_t)(v40), v41) != 0 )
    {
      if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      }
      v15 = nullptr;
      if ( byte_20D34C4 == 0 )
        v15 = (int *)(&dword_20D34C0);
      v16 = sub_5B8B10((int)(uintptr_t)(v15), (const void **)(v39 + 28));
      v17 = v16;
      if ( byte_20D3C30 == 0 )
      {
        v30 = v16;
        v23 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30);
        v17 = v30;
        if ( v23 != 0 )
        {
          sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
          __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
          v17 = v30;
        }
      }
      v18 = nullptr;
      if ( byte_20D3C44 == 0 )
        v18 = (int *)(&dword_20D3C40);
      v19 = v18[13];
      if ( v19 != 0 && *(uint32_t *)(dword_20D9970 + 164 * *(uint32_t *)(v19 + 36) + 8) == 16 )
      {
        v17 = 140;
      }
      else if ( v17 == -1 )
      {
        v17 = 140;
      }
      v29 = v17;
      sub_8ED2D0(v6[283]);
      v20 = *v6;
      v6[627] = v29;
      (*(void (**)(int *, int))(v20 + 424))(v6, v29);
      v21 = G4_VCALL<int>(v6, 428);
      if ( v21 != 0 )
      {
        v22 = sub_5B18B0(v21);
        sub_9803D0((int)(uintptr_t)(v6), v22, 1);
      }
    }
    v40 = (char *)&dword_213B814;
    glwebtools::Codec::DecodeUrl(v39, &v40);
    v10 = sub_AB6410(*(uint32_t *)(dword_20DDDC0 + 864), v40, 46);
    v44 = (int)(uintptr_t)(&dword_213B814);
    if ( v10 == 40970 )
    {
      g4_std::string::assign_str(&v44, &v40);
    }
    else
    {
      v33 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v10);
      v11 = strlen(v33);
      g4_std_compat::string_assign((int)(uintptr_t)(&v44), v33, v11);
    }
    g4_std::string::assign_str(v6 + 719, &v44);
    G4_VCALL<void>(v6, 288, 2, 1, 1);
    grapher::ActorBase::FireEvent(a1, 1, a3);
    g4_std::string::Destroy(&v44);
    return ((g4_std::string::Destroy(&v40)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C54000_eac54000  (binary VA: 0xc54000)
// Original: sub_C54000
// ----------------------------------------------------------------------------
int sub_C54000_eac54000(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  grapher::ActorVariable::Self *Variable;
  int v7;
  int v8;
  int v9;
  int *v10;
  g4_cxa_guard_t *v11;
  int v12;
  int v13;
  int v14;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v10 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  if ( (v4[12] & 1) != 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
    sub_837200((int)(uintptr_t)(a2), Variable, a4, v7, v8, v9, (int)(uintptr_t)(v10), (int)(uintptr_t)(v11), v12, v13, v14, a1);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    sub_82B030();
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C54180  (binary VA: 0xc54180)
// Original: sub_C54180
// ----------------------------------------------------------------------------
int sub_C54180(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v3 = sub_8F0680();
  v17 = sub_857260(a2, 0, (int)(uintptr_t)(a3));
  v4 = G4_VCALL<int>(v3, 456);
  HIBYTE(v20) = v4 != 0;
  if ( v4 != 0 && v17 == 0 )
  {
    v18 = *(uint32_t *)(v4 + 1128);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
    v13 = sub_837200((int)(uintptr_t)(a2), Variable, a3, v14, v15, v16, v18, v20, v21, v22, v23, a1);
    if ( ((unsigned int)(uintptr_t)(v13) & v19) == 0 )
      goto LABEL_20;
    v17 = v4;
  }
  if ( v17 == 0 )
  {
LABEL_20:
    grapher::ActorBase::FireEvent(a2, 4, a3);
    return 0;
  }
  if ( *((uint8_t *)a2 + 56) != 0 )
    goto LABEL_4;
  v5 = G4_VCALL<int>(v3, 456) == 0;
  v10 = *(uint32_t *)(v3 + 1872);
  if ( v5 || (v11 = *(uint32_t *)(v3 + 1876), (v10 & 0x100) == 0) )
  {
    if ( v10 < 0 )
      goto LABEL_16;
  }
  else if ( v10 < 0 || (v11 & 1) == 0 && (v11 & 4) == 0 )
  {
    goto LABEL_16;
  }
  if ( G4_VCALL<int>(v3, 456) == 0 || (*(uint8_t *)(v3 + 1873) & 8) == 0 )
  {
LABEL_17:
    if ( *((uint8_t *)a2 + 56) == 0 )
      goto LABEL_18;
LABEL_4:
    v5 = G4_VCALL<int>(v3, 456) == 0;
    v6 = *(uint32_t *)(v3 + 1872);
    if ( !v5 && (v7 = *(uint32_t *)(v3 + 1876), (v6 & 0x100) != 0) )
    {
      if ( v6 >= 0 && ((v7 & 1) != 0 || (v7 & 4) != 0) )
      {
LABEL_7:
        if ( G4_VCALL<int>(v3, 456) == 0 || (*(uint8_t *)(v3 + 1873) & 8) == 0 )
        {
LABEL_9:
          v8 = *(uint32_t *)a2;
          *((uint8_t *)a2 + 56) = 0;
          (*(void (**)(grapher::ActorBase::Self *, grapher::ActorContext::Self *))(v8 + 28))(a2, a3);
          grapher::ActorBase::FireEvent(a2, 3, a3);
          if ( v17 == v4 )
            return 0;
          goto LABEL_19;
        }
      }
    }
    else if ( v6 >= 0 )
    {
      goto LABEL_7;
    }
    if ( v4 != v17 )
      goto LABEL_9;
LABEL_18:
    if ( v17 == v4 )
      return 0;
LABEL_19:
    if ( HIBYTE(v20) == 0 )
      return 0;
    goto LABEL_20;
  }
LABEL_16:
  if ( v4 != v17 )
    goto LABEL_17;
  grapher::ActorBase::FireEvent(a2, 2, a3);
  *((uint8_t *)a2 + 56) = 1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C543E0_eac543e0  (binary VA: 0xc543e0)
// Original: sub_C543E0
// ----------------------------------------------------------------------------
int sub_C543E0_eac543e0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  return sub_C54180(a1, a2, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_C543F0_eac543f0  (binary VA: 0xc543f0)
// Original: sub_C543F0
// ----------------------------------------------------------------------------
int sub_C543F0_eac543f0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  G4_VCALL<void>(a1, 28, a3);
  if ( a2 == 0 )
    *((uint8_t *)a1 + 56) = 0;
  sub_C54180((grapher::ActorContext::Self *)&dword_20B9FF4, a1, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  result = a2;
  if ( a2 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C544E0  (binary VA: 0xc544e0)
// Original: sub_C544E0
// ----------------------------------------------------------------------------
uint32_t * sub_C544E0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int v2;
  int v3;
  int *v4;
  char *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *result;
  uint32_t *v9;
  int v10;
  int v11;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v13;
  char *v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef grapher::ActorContext::Self *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v26)) > _g4_s9 ? (40u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v27)) > _g4_s10 ? (44u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v28)) > _g4_s11 ? (48u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v29)) > _g4_s12 ? (56u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v30)) > _g4_s13 ? (60u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);

  v2 = sub_857260(a1, 0, (int)(uintptr_t)(a2));
  v3 = v2;
  if ( v2 == 0 || (v4 = (int *)G4_VCALL<int>(v2, 16)) == nullptr )
  {
LABEL_7:
    v5 = (char *)a1 + 52;
    sub_84BD50(a2, (uint32_t *)a1 + 13);
    goto LABEL_8;
  }
  while ( v4 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v4 = (int *)v4[1];
    if ( v4 == nullptr )
      goto LABEL_7;
  }
  v5 = (char *)a1 + 52;
  sub_84BD50(a2, (uint32_t *)a1 + 13);
  v22 = G4_VCALL<int>(v3, 456);
  if ( (G4_VCALL<int>(v3, 456) == 0
     || (v10 = *(uint32_t *)(v3 + 1872), v11 = *(uint32_t *)(v3 + 1876), (v10 & 0x100) == 0)
     || v10 < 0
     || (v11 & 1) != 0
     || (v11 & 4) != 0)
    && (G4_VCALL<int>(v3, 456) == 0 || (*(uint8_t *)(v3 + 1873) & 8) == 0)
    || (v20 = *(uint32_t *)(v22 + 1128),
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3),
        ((unsigned int)(uintptr_t)(uintptr_t)(v13 = sub_837200((int)(uintptr_t)(a1), Variable, a2, v17, v18, v19, v20, v22, v24, v25, v26, v27)) & v21) == 0) )
  {
LABEL_8:
    if ( (*((uint8_t *)a1 + 52) & 0x10) == 0 )
    {
      g4_std::string::construct_copy(v30, &unk_20D67EC);
      sub_C4DBA0(a1, 2, (int)(uintptr_t)(v30), a2);
      g4_std::string::Destroy(v30);
      grapher::ActorBase::FireEvent(a1, 4, a2);
      *((uint32_t *)a1 + 13) |= 0x10u;
    }
    goto LABEL_10;
  }
  v14 = (char *)G4_VCALL<int>(v23, 44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), v14, (int)(uintptr_t)(&v27) + 3);
  sub_C4DBA0(a1, 2, (int)(uintptr_t)(&v29), a2);
  g4_std::string::Destroy(&v29);
  if ( (G4_VCALL<int>(v3, 456) != 0
     && (v15 = *(uint32_t *)(v3 + 1872), v16 = *(uint32_t *)(v3 + 1876), (v15 & 0x100) != 0)
     && v15 >= 0
     && (v16 & 1) == 0
     && (v16 & 4) == 0
     || G4_VCALL<int>(v3, 456) != 0 && (*(uint8_t *)(v3 + 1873) & 8) != 0)
    && *(uint32_t *)(v3 + 3688) == 0
    || G4_VCALL<int>(v3, 456) != 0 && (*(uint8_t *)(v3 + 1873) & 8) != 0 )
  {
    if ( (*((uint8_t *)a1 + 52) & 4) == 0 )
    {
      grapher::ActorBase::FireEvent(a1, 2, a2);
      *((uint32_t *)a1 + 13) |= 4u;
    }
  }
  else if ( (*((uint8_t *)a1 + 52) & 8) == 0 )
  {
    grapher::ActorBase::FireEvent(a1, 3, a2);
    *((uint32_t *)a1 + 13) |= 8u;
  }
LABEL_10:
  v28 = v5;
  v6 = *((uint32_t **)a2 + 3);
  if ( v6 == nullptr )
    goto LABEL_18;
  v7 = (uint32_t *)((char *)a2 + 8);
  do
  {
    while ( v6[4] >= (unsigned int)(uintptr_t)(v5) )
    {
      v7 = v6;
      v6 = (uint32_t *)v6[2];
      if ( v6 == nullptr )
        goto LABEL_15;
    }
    v6 = (uint32_t *)v6[3];
  }
  while ( v6 != nullptr );
LABEL_15:
  if ( (uint32_t *)((char *)a2 + 8) == v7 || (unsigned int)(uintptr_t)(v5) < v7[4] )
  {
LABEL_18:
    v9 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v9 = (uint32_t)(uintptr_t)(&off_205CD10);
    v9[1] = *((uint32_t *)a1 + 13);
    result = g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
               (grapher::ActorContext::Self *)((char *)a2 + 4),
               &v28);
    *result = (uint32_t)(uintptr_t)(v9);
  }
  else
  {
    result = (uint32_t *)v7[5];
    result[1] = *((uint32_t *)a1 + 13);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C54850_eac54850  (binary VA: 0xc54850)
// Original: sub_C54850
// ----------------------------------------------------------------------------
int sub_C54850_eac54850(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  sub_C544E0(a1, a3);
  result = *((uint32_t *)a1 + 13);
  if ( (result & 4) != 0 && (result & 8) != 0 && (result & 0x10) != 0 )
    return G4_VCALL<int>(a1, 28, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C548A0_eac548a0  (binary VA: 0xc548a0)
// Original: sub_C548A0
// ----------------------------------------------------------------------------
int sub_C548A0_eac548a0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  char *v4;
  uint32_t *v5;
  grapher::ActorVariable::Self *Variable;
  uint32_t *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef g4_cxa_guard_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef void *_g4_t_v16;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v15)) > _g4_s6 ? (36u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v16)) > _g4_s7 ? (44u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  *((uint32_t *)a1 + 13) = 0;
  v3 = *((uint32_t **)a3 + 3);
  v4 = (char *)a1 + 52;
  v16 = (char *)a1 + 52;
  if ( v3 == nullptr )
    goto LABEL_15;
  v5 = (uint32_t *)((char *)a3 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v3[4] )
    {
      v5 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_6;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_6:
  if ( v5 == (uint32_t *)((char *)a3 + 8) || (unsigned int)(uintptr_t)(v4) < v5[4] )
  {
LABEL_15:
    v8 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v8 = (uint32_t)(uintptr_t)(&off_205CD10);
    v8[1] = *((uint32_t *)a1 + 13);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), &v16) = (uint32_t)(uintptr_t)(v8);
  }
  else
  {
    *(uint32_t *)(v5[5] + 4) = 0;
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, v12, (int)(uintptr_t)(v13), v14, v15) != 0 )
  {
    sub_C544E0(a1, a3);
  }
  else
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C54CD0_eac54a30  (binary VA: 0xc54a30)
// Original: sub_C54CD0
// ----------------------------------------------------------------------------
uint32_t * sub_C54CD0_eac54a30(int a1, g4_cxa_guard_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *result;
  int v9;
  grapher::ActorVariable::Self *Variable;
  char *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  grapher::ActorVariable::Self *v19;
  int v20;
  int64_t v21; // xmm0_8
  int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  grapher::ActorContext::Self *v38;
  int v39;
  uint32_t *v40;
  int v41;
  uint32_t *v42;
  g4_cxa_guard_t *v43;
  g4_cxa_guard_t *v44;
  g4_cxa_guard_t *v45;
  char *v46;
  char *v47;
  uint32_t *v48;
  uint32_t v49[4];
  void *v50;
  void *v51[3];
  int v52;
  int v53;
  int v54;
  int v55[3];
  uint8_t v56[4];
  int64_t v57;
  uint32_t s[22];

  s[18] = (uint32_t)(uintptr_t)(&a1);
  v3 = a3;
  v4 = (uint32_t *)a1;
  v43 = a2;
  v46 = (char *)(a1 + 56);
  sub_84BD50(a3, (uint32_t *)(a1 + 56));
  v42 = v4 + 13;
  sub_84BD50(v3, v4 + 13);
  v5 = (uint32_t *)v3[3];
  v6 = v4 + 16;
  v7 = v3 + 2;
  v51[0] = v4 + 16;
  v48 = v3 + 2;
  if ( v5 == nullptr )
    goto LABEL_42;
  do
  {
    while ( (unsigned int)(uintptr_t)(v6) <= v5[4] )
    {
      v7 = v5;
      v5 = (uint32_t *)v5[2];
      if ( v5 == nullptr )
        goto LABEL_6;
    }
    v5 = (uint32_t *)v5[3];
  }
  while ( v5 != nullptr );
LABEL_6:
  if ( v48 == v7 || (unsigned int)(uintptr_t)(v6) < v7[4] )
  {
LABEL_42:
    if ( byte_20D6700 == 0 )
    {
      v23 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v6 = v4 + 16;
      if ( v23 != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v6 = v4 + 16;
      }
    }
    v51[2] = v6;
    g4_std::map_void_grapher_ActorContex_7fce1e::find(
      (std::map<void *,grapher::ActorContext::ICVar *> *)v49,
      &dword_20D6724);
    *((uint8_t *)v4 + 64) = *(uint8_t *)(*(uint32_t *)(v49[0] + 20) + 4);
    v9 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v9 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v9 + 4) = *((uint8_t *)v4 + 64);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
       (std::map<void *,grapher::ActorContext::ICVar *> *)(v3 + 1),
       v51) = v9;
    result = (uint32_t *)*((uint8_t *)v4 + 64);
  }
  else
  {
    result = (uint32_t *)*(uint8_t *)(v7[5] + 4);
    *((uint8_t *)v4 + 64) = (uint8_t)(uintptr_t)(result);
  }
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v4, 4);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(v4), Variable, (grapher::ActorContext::Self *)v3, v24, v25, v27, v29, v31, v33, v35) != 0 )
    {
      v15 = v4[13] - (uint32_t)(uintptr_t)(v43);
      v16 = v4[14] - v15;
      v4[13] = v15;
      sub_C4DA10((grapher::ActorBase::Self *)v4, v16, (grapher::ActorContext::Self *)v3);
      v45 = (g4_cxa_guard_t *)v4[13];
      v12 = (int)(uintptr_t)(v45) / 1000;
      if ( (int)(uintptr_t)(v45) > 0 )
      {
LABEL_15:
        v39 = v12;
        sub_84BD50(v3, v4 + 15);
        if ( (int)__builtin_abs(v4[15] - v4[13]) > 1000 )
        {
          v4[15] = v4[13];
          sub_84BEC0(v3, v4 + 15);
          sprintf((char *)s, "%02d:%02d", v39 / 60);
          v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v4, 3);
          v20 = (int)(uintptr_t)sub_837200(
                       (int)(uintptr_t)(v4),
                       v19,
                       (grapher::ActorContext::Self *)v3,
                       v39 % 60,
                       v26,
                       v28,
                       v30,
                       v32,
                       v34,
                       v36,
                       v37,
                       v38);
          v21 = 0xBFF0000000000000LL;
          if ( (unsigned int)(*(uint32_t *)(dword_20DA090 + 52 * v20 + 28) - 3) <= 1 )
            v21 = 0x4000000000000000LL;
          v41 = v20;
          v57 = v21;
          memset(v55, 0, sizeof(v55));
          v47 = (char *)&unk_1B15112;
          v56[0] = 2;
          v56[1] = 0;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), (char *)&unk_1B15112, (int)(uintptr_t)(&v50));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), (char *)&unk_1B15112, (int)(uintptr_t)(&v50) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), (char *)s, (int)(uintptr_t)(&v50) + 2);
          if ( v41 >= 0 && v41 < (unsigned int)dword_20DA0A0 )
            v47 = (char *)sub_C5A270(v41);
          if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
          {
            sub_785A60((int)(uintptr_t)(&dword_20D5D78));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
            __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
          }
          v22 = nullptr;
          if ( byte_20D5D7C == 0 )
            v22 = (int *)(&dword_20D5D78);
          sub_7E2D40(v22, v47, (int)(uintptr_t)(&v54), (int)(uintptr_t)(&v53), (int)(uintptr_t)(&v52), 0, (gameswf::ASValue::Self *)v56, (int)(uintptr_t)(v55), 0);
          g4_std::string::Destroy(&v54);
          g4_std::string::Destroy(&v53);
          g4_std::string::Destroy(&v52);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
          sub_C402F0(v55);
        }
        goto LABEL_16;
      }
    }
    else
    {
      v11 = (char *)v43 + v4[13];
      v4[13] = (uint32_t)(uintptr_t)(v11);
      sub_C4DA10((grapher::ActorBase::Self *)v4, (int)(uintptr_t)(&v11[v4[14]]), (grapher::ActorContext::Self *)v3);
      v44 = (g4_cxa_guard_t *)v4[13];
      v12 = ((int)(uintptr_t)(v44) + v4[14]) / 1000;
      if ( (int)(uintptr_t)(v44) > 0 )
        goto LABEL_15;
    }
    v17 = *v4;
    v4[14] = 0;
    v4[13] = 0;
    (*(void (**)(int, uint32_t *, int, uint32_t *))(v17 + 36))(v12, v4, 2, v3);
    grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)v4, 4, (grapher::ActorContext::Self *)v3);
    G4_VCALL<void>(v4, 28, v3);
    sub_84BEC0(v3, v46);
LABEL_16:
    v13 = (uint32_t *)v3[3];
    v51[0] = v4 + 13;
    if ( v13 == nullptr )
      goto LABEL_26;
    v14 = v3 + 2;
    do
    {
      while ( (unsigned int)(uintptr_t)(v42) <= v13[4] )
      {
        v14 = v13;
        v13 = (uint32_t *)v13[2];
        if ( v13 == nullptr )
          goto LABEL_21;
      }
      v13 = (uint32_t *)v13[3];
    }
    while ( v13 != nullptr );
LABEL_21:
    if ( v48 == v14 || (unsigned int)(uintptr_t)(v42) < v14[4] )
    {
LABEL_26:
      v18 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
      *v18 = (uint32_t)(uintptr_t)(&off_205CD10);
      v18[1] = v4[13];
      v40 = v18;
      result = g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (std::map<void *,grapher::ActorContext::ICVar *> *)(v3 + 1),
                 v51);
      *result = (uint32_t)(uintptr_t)(v40);
    }
    else
    {
      result = (uint32_t *)v14[5];
      result[1] = v4[13];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C55460_eac55350  (binary VA: 0xc55350)
// Original: sub_C55460
// ----------------------------------------------------------------------------
int sub_C55460_eac55350(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  char *v3;
  uint32_t *v4;
  uint32_t *v5;
  int result;
  int v7;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v9;
  grapher::ActorContext::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  grapher::ActorManager::Self *v15;
  grapher::ActorManager::Self *v16;
  g4_cxa_guard_t *v17;
  g4_cxa_guard_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  g4_cxa_guard_t *v25;
  grapher::ActorContext::Self *v26;
  void *v27[9];

  v3 = (char *)a1 + 64;
  sub_84BD50(a3, (uint32_t *)a1 + 14);
  sub_84BD50(a3, (uint32_t *)a1 + 13);
  sub_84BD50(a3, (uint32_t *)a1 + 15);
  v4 = *((uint32_t **)a3 + 3);
  v27[0] = (char *)a1 + 64;
  if ( v4 == nullptr )
    goto LABEL_42;
  v5 = (uint32_t *)((char *)a3 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v3) <= v4[4] )
    {
      v5 = v4;
      v4 = (uint32_t *)v4[2];
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = (uint32_t *)v4[3];
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( (uint32_t *)((char *)a3 + 8) == v5 || (unsigned int)(uintptr_t)(v3) < v5[4] )
  {
LABEL_42:
    if ( byte_20D6700 == 0 )
    {
      v25 = (g4_cxa_guard_t *)&byte_20D6700;
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v27[1] = (char *)a1 + 64;
    g4_std::map_void_grapher_ActorContex_7fce1e::find(
      (std::map<void *,grapher::ActorContext::ICVar *> *)&v26,
      &dword_20D6724);
    *((uint8_t *)a1 + 64) = *(uint8_t *)(*((uint32_t *)v26 + 5) + 4);
    v7 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v7 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v7 + 4) = *((uint8_t *)a1 + 64);
    v15 = (grapher::ActorManager::Self *)v7;
    result = (int)(uintptr_t)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                    (grapher::ActorContext::Self *)((char *)a3 + 4),
                    v27);
    *(uint32_t *)result = (uint32_t)(uintptr_t)(v15);
  }
  else
  {
    result = *(uint8_t *)(v5[5] + 4);
    *((uint8_t *)a1 + 64) = result;
  }
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      if ( byte_20D5B50 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
      }
      grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    }
    else if ( a2 == 2 )
    {
      if ( byte_20D5B50 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
      }
      grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
      *((uint8_t *)a1 + 64) = 0;
      result = (int)(uintptr_t)(sub_C5A720(a3, v3));
    }
  }
  else
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    if ( (uint8_t)sub_837730(
                            (int)(uintptr_t)(a1),
                            Variable,
                            a3,
                            v11,
                            v13,
                            (int)(uintptr_t)(v15),
                            (int)(uintptr_t)(v17),
                            (int)(uintptr_t)(a1) + 56,
                            (int)(uintptr_t)(a1) + 52,
                            (int)(uintptr_t)(a1) + 60) != 0
      || *((uint8_t *)a1 + 64) == 0 )
    {
      v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
      v10 = sub_837200((int)(uintptr_t)(a1), v9, a3, v12, v14, (int)(uintptr_t)(v16), (int)(uintptr_t)(v18), v19, v21, v23, (int)(uintptr_t)(v25), v26);
      *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v10);
      *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)(v10);
      *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v10);
      *((uint8_t *)a1 + 64) = 1;
      sub_84BEC0(a3, v20);
      sub_84BEC0(a3, v22);
      sub_C5A720(a3, v3);
      sub_84BEC0(a3, v24);
    }
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  if ( *((uint8_t *)a1 + 64) != 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C55920_eac55920  (binary VA: 0xc55920)
// Original: sub_C55920
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * sub_C55920_eac55920(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *result;
  unsigned int v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  grapher::ActorContext::Self *v9;
  const char *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorContext::Self *v14;
  grapher::ActorVariable::Self *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorContext::Self *v18;
  grapher::ActorVariable::Self *v19;
  grapher::ActorVariable::Self *v20;
  grapher::ActorVariable::Self *v21;
  grapher::ActorContext::Self *v22;
  grapher::ActorVariable::Self *v23;
  double v24; // xmm0_8
  char *v25;
  int *v26;
  const char *v27;
  int v28;
  int *v29;
  typedef char *_g4_t_format;
  typedef gameswf::ASValue::Self *_g4_t_v31;
  typedef gameswf::ASValue::Self *_g4_t_v32;
  typedef gameswf::ASValue::Self *_g4_t_v33;
  typedef gameswf::ASValue::Self *_g4_t_v34;
  typedef gameswf::ASValue::Self *_g4_t_v35;
  typedef gameswf::ASValue::Self *_g4_t_v36;
  typedef gameswf::ASValue::Self *_g4_t_v37;
  typedef gameswf::ASValue::Self *_g4_t_v38;
  typedef gameswf::ASValue::Self *_g4_t_v39;
  typedef gameswf::ASValue::Self *_g4_t_v40;
  typedef gameswf::ASValue::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef grapher::ActorContext::Self *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef grapher::ActorContext::Self *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef int *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef grapher::ActorContext::Self *_g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef grapher::ActorContext::Self *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef char *_g4_t_v137;
  typedef char *_g4_t_v138;
  typedef grapher::ActorContext::Self *_g4_t_v139;
  typedef grapher::ActorContext::Self *_g4_t_v140;
  typedef char *_g4_t_v141;
  typedef grapher::ActorContext::Self *_g4_t_v142;
  typedef grapher::ActorContext::Self *_g4_t_v143;
  typedef char *_g4_t_v144;
  typedef grapher::ActorContext::Self *_g4_t_v145;
  typedef grapher::ActorContext::Self *_g4_t_v146;
  typedef char *_g4_t_v147;
  typedef grapher::ActorContext::Self *_g4_t_v148;
  typedef grapher::ActorContext::Self *_g4_t_v149;
  typedef char *_g4_t_v150;
  typedef char *_g4_t_v151;
  typedef char *_g4_t_v152;
  typedef char *_g4_t_v153;
  typedef char *_g4_t_v154;
  typedef g4_cxa_guard_t *_g4_t_v155;
  typedef char *_g4_t_v156;
  typedef grapher::ActorContext::Self *_g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef uint8_t _g4_t_v162[4];
  typedef double _g4_t_v163 __attribute__((aligned(1)));
  typedef int _g4_t_v164[3];
  typedef uint8_t _g4_t_v165[12];
  typedef uint32_t _g4_t_v166[16];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_format)) > _g4_s0 ? (4u + sizeof(_g4_t_format)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v35)) > _g4_s5 ? (12u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v36)) > _g4_s6 ? (12u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v37)) > _g4_s7 ? (12u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v38)) > _g4_s8 ? (12u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v39)) > _g4_s9 ? (12u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v40)) > _g4_s10 ? (12u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v41)) > _g4_s11 ? (12u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v42)) > _g4_s12 ? (16u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v43)) > _g4_s13 ? (16u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v44)) > _g4_s14 ? (16u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v45)) > _g4_s15 ? (16u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v46)) > _g4_s16 ? (16u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v47)) > _g4_s17 ? (16u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v48)) > _g4_s18 ? (16u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v49)) > _g4_s19 ? (16u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v50)) > _g4_s20 ? (16u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v51)) > _g4_s21 ? (16u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_v52)) > _g4_s22 ? (16u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v53)) > _g4_s23 ? (20u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v54)) > _g4_s24 ? (20u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v55)) > _g4_s25 ? (20u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (20u + sizeof(_g4_t_v56)) > _g4_s26 ? (20u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (20u + sizeof(_g4_t_v57)) > _g4_s27 ? (20u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (20u + sizeof(_g4_t_v58)) > _g4_s28 ? (20u + sizeof(_g4_t_v58)) : _g4_s28,
    _g4_s30 = (20u + sizeof(_g4_t_v59)) > _g4_s29 ? (20u + sizeof(_g4_t_v59)) : _g4_s29,
    _g4_s31 = (20u + sizeof(_g4_t_v60)) > _g4_s30 ? (20u + sizeof(_g4_t_v60)) : _g4_s30,
    _g4_s32 = (20u + sizeof(_g4_t_v61)) > _g4_s31 ? (20u + sizeof(_g4_t_v61)) : _g4_s31,
    _g4_s33 = (20u + sizeof(_g4_t_v62)) > _g4_s32 ? (20u + sizeof(_g4_t_v62)) : _g4_s32,
    _g4_s34 = (20u + sizeof(_g4_t_v63)) > _g4_s33 ? (20u + sizeof(_g4_t_v63)) : _g4_s33,
    _g4_s35 = (20u + sizeof(_g4_t_v64)) > _g4_s34 ? (20u + sizeof(_g4_t_v64)) : _g4_s34,
    _g4_s36 = (20u + sizeof(_g4_t_v65)) > _g4_s35 ? (20u + sizeof(_g4_t_v65)) : _g4_s35,
    _g4_s37 = (20u + sizeof(_g4_t_v66)) > _g4_s36 ? (20u + sizeof(_g4_t_v66)) : _g4_s36,
    _g4_s38 = (24u + sizeof(_g4_t_v67)) > _g4_s37 ? (24u + sizeof(_g4_t_v67)) : _g4_s37,
    _g4_s39 = (24u + sizeof(_g4_t_v68)) > _g4_s38 ? (24u + sizeof(_g4_t_v68)) : _g4_s38,
    _g4_s40 = (24u + sizeof(_g4_t_v69)) > _g4_s39 ? (24u + sizeof(_g4_t_v69)) : _g4_s39,
    _g4_s41 = (24u + sizeof(_g4_t_v70)) > _g4_s40 ? (24u + sizeof(_g4_t_v70)) : _g4_s40,
    _g4_s42 = (24u + sizeof(_g4_t_v71)) > _g4_s41 ? (24u + sizeof(_g4_t_v71)) : _g4_s41,
    _g4_s43 = (24u + sizeof(_g4_t_v72)) > _g4_s42 ? (24u + sizeof(_g4_t_v72)) : _g4_s42,
    _g4_s44 = (24u + sizeof(_g4_t_v73)) > _g4_s43 ? (24u + sizeof(_g4_t_v73)) : _g4_s43,
    _g4_s45 = (24u + sizeof(_g4_t_v74)) > _g4_s44 ? (24u + sizeof(_g4_t_v74)) : _g4_s44,
    _g4_s46 = (24u + sizeof(_g4_t_v75)) > _g4_s45 ? (24u + sizeof(_g4_t_v75)) : _g4_s45,
    _g4_s47 = (24u + sizeof(_g4_t_v76)) > _g4_s46 ? (24u + sizeof(_g4_t_v76)) : _g4_s46,
    _g4_s48 = (24u + sizeof(_g4_t_v77)) > _g4_s47 ? (24u + sizeof(_g4_t_v77)) : _g4_s47,
    _g4_s49 = (24u + sizeof(_g4_t_v78)) > _g4_s48 ? (24u + sizeof(_g4_t_v78)) : _g4_s48,
    _g4_s50 = (24u + sizeof(_g4_t_v79)) > _g4_s49 ? (24u + sizeof(_g4_t_v79)) : _g4_s49,
    _g4_s51 = (24u + sizeof(_g4_t_v80)) > _g4_s50 ? (24u + sizeof(_g4_t_v80)) : _g4_s50,
    _g4_s52 = (28u + sizeof(_g4_t_v81)) > _g4_s51 ? (28u + sizeof(_g4_t_v81)) : _g4_s51,
    _g4_s53 = (28u + sizeof(_g4_t_v82)) > _g4_s52 ? (28u + sizeof(_g4_t_v82)) : _g4_s52,
    _g4_s54 = (28u + sizeof(_g4_t_v83)) > _g4_s53 ? (28u + sizeof(_g4_t_v83)) : _g4_s53,
    _g4_s55 = (28u + sizeof(_g4_t_v84)) > _g4_s54 ? (28u + sizeof(_g4_t_v84)) : _g4_s54,
    _g4_s56 = (28u + sizeof(_g4_t_v85)) > _g4_s55 ? (28u + sizeof(_g4_t_v85)) : _g4_s55,
    _g4_s57 = (28u + sizeof(_g4_t_v86)) > _g4_s56 ? (28u + sizeof(_g4_t_v86)) : _g4_s56,
    _g4_s58 = (28u + sizeof(_g4_t_v87)) > _g4_s57 ? (28u + sizeof(_g4_t_v87)) : _g4_s57,
    _g4_s59 = (28u + sizeof(_g4_t_v88)) > _g4_s58 ? (28u + sizeof(_g4_t_v88)) : _g4_s58,
    _g4_s60 = (28u + sizeof(_g4_t_v89)) > _g4_s59 ? (28u + sizeof(_g4_t_v89)) : _g4_s59,
    _g4_s61 = (28u + sizeof(_g4_t_v90)) > _g4_s60 ? (28u + sizeof(_g4_t_v90)) : _g4_s60,
    _g4_s62 = (28u + sizeof(_g4_t_v91)) > _g4_s61 ? (28u + sizeof(_g4_t_v91)) : _g4_s61,
    _g4_s63 = (28u + sizeof(_g4_t_v92)) > _g4_s62 ? (28u + sizeof(_g4_t_v92)) : _g4_s62,
    _g4_s64 = (28u + sizeof(_g4_t_v93)) > _g4_s63 ? (28u + sizeof(_g4_t_v93)) : _g4_s63,
    _g4_s65 = (28u + sizeof(_g4_t_v94)) > _g4_s64 ? (28u + sizeof(_g4_t_v94)) : _g4_s64,
    _g4_s66 = (32u + sizeof(_g4_t_v95)) > _g4_s65 ? (32u + sizeof(_g4_t_v95)) : _g4_s65,
    _g4_s67 = (32u + sizeof(_g4_t_v96)) > _g4_s66 ? (32u + sizeof(_g4_t_v96)) : _g4_s66,
    _g4_s68 = (32u + sizeof(_g4_t_v97)) > _g4_s67 ? (32u + sizeof(_g4_t_v97)) : _g4_s67,
    _g4_s69 = (32u + sizeof(_g4_t_v98)) > _g4_s68 ? (32u + sizeof(_g4_t_v98)) : _g4_s68,
    _g4_s70 = (32u + sizeof(_g4_t_v99)) > _g4_s69 ? (32u + sizeof(_g4_t_v99)) : _g4_s69,
    _g4_s71 = (32u + sizeof(_g4_t_v100)) > _g4_s70 ? (32u + sizeof(_g4_t_v100)) : _g4_s70,
    _g4_s72 = (32u + sizeof(_g4_t_v101)) > _g4_s71 ? (32u + sizeof(_g4_t_v101)) : _g4_s71,
    _g4_s73 = (32u + sizeof(_g4_t_v102)) > _g4_s72 ? (32u + sizeof(_g4_t_v102)) : _g4_s72,
    _g4_s74 = (32u + sizeof(_g4_t_v103)) > _g4_s73 ? (32u + sizeof(_g4_t_v103)) : _g4_s73,
    _g4_s75 = (32u + sizeof(_g4_t_v104)) > _g4_s74 ? (32u + sizeof(_g4_t_v104)) : _g4_s74,
    _g4_s76 = (32u + sizeof(_g4_t_v105)) > _g4_s75 ? (32u + sizeof(_g4_t_v105)) : _g4_s75,
    _g4_s77 = (32u + sizeof(_g4_t_v106)) > _g4_s76 ? (32u + sizeof(_g4_t_v106)) : _g4_s76,
    _g4_s78 = (32u + sizeof(_g4_t_v107)) > _g4_s77 ? (32u + sizeof(_g4_t_v107)) : _g4_s77,
    _g4_s79 = (32u + sizeof(_g4_t_v108)) > _g4_s78 ? (32u + sizeof(_g4_t_v108)) : _g4_s78,
    _g4_s80 = (36u + sizeof(_g4_t_v109)) > _g4_s79 ? (36u + sizeof(_g4_t_v109)) : _g4_s79,
    _g4_s81 = (36u + sizeof(_g4_t_v110)) > _g4_s80 ? (36u + sizeof(_g4_t_v110)) : _g4_s80,
    _g4_s82 = (36u + sizeof(_g4_t_v111)) > _g4_s81 ? (36u + sizeof(_g4_t_v111)) : _g4_s81,
    _g4_s83 = (36u + sizeof(_g4_t_v112)) > _g4_s82 ? (36u + sizeof(_g4_t_v112)) : _g4_s82,
    _g4_s84 = (36u + sizeof(_g4_t_v113)) > _g4_s83 ? (36u + sizeof(_g4_t_v113)) : _g4_s83,
    _g4_s85 = (36u + sizeof(_g4_t_v114)) > _g4_s84 ? (36u + sizeof(_g4_t_v114)) : _g4_s84,
    _g4_s86 = (36u + sizeof(_g4_t_v115)) > _g4_s85 ? (36u + sizeof(_g4_t_v115)) : _g4_s85,
    _g4_s87 = (36u + sizeof(_g4_t_v116)) > _g4_s86 ? (36u + sizeof(_g4_t_v116)) : _g4_s86,
    _g4_s88 = (36u + sizeof(_g4_t_v117)) > _g4_s87 ? (36u + sizeof(_g4_t_v117)) : _g4_s87,
    _g4_s89 = (36u + sizeof(_g4_t_v118)) > _g4_s88 ? (36u + sizeof(_g4_t_v118)) : _g4_s88,
    _g4_s90 = (36u + sizeof(_g4_t_v119)) > _g4_s89 ? (36u + sizeof(_g4_t_v119)) : _g4_s89,
    _g4_s91 = (36u + sizeof(_g4_t_v120)) > _g4_s90 ? (36u + sizeof(_g4_t_v120)) : _g4_s90,
    _g4_s92 = (36u + sizeof(_g4_t_v121)) > _g4_s91 ? (36u + sizeof(_g4_t_v121)) : _g4_s91,
    _g4_s93 = (36u + sizeof(_g4_t_v122)) > _g4_s92 ? (36u + sizeof(_g4_t_v122)) : _g4_s92,
    _g4_s94 = (40u + sizeof(_g4_t_v123)) > _g4_s93 ? (40u + sizeof(_g4_t_v123)) : _g4_s93,
    _g4_s95 = (40u + sizeof(_g4_t_v124)) > _g4_s94 ? (40u + sizeof(_g4_t_v124)) : _g4_s94,
    _g4_s96 = (40u + sizeof(_g4_t_v125)) > _g4_s95 ? (40u + sizeof(_g4_t_v125)) : _g4_s95,
    _g4_s97 = (40u + sizeof(_g4_t_v126)) > _g4_s96 ? (40u + sizeof(_g4_t_v126)) : _g4_s96,
    _g4_s98 = (40u + sizeof(_g4_t_v127)) > _g4_s97 ? (40u + sizeof(_g4_t_v127)) : _g4_s97,
    _g4_s99 = (40u + sizeof(_g4_t_v128)) > _g4_s98 ? (40u + sizeof(_g4_t_v128)) : _g4_s98,
    _g4_s100 = (40u + sizeof(_g4_t_v129)) > _g4_s99 ? (40u + sizeof(_g4_t_v129)) : _g4_s99,
    _g4_s101 = (40u + sizeof(_g4_t_v130)) > _g4_s100 ? (40u + sizeof(_g4_t_v130)) : _g4_s100,
    _g4_s102 = (40u + sizeof(_g4_t_v131)) > _g4_s101 ? (40u + sizeof(_g4_t_v131)) : _g4_s101,
    _g4_s103 = (40u + sizeof(_g4_t_v132)) > _g4_s102 ? (40u + sizeof(_g4_t_v132)) : _g4_s102,
    _g4_s104 = (40u + sizeof(_g4_t_v133)) > _g4_s103 ? (40u + sizeof(_g4_t_v133)) : _g4_s103,
    _g4_s105 = (40u + sizeof(_g4_t_v134)) > _g4_s104 ? (40u + sizeof(_g4_t_v134)) : _g4_s104,
    _g4_s106 = (40u + sizeof(_g4_t_v135)) > _g4_s105 ? (40u + sizeof(_g4_t_v135)) : _g4_s105,
    _g4_s107 = (40u + sizeof(_g4_t_v136)) > _g4_s106 ? (40u + sizeof(_g4_t_v136)) : _g4_s106,
    _g4_s108 = (44u + sizeof(_g4_t_v137)) > _g4_s107 ? (44u + sizeof(_g4_t_v137)) : _g4_s107,
    _g4_s109 = (44u + sizeof(_g4_t_v138)) > _g4_s108 ? (44u + sizeof(_g4_t_v138)) : _g4_s108,
    _g4_s110 = (44u + sizeof(_g4_t_v139)) > _g4_s109 ? (44u + sizeof(_g4_t_v139)) : _g4_s109,
    _g4_s111 = (44u + sizeof(_g4_t_v140)) > _g4_s110 ? (44u + sizeof(_g4_t_v140)) : _g4_s110,
    _g4_s112 = (44u + sizeof(_g4_t_v141)) > _g4_s111 ? (44u + sizeof(_g4_t_v141)) : _g4_s111,
    _g4_s113 = (44u + sizeof(_g4_t_v142)) > _g4_s112 ? (44u + sizeof(_g4_t_v142)) : _g4_s112,
    _g4_s114 = (44u + sizeof(_g4_t_v143)) > _g4_s113 ? (44u + sizeof(_g4_t_v143)) : _g4_s113,
    _g4_s115 = (44u + sizeof(_g4_t_v144)) > _g4_s114 ? (44u + sizeof(_g4_t_v144)) : _g4_s114,
    _g4_s116 = (44u + sizeof(_g4_t_v145)) > _g4_s115 ? (44u + sizeof(_g4_t_v145)) : _g4_s115,
    _g4_s117 = (44u + sizeof(_g4_t_v146)) > _g4_s116 ? (44u + sizeof(_g4_t_v146)) : _g4_s116,
    _g4_s118 = (44u + sizeof(_g4_t_v147)) > _g4_s117 ? (44u + sizeof(_g4_t_v147)) : _g4_s117,
    _g4_s119 = (44u + sizeof(_g4_t_v148)) > _g4_s118 ? (44u + sizeof(_g4_t_v148)) : _g4_s118,
    _g4_s120 = (44u + sizeof(_g4_t_v149)) > _g4_s119 ? (44u + sizeof(_g4_t_v149)) : _g4_s119,
    _g4_s121 = (44u + sizeof(_g4_t_v150)) > _g4_s120 ? (44u + sizeof(_g4_t_v150)) : _g4_s120,
    _g4_s122 = (44u + sizeof(_g4_t_v151)) > _g4_s121 ? (44u + sizeof(_g4_t_v151)) : _g4_s121,
    _g4_s123 = (44u + sizeof(_g4_t_v152)) > _g4_s122 ? (44u + sizeof(_g4_t_v152)) : _g4_s122,
    _g4_s124 = (48u + sizeof(_g4_t_v153)) > _g4_s123 ? (48u + sizeof(_g4_t_v153)) : _g4_s123,
    _g4_s125 = (48u + sizeof(_g4_t_v154)) > _g4_s124 ? (48u + sizeof(_g4_t_v154)) : _g4_s124,
    _g4_s126 = (52u + sizeof(_g4_t_v155)) > _g4_s125 ? (52u + sizeof(_g4_t_v155)) : _g4_s125,
    _g4_s127 = (56u + sizeof(_g4_t_v156)) > _g4_s126 ? (56u + sizeof(_g4_t_v156)) : _g4_s126,
    _g4_s128 = (60u + sizeof(_g4_t_v157)) > _g4_s127 ? (60u + sizeof(_g4_t_v157)) : _g4_s127,
    _g4_s129 = (73u + sizeof(_g4_t_v158)) > _g4_s128 ? (73u + sizeof(_g4_t_v158)) : _g4_s128,
    _g4_s130 = (76u + sizeof(_g4_t_v159)) > _g4_s129 ? (76u + sizeof(_g4_t_v159)) : _g4_s129,
    _g4_s131 = (80u + sizeof(_g4_t_v160)) > _g4_s130 ? (80u + sizeof(_g4_t_v160)) : _g4_s130,
    _g4_s132 = (84u + sizeof(_g4_t_v161)) > _g4_s131 ? (84u + sizeof(_g4_t_v161)) : _g4_s131,
    _g4_s133 = (88u + sizeof(_g4_t_v162)) > _g4_s132 ? (88u + sizeof(_g4_t_v162)) : _g4_s132,
    _g4_s134 = (92u + sizeof(_g4_t_v163)) > _g4_s133 ? (92u + sizeof(_g4_t_v163)) : _g4_s133,
    _g4_s135 = (100u + sizeof(_g4_t_v164)) > _g4_s134 ? (100u + sizeof(_g4_t_v164)) : _g4_s134,
    _g4_s136 = (112u + sizeof(_g4_t_v165)) > _g4_s135 ? (112u + sizeof(_g4_t_v165)) : _g4_s135,
    _g4_s137 = (124u + sizeof(_g4_t_v166)) > _g4_s136 ? (124u + sizeof(_g4_t_v166)) : _g4_s136
  };
  alignas(16) uint8_t _g4_sf[_g4_s137];
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
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
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 24u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 28u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 28u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 28u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 28u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 28u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 28u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 28u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 28u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 28u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 28u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 28u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 28u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 32u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 32u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 32u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 32u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 32u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 32u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 32u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 32u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 32u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 32u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 32u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 32u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 32u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 36u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 36u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 36u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 36u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 36u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 36u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 36u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 36u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 36u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 36u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 36u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 36u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 36u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 40u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 40u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 40u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 40u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 40u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 40u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 40u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 40u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 40u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 40u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 40u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 40u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 40u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 40u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 44u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 44u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 44u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 44u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 44u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 44u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 44u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 44u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 44u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 44u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 44u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 44u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 44u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 44u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 44u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 44u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 48u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 48u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 52u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 56u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 60u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 73u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 76u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 80u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 84u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 88u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 92u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 100u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 112u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 124u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  result = sub_837200(
             (int)(uintptr_t)(a1),
             Variable,
             a3,
             (int)(uintptr_t)(v31),
             v42,
             v53,
             v67,
             v81,
             v95,
             v109,
             v123,
             (grapher::ActorContext::Self *)v137);
  v5 = (unsigned int)(uintptr_t)(result);
  if ( (int)(uintptr_t)(result) >= 0 && (unsigned int)(uintptr_t)(result) < dword_20DA0A0 )
  {
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v125 = sub_837200((int)(uintptr_t)(a1), v6, a3, (int)(uintptr_t)(v32), v43, v54, v68, v82, v96, v110, v124, (grapher::ActorContext::Self *)v138);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    v153 = (char *)sub_837200((int)(uintptr_t)(a1), v7, a3, (int)(uintptr_t)(v33), v44, v55, v69, v83, v97, v111, (int)(uintptr_t)(v125), v139);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v9 = sub_837200((int)(uintptr_t)(a1), v8, a3, (int)(uintptr_t)(v34), v45, v56, v70, v84, v98, v112, v126, v140);
    v155 = (g4_cxa_guard_t *)v9;
    if ( (int)(uintptr_t)(v127) < 0 )
    {
      if ( (int)(uintptr_t)(v153) < 0 )
      {
        if ( (int)(uintptr_t)(v9) < 0 )
        {
          v28 = *(uint32_t *)(dword_20DA090 + 52 * v5 + 28);
          if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
          {
            sub_785A60((int)(uintptr_t)(&dword_20D5D78));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
            __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
          }
          v29 = nullptr;
          if ( byte_20D5D7C == 0 )
            v29 = (int *)(&dword_20D5D78);
          sub_7B8F10((int)(uintptr_t)(v29), v28, -1);
          return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 1, a3);
        }
        v10 = (const char *)&unk_1B15112;
        v156 = (char *)&unk_1B15112;
        goto LABEL_22;
      }
      v10 = (const char *)&unk_1B15112;
    }
    else
    {
      format = (char *)v127;
      v127 = (int *)(&dword_20DDDC0);
      v10 = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(format));
      v156 = (char *)&unk_1B15112;
      if ( (int)(uintptr_t)(v153) < 0 )
        goto LABEL_6;
    }
    v127 = (int *)(&dword_20DDDC0);
    v152 = (char *)v10;
    v156 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(v153));
    v10 = v152;
LABEL_6:
    v154 = (char *)&unk_1B15112;
    if ( (int)(uintptr_t)(v155) < 0 )
    {
      if ( v10 != nullptr )
      {
LABEL_8:
        if ( *v10 != 0 && v156 != nullptr && *v156 != 0 && v154 != nullptr && *v154 != 0 )
        {
          v141 = (char *)v10;
          v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
          v157 = sub_837200(
                   (int)(uintptr_t)(a1),
                   v11,
                   a3,
                   (int)(uintptr_t)(v35),
                   v46,
                   v57,
                   v71,
                   v85,
                   v99,
                   v113,
                   (int)(uintptr_t)(v127),
                   (grapher::ActorContext::Self *)v141);
          v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
          v115 = sub_837200((int)(uintptr_t)(a1), v12, a3, (int)(uintptr_t)(v36), v47, v58, v72, v86, v100, v114, v128, v142);
          v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
          v14 = sub_837200((int)(uintptr_t)(a1), v13, a3, (int)(uintptr_t)(v37), v48, v59, v73, v87, v101, (int)(uintptr_t)(v115), v129, v143);
          sprintf((char *)a1 + 52, v144, v14);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v159), (char *)a1 + 52, (int)(uintptr_t)(&v158));
          v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 10);
          v145 = sub_837200(
                   (int)(uintptr_t)(a1),
                   v15,
                   a3,
                   v116,
                   (int)(uintptr_t)(v157),
                   v60,
                   v74,
                   v88,
                   v102,
                   v116,
                   v130,
                   (grapher::ActorContext::Self *)v144);
          v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 9);
          v132 = sub_837200((int)(uintptr_t)(a1), v16, a3, (int)(uintptr_t)(v38), v49, v61, v75, v89, v103, v117, v131, v145);
          v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 8);
          v18 = sub_837200((int)(uintptr_t)(a1), v17, a3, (int)(uintptr_t)(v39), v50, v62, v76, v90, v104, v118, (int)(uintptr_t)(v132), v146);
          sprintf((char *)a1 + 52, v156, v18);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v160), (char *)a1 + 52, (int)(uintptr_t)(&v158) + 1);
          v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 13);
          v148 = sub_837200(
                   (int)(uintptr_t)(a1),
                   v19,
                   a3,
                   v133,
                   (int)(uintptr_t)(v147),
                   v63,
                   v77,
                   v91,
                   v105,
                   v119,
                   v133,
                   (grapher::ActorContext::Self *)v147);
          v20 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 12);
          v135 = sub_837200((int)(uintptr_t)(a1), v20, a3, (int)(uintptr_t)(v40), v51, v64, v78, v92, v106, v120, v134, v148);
          v21 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 11);
          v22 = sub_837200((int)(uintptr_t)(a1), v21, a3, (int)(uintptr_t)(v41), v52, v65, v79, v93, v107, v121, (int)(uintptr_t)(v135), v149);
          sprintf((char *)a1 + 52, v154, v22);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v161), (char *)a1 + 52, (int)(uintptr_t)(&v158) + 2);
          v23 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
          v24 = (double)(int)(uintptr_t)sub_837200(
                               (int)(uintptr_t)(a1),
                               v23,
                               a3,
                               v136,
                               (int)(uintptr_t)(v150),
                               v66,
                               v80,
                               v94,
                               v108,
                               v122,
                               v136,
                               (grapher::ActorContext::Self *)v150);
          v162[0] = 2;
          v162[1] = 0;
          v163 = v24;
          memset(v164, 0, sizeof(v164));
          v165[0] = 0;
          v165[1] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v165, (const gameswf::ASValue::Self *)v162);
          v25 = (char *)&unk_1B15112;
          if ( v5 < dword_20DA0A0 )
            v25 = (char *)sub_C5A270(v5);
          sub_C40500((int)(uintptr_t)(v166), v25, (int)(uintptr_t)(&v159), (int)(uintptr_t)(&v160), (int)(uintptr_t)(&v161), (gameswf::ASValue::Self *)v165, v164);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v165);
          sub_C402F0(v164);
          if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
          {
            sub_785A60((int)(uintptr_t)(&dword_20D5D78));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
            __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
          }
          v26 = nullptr;
          if ( byte_20D5D7C == 0 )
            v26 = (int *)(&dword_20D5D78);
          sub_7E2430(v26, (int)(uintptr_t)(v166));
          sub_C416C0(v166);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v162);
          g4_std::string::Destroy(&v161);
          g4_std::string::Destroy(&v160);
          g4_std::string::Destroy(&v159);
        }
      }
      return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 1, a3);
    }
LABEL_22:
    v151 = (char *)v10;
    v27 = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(v155));
    v10 = v151;
    v154 = (char *)v27;
    if ( v151 != nullptr )
      goto LABEL_8;
    return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 1, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C55FB0_eac55fb0  (binary VA: 0xc55fb0)
// Original: sub_C55FB0
// ----------------------------------------------------------------------------
int * sub_C55FB0_eac55fb0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  int *result;
  unsigned int v7;
  grapher::ActorVariable::Self *v8;
  int v9;
  const char *v10;
  size_t v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  int v16;
  size_t v17;
  grapher::ActorVariable::Self *v18;
  int v19;
  unsigned int v20;
  grapher::ActorVariable::Self *v21;
  double v22; // xmm0_8
  unsigned int v23;
  int *v24;
  int *v25;
  int *v26;
  int *v27;
  int v28;
  grapher::ActorVariable::Self *v29;
  grapher::ActorVariable::Self *v30;
  grapher::ActorVariable::Self *v31;
  grapher::ActorVariable::Self *v32;
  g4_cxa_guard_t *v33;
  g4_cxa_guard_t *v34;
  grapher::ActorVariable::Self *v35;
  int v36;
  grapher::ActorVariable::Self *v37;
  int v38;
  grapher::ActorVariable::Self *v39;
  double v40; // xmm0_8
  unsigned int v41;
  char *v42;
  char *v43;
  g4_cxa_guard_t *v44;
  int v45;
  int v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef g4_cxa_guard_t *_g4_t_v53;
  typedef g4_cxa_guard_t *_g4_t_v54;
  typedef gameswf::ASValue::Self *_g4_t_obj;
  typedef char *_g4_t_obja;
  typedef char *_g4_t_objb;
  typedef const char *_g4_t_objc;
  typedef void *_g4_t_objd;
  typedef void *_g4_t_obje;
  typedef g4_cxa_guard_t *_g4_t_v61;
  typedef g4_cxa_guard_t *_g4_t_v62;
  typedef g4_cxa_guard_t _g4_t_v63;
  typedef g4_cxa_guard_t *_g4_t_v64;
  typedef g4_cxa_guard_t *_g4_t_v65;
  typedef g4_cxa_guard_t *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef char *_g4_t_s;
  typedef g4_cxa_guard_t *_g4_t_v72;
  typedef g4_cxa_guard_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int64_t _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char _g4_t_v82[4];
  typedef char _g4_t_v83[8];
  typedef char _g4_t_v84[8];
  typedef uint8_t _g4_t_v85[4];
  typedef double _g4_t_v86;
  typedef uint8_t _g4_t_v87[4];
  typedef uint64_t _g4_t_v88 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v89[12];
  typedef uint8_t _g4_t_v90[4];
  typedef double _g4_t_v91 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v92[12];
  typedef int _g4_t_v93[3];
  typedef uint8_t _g4_t_v94[12];
  typedef char _g4_t_v95[4];
  typedef uint8_t _g4_t_v96[12];
  typedef uint32_t _g4_t_v97[4];
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef char _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef void *_g4_t_v112;
  typedef void *_g4_t_v113;
  typedef void *_g4_t_v114;
  typedef void *_g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef char _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef char *_g4_t_v126;
  typedef char *_g4_t_v127;
  typedef g4_cxa_guard_t *_g4_t_v128;
  typedef g4_cxa_guard_t *_g4_t_v129;
  typedef uint32_t _g4_t_v130[23];
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (12u + sizeof(_g4_t_v47)) > _g4_s0 ? (12u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v48)) > _g4_s1 ? (16u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v49)) > _g4_s2 ? (16u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v50)) > _g4_s3 ? (16u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v51)) > _g4_s4 ? (16u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v52)) > _g4_s5 ? (16u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v53)) > _g4_s6 ? (16u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v54)) > _g4_s7 ? (16u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_obj)) > _g4_s8 ? (20u + sizeof(_g4_t_obj)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_obja)) > _g4_s9 ? (20u + sizeof(_g4_t_obja)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_objb)) > _g4_s10 ? (20u + sizeof(_g4_t_objb)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_objc)) > _g4_s11 ? (20u + sizeof(_g4_t_objc)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_objd)) > _g4_s12 ? (20u + sizeof(_g4_t_objd)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_obje)) > _g4_s13 ? (20u + sizeof(_g4_t_obje)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v61)) > _g4_s14 ? (24u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v62)) > _g4_s15 ? (24u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v63)) > _g4_s16 ? (28u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v64)) > _g4_s17 ? (32u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v65)) > _g4_s18 ? (32u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v66)) > _g4_s19 ? (32u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v67)) > _g4_s20 ? (36u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v68)) > _g4_s21 ? (40u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v69)) > _g4_s22 ? (40u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v70)) > _g4_s23 ? (40u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_s)) > _g4_s24 ? (44u + sizeof(_g4_t_s)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v72)) > _g4_s25 ? (48u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v73)) > _g4_s26 ? (60u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (70u + sizeof(_g4_t_v74)) > _g4_s27 ? (70u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v75)) > _g4_s28 ? (72u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v76)) > _g4_s29 ? (80u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v77)) > _g4_s30 ? (84u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v78)) > _g4_s31 ? (88u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v79)) > _g4_s32 ? (92u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v80)) > _g4_s33 ? (96u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v81)) > _g4_s34 ? (100u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v82)) > _g4_s35 ? (104u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v83)) > _g4_s36 ? (108u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v84)) > _g4_s37 ? (116u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v85)) > _g4_s38 ? (124u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (128u + sizeof(_g4_t_v86)) > _g4_s39 ? (128u + sizeof(_g4_t_v86)) : _g4_s39,
    _g4_s41 = (136u + sizeof(_g4_t_v87)) > _g4_s40 ? (136u + sizeof(_g4_t_v87)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v88)) > _g4_s41 ? (140u + sizeof(_g4_t_v88)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v89)) > _g4_s42 ? (148u + sizeof(_g4_t_v89)) : _g4_s42,
    _g4_s44 = (160u + sizeof(_g4_t_v90)) > _g4_s43 ? (160u + sizeof(_g4_t_v90)) : _g4_s43,
    _g4_s45 = (164u + sizeof(_g4_t_v91)) > _g4_s44 ? (164u + sizeof(_g4_t_v91)) : _g4_s44,
    _g4_s46 = (172u + sizeof(_g4_t_v92)) > _g4_s45 ? (172u + sizeof(_g4_t_v92)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v93)) > _g4_s46 ? (184u + sizeof(_g4_t_v93)) : _g4_s46,
    _g4_s48 = (196u + sizeof(_g4_t_v94)) > _g4_s47 ? (196u + sizeof(_g4_t_v94)) : _g4_s47,
    _g4_s49 = (208u + sizeof(_g4_t_v95)) > _g4_s48 ? (208u + sizeof(_g4_t_v95)) : _g4_s48,
    _g4_s50 = (212u + sizeof(_g4_t_v96)) > _g4_s49 ? (212u + sizeof(_g4_t_v96)) : _g4_s49,
    _g4_s51 = (224u + sizeof(_g4_t_v97)) > _g4_s50 ? (224u + sizeof(_g4_t_v97)) : _g4_s50,
    _g4_s52 = (240u + sizeof(_g4_t_v98)) > _g4_s51 ? (240u + sizeof(_g4_t_v98)) : _g4_s51,
    _g4_s53 = (241u + sizeof(_g4_t_v99)) > _g4_s52 ? (241u + sizeof(_g4_t_v99)) : _g4_s52,
    _g4_s54 = (244u + sizeof(_g4_t_v100)) > _g4_s53 ? (244u + sizeof(_g4_t_v100)) : _g4_s53,
    _g4_s55 = (248u + sizeof(_g4_t_v101)) > _g4_s54 ? (248u + sizeof(_g4_t_v101)) : _g4_s54,
    _g4_s56 = (252u + sizeof(_g4_t_v102)) > _g4_s55 ? (252u + sizeof(_g4_t_v102)) : _g4_s55,
    _g4_s57 = (256u + sizeof(_g4_t_v103)) > _g4_s56 ? (256u + sizeof(_g4_t_v103)) : _g4_s56,
    _g4_s58 = (260u + sizeof(_g4_t_v104)) > _g4_s57 ? (260u + sizeof(_g4_t_v104)) : _g4_s57,
    _g4_s59 = (264u + sizeof(_g4_t_v105)) > _g4_s58 ? (264u + sizeof(_g4_t_v105)) : _g4_s58,
    _g4_s60 = (268u + sizeof(_g4_t_v106)) > _g4_s59 ? (268u + sizeof(_g4_t_v106)) : _g4_s59,
    _g4_s61 = (384u + sizeof(_g4_t_v107)) > _g4_s60 ? (384u + sizeof(_g4_t_v107)) : _g4_s60,
    _g4_s62 = (388u + sizeof(_g4_t_v108)) > _g4_s61 ? (388u + sizeof(_g4_t_v108)) : _g4_s61,
    _g4_s63 = (392u + sizeof(_g4_t_v109)) > _g4_s62 ? (392u + sizeof(_g4_t_v109)) : _g4_s62,
    _g4_s64 = (396u + sizeof(_g4_t_v110)) > _g4_s63 ? (396u + sizeof(_g4_t_v110)) : _g4_s63,
    _g4_s65 = (400u + sizeof(_g4_t_v111)) > _g4_s64 ? (400u + sizeof(_g4_t_v111)) : _g4_s64,
    _g4_s66 = (404u + sizeof(_g4_t_v112)) > _g4_s65 ? (404u + sizeof(_g4_t_v112)) : _g4_s65,
    _g4_s67 = (408u + sizeof(_g4_t_v113)) > _g4_s66 ? (408u + sizeof(_g4_t_v113)) : _g4_s66,
    _g4_s68 = (412u + sizeof(_g4_t_v114)) > _g4_s67 ? (412u + sizeof(_g4_t_v114)) : _g4_s67,
    _g4_s69 = (416u + sizeof(_g4_t_v115)) > _g4_s68 ? (416u + sizeof(_g4_t_v115)) : _g4_s68,
    _g4_s70 = (420u + sizeof(_g4_t_v116)) > _g4_s69 ? (420u + sizeof(_g4_t_v116)) : _g4_s69,
    _g4_s71 = (421u + sizeof(_g4_t_v117)) > _g4_s70 ? (421u + sizeof(_g4_t_v117)) : _g4_s70,
    _g4_s72 = (424u + sizeof(_g4_t_v118)) > _g4_s71 ? (424u + sizeof(_g4_t_v118)) : _g4_s71,
    _g4_s73 = (428u + sizeof(_g4_t_v119)) > _g4_s72 ? (428u + sizeof(_g4_t_v119)) : _g4_s72,
    _g4_s74 = (432u + sizeof(_g4_t_v120)) > _g4_s73 ? (432u + sizeof(_g4_t_v120)) : _g4_s73,
    _g4_s75 = (436u + sizeof(_g4_t_v121)) > _g4_s74 ? (436u + sizeof(_g4_t_v121)) : _g4_s74,
    _g4_s76 = (440u + sizeof(_g4_t_v122)) > _g4_s75 ? (440u + sizeof(_g4_t_v122)) : _g4_s75,
    _g4_s77 = (444u + sizeof(_g4_t_v123)) > _g4_s76 ? (444u + sizeof(_g4_t_v123)) : _g4_s76,
    _g4_s78 = (448u + sizeof(_g4_t_v124)) > _g4_s77 ? (448u + sizeof(_g4_t_v124)) : _g4_s77,
    _g4_s79 = (464u + sizeof(_g4_t_v125)) > _g4_s78 ? (464u + sizeof(_g4_t_v125)) : _g4_s78,
    _g4_s80 = (468u + sizeof(_g4_t_v126)) > _g4_s79 ? (468u + sizeof(_g4_t_v126)) : _g4_s79,
    _g4_s81 = (472u + sizeof(_g4_t_v127)) > _g4_s80 ? (472u + sizeof(_g4_t_v127)) : _g4_s80,
    _g4_s82 = (476u + sizeof(_g4_t_v128)) > _g4_s81 ? (476u + sizeof(_g4_t_v128)) : _g4_s81,
    _g4_s83 = (480u + sizeof(_g4_t_v129)) > _g4_s82 ? (480u + sizeof(_g4_t_v129)) : _g4_s82,
    _g4_s84 = (544u + sizeof(_g4_t_v130)) > _g4_s83 ? (544u + sizeof(_g4_t_v130)) : _g4_s83
  };
  alignas(16) uint8_t _g4_sf[_g4_s84];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 20u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 20u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 20u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 20u);
  _g4_t_objd &objd = *reinterpret_cast<_g4_t_objd *>(_g4_sf + 20u);
  _g4_t_obje &obje = *reinterpret_cast<_g4_t_obje *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 70u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 72u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 84u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 96u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 100u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 104u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 108u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 116u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 124u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 128u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 136u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 140u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 148u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 160u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 164u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 172u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 184u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 196u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 208u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 212u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 224u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 240u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 241u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 244u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 248u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 252u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 256u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 260u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 264u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 268u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 384u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 388u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 392u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 396u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 400u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 404u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 408u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 412u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 416u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 420u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 421u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 424u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 428u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 432u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 436u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 440u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 444u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 448u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 464u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 468u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 472u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 476u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 480u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 544u);

  v130[22] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  result = (int *)sub_837200(v3, Variable, v4);
  v7 = (unsigned int)(uintptr_t)(result);
  if ( (int)(uintptr_t)(result) >= 0 )
  {
    result = (int *)(&dword_20DA0A0);
    if ( v7 < dword_20DA0A0 )
    {
      v48 = v7;
      v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
      v9 = (int)(uintptr_t)(sub_837200(v3, v8, v4));
      v68 = v9;
      if ( v9 <= 0 )
      {
        v69 = *(uint32_t *)(dword_20DA090 + 52 * v48 + 28);
        if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
        {
          sub_785A60(&dword_20D5D78);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
          __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        }
        v26 = nullptr;
        if ( byte_20D5D7C == 0 )
          v26 = (int *)(&dword_20D5D78);
        if ( (uint8_t)sub_785F20(v26, v69) != 0 )
        {
          v28 = (int)(uintptr_t)(sub_655F30());
          sub_6691F0(*(uint32_t *)(v28 + 52), v69);
        }
        if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
        {
          sub_785A60(&dword_20D5D78);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
          __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        }
        v27 = nullptr;
        if ( byte_20D5D7C == 0 )
          v27 = (int *)(&dword_20D5D78);
        sub_7B8F10(v27, v69, -1);
        return (int *)grapher::ActorBase::FireEvent(v3, 1, v4);
      }
      v10 = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v9);
      s = (char *)v10;
      if ( v10 == nullptr || *v10 == 0 )
        return (int *)grapher::ActorBase::FireEvent(v3, 1, v4);
      v63 = *(uint32_t *)(dword_20DA090 + 52 * v48 + 28);
      sub_A44DC0((char *)&v75 + 4);
      v11 = strlen(s);
      v67 = (char *)opNewArray(v11 + 4 * *(uint32_t *)(HIDWORD(v75) - 12));
      v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 7);
      v64 = (g4_cxa_guard_t *)sub_837200(v3, v12, v4);
      v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
      v61 = (g4_cxa_guard_t *)sub_837200(v3, v13, v4);
      v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
      v47 = (int)(uintptr_t)(sub_837200(v3, v14, v4));
      v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
      v16 = (int)(uintptr_t)(sub_837200(v3, v15, v4));
      sprintf(v67, s, v16, v47, v61, v64);
      v17 = strlen(v67);
      g4_std_compat::string_assign((int)(uintptr_t)(v3) + 52, v67, v17);
      v82[0] = 0;
      v18 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
      v19 = (int)(uintptr_t)(sub_837200(v3, v18, v4));
      v20 = v48;
      if ( v19 > 0 )
      {
        sprintf(v82, "%i", v19);
        v20 = v48;
      }
      v49 = v20;
      v21 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
      v22 = (double)(int)(uintptr_t)(sub_837200(v3, v21, v4));
      v85[0] = 2;
      v85[1] = 0;
      v23 = v49;
      v86 = v22;
      if ( v63 == 2 )
      {
        if ( *(uint8_t *)(dword_20D9B70 + 7) != 0 )
          goto LABEL_11;
        v87[0] = 2;
        v87[1] = 0;
        v88 = 0xBFF0000000000000LL;
        obj = (gameswf::ASValue::Self *)v87;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v85, (const gameswf::ASValue::Self *)v87);
      }
      else
      {
        if ( v63 != 24 )
          goto LABEL_11;
        v89[0] = 0;
        v89[1] = 0;
        obj = (gameswf::ASValue::Self *)v89;
        gameswf::ASValue::setString((gameswf::ASValue::Self *)v89, *(const char **)(dword_20D92B0 + 8));
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v85, (const gameswf::ASValue::Self *)v89);
      }
      gameswf::ASValue::dropRefs(obj);
      v23 = v49;
LABEL_11:
      v98 = 2;
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v102 = 0;
      v103 = 0;
      v104 = 0;
      v97[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      v97[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v97[2] = (uint32_t)(uintptr_t)(&dword_213B814);
      v97[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v105 = 0;
      v106 = -1;
      if ( v63 == 6 )
      {
        v51 = v23;
        v35 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
        v36 = (int)(uintptr_t)(sub_837200(v3, v35, v4));
        sprintf(v83, "%i", v36);
        v37 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
        v38 = (int)(uintptr_t)(sub_837200(v3, v37, v4));
        sprintf(v84, "%i", v38);
        v125 = 0;
        v126 = nullptr;
        v127 = nullptr;
        v39 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
        v40 = (double)(int)(uintptr_t)(sub_837200(v3, v39, v4));
        v90[0] = 2;
        v91 = v40;
        v90[1] = 0;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "color", (int)(uintptr_t)(&v74));
        g4_std::string::construct_copy(v95, &v76);
        v96[0] = 0;
        v96[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v96, (const gameswf::ASValue::Self *)v90);
        v41 = v51;
        if ( v126 == v127 )
        {
          sub_C40640(v95);
          v41 = v51;
        }
        else
        {
          v42 = nullptr;
          if ( v126 != nullptr )
          {
            objb = v126;
            g4_std::string::construct_copy(v126, v95);
            objb[4] = 0;
            objb[5] = 0;
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(objb + 4), (const gameswf::ASValue::Self *)v96);
            v42 = v126;
            v41 = v51;
          }
          v126 = v42 + 16;
        }
        v52 = v41;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v96);
        g4_std::string::Destroy(v95);
        g4_std::string::Destroy(&v76);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v90);
        objc = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v68);
        v92[0] = 0;
        v92[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v92, (const gameswf::ASValue::Self *)v85);
        v43 = (char *)objc;
        if ( objc == nullptr )
          v43 = (char *)&unk_1B15112;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), v43, (int)(uintptr_t)(&v75) + 1);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), v84, (int)(uintptr_t)(&v75));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), v83, (int)(uintptr_t)(&v74) + 1);
        if ( v52 < dword_20DA0A0 )
          sub_C5A270(v52);
        sub_C40500((int)(uintptr_t)(&v77), (int)(uintptr_t)(&v78), (int)(uintptr_t)(&v79), (gameswf::ASValue::Self *)v92, (int)(uintptr_t)(&v125));
        sub_C4FF50();
        sub_C416C0();
        g4_std::string::Destroy(&v77);
        g4_std::string::Destroy(&v78);
        g4_std::string::Destroy(&v79);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v92);
        sub_C402F0();
      }
      else
      {
        v50 = v23;
        memset(v93, 0, sizeof(v93));
        v94[0] = 0;
        v94[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v94, (const gameswf::ASValue::Self *)v85);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), (char *)&unk_1B15112, (int)(uintptr_t)(&v75) + 3);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), v82, (int)(uintptr_t)(&v75) + 2);
        if ( v50 < dword_20DA0A0 )
          sub_C5A270(v50);
        sub_C40500((int)(uintptr_t)(&v80), (int)(uintptr_t)(&v81), (int)(uintptr_t)(v3) + 52, (gameswf::ASValue::Self *)v94, (int)(uintptr_t)(v93));
        sub_C4FF50();
        sub_C416C0();
        g4_std::string::Destroy(&v80);
        g4_std::string::Destroy(&v81);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v94);
        sub_C402F0();
      }
      if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
      {
        sub_785A60(&dword_20D5D78);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
      }
      v24 = nullptr;
      if ( byte_20D5D7C == 0 )
        v24 = (int *)(&dword_20D5D78);
      sub_7E2430(v24, v97);
      if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
      {
        sub_785A60(&dword_20D5D78);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
      }
      v25 = nullptr;
      if ( byte_20D5D7C == 0 )
        v25 = (int *)(&dword_20D5D78);
      if ( (uint8_t)sub_785F20(v25, v63) == 0 )
        goto LABEL_22;
      v29 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 7);
      v65 = (g4_cxa_guard_t *)sub_837200(v3, v29, v4);
      v30 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
      v62 = (g4_cxa_guard_t *)sub_837200(v3, v30, v4);
      v31 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
      obja = (char *)sub_837200(v3, v31, v4);
      v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
      v126 = (char *)sub_837200(v3, v32, v4);
      v128 = v62;
      v127 = obja;
      v129 = v65;
      v125 = v68;
      sub_C50000();
      v70 = *(uint32_t **)(sub_655F30() + 52);
      v66 = (g4_cxa_guard_t *)(v70 + 30);
      v33 = (g4_cxa_guard_t *)v70[31];
      v34 = (g4_cxa_guard_t *)(v70 + 30);
      if ( v33 != nullptr )
      {
        do
        {
          if ( v63 <= v33[4] )
          {
            v34 = v33;
            v33 = (g4_cxa_guard_t *)v33[2];
          }
          else
          {
            v33 = (g4_cxa_guard_t *)v33[3];
          }
        }
        while ( v33 != nullptr );
        if ( v66 != v34 && v63 >= v34[4] )
        {
LABEL_68:
          v34[5] = v125;
          v34[6] = (g4_cxa_guard_t)v126;
          v34[7] = (g4_cxa_guard_t)v127;
          v34[8] = (g4_cxa_guard_t)v128;
          v34[9] = (g4_cxa_guard_t)v129;
          sub_C4FF50();
          sub_C416C0();
LABEL_22:
          sub_C416C0();
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v85);
          g4_std::string::Destroy((char *)&v75 + 4);
          return (int *)grapher::ActorBase::FireEvent(v3, 1, v4);
        }
      }
      v53 = v34;
      v107 = -1;
      v108 = -1;
      v109 = -1;
      v110 = -1;
      v111 = -1;
      v116 = 2;
      v112 = &dword_213B814;
      v113 = &dword_213B814;
      v114 = &dword_213B814;
      v115 = &dword_213B814;
      v130[0] = v63;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v123 = 0;
      v124 = -1;
      memset(&v130[1], 255, 20);
      sub_C50000();
      v44 = v53;
      if ( v53 == v66 )
      {
        if ( v70[34] != 0 )
        {
          v45 = v70[33];
          if ( *(uint32_t *)(v45 + 16) < v130[0] )
          {
LABEL_78:
            sub_C500D0(0, v45, v130);
LABEL_79:
            v44 = v73;
            goto LABEL_67;
          }
        }
      }
      else
      {
        if ( v130[0] >= v53[4] )
        {
          if ( v130[0] <= v53[4] )
            goto LABEL_67;
          if ( v53 != (g4_cxa_guard_t *)v70[33] )
          {
            obje = (void *)v130[0];
            v46 = sub_19048E0(v53);
            if ( (int)(uintptr_t)(obje) >= *(uint32_t *)(v46 + 16) )
              goto LABEL_80;
            if ( v53[3] != 0 )
            {
              sub_C500D0(v46, v46, v130);
              v44 = v73;
              goto LABEL_67;
            }
          }
          sub_C500D0(0, v53, v130);
          goto LABEL_79;
        }
        if ( v53 == (g4_cxa_guard_t *)v70[32] )
          goto LABEL_66;
        objd = (void *)v130[0];
        v45 = sub_1904940(v53);
        v44 = v53;
        if ( (int)(uintptr_t)(objd) > *(uint32_t *)(v45 + 16) )
        {
          if ( *(uint32_t *)(v45 + 12) != 0 )
          {
LABEL_66:
            sub_C500D0(v44, v44, v130);
            v44 = v73;
LABEL_67:
            v54 = v44;
            sub_C416C0();
            sub_C416C0();
            v34 = v54;
            goto LABEL_68;
          }
          goto LABEL_78;
        }
      }
LABEL_80:
      sub_C50260(v130);
      v44 = v72;
      goto LABEL_67;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C57050_eac57050  (binary VA: 0xc57050)
// Original: sub_C57050
// ----------------------------------------------------------------------------
void sub_C57050_eac57050(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  void **v11;
  void **v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef grapher::ActorManager::Self *_g4_t_v27;
  typedef g4_cxa_guard_t *_g4_t_v28;
  typedef void *_g4_t_v29[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v20)) > _g4_s7 ? (24u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v21)) > _g4_s8 ? (28u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v22)) > _g4_s9 ? (28u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v23)) > _g4_s10 ? (32u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v24)) > _g4_s11 ? (32u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v25)) > _g4_s12 ? (36u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v26)) > _g4_s13 ? (36u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v27)) > _g4_s14 ? (40u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v28)) > _g4_s15 ? (44u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v29)) > _g4_s16 ? (56u + sizeof(_g4_t_v29)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);

  v3 = 0;
  G4_VCALL<void>(a1, 28, a3);
  v4 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v5 = v4 == 0;
  v6 = v4 + 12;
  v7 = *((uint32_t *)a1 + 13);
  if ( !v5 )
    v3 = v6;
  if ( v7 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v7 + 16);
  if ( v3 != 0 )
  {
    v8 = 0;
    *((uint32_t *)a1 + 13) = v3 - 12;
    if ( v3 != 12 )
      v8 = v3;
    sub_C5A550(v8, (char *)a1 + 52, 0);
  }
  else
  {
    *((uint32_t *)a1 + 13) = 0;
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  *((float *)a1 + 14) = sub_838060(
                          (int)(uintptr_t)(a1),
                          Variable,
                          a3,
                          v13,
                          v15,
                          v17,
                          v19,
                          v21,
                          v23,
                          v25,
                          (int)(uintptr_t)(v27),
                          (grapher::ActorContext::Self *)v28);
  v29[0] = v29;
  v29[1] = v29;
  sub_8560A0(a1, 1, (int)(uintptr_t)(v29), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  if ( a2 == 0 )
    *((uint8_t *)a1 + 61) = 0;
  sub_C4E810(a1, a3);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v10, a3, v14, v16, v18, v20, v22, v24, v26) == 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v11 = (void **)v29[0];
  if ( v29[0] != v29 )
  {
    while ( 1 )
    {
      v12 = (void **)*v11;
      opDelete(v11);
      if ( v12 == v29 )
        break;
      v11 = v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C57240_eac57240  (binary VA: 0xc57240)
// Original: sub_C57240
// ----------------------------------------------------------------------------
void sub_C57240_eac57240(void **a1, grapher::ActorContext::Self *a2)
{
  void **i;
  void *v3;
  void **v4;
  bool v5;
  void **v6;
  void *v7[9];

  grapher::ActorBase::Cancel((grapher::ActorBase::Self *)a1, a2);
  v7[0] = v7;
  v7[1] = v7;
  sub_8560A0((grapher::ActorBase::Self *)a1, 0, (int)(uintptr_t)(v7), (int)(uintptr_t)(a2), 0x7FFFFFFF);
  for ( i = (void **)v7[0]; i != v7; i = (void **)*i )
  {
    v3 = i[2];
    if ( v3 != nullptr )
      G4_VCALL<void>(v3, 272, 0);
  }
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    (int)(uintptr_t)(a1 + 13),
    a1[15]);
  a1[16] = a1 + 14;
  a1[17] = a1 + 14;
  v4 = (void **)v7[0];
  v5 = v7[0] == v7;
  a1[15] = nullptr;
  a1[18] = nullptr;
  if ( !v5 )
  {
    while ( 1 )
    {
      v6 = (void **)*v4;
      opDelete(v4);
      if ( v6 == v7 )
        break;
      v4 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAlive::Destroy_eac57320  (binary VA: 0xc57320)
// Original: ActorGameConditionIsAlive::~ActorGameConditionIsAlive
// ----------------------------------------------------------------------------
void ActorGameConditionIsAlive::Destroy_eac57320(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C408);
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    a1 + 52,
    *(void **)(a1 + 60));
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = a1 + 56;
  *(uint32_t *)(a1 + 68) = a1 + 56;
  *(uint32_t *)(a1 + 72) = 0;
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    a1 + 52,
    nullptr);
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C573A0_eac573a0  (binary VA: 0xc573a0)
// Original: sub_C573A0
// ----------------------------------------------------------------------------
void sub_C573A0_eac573a0(void **a1)
{
  *a1 = &off_206C408;
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    (int)(uintptr_t)(a1 + 13),
    a1[15]);
  a1[15] = nullptr;
  a1[16] = a1 + 14;
  a1[17] = a1 + 14;
  a1[18] = nullptr;
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    (int)(uintptr_t)(a1 + 13),
    nullptr);
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionWithin::Destroy_eac57430  (binary VA: 0xc57430)
// Original: ActorGameConditionWithin::~ActorGameConditionWithin
// ----------------------------------------------------------------------------
void ActorGameConditionWithin::Destroy_eac57430(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206C588);
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  a1[13] = (uint32_t)(uintptr_t)(a1 + 13);
  a1[14] = (uint32_t)(uintptr_t)(a1 + 13);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  a1[15] = (uint32_t)(uintptr_t)(a1 + 15);
  a1[16] = (uint32_t)(uintptr_t)(a1 + 15);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C57960_eac574b0  (binary VA: 0xc574b0)
// Original: sub_C57960
// ----------------------------------------------------------------------------
void sub_C57960_eac574b0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206C588);
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  a1[13] = (uint32_t)(uintptr_t)(a1 + 13);
  a1[14] = (uint32_t)(uintptr_t)(a1 + 13);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  a1[15] = (uint32_t)(uintptr_t)(a1 + 15);
  a1[16] = (uint32_t)(uintptr_t)(a1 + 15);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C579F0  (binary VA: 0xc579f0)
// Original: sub_C579F0
// ----------------------------------------------------------------------------
int sub_C579F0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  grapher::ActorVariable::Self *Variable;
  int v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
  v3 = 0;
  sub_837C70(v9, (int)(uintptr_t)(a1), Variable, a2, v6, v7, v8, v9[0], v9[1], v9[2], v9[3]);
  if ( *(uint32_t *)(v9[0] - 12) != 0 )
  {
    if ( byte_20D60F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D60F0) != 0 )
    {
      sub_AA7ED0((int)(uintptr_t)(&unk_20D6100));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D60F0);
      __cxa_atexit((void (*)(void *))sub_AD4B40, &unk_20D6100, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D6104 == 0 )
      v5 = &unk_20D6100;
    v3 = sub_ABE1A0((int)(uintptr_t)(v5), (const char **)v9);
  }
  g4_std::string::Destroy(v9);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_C57AF0  (binary VA: 0xc57af0)
// Original: sub_C57AF0
// ----------------------------------------------------------------------------
int sub_C57AF0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  grapher::ActorVariable::Self *Variable;
  int v3;
  void *v5;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
  v3 = 0;
  sub_837C70(v10, (int)(uintptr_t)(a1), Variable, a2, v7, v8, v9, v10[0], v10[1], v10[2], v10[3]);
  if ( *(uint32_t *)(v10[0] - 12) != 0 )
  {
    if ( byte_20D60F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D60F0) != 0 )
    {
      sub_AA7ED0((int)(uintptr_t)(&unk_20D6100));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D60F0);
      __cxa_atexit((void (*)(void *))sub_AD4B40, &unk_20D6100, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D6104 == 0 )
      v5 = &unk_20D6100;
    LOBYTE(v6) = sub_ABE220((int)(uintptr_t)(v5), (const char **)v10);
    v3 = v6 ^ 1;
  }
  g4_std::string::Destroy(v10);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_C57BF0  (binary VA: 0xc57bf0)
// Original: sub_C57BF0
// ----------------------------------------------------------------------------
int sub_C57BF0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v3;
  int v4;
  grapher::ActorContext::Self *v5;
  void *v6;
  int *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef void *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef const char *_g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v15)) > _g4_s6 ? (24u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v16)) > _g4_s7 ? (28u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v17)) > _g4_s8 ? (28u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v18)) > _g4_s9 ? (32u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v19)) > _g4_s10 ? (32u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v20)) > _g4_s11 ? (36u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v21)) > _g4_s12 ? (36u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v22)) > _g4_s13 ? (40u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v23)) > _g4_s14 ? (40u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v24)) > _g4_s15 ? (44u + sizeof(_g4_t_v24)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
  sub_837C70(v24, (int)(uintptr_t)(a1), Variable, a2, v10, v12, v14, (int)(uintptr_t)(v16), v18, v20, v22);
  v3 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 8);
  v4 = 0;
  v5 = sub_837200((int)(uintptr_t)(a1), v3, a2, v9, v11, v13, v15, (int)(uintptr_t)(v17), v19, v21, v23, (grapher::ActorContext::Self *)v24[0]);
  if ( *((uint32_t *)v24[0] - 3) != 0 && (int)(uintptr_t)(v5) > 0 )
  {
    if ( byte_20D60F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D60F0) != 0 )
    {
      sub_AA7ED0((int)(uintptr_t)(&unk_20D6100));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D60F0);
      __cxa_atexit((void (*)(void *))sub_AD4B40, &unk_20D6100, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D6104 == 0 )
      v6 = &unk_20D6100;
    sub_ABE110((int)(uintptr_t)(v6), v24, (int)(uintptr_t)(v5));
    if ( byte_20D2CF0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2CF0) != 0 )
    {
      sub_6E55D0((int)(uintptr_t)(&dword_20D2D00));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2CF0);
      __cxa_atexit((void (*)(void *))sub_6D4BF0, &dword_20D2D00, &unk_20D1280);
    }
    v7 = nullptr;
    if ( byte_20D2D0C == 0 )
      v7 = (int *)(&dword_20D2D00);
    v4 = 1;
    sub_6E5770((int)(uintptr_t)(v7), 0);
  }
  g4_std::string::Destroy(v24);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_C57DA0_eac57da0  (binary VA: 0xc57da0)
// Original: sub_C57DA0
// ----------------------------------------------------------------------------
int sub_C57DA0_eac57da0(int a1, int a2, int a3)
{
  return ((sub_C57DB0((grapher::ActorBase::Self *)(a1 - 52), a2, a3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C57DB0  (binary VA: 0xc57db0)
// Original: sub_C57DB0
// ----------------------------------------------------------------------------
void sub_C57DB0(grapher::ActorBase::Self *a1, int a2, int a3)
{
  if ( a3 == 1 )
  {
    if ( (uint8_t)sub_C57BF0(a1, (grapher::ActorContext::Self *)dword_20DEB60) != 0 )
    {
      *((uint32_t *)a1 + 14) = 0;
      sub_84BEC0((uint32_t *)dword_20DEB60, (uint32_t *)a1 + 14);
    }
    grapher::ActorBase::FireEvent(a1, 2, (grapher::ActorContext::Self *)dword_20DEB60);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C57E40_eac57e40  (binary VA: 0xc57e40)
// Original: sub_C57E40
// ----------------------------------------------------------------------------
int sub_C57E40_eac57e40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v6;
  grapher::ActorVariable::Self *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  grapher::ActorVariable::Self *v14;
  char *v15;
  int *v16;
  int v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef gameswf::ASValue::Self *_g4_t_v29;
  typedef gameswf::ASValue::Self *_g4_t_v30;
  typedef gameswf::ASValue::Self *_g4_t_v31;
  typedef gameswf::ASValue::Self *_g4_t_v32;
  typedef gameswf::ASValue::Self *_g4_t_v33;
  typedef void *_g4_t_obj;
  typedef void *_g4_t_obja;
  typedef g4_cxa_guard_t *_g4_t_v36;
  typedef g4_cxa_guard_t *_g4_t_v37;
  typedef g4_cxa_guard_t *_g4_t_v38;
  typedef g4_cxa_guard_t *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef g4_cxa_guard_t *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[4];
  typedef uint64_t _g4_t_v48;
  typedef grapher::ActorBase::Self **_g4_t_v49;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v26)) > _g4_s7 ? (24u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v27)) > _g4_s8 ? (28u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v28)) > _g4_s9 ? (28u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v29)) > _g4_s10 ? (32u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v30)) > _g4_s11 ? (32u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v31)) > _g4_s12 ? (32u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v32)) > _g4_s13 ? (32u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v33)) > _g4_s14 ? (32u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_obj)) > _g4_s15 ? (36u + sizeof(_g4_t_obj)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_obja)) > _g4_s16 ? (36u + sizeof(_g4_t_obja)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v36)) > _g4_s17 ? (40u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v37)) > _g4_s18 ? (40u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v38)) > _g4_s19 ? (40u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v39)) > _g4_s20 ? (44u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v40)) > _g4_s21 ? (44u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v41)) > _g4_s22 ? (44u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v42)) > _g4_s23 ? (56u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v43)) > _g4_s24 ? (60u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v44)) > _g4_s25 ? (64u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v45)) > _g4_s26 ? (68u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v46)) > _g4_s27 ? (72u + sizeof(_g4_t_v46)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v47)) > _g4_s28 ? (84u + sizeof(_g4_t_v47)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v48)) > _g4_s29 ? (88u + sizeof(_g4_t_v48)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v49)) > _g4_s30 ? (104u + sizeof(_g4_t_v49)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 36u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);

  v49 = &a1;
  v3 = a1;
  v4 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v6 = sub_837200(
         (int)(uintptr_t)(v3),
         Variable,
         v4,
         v20,
         v21,
         v23,
         v25,
         v27,
         (int)(uintptr_t)(v29),
         (int)(uintptr_t)(obj),
         (int)(uintptr_t)(v36),
         (grapher::ActorContext::Self *)v39);
  if ( (int)(uintptr_t)(v6) <= 0 )
  {
    v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    sub_837C70(&v43, (int)(uintptr_t)(v3), v14, v4, v22, v24, v26, v28, (int)(uintptr_t)(v30), (int)(uintptr_t)(obja), (int)(uintptr_t)(v37));
    v15 = v43;
    if ( byte_20D5D70 == 0 )
    {
      v33 = (gameswf::ASValue::Self *)v43;
      v18 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70);
      v15 = (char *)v33;
      if ( v18 != 0 )
      {
        sub_785A60((int)(uintptr_t)(&dword_20D5D78));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        v15 = (char *)v33;
      }
    }
    v16 = nullptr;
    if ( byte_20D5D7C == 0 )
      v16 = (int *)(&dword_20D5D78);
    sub_7CCAF0((int)(uintptr_t)(v16), v15);
    g4_std::string::Destroy(&v43);
  }
  else
  {
    v48 = 0xBFF0000000000000LL;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47[0] = 2;
    v47[1] = 0;
    v31 = (gameswf::ASValue::Self *)(v6);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    sub_837C70(&v42, (int)(uintptr_t)(v3), v7, v4, v22, v24, v26, v28, (int)(uintptr_t)(v31), (int)(uintptr_t)(obja), (int)(uintptr_t)(v37));
    v40 = v42;
    v8 = (int)(uintptr_t)(v32);
    if ( byte_20D5D70 == 0 )
    {
      v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70);
      v8 = (int)(uintptr_t)(v32);
      if ( v17 != 0 )
      {
        sub_785A60((int)(uintptr_t)(&dword_20D5D78));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        v8 = (int)(uintptr_t)(v32);
      }
    }
    v9 = nullptr;
    if ( byte_20D5D7C == 0 )
      v9 = (int *)(&dword_20D5D78);
    sub_7E2EE0(v9, v40, v8, -1, -1, 0, (gameswf::ASValue::Self *)v47);
    g4_std::string::Destroy(&v42);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
    v10 = v44;
    if ( v45 != v44 )
    {
      v41 = (g4_cxa_guard_t *)v3;
      v38 = (g4_cxa_guard_t *)v4;
      v11 = v44;
      v12 = v45;
      do
      {
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + 4));
        v19 = v11;
        v11 += 16;
        g4_std::string::Destroy(v19);
      }
      while ( v12 != v11 );
      v3 = (grapher::ActorBase::Self *)v41;
      v4 = (grapher::ActorContext::Self *)v38;
      v10 = v44;
    }
    if ( v10 != 0 )
      sub_4EB870(v10);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
}

// ----------------------------------------------------------------------------
// Function: sub_C58100  (binary VA: 0xc58100)
// Original: sub_C58100
// ----------------------------------------------------------------------------
int sub_C58100(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2, char a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  int v6;
  grapher::ActorVariable::Self *v7;
  int v8;
  grapher::ActorVariable::Self *v9;
  grapher::ActorVariable::Self *v10;
  int v11;
  int v12;
  void *v13;
  int v14;
  int v15;
  char *v16;
  int *v17;
  char *v18;
  char *v19;
  char *v20;
  int *v21;
  char *v22;
  grapher::ActorVariable::Self *v24;
  grapher::ActorVariable::Self *v25;
  int v26;
  void *v27;
  int v28;
  typedef char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36;
  typedef char *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[2];
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef const char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef uint8_t _g4_t_v51[12];
  typedef uint8_t _g4_t_v52[4];
  typedef double _g4_t_v53;
  typedef uint8_t _g4_t_v54[4];
  typedef uint64_t _g4_t_v55 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v56[4];
  typedef double _g4_t_v57;
  typedef char _g4_t_v58[4];
  typedef uint8_t _g4_t_v59[12];
  typedef char _g4_t_v60[4];
  typedef uint8_t _g4_t_v61[12];
  typedef char *_g4_t_v62;
  typedef char *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef grapher::ActorBase::Self **_g4_t_v65;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v30)) > _g4_s1 ? (0u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v31)) > _g4_s2 ? (48u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v32)) > _g4_s3 ? (48u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v33)) > _g4_s4 ? (48u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v34)) > _g4_s5 ? (48u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (59u + sizeof(_g4_t_v35)) > _g4_s6 ? (59u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v36)) > _g4_s7 ? (60u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v37)) > _g4_s8 ? (64u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v38)) > _g4_s9 ? (76u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v39)) > _g4_s10 ? (76u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v40)) > _g4_s11 ? (92u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v41)) > _g4_s12 ? (96u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v42)) > _g4_s13 ? (104u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v43)) > _g4_s14 ? (108u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v44)) > _g4_s15 ? (112u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v45)) > _g4_s16 ? (116u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v46)) > _g4_s17 ? (120u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v47)) > _g4_s18 ? (124u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v48)) > _g4_s19 ? (128u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v49)) > _g4_s20 ? (132u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v50)) > _g4_s21 ? (136u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v51)) > _g4_s22 ? (144u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v52)) > _g4_s23 ? (156u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (160u + sizeof(_g4_t_v53)) > _g4_s24 ? (160u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (168u + sizeof(_g4_t_v54)) > _g4_s25 ? (168u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v55)) > _g4_s26 ? (172u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v56)) > _g4_s27 ? (180u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (184u + sizeof(_g4_t_v57)) > _g4_s28 ? (184u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v58)) > _g4_s29 ? (192u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (196u + sizeof(_g4_t_v59)) > _g4_s30 ? (196u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (208u + sizeof(_g4_t_v60)) > _g4_s31 ? (208u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (212u + sizeof(_g4_t_v61)) > _g4_s32 ? (212u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (224u + sizeof(_g4_t_v62)) > _g4_s33 ? (224u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (228u + sizeof(_g4_t_v63)) > _g4_s34 ? (228u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (232u + sizeof(_g4_t_v64)) > _g4_s35 ? (232u + sizeof(_g4_t_v64)) : _g4_s35,
    _g4_s37 = (296u + sizeof(_g4_t_v65)) > _g4_s36 ? (296u + sizeof(_g4_t_v65)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 59u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 132u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 136u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 144u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 156u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 160u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 168u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 172u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 192u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 196u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 208u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 212u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 224u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 228u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 232u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 296u);

  v65 = &a1;
  v3 = a1;
  v4 = a2;
  v35 = a3;
  v38 = *(uint32_t **)(dword_20DDDC0 + 864);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v6 = (int)(uintptr_t)(sub_837200(v3, Variable, v4));
  v31 = (char *)sub_AC5E50(v38, v6);
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
  v8 = (int)(uintptr_t)(sub_837200(v3, v7, v4));
  v37 = (char *)sub_AC5E50(v38, v8);
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
  v36 = (int)(uintptr_t)(sub_837200(v3, v9, v4));
  v42 = (int)(uintptr_t)(&dword_213B814);
  if ( v31 != nullptr && *v31 != 0 )
  {
    v24 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
    sub_837200(v3, v24, v4);
    v25 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    v26 = (int)(uintptr_t)(sub_837200(v3, v25, v4));
    sub_AF1D00(v38, (int)(uintptr_t)(&v42), v31, v26);
  }
  v41[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v37 != nullptr && *v37 != 0 )
  {
    v62 = (char *)&dword_213B814;
    v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
    v11 = (int)(uintptr_t)(sub_837200(v3, v10, v4));
    v12 = v11;
    if ( v11 > 0 )
    {
      if ( byte_20D2D50 == 0 )
      {
        v34 = v11;
        v28 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50);
        v12 = v34;
        if ( v28 != 0 )
        {
          sub_7D7730(&unk_20D2D60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
          __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
          v12 = v34;
        }
      }
      v13 = nullptr;
      if ( byte_20D2D64 == 0 )
        v13 = &unk_20D2D60;
      sub_79D200(v13, 6, v12, &v62, 0);
    }
    sub_AF1D00(v38, (int)(uintptr_t)(v41), v37, (int)(uintptr_t)(v62));
    g4_std::string::Destroy(&v62);
  }
  if ( v35 != 0 )
  {
    grapher::ActorBase::GetVariable(v3, 7);
    sub_837C70(&v47);
    v14 = 0;
    v15 = 0;
    if ( *((uint32_t *)v47 - 3) != 0 )
    {
      if ( byte_20D60F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D60F0) != 0 )
      {
        sub_AA7ED0((int)(uintptr_t)(&unk_20D6100));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D60F0);
        __cxa_atexit((void (*)(void *))sub_AD4B40, &unk_20D6100, &unk_20D1280);
      }
      v27 = nullptr;
      if ( byte_20D6104 == 0 )
        v27 = &unk_20D6100;
      v39 = sub_ABE1A0((int)(uintptr_t)(v27), &v47);
      v14 = v39 / 60;
      v15 = v39 % 60;
    }
    g4_std::string::Destroy(&v47);
    sprintf((char *)&v62, "%02d:%02d", v14, v15);
    v48 = nullptr;
    v49 = nullptr;
    v50 = nullptr;
    v51[0] = 0;
    v51[1] = 0;
    gameswf::ASValue::setString((gameswf::ASValue::Self *)v51, (const char *)&v62);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "timeout", (int)(uintptr_t)(&v40));
    g4_std::string::construct_copy(v58, &v43);
    v59[0] = 0;
    v59[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, (const gameswf::ASValue::Self *)v51);
    if ( v49 == v50 )
    {
      sub_C40640(v58);
    }
    else
    {
      v16 = nullptr;
      if ( v49 != nullptr )
      {
        v32 = v49;
        g4_std::string::construct_copy(v49, v58);
        v32[4] = 0;
        v32[5] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v32 + 4), (const gameswf::ASValue::Self *)v59);
        v16 = v49;
      }
      v49 = v16 + 16;
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
    g4_std::string::Destroy(v58);
    g4_std::string::Destroy(&v43);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v51);
    v52[0] = 2;
    v52[1] = 0;
    v53 = (double)v36;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 1);
    if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
    {
      sub_785A60(&dword_20D5D78);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
    }
    v17 = nullptr;
    if ( byte_20D5D7C == 0 )
      v17 = (int *)(&dword_20D5D78);
    sub_7E2D40(
      (int)(uintptr_t)(v17),
      (int)(uintptr_t)("MissionZoneEnterDialog"),
      (int)(uintptr_t)(&v44),
      (int)(uintptr_t)(&v42),
      (int)(uintptr_t)(v41),
      0,
      (gameswf::ASValue::Self *)v52,
      (int)(uintptr_t)(&v48),
      0);
    g4_std::string::Destroy(&v44);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v52);
    v18 = v49;
    v19 = v48;
    if ( v49 != v48 )
    {
      do
      {
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v19 + 4));
        v29 = v19;
        v19 += 16;
        g4_std::string::Destroy(v29);
      }
      while ( v18 != v19 );
      v19 = v48;
    }
  }
  else
  {
    v55 = 0xBFF0000000000000LL;
    v62 = nullptr;
    v63 = nullptr;
    v64 = nullptr;
    v54[0] = 2;
    v54[1] = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "missionID", (int)(uintptr_t)(&v40) + 2);
    g4_std::string::construct_copy(v60, &v45);
    v61[0] = 0;
    v61[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v61, (const gameswf::ASValue::Self *)v54);
    if ( v63 == v64 )
    {
      sub_C40640(v60);
    }
    else
    {
      v20 = nullptr;
      if ( v63 != nullptr )
      {
        v33 = v63;
        g4_std::string::construct_copy(v63, v60);
        v33[4] = 0;
        v33[5] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v33 + 4), (const gameswf::ASValue::Self *)v61);
        v20 = v63;
      }
      v63 = v20 + 16;
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v61);
    g4_std::string::Destroy(v60);
    g4_std::string::Destroy(&v45);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
    v56[0] = 2;
    v56[1] = 0;
    v57 = (double)v36;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 3);
    if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
    {
      sub_785A60(&dword_20D5D78);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
    }
    v21 = nullptr;
    if ( byte_20D5D7C == 0 )
      v21 = (int *)(&dword_20D5D78);
    sub_7E2D40(
      (int)(uintptr_t)(v21),
      (int)(uintptr_t)("MissionZoneEnterDialog"),
      (int)(uintptr_t)(&v46),
      (int)(uintptr_t)(&v42),
      (int)(uintptr_t)(v41),
      0,
      (gameswf::ASValue::Self *)v56,
      (int)(uintptr_t)(&v62),
      0);
    g4_std::string::Destroy(&v46);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
    v22 = v63;
    v19 = v62;
    if ( v63 != v62 )
    {
      do
      {
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v19 + 4));
        v30 = v19;
        v19 += 16;
        g4_std::string::Destroy(v30);
      }
      while ( v22 != v19 );
      v19 = v62;
    }
  }
  if ( v19 != nullptr )
    sub_4EB870((int)(uintptr_t)(v19));
  g4_std::string::Destroy(v41);
  return ((g4_std::string::Destroy(&v42)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C58A60  (binary VA: 0xc58a60)
// Original: sub_C58A60
// ----------------------------------------------------------------------------
int sub_C58A60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  void *v4;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef bool _g4_t_v10;
  typedef g4_cxa_guard_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef const char *_g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v11)) > _g4_s4 ? (12u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v12)) > _g4_s5 ? (16u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v13)) > _g4_s6 ? (20u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v14)) > _g4_s7 ? (24u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v15)) > _g4_s8 ? (28u + sizeof(_g4_t_v15)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
  sub_837C70(v15, (int)(uintptr_t)(a1), Variable, a3, v7, v8, (int)(uintptr_t)(v9), (int)(uintptr_t)(v11), v12, v13, v14);
  if ( *((uint32_t *)v15[0] - 3) == 0 )
  {
    g4_std::string::Destroy(v15);
LABEL_3:
    sub_C58100(a1, a3, 0);
    if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
    {
      sub_793360((int)(uintptr_t)(&unk_20D2B98));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
      __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D2B9C == 0 )
      v4 = &unk_20D2B98;
    sub_793820((int)(uintptr_t)(v4), (int)(uintptr_t)(a1) + 52);
    goto LABEL_7;
  }
  if ( byte_20D60F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D60F0) != 0 )
  {
    sub_AA7ED0((int)(uintptr_t)(&unk_20D6100));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D60F0);
    __cxa_atexit((void (*)(void *))sub_AD4B40, &unk_20D6100, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D6104 == 0 )
    v6 = &unk_20D6100;
  v10 = sub_ABE220((int)(uintptr_t)(v6), v15);
  g4_std::string::Destroy(v15);
  if ( v10 )
    goto LABEL_3;
  sub_C58100(a1, a3, 1);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
LABEL_7:
  dword_20DEB60 = (int)(uintptr_t)(a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C58CD0  (binary VA: 0xc58cd0)
// Original: sub_C58CD0
// ----------------------------------------------------------------------------
uint32_t * sub_C58CD0(uint32_t *a1, int a2, int *a3, int *a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  uint32_t *v7;
  uint32_t *i;
  char v11;

  if ( a2 != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 1;
    if ( a3 != (int *)(uintptr_t)(&dword_20D7CDC) )
      v11 = *a4 < (unsigned int)a3[4];
  }
  v4 = (uint32_t *)opNew(0x2Cu);
  if ( v4 != (uint32_t *)-16 )
  {
    v5 = *a4;
    v4[6] = 0;
    v4[4] = v5;
    v4[7] = 0;
    v4[10] = 0;
    v4[8] = (uint32_t)(uintptr_t)(v4 + 6);
    v4[9] = (uint32_t)(uintptr_t)(v4 + 6);
    v6 = (int *)a4[3];
    if ( v6 != nullptr )
    {
      v7 = g4_std::Rb_tree_unsigned_int_pair_unsign_cdf969::M_copy(
             (int)(uintptr_t)(v4 + 5),
             v6,
             (int)(uintptr_t)(v4 + 6));
      v4[7] = (uint32_t)(uintptr_t)(v7);
      for ( i = v7; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      v4[8] = (uint32_t)(uintptr_t)(i);
      while ( v7[3] != 0 )
        v7 = (uint32_t *)v7[3];
      v4[9] = (uint32_t)(uintptr_t)(v7);
      v4[10] = a4[6];
    }
  }
  sub_1904970(v11, v4, a3, &dword_20D7CDC);
  ++dword_20D7CEC;
  *a1 = (uint32_t)(uintptr_t)(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C58DF0  (binary VA: 0xc58df0)
// Original: sub_C58DF0
// ----------------------------------------------------------------------------
int sub_C58DF0(int a1, int *a2)
{
  int *v3;
  unsigned int v4;
  int *v5;
  char v6; // bp
  unsigned int v7;
  int v9;
  typedef int *_g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = (int *)dword_20D7CE0;
  if ( dword_20D7CE0 == 0 )
  {
    v3 = (int *)(&dword_20D7CDC);
    goto LABEL_10;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = v3[4];
    if ( v7 <= v4 )
      break;
    v5 = (int *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (int *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v11 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v7 )
      goto LABEL_9;
LABEL_12:
    sub_C58CD0(v12, 0, v11, a2);
LABEL_13:
    v9 = v12[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_10:
  if ( (int *)dword_20D7CE4 == v3 )
  {
    sub_C58CD0(v12, 0, v3, a2);
    goto LABEL_13;
  }
  v11 = v3;
  v3 = (int *)sub_19048F0(v3);
  if ( *a2 > (unsigned int)v3[4] )
    goto LABEL_12;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C58ED0_eac58ed0  (binary VA: 0xc58ed0)
// Original: sub_C58ED0
// ----------------------------------------------------------------------------
int sub_C58ED0_eac58ed0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorContext::Self *v8;
  const char *v9;
  size_t v10;
  char *v11;
  int v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorContext::Self *v18;
  char *v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v25;
  grapher::ActorVariable::Self *v26;
  grapher::ActorContext::Self *v27;
  int v28;
  void *v29;
  grapher::ActorVariable::Self *v30;
  grapher::ActorContext::Self *v31;
  const char *v32;
  size_t v33;
  char *v34;
  size_t v35;
  grapher::ActorVariable::Self *v36;
  grapher::ActorVariable::Self *v37;
  grapher::ActorContext::Self *v38;
  const char *v39;
  int v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef grapher::ActorContext::Self *_g4_t_v113;
  typedef grapher::ActorContext::Self *_g4_t_v114;
  typedef grapher::ActorContext::Self *_g4_t_v115;
  typedef grapher::ActorContext::Self *_g4_t_v116;
  typedef grapher::ActorContext::Self *_g4_t_v117;
  typedef grapher::ActorContext::Self *_g4_t_v118;
  typedef grapher::ActorContext::Self *_g4_t_v119;
  typedef grapher::ActorContext::Self *_g4_t_v120;
  typedef grapher::ActorContext::Self *_g4_t_v121;
  typedef char *_g4_t_v122;
  typedef grapher::ActorContext::Self *_g4_t_v123;
  typedef const char *_g4_t_obj;
  typedef uint32_t *_g4_t_obja;
  typedef grapher::ActorContext::Self *_g4_t_objb;
  typedef const char *_g4_t_objc;
  typedef char *_g4_t_objd;
  typedef grapher::ActorContext::Self *_g4_t_obje;
  typedef uint32_t *_g4_t_v130;
  typedef grapher::ActorContext::Self *_g4_t_v131;
  typedef g4_cxa_guard_t *_g4_t_v132;
  typedef g4_cxa_guard_t *_g4_t_v133;
  typedef g4_cxa_guard_t *_g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137[4];
  typedef char *_g4_t_src[2];
  typedef char *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef char *_g4_t_s;
  typedef char *_g4_t_format;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef uint8_t _g4_t_v148[20];
  typedef grapher::ActorBase::Self **_g4_t_v149;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v41)) > _g4_s0 ? (8u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v42)) > _g4_s1 ? (20u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v43)) > _g4_s2 ? (20u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v44)) > _g4_s3 ? (20u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v46)) > _g4_s5 ? (20u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v47)) > _g4_s6 ? (20u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v48)) > _g4_s7 ? (20u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v49)) > _g4_s8 ? (20u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v50)) > _g4_s9 ? (24u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v51)) > _g4_s10 ? (24u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v52)) > _g4_s11 ? (24u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v53)) > _g4_s12 ? (24u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v54)) > _g4_s13 ? (24u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v55)) > _g4_s14 ? (24u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v56)) > _g4_s15 ? (24u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v57)) > _g4_s16 ? (24u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v58)) > _g4_s17 ? (24u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v59)) > _g4_s18 ? (28u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v60)) > _g4_s19 ? (28u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v61)) > _g4_s20 ? (28u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v62)) > _g4_s21 ? (28u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v63)) > _g4_s22 ? (28u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v64)) > _g4_s23 ? (28u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v65)) > _g4_s24 ? (28u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (28u + sizeof(_g4_t_v66)) > _g4_s25 ? (28u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_v67)) > _g4_s26 ? (28u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v68)) > _g4_s27 ? (32u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_v69)) > _g4_s28 ? (32u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v70)) > _g4_s29 ? (32u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (32u + sizeof(_g4_t_v71)) > _g4_s30 ? (32u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (32u + sizeof(_g4_t_v72)) > _g4_s31 ? (32u + sizeof(_g4_t_v72)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v73)) > _g4_s32 ? (32u + sizeof(_g4_t_v73)) : _g4_s32,
    _g4_s34 = (32u + sizeof(_g4_t_v74)) > _g4_s33 ? (32u + sizeof(_g4_t_v74)) : _g4_s33,
    _g4_s35 = (32u + sizeof(_g4_t_v75)) > _g4_s34 ? (32u + sizeof(_g4_t_v75)) : _g4_s34,
    _g4_s36 = (32u + sizeof(_g4_t_v76)) > _g4_s35 ? (32u + sizeof(_g4_t_v76)) : _g4_s35,
    _g4_s37 = (36u + sizeof(_g4_t_v77)) > _g4_s36 ? (36u + sizeof(_g4_t_v77)) : _g4_s36,
    _g4_s38 = (36u + sizeof(_g4_t_v78)) > _g4_s37 ? (36u + sizeof(_g4_t_v78)) : _g4_s37,
    _g4_s39 = (36u + sizeof(_g4_t_v79)) > _g4_s38 ? (36u + sizeof(_g4_t_v79)) : _g4_s38,
    _g4_s40 = (36u + sizeof(_g4_t_v80)) > _g4_s39 ? (36u + sizeof(_g4_t_v80)) : _g4_s39,
    _g4_s41 = (36u + sizeof(_g4_t_v81)) > _g4_s40 ? (36u + sizeof(_g4_t_v81)) : _g4_s40,
    _g4_s42 = (36u + sizeof(_g4_t_v82)) > _g4_s41 ? (36u + sizeof(_g4_t_v82)) : _g4_s41,
    _g4_s43 = (36u + sizeof(_g4_t_v83)) > _g4_s42 ? (36u + sizeof(_g4_t_v83)) : _g4_s42,
    _g4_s44 = (36u + sizeof(_g4_t_v84)) > _g4_s43 ? (36u + sizeof(_g4_t_v84)) : _g4_s43,
    _g4_s45 = (36u + sizeof(_g4_t_v85)) > _g4_s44 ? (36u + sizeof(_g4_t_v85)) : _g4_s44,
    _g4_s46 = (40u + sizeof(_g4_t_v86)) > _g4_s45 ? (40u + sizeof(_g4_t_v86)) : _g4_s45,
    _g4_s47 = (40u + sizeof(_g4_t_v87)) > _g4_s46 ? (40u + sizeof(_g4_t_v87)) : _g4_s46,
    _g4_s48 = (40u + sizeof(_g4_t_v88)) > _g4_s47 ? (40u + sizeof(_g4_t_v88)) : _g4_s47,
    _g4_s49 = (40u + sizeof(_g4_t_v89)) > _g4_s48 ? (40u + sizeof(_g4_t_v89)) : _g4_s48,
    _g4_s50 = (40u + sizeof(_g4_t_v90)) > _g4_s49 ? (40u + sizeof(_g4_t_v90)) : _g4_s49,
    _g4_s51 = (40u + sizeof(_g4_t_v91)) > _g4_s50 ? (40u + sizeof(_g4_t_v91)) : _g4_s50,
    _g4_s52 = (40u + sizeof(_g4_t_v92)) > _g4_s51 ? (40u + sizeof(_g4_t_v92)) : _g4_s51,
    _g4_s53 = (40u + sizeof(_g4_t_v93)) > _g4_s52 ? (40u + sizeof(_g4_t_v93)) : _g4_s52,
    _g4_s54 = (40u + sizeof(_g4_t_v94)) > _g4_s53 ? (40u + sizeof(_g4_t_v94)) : _g4_s53,
    _g4_s55 = (44u + sizeof(_g4_t_v95)) > _g4_s54 ? (44u + sizeof(_g4_t_v95)) : _g4_s54,
    _g4_s56 = (44u + sizeof(_g4_t_v96)) > _g4_s55 ? (44u + sizeof(_g4_t_v96)) : _g4_s55,
    _g4_s57 = (44u + sizeof(_g4_t_v97)) > _g4_s56 ? (44u + sizeof(_g4_t_v97)) : _g4_s56,
    _g4_s58 = (44u + sizeof(_g4_t_v98)) > _g4_s57 ? (44u + sizeof(_g4_t_v98)) : _g4_s57,
    _g4_s59 = (44u + sizeof(_g4_t_v99)) > _g4_s58 ? (44u + sizeof(_g4_t_v99)) : _g4_s58,
    _g4_s60 = (44u + sizeof(_g4_t_v100)) > _g4_s59 ? (44u + sizeof(_g4_t_v100)) : _g4_s59,
    _g4_s61 = (44u + sizeof(_g4_t_v101)) > _g4_s60 ? (44u + sizeof(_g4_t_v101)) : _g4_s60,
    _g4_s62 = (44u + sizeof(_g4_t_v102)) > _g4_s61 ? (44u + sizeof(_g4_t_v102)) : _g4_s61,
    _g4_s63 = (44u + sizeof(_g4_t_v103)) > _g4_s62 ? (44u + sizeof(_g4_t_v103)) : _g4_s62,
    _g4_s64 = (48u + sizeof(_g4_t_v104)) > _g4_s63 ? (48u + sizeof(_g4_t_v104)) : _g4_s63,
    _g4_s65 = (48u + sizeof(_g4_t_v105)) > _g4_s64 ? (48u + sizeof(_g4_t_v105)) : _g4_s64,
    _g4_s66 = (48u + sizeof(_g4_t_v106)) > _g4_s65 ? (48u + sizeof(_g4_t_v106)) : _g4_s65,
    _g4_s67 = (48u + sizeof(_g4_t_v107)) > _g4_s66 ? (48u + sizeof(_g4_t_v107)) : _g4_s66,
    _g4_s68 = (48u + sizeof(_g4_t_v108)) > _g4_s67 ? (48u + sizeof(_g4_t_v108)) : _g4_s67,
    _g4_s69 = (48u + sizeof(_g4_t_v109)) > _g4_s68 ? (48u + sizeof(_g4_t_v109)) : _g4_s68,
    _g4_s70 = (48u + sizeof(_g4_t_v110)) > _g4_s69 ? (48u + sizeof(_g4_t_v110)) : _g4_s69,
    _g4_s71 = (48u + sizeof(_g4_t_v111)) > _g4_s70 ? (48u + sizeof(_g4_t_v111)) : _g4_s70,
    _g4_s72 = (48u + sizeof(_g4_t_v112)) > _g4_s71 ? (48u + sizeof(_g4_t_v112)) : _g4_s71,
    _g4_s73 = (52u + sizeof(_g4_t_v113)) > _g4_s72 ? (52u + sizeof(_g4_t_v113)) : _g4_s72,
    _g4_s74 = (52u + sizeof(_g4_t_v114)) > _g4_s73 ? (52u + sizeof(_g4_t_v114)) : _g4_s73,
    _g4_s75 = (52u + sizeof(_g4_t_v115)) > _g4_s74 ? (52u + sizeof(_g4_t_v115)) : _g4_s74,
    _g4_s76 = (52u + sizeof(_g4_t_v116)) > _g4_s75 ? (52u + sizeof(_g4_t_v116)) : _g4_s75,
    _g4_s77 = (52u + sizeof(_g4_t_v117)) > _g4_s76 ? (52u + sizeof(_g4_t_v117)) : _g4_s76,
    _g4_s78 = (52u + sizeof(_g4_t_v118)) > _g4_s77 ? (52u + sizeof(_g4_t_v118)) : _g4_s77,
    _g4_s79 = (52u + sizeof(_g4_t_v119)) > _g4_s78 ? (52u + sizeof(_g4_t_v119)) : _g4_s78,
    _g4_s80 = (52u + sizeof(_g4_t_v120)) > _g4_s79 ? (52u + sizeof(_g4_t_v120)) : _g4_s79,
    _g4_s81 = (64u + sizeof(_g4_t_v121)) > _g4_s80 ? (64u + sizeof(_g4_t_v121)) : _g4_s80,
    _g4_s82 = (68u + sizeof(_g4_t_v122)) > _g4_s81 ? (68u + sizeof(_g4_t_v122)) : _g4_s81,
    _g4_s83 = (68u + sizeof(_g4_t_v123)) > _g4_s82 ? (68u + sizeof(_g4_t_v123)) : _g4_s82,
    _g4_s84 = (72u + sizeof(_g4_t_obj)) > _g4_s83 ? (72u + sizeof(_g4_t_obj)) : _g4_s83,
    _g4_s85 = (72u + sizeof(_g4_t_obja)) > _g4_s84 ? (72u + sizeof(_g4_t_obja)) : _g4_s84,
    _g4_s86 = (72u + sizeof(_g4_t_objb)) > _g4_s85 ? (72u + sizeof(_g4_t_objb)) : _g4_s85,
    _g4_s87 = (72u + sizeof(_g4_t_objc)) > _g4_s86 ? (72u + sizeof(_g4_t_objc)) : _g4_s86,
    _g4_s88 = (72u + sizeof(_g4_t_objd)) > _g4_s87 ? (72u + sizeof(_g4_t_objd)) : _g4_s87,
    _g4_s89 = (72u + sizeof(_g4_t_obje)) > _g4_s88 ? (72u + sizeof(_g4_t_obje)) : _g4_s88,
    _g4_s90 = (76u + sizeof(_g4_t_v130)) > _g4_s89 ? (76u + sizeof(_g4_t_v130)) : _g4_s89,
    _g4_s91 = (76u + sizeof(_g4_t_v131)) > _g4_s90 ? (76u + sizeof(_g4_t_v131)) : _g4_s90,
    _g4_s92 = (80u + sizeof(_g4_t_v132)) > _g4_s91 ? (80u + sizeof(_g4_t_v132)) : _g4_s91,
    _g4_s93 = (80u + sizeof(_g4_t_v133)) > _g4_s92 ? (80u + sizeof(_g4_t_v133)) : _g4_s92,
    _g4_s94 = (84u + sizeof(_g4_t_v134)) > _g4_s93 ? (84u + sizeof(_g4_t_v134)) : _g4_s93,
    _g4_s95 = (99u + sizeof(_g4_t_v135)) > _g4_s94 ? (99u + sizeof(_g4_t_v135)) : _g4_s94,
    _g4_s96 = (100u + sizeof(_g4_t_v136)) > _g4_s95 ? (100u + sizeof(_g4_t_v136)) : _g4_s95,
    _g4_s97 = (104u + sizeof(_g4_t_v137)) > _g4_s96 ? (104u + sizeof(_g4_t_v137)) : _g4_s96,
    _g4_s98 = (120u + sizeof(_g4_t_src)) > _g4_s97 ? (120u + sizeof(_g4_t_src)) : _g4_s97,
    _g4_s99 = (128u + sizeof(_g4_t_v139)) > _g4_s98 ? (128u + sizeof(_g4_t_v139)) : _g4_s98,
    _g4_s100 = (132u + sizeof(_g4_t_v140)) > _g4_s99 ? (132u + sizeof(_g4_t_v140)) : _g4_s99,
    _g4_s101 = (136u + sizeof(_g4_t_s)) > _g4_s100 ? (136u + sizeof(_g4_t_s)) : _g4_s100,
    _g4_s102 = (140u + sizeof(_g4_t_format)) > _g4_s101 ? (140u + sizeof(_g4_t_format)) : _g4_s101,
    _g4_s103 = (144u + sizeof(_g4_t_v143)) > _g4_s102 ? (144u + sizeof(_g4_t_v143)) : _g4_s102,
    _g4_s104 = (148u + sizeof(_g4_t_v144)) > _g4_s103 ? (148u + sizeof(_g4_t_v144)) : _g4_s103,
    _g4_s105 = (152u + sizeof(_g4_t_v145)) > _g4_s104 ? (152u + sizeof(_g4_t_v145)) : _g4_s104,
    _g4_s106 = (156u + sizeof(_g4_t_v146)) > _g4_s105 ? (156u + sizeof(_g4_t_v146)) : _g4_s105,
    _g4_s107 = (160u + sizeof(_g4_t_v147)) > _g4_s106 ? (160u + sizeof(_g4_t_v147)) : _g4_s106,
    _g4_s108 = (172u + sizeof(_g4_t_v148)) > _g4_s107 ? (172u + sizeof(_g4_t_v148)) : _g4_s107,
    _g4_s109 = (192u + sizeof(_g4_t_v149)) > _g4_s108 ? (192u + sizeof(_g4_t_v149)) : _g4_s108
  };
  alignas(16) uint8_t _g4_sf[_g4_s109];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 36u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 36u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 36u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 40u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 40u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 40u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 40u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 40u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 44u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 44u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 44u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 44u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 44u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 44u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 44u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 48u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 48u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 48u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 52u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 52u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 52u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 52u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 52u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 52u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 52u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 52u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 64u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 68u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 68u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 72u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 72u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 72u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 72u);
  _g4_t_objd &objd = *reinterpret_cast<_g4_t_objd *>(_g4_sf + 72u);
  _g4_t_obje &obje = *reinterpret_cast<_g4_t_obje *>(_g4_sf + 72u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 76u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 76u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 80u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 80u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 84u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 99u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 100u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 104u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 120u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 128u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 132u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 136u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 140u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 144u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 148u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 152u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 156u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 160u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 172u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 192u);

  v149 = &a1;
  v3 = a1;
  v4 = a3;
  v130 = *(uint32_t **)(dword_20DDDC0 + 864);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(&v139, (int)(uintptr_t)(v3), Variable, v4, v50, v59, v68, v77, v86, v95, v104);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v140), (char *)&unk_1B15112, (int)(uintptr_t)(&v135));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&s), (char *)&unk_1B15112, (int)(uintptr_t)(&v136));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&format), (char *)&unk_1B15112, (int)(uintptr_t)(&v136) + 1);
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
  if ( (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(v3), v6, v4, v42, v51, v60, v69, v78, v87, v96, v105, v113)) >= 0 )
  {
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
    v8 = sub_837200((int)(uintptr_t)(v3), v7, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v9 = sub_AC5E50(v130, (int)(uintptr_t)(v8));
    if ( v9 != nullptr )
    {
      obj = v9;
      v10 = strlen(v9);
      v11 = (char *)obj;
    }
    else
    {
      v10 = 0;
      v11 = (char *)&unk_1B15112;
    }
    g4_std_compat::string_assign((int)(uintptr_t)(&format), v11, v10);
  }
  obja = (uint32_t *)dword_20DA090;
  v12 = obja[13 * sub_5A5890(v139, 0xB4A46154) + 7];
  if ( v12 == 24 )
  {
    v137[0] = (int)(uintptr_t)(&dword_213B814);
    src[0] = (char *)&dword_213B814;
    v26 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v27 = sub_837200((int)(uintptr_t)(v3), v26, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v28 = (int)(uintptr_t)(v27);
    if ( byte_20D2D50 == 0 )
    {
      v123 = v27;
      v40 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50);
      v28 = (int)(uintptr_t)(v123);
      if ( v40 != 0 )
      {
        sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
        v28 = (int)(uintptr_t)(v123);
      }
    }
    v29 = nullptr;
    if ( byte_20D2D64 == 0 )
      v29 = &unk_20D2D60;
    sub_79D200((int)(uintptr_t)(v29), 6, v28, v137, 0);
    sub_AF1D00(v130, (int)(uintptr_t)(src), format, v137[0]);
    strcpy(((char *)(&byte_20DEA60)), src[0]);
    v30 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    v31 = sub_837200((int)(uintptr_t)(v3), v30, v4, v48, v57, v66, v75, v84, v93, v102, v111, v119);
    v32 = sub_AC5E50(v130, (int)(uintptr_t)(v31));
    if ( v32 != nullptr )
    {
      objc = v32;
      v33 = strlen(v32);
      v34 = (char *)objc;
    }
    else
    {
      v33 = 0;
      v34 = (char *)&unk_1B15112;
    }
    g4_std_compat::string_assign((int)(uintptr_t)(&v140), v34, v33);
    objd = *(char **)(dword_20D92B0 + 8);
    v35 = strlen(objd);
    g4_std_compat::string_assign((int)(uintptr_t)(&s), objd, v35);
    g4_std::string::Destroy(src);
    g4_std::string::Destroy(v137);
  }
  else if ( v12 == 20 )
  {
    v36 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    obje = sub_837200((int)(uintptr_t)(v3), v36, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v37 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    v38 = sub_837200((int)(uintptr_t)(v3), v37, v4, v49, v58, v67, v76, v85, v94, v103, v112, v120);
    v39 = sub_AC5E50(v130, (int)(uintptr_t)(v38));
    sprintf(((char *)(&byte_20DEA60)), v39, obje);
    g4_std::string::assign_str(&v140, &format);
  }
  else
  {
    v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
    v132 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(v3), v13, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
    v131 = sub_837200((int)(uintptr_t)(v3), v14, v4, v44, v53, v62, v71, v80, v89, v98, v107, v115);
    v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
    v121 = sub_837200((int)(uintptr_t)(v3), v15, v4, v45, v54, v63, v72, v81, v90, v99, v108, v116);
    v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    objb = sub_837200((int)(uintptr_t)(v3), v16, v4, v46, v55, v64, v73, v82, v91, v100, v109, v117);
    v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v18 = sub_837200((int)(uintptr_t)(v3), v17, v4, v47, v56, v65, v74, v83, v92, v101, v110, v118);
    sprintf(((char *)(&byte_20DEA60)), format, v18, objb, v121, v131, v132);
  }
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148[0] = 0;
  v148[1] = 0;
  gameswf::ASValue::setString((gameswf::ASValue::Self *)v148, s);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v144), (char *)&unk_1B15112, (int)(uintptr_t)(&v136) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v143), ((char *)(&byte_20DEA60)), (int)(uintptr_t)(&v136) + 2);
  v19 = v139;
  if ( byte_20D5D70 == 0 )
  {
    v122 = v139;
    v25 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70);
    v19 = v122;
    if ( v25 != 0 )
    {
      sub_785A60((int)(uintptr_t)(&dword_20D5D78));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
      v19 = v122;
    }
  }
  v20 = nullptr;
  if ( byte_20D5D7C == 0 )
    v20 = (int *)(&dword_20D5D78);
  sub_7E2D40(v20, v19, (int)(uintptr_t)(&v143), (int)(uintptr_t)(&v140), (int)(uintptr_t)(&v144), 0, (gameswf::ASValue::Self *)v148, (int)(uintptr_t)(&v145), 0);
  g4_std::string::Destroy(&v143);
  g4_std::string::Destroy(&v144);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v148);
  v21 = v145;
  if ( v146 != v145 )
  {
    v134 = (g4_cxa_guard_t *)v3;
    v133 = (g4_cxa_guard_t *)v4;
    v22 = v145;
    v23 = v146;
    do
    {
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v22 + 4));
      v41 = v22;
      v22 += 16;
      g4_std::string::Destroy(v41);
    }
    while ( v23 != v22 );
    v3 = (grapher::ActorBase::Self *)v134;
    v4 = (grapher::ActorContext::Self *)v133;
    v21 = v145;
  }
  if ( v21 != 0 )
    sub_4EB870(v21);
  grapher::ActorBase::FireEvent(v3, 1, v4);
  g4_std::string::Destroy(&format);
  g4_std::string::Destroy(&s);
  g4_std::string::Destroy(&v140);
  return ((g4_std::string::Destroy(&v139)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C595B0  (binary VA: 0xc595b0)
// Original: sub_C595B0
// ----------------------------------------------------------------------------
int sub_C595B0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  grapher::ActorBase::Self *v2;
  int v3; // kr04_4
  int result;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  char *v8;
  char *v9;
  int *v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef grapher::ActorContext::Self *_g4_t_v38;
  typedef grapher::ActorContext::Self *_g4_t_v39;
  typedef grapher::ActorContext::Self *_g4_t_v40;
  typedef grapher::ActorContext::Self *_g4_t_v41;
  typedef grapher::ActorContext::Self *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_s[8];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint16_t _g4_t_v54[12];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v14)) > _g4_s1 ? (20u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v20)) > _g4_s7 ? (28u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v21)) > _g4_s8 ? (28u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v22)) > _g4_s9 ? (28u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v23)) > _g4_s10 ? (32u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v24)) > _g4_s11 ? (32u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v25)) > _g4_s12 ? (32u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v26)) > _g4_s13 ? (36u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v27)) > _g4_s14 ? (36u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v28)) > _g4_s15 ? (36u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v29)) > _g4_s16 ? (40u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v30)) > _g4_s17 ? (40u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v31)) > _g4_s18 ? (40u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v32)) > _g4_s19 ? (44u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v33)) > _g4_s20 ? (44u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v34)) > _g4_s21 ? (44u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v35)) > _g4_s22 ? (48u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v36)) > _g4_s23 ? (48u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v37)) > _g4_s24 ? (48u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v38)) > _g4_s25 ? (52u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v39)) > _g4_s26 ? (52u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v40)) > _g4_s27 ? (52u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v41)) > _g4_s28 ? (68u + sizeof(_g4_t_v41)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v42)) > _g4_s29 ? (72u + sizeof(_g4_t_v42)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v43)) > _g4_s30 ? (72u + sizeof(_g4_t_v43)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v44)) > _g4_s31 ? (80u + sizeof(_g4_t_v44)) : _g4_s31,
    _g4_s33 = (84u + sizeof(_g4_t_v45)) > _g4_s32 ? (84u + sizeof(_g4_t_v45)) : _g4_s32,
    _g4_s34 = (97u + sizeof(_g4_t_v46)) > _g4_s33 ? (97u + sizeof(_g4_t_v46)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v47)) > _g4_s34 ? (100u + sizeof(_g4_t_v47)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v48)) > _g4_s35 ? (104u + sizeof(_g4_t_v48)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v49)) > _g4_s36 ? (108u + sizeof(_g4_t_v49)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_s)) > _g4_s37 ? (112u + sizeof(_g4_t_s)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v51)) > _g4_s38 ? (120u + sizeof(_g4_t_v51)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v52)) > _g4_s39 ? (124u + sizeof(_g4_t_v52)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v53)) > _g4_s40 ? (128u + sizeof(_g4_t_v53)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v54)) > _g4_s41 ? (140u + sizeof(_g4_t_v54)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 97u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 120u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);

  v2 = a1;
  v3 = *((uint32_t *)a1 + 13);
  result = 274877907 * v3;
  v45 = v3 / 1000;
  if ( *((uint32_t *)a1 + 14) != v3 / 1000 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v42 = sub_837200((int)(uintptr_t)(a1), Variable, a2, v14, v17, v20, v23, v26, v29, v32, v35, v38);
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    v41 = sub_837200((int)(uintptr_t)(a1), v6, a2, v15, v18, v21, v24, v27, v30, v33, v36, v39);
    sprintf(s, "%i", v45 + 1);
    v44 = sub_5A5890("WarningDialog", 0xB4A46154);
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
    *(double *)&v54[2] = (double)(int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), v7, a2, v16, v19, v22, v25, v28, v31, v34, v37, v40));
    v54[0] = 2;
    v8 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(v41));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), v8, (int)(uintptr_t)(&v46) + 2);
    v9 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(v42));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), v9, (int)(uintptr_t)(&v46) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), s, (int)(uintptr_t)(&v46));
    v43 = (char *)&unk_1B15112;
    if ( v44 >= 0 && dword_20DA0A0 > (unsigned int)v44 )
    {
      v43 = nullptr;
      switch ( v44 )
      {
        case 0:
          v43 = "DefaultDialog";
          break;
        case 1:
          v43 = "GameActionDialog";
          break;
        case 2:
          v43 = "ObjectiveDialog";
          break;
        case 3:
          v43 = "ObjectiveDialogTutorial";
          break;
        case 4:
          v43 = "SubObjectiveDialog_0";
          break;
        case 5:
          v43 = "SubObjectiveDialog_1";
          break;
        case 6:
          v43 = "SubObjectiveDialog_Stars";
          break;
        case 7:
          v43 = "SubObjectiveDialog_Progress";
          break;
        case 8:
          v43 = "TimerDialog";
          break;
        case 9:
          v43 = "TalkDialog";
          break;
        case 10:
          v43 = "CenteredDialog";
          break;
        case 11:
          v43 = "AchievementDialog";
          break;
        case 12:
          v43 = "TutorialDialog";
          break;
        case 13:
          v43 = "MissionStartDialog";
          break;
        case 14:
          v43 = "MissionZoneEnterDialog";
          break;
        case 15:
          v43 = "SubtitleDialog";
          break;
        case 16:
          v43 = "MissionIntroDialog";
          break;
        case 17:
          v43 = "EndScreenDialog";
          break;
        case 18:
          v43 = "MoneyDialog";
          break;
        case 19:
          v43 = "MissionEndDialog";
          break;
        case 20:
          v43 = "WarningDialog";
          break;
        case 21:
          v43 = "WaveCompleteDialog";
          break;
        case 22:
          v43 = "WastedUnskippableDialog";
          break;
        case 23:
          v43 = "WastedSkippableDialog";
          break;
        case 24:
          v43 = "MissionFailedDialog";
          break;
        case 25:
          v43 = "RewardDialog";
          break;
        case 26:
          v43 = "RacestartCountdownDialog";
          break;
        case 27:
          v43 = "RealEstateDialog";
          break;
        case 28:
          v43 = "CreditsDialog";
          break;
        case 29:
          v43 = "VehicleDialog";
          break;
        default:
          break;
      }
    }
    if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
    {
      sub_785A60((int)(uintptr_t)(&dword_20D5D78));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
    }
    v10 = nullptr;
    if ( byte_20D5D7C == 0 )
      v10 = (int *)(&dword_20D5D78);
    sub_7E2D40(v10, v43, (int)(uintptr_t)(&v47), (int)(uintptr_t)(&v48), (int)(uintptr_t)(&v49), 0, (gameswf::ASValue::Self *)v54, (int)(uintptr_t)(&v51), 0);
    g4_std::string::Destroy(&v47);
    g4_std::string::Destroy(&v48);
    g4_std::string::Destroy(&v49);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
    result = v52;
    v11 = v51;
    if ( v52 != v51 )
    {
      v12 = v52;
      do
      {
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + 4));
        v13 = v11;
        v11 += 16;
        g4_std::string::Destroy(v13);
      }
      while ( v12 != v11 );
      v2 = a1;
      v11 = v51;
    }
    if ( v11 != 0 )
      result = sub_4EB870(v11);
    *((uint32_t *)v2 + 14) = v45;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C59AB0_eac59ab0  (binary VA: 0xc59ab0)
// Original: sub_C59AB0
// ----------------------------------------------------------------------------
int sub_C59AB0_eac59ab0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int v2;
  int v3;
  int *v4;

  *((uint8_t *)a1 + 60) = 0;
  grapher::ActorBase::Cancel(a1, a2);
  v2 = dword_20DA090;
  v3 = *(uint32_t *)(v2 + 52 * sub_5A5890("WarningDialog", 0xB4A46154) + 28);
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D5D7C == 0 )
    v4 = (int *)(&dword_20D5D78);
  return sub_7B8F10((int)(uintptr_t)(v4), v3, -1);
}

// ----------------------------------------------------------------------------
// Function: sub_C59BA0_eac59ba0  (binary VA: 0xc59ba0)
// Original: sub_C59BA0
// ----------------------------------------------------------------------------
int sub_C59BA0_eac59ba0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int v4;
  int *v5;
  int result;
  int v7;
  bool v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  void *v16;
  int v17;
  int v18;
  g4_cxa_guard_t *v19;
  g4_cxa_guard_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  grapher::ActorContext::Self *v27;

  v17 = a3;
  v4 = sub_5A5890("WarningDialog", 0xB4A46154);
  if ( byte_20D5D70 == 0 )
  {
    v19 = (g4_cxa_guard_t *)&byte_20D5D70;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
    {
      v15 = (int *)(&dword_20D5D78);
      sub_785A60((int)(uintptr_t)(&dword_20D5D78));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
    }
  }
  v5 = nullptr;
  if ( byte_20D5D7C == 0 )
    v5 = (int *)(&dword_20D5D78);
  result = sub_785D70((int)(uintptr_t)(v5), v4);
  if ( (uint8_t)result == 0 )
  {
    if ( *((uint8_t *)a2 + 61) != 0 )
    {
      if ( *((uint8_t *)a2 + 60) == 0 )
        return result;
    }
    else
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
      *((uint32_t *)a2 + 13) = (uint32_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a2), Variable, a4, v11, v13, (int)(uintptr_t)(v15), a3, (int)(uintptr_t)(v19), v21, v23, v25, a1));
      v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
      sub_837200((int)(uintptr_t)(a2), v10, a4, v12, v14, (int)(uintptr_t)(v16), v18, (int)(uintptr_t)(v20), v22, v24, v26, v27);
      *((uint8_t *)a2 + 60) = 1;
      *((uint8_t *)a2 + 61) = 1;
      result = sub_C595B0(a2, a4);
      if ( *((uint8_t *)a2 + 60) == 0 )
        return result;
    }
    v7 = *((uint32_t *)a2 + 13) - v17;
    v8 = *((uint32_t *)a2 + 13) == v17;
    *((uint32_t *)a2 + 13) = v7;
    if ( v7 < 0 || v8 )
    {
      grapher::ActorBase::FireEvent(a2, 2, a4);
      return G4_VCALL<int>(a2, 28, a4);
    }
    else
    {
      return sub_C595B0(a2, a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C59D60  (binary VA: 0xc59d60)
// Original: sub_C59D60
// ----------------------------------------------------------------------------
void * sub_C59D60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  int v5;
  int *v6;
  char v7;
  void *result;
  void *v9;
  int v10;
  grapher::ActorVariable::Self *v11;
  int v12;
  char *v13;
  uint32_t *v14;
  uint32_t *v15;
  void *v16;
  uint32_t *v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int *_g4_t_v21;
  typedef void *_g4_t_v22;
  typedef g4_cxa_guard_t *_g4_t_v23;
  typedef g4_cxa_guard_t *_g4_t_v24;
  typedef g4_cxa_guard_t *_g4_t_v25;
  typedef g4_cxa_guard_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef void *_g4_t_v32;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v21)) > _g4_s3 ? (4u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v22)) > _g4_s4 ? (4u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v23)) > _g4_s5 ? (8u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v24)) > _g4_s6 ? (8u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v25)) > _g4_s7 ? (12u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v26)) > _g4_s8 ? (12u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v27)) > _g4_s9 ? (16u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v28)) > _g4_s10 ? (16u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v29)) > _g4_s11 ? (20u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v30)) > _g4_s12 ? (20u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v31)) > _g4_s13 ? (24u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v32)) > _g4_s14 ? (28u + sizeof(_g4_t_v32)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
  sub_837C70(&v31, (int)(uintptr_t)(a1), Variable, a3, v18, (int)(uintptr_t)(v20), (int)(uintptr_t)(v23), (int)(uintptr_t)(v25), v27, v29, (int)(uintptr_t)(v31));
  LOBYTE(v24) = 0;
  if ( *((uint32_t *)v31 - 3) != 0 )
  {
    if ( byte_20D60F0 == 0 )
    {
      v24 = (g4_cxa_guard_t *)&byte_20D60F0;
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D60F0) != 0 )
      {
        v21 = (int *)&unk_20D6100;
        sub_AA7ED0((int)(uintptr_t)(&unk_20D6100));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D60F0);
        __cxa_atexit((void (*)(void *))sub_AD4B40, &unk_20D6100, &unk_20D1280);
      }
    }
    v9 = nullptr;
    if ( byte_20D6104 == 0 )
      v9 = &unk_20D6100;
    LOBYTE(v24) = !sub_ABE220((int)(uintptr_t)(v9), &v31);
  }
  g4_std::string::Destroy(&v31);
  v19 = dword_20DA090;
  v4 = 52 * sub_5A5890("MissionZoneEnterDialog", 0xB4A46154);
  v5 = *(uint32_t *)(v19 + v4 + 28);
  if ( byte_20D5D70 == 0 )
  {
    v19 = *(uint32_t *)(v19 + v4 + 28);
    v26 = (g4_cxa_guard_t *)&byte_20D5D70;
    v10 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70);
    v5 = v19;
    if ( v10 != 0 )
    {
      v21 = (int *)(&dword_20D5D78);
      sub_785A60((int)(uintptr_t)(&dword_20D5D78));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
      v5 = v19;
    }
  }
  v6 = nullptr;
  if ( byte_20D5D7C == 0 )
    v6 = (int *)(&dword_20D5D78);
  v7 = sub_785D70((int)(uintptr_t)(v6), v5);
  if ( (uint8_t)(uintptr_t)(v24) != 0 && v7 != 0 )
  {
    v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
    sub_837C70(&v31, (int)(uintptr_t)(a1), v11, a3, v19, (int)(uintptr_t)(v21), (int)(uintptr_t)(v24), (int)(uintptr_t)(v26), v28, v30, (int)(uintptr_t)(v31));
    v12 = 0;
    if ( *((uint32_t *)v31 - 3) != 0 )
    {
      if ( byte_20D60F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D60F0) != 0 )
      {
        sub_AA7ED0((int)(uintptr_t)(&unk_20D6100));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D60F0);
        __cxa_atexit((void (*)(void *))sub_AD4B40, &unk_20D6100, &unk_20D1280);
      }
      v16 = nullptr;
      if ( byte_20D6104 == 0 )
        v16 = &unk_20D6100;
      v12 = sub_ABE1A0((int)(uintptr_t)(v16), &v31);
    }
    v22 = (void *)v12;
    g4_std::string::Destroy(&v31);
    v13 = (char *)a1 + 56;
    sub_84BD50(a3, (uint32_t *)a1 + 14);
    result = v22;
    if ( *((void **)a1 + 14) != v22 )
    {
      *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v22);
      v14 = *((uint32_t **)a3 + 3);
      v32 = (char *)a1 + 56;
      if ( v14 == nullptr )
        goto LABEL_39;
      v15 = (uint32_t *)((char *)a3 + 8);
      do
      {
        if ( (unsigned int)(uintptr_t)(v13) <= v14[4] )
        {
          v15 = v14;
          v14 = (uint32_t *)v14[2];
        }
        else
        {
          v14 = (uint32_t *)v14[3];
        }
      }
      while ( v14 != nullptr );
      if ( (uint32_t *)((char *)a3 + 8) == v15 || (unsigned int)(uintptr_t)(v13) < v15[4] )
      {
LABEL_39:
        v17 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v17 = (uint32_t)(uintptr_t)(&off_205CD10);
        v17[1] = *((uint32_t *)a1 + 14);
        *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), &v32) = (uint32_t)(uintptr_t)(v17);
      }
      else
      {
        *(uint32_t *)(v15[5] + 4) = (uint32_t)(uintptr_t)(v22);
      }
      return (void *)sub_C58100(a1, a3, 1);
    }
  }
  else
  {
    if ( byte_20D5B50 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
    }
    return (grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3), (void *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C5A1B0  (binary VA: 0xc5a1b0)
// Original: sub_C5A1B0
// ----------------------------------------------------------------------------
uint32_t * sub_C5A1B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C5A1D0  (binary VA: 0xc5a1d0)
// Original: sub_C5A1D0
// ----------------------------------------------------------------------------
void sub_C5A1D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5A200  (binary VA: 0xc5a200)
// Original: sub_C5A200
// ----------------------------------------------------------------------------
void sub_C5A200(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CBC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5A230  (binary VA: 0xc5a230)
// Original: sub_C5A230
// ----------------------------------------------------------------------------
void sub_C5A230(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CBC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5A270  (binary VA: 0xc5a270)
// Original: sub_C5A270
// ----------------------------------------------------------------------------
const char * sub_C5A270(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case 0:
      result = "DefaultDialog";
      break;
    case 1:
      result = "GameActionDialog";
      break;
    case 2:
      result = "ObjectiveDialog";
      break;
    case 3:
      result = "ObjectiveDialogTutorial";
      break;
    case 4:
      result = "SubObjectiveDialog_0";
      break;
    case 5:
      result = "SubObjectiveDialog_1";
      break;
    case 6:
      result = "SubObjectiveDialog_Stars";
      break;
    case 7:
      result = "SubObjectiveDialog_Progress";
      break;
    case 8:
      result = "TimerDialog";
      break;
    case 9:
      result = "TalkDialog";
      break;
    case 10:
      result = "CenteredDialog";
      break;
    case 11:
      result = "AchievementDialog";
      break;
    case 12:
      result = "TutorialDialog";
      break;
    case 13:
      result = "MissionStartDialog";
      break;
    case 14:
      result = "MissionZoneEnterDialog";
      break;
    case 15:
      result = "SubtitleDialog";
      break;
    case 16:
      result = "MissionIntroDialog";
      break;
    case 17:
      result = "EndScreenDialog";
      break;
    case 18:
      result = "MoneyDialog";
      break;
    case 19:
      result = "MissionEndDialog";
      break;
    case 20:
      result = "WarningDialog";
      break;
    case 21:
      result = "WaveCompleteDialog";
      break;
    case 22:
      result = "WastedUnskippableDialog";
      break;
    case 23:
      result = "WastedSkippableDialog";
      break;
    case 24:
      result = "MissionFailedDialog";
      break;
    case 25:
      result = "RewardDialog";
      break;
    case 26:
      result = "RacestartCountdownDialog";
      break;
    case 27:
      result = "RealEstateDialog";
      break;
    case 28:
      result = "CreditsDialog";
      break;
    case 29:
      result = "VehicleDialog";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C5A390  (binary VA: 0xc5a390)
// Original: sub_C5A390
// ----------------------------------------------------------------------------
int sub_C5A390(uint8_t *a1, uint8_t a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v2 = (uint32_t *)dword_20D672C;
  v3 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_20;
  do
  {
    while ( (unsigned int)(uintptr_t)(a1) <= v2[4] )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_7;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_7:
  if ( v3 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(a1) < v3[4] )
  {
LABEL_20:
    v4 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v4 + 4) = a2;
  }
  else
  {
    v4 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v4 + 4) = a2;
    v5 = v3[5];
    if ( v5 != 0 )
      G4_VCALL<void>(v5, 4);
  }
  v6 = (uint32_t *)dword_20D672C;
  v7 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_18;
  do
  {
    while ( (unsigned int)(uintptr_t)(a1) <= v6[4] )
    {
      v7 = v6;
      v6 = (uint32_t *)v6[2];
      if ( v6 == nullptr )
        goto LABEL_16;
    }
    v6 = (uint32_t *)v6[3];
  }
  while ( v6 != nullptr );
LABEL_16:
  if ( v7 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(a1) < v7[4] )
  {
LABEL_18:
    v10[0] = (int)(uintptr_t)(a1);
    v10[1] = 0;
    sub_C4E4B0((int *)&v9, &dword_20D6724, (int)(uintptr_t)(v7), v10);
    v7 = v9;
  }
  v7[5] = v4;
  *a1 = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_C5A550  (binary VA: 0xc5a550)
// Original: sub_C5A550
// ----------------------------------------------------------------------------
void sub_C5A550(uint32_t *a1, int a2, char a3)
{
  char *v3;
  int v4;
  char *v5;
  int v6;
  int v7[4];

  v7[0] = a2;
  if ( a3 != 0 )
  {
    v3 = (char *)a1[5];
    if ( v3 == (char *)a1[6] )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux((int)(uintptr_t)(a1 + 4), v3, v7);
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *(uint32_t *)v3 = a2;
        v4 = a1[5];
      }
      a1[5] = v4 + 4;
    }
  }
  else
  {
    v5 = (char *)a1[2];
    if ( v5 == (char *)a1[3] )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux((int)(uintptr_t)(a1 + 1), v5, v7);
    }
    else
    {
      v6 = 0;
      if ( v5 != nullptr )
      {
        *(uint32_t *)v5 = a2;
        v6 = a1[2];
      }
      a1[2] = v6 + 4;
    }
  }
}



// [Deduplicated: canonical definition in Actors/ActorGameConditionAnimEnded.cpp]
int (**sub_C5A610(uint32_t *a1))(int);
// ----------------------------------------------------------------------------
// Function: sub_C5A670_eac5a670  (binary VA: 0xc5a670)
// Original: sub_C5A670
// ----------------------------------------------------------------------------
void sub_C5A670_eac5a670(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_206CC00);
  v1 = a1[1];
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1 + 1), v1 + 16);
  a1[1] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_void_grapher_ActorContex_7fce1e::find  (binary VA: 0xc5a6d0)
// Original: std::map<void *,grapher::ActorContext::ICVar *>::find
// ----------------------------------------------------------------------------
std::map<void *,grapher::ActorContext::ICVar *> * g4_std::map_void_grapher_ActorContex_7fce1e::find(std::map<void *,grapher::ActorContext::ICVar *> *self, void *const *a2, unsigned int *a3)
{
  std::map<void *,grapher::ActorContext::ICVar *> *result;
  void *const *v4;
  void *const *v5;
  unsigned int v6;

  result = self;
  v4 = *((void *const **)a2 + 2);
  v5 = a2 + 1;
  if ( v4 != nullptr )
  {
    v6 = *a3;
    do
    {
      while ( *((uint32_t *)v4 + 4) >= v6 )
      {
        v5 = v4;
        v4 = *((void *const **)v4 + 2);
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = *((void *const **)v4 + 3);
    }
    while ( v4 != nullptr );
LABEL_6:
    if ( a2 + 1 != v5 && *((uint32_t *)v5 + 4) > v6 )
      v5 = a2 + 1;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C5A720  (binary VA: 0xc5a720)
// Original: sub_C5A720
// ----------------------------------------------------------------------------
uint32_t * sub_C5A720(uint32_t *a1, uint8_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *result;
  int v5;
  typedef int _g4_t_v6;
  typedef void *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v7 = a2;
  v2 = (uint32_t *)a1[3];
  if ( v2 == nullptr )
    goto LABEL_9;
  v3 = a1 + 2;
  do
  {
    while ( (unsigned int)(uintptr_t)(a2) <= v2[4] )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( a1 + 2 == v3 || (unsigned int)(uintptr_t)(a2) < v3[4] )
  {
LABEL_9:
    v5 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v5 + 4) = *a2;
    v6 = v5;
    result = g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
               (std::map<void *,grapher::ActorContext::ICVar *> *)(a1 + 1),
               &v7);
    *result = v6;
  }
  else
  {
    result = (uint32_t *)v3[5];
    *((uint8_t *)result + 4) = *a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase  (binary VA: 0xc5a7e0)
// Original: std::_Rb_tree<LevelObject const*,std::pair<LevelObject const* const,bool>,std::_Select1st<std::pair<LevelObject const* const,bool>>,std::less<LevelObject const*>,std::allocator<std::pair<LevelObject const* const,bool>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear  (binary VA: 0xc5a990)
// Original: std::_List_base<Gangstar::Handle<LevelObject,true>>::_M_clear
// ----------------------------------------------------------------------------
void g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear(std::_List_base<Gangstar::Handle<LevelObject, true>> *self)
{
  std::_List_base<Gangstar::Handle<LevelObject, true>> *v1;
  int v2;
  std::_List_base<Gangstar::Handle<LevelObject, true>> *v3;

  v1 = *(std::_List_base<Gangstar::Handle<LevelObject, true>> **)self;
  if ( *(std::_List_base<Gangstar::Handle<LevelObject, true>> **)self != self )
  {
    while ( 1 )
    {
      v2 = *((uint32_t *)v1 + 2);
      v3 = *(std::_List_base<Gangstar::Handle<LevelObject, true>> **)v1;
      if ( v2 != 0 )
        sub_5459F0((int)(uintptr_t)(v1) + 8, v2 + 28);
      *((uint32_t *)v1 + 2) = 0;
      opDelete(v1);
      if ( v3 == self )
        break;
      v1 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear  (binary VA: 0xc5a9f0)
// Original: std::_List_base<Gangstar::Handle<TriggerZone,true>>::_M_clear
// ----------------------------------------------------------------------------
void g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear(std::_List_base<Gangstar::Handle<TriggerZone, true>> *self)
{
  std::_List_base<Gangstar::Handle<TriggerZone, true>> *v1;
  int v2;
  std::_List_base<Gangstar::Handle<TriggerZone, true>> *v3;

  v1 = *(std::_List_base<Gangstar::Handle<TriggerZone, true>> **)self;
  if ( *(std::_List_base<Gangstar::Handle<TriggerZone, true>> **)self != self )
  {
    while ( 1 )
    {
      v2 = *((uint32_t *)v1 + 2);
      v3 = *(std::_List_base<Gangstar::Handle<TriggerZone, true>> **)v1;
      if ( v2 != 0 )
        sub_5459F0((int)(uintptr_t)(v1) + 8, v2 + 28);
      *((uint32_t *)v1 + 2) = 0;
      opDelete(v1);
      if ( v3 == self )
        break;
      v1 = v3;
    }
  }
}


