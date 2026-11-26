#include "Core/Utils/DecompTypes.h"
#include "TU39_GrapherActorsBatch3_MenuMission.h"

// ----------------------------------------------------------------------------
// Function: sub_C2ABA0  (binary VA: 0xc2aba0)
// Original: sub_C2ABA0
// ----------------------------------------------------------------------------
int sub_C2ABA0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DEA18);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DEA18, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA1C), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA1C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA20), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA20, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA24), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA24, &unk_20D1280);
  dword_20DEA28 = 1056964608;
  dword_20DEA2C = 1056964608;
  dword_20DEA30 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: nullsub_528  (binary VA: 0xc2aca8)
// Original: nullsub_528
// ----------------------------------------------------------------------------
void nullsub_528()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_529  (binary VA: 0xc2acb8)
// Original: nullsub_529
// ----------------------------------------------------------------------------
void nullsub_529()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C2ACC0  (binary VA: 0xc2acc0)
// Original: sub_C2ACC0
// ----------------------------------------------------------------------------
int sub_C2ACC0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  return grapher::ActorBase::Cancel(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectValue::Destroy_eac2acf0  (binary VA: 0xc2acf0)
// Original: ActorGameObjectValue::~ActorGameObjectValue
// ----------------------------------------------------------------------------
void ActorGameObjectValue::Destroy_eac2acf0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C308);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleTargetable::Destroy_eac2ad20  (binary VA: 0xc2ad20)
// Original: ActorGameObjectToggleTargetable::~ActorGameObjectToggleTargetable
// ----------------------------------------------------------------------------
void ActorGameObjectToggleTargetable::Destroy_eac2ad20(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C2C8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleSpawn::Destroy_eac2ad50  (binary VA: 0xc2ad50)
// Original: ActorGameObjectToggleSpawn::~ActorGameObjectToggleSpawn
// ----------------------------------------------------------------------------
void ActorGameObjectToggleSpawn::Destroy_eac2ad50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C288);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleIndestructible::Destroy_eac2ad80  (binary VA: 0xc2ad80)
// Original: ActorGameObjectToggleIndestructible::~ActorGameObjectToggleIndestructible
// ----------------------------------------------------------------------------
void ActorGameObjectToggleIndestructible::Destroy_eac2ad80(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C248);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleImmobilized::Destroy_eac2adb0  (binary VA: 0xc2adb0)
// Original: ActorGameObjectToggleImmobilized::~ActorGameObjectToggleImmobilized
// ----------------------------------------------------------------------------
void ActorGameObjectToggleImmobilized::Destroy_eac2adb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C208);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectSetMovability::Destroy_eac2ade0  (binary VA: 0xc2ade0)
// Original: ActorGameObjectSetMovability::~ActorGameObjectSetMovability
// ----------------------------------------------------------------------------
void ActorGameObjectSetMovability::Destroy_eac2ade0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C1C8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleCollisions::Destroy_eac2ae10  (binary VA: 0xc2ae10)
// Original: ActorGameObjectToggleCollisions::~ActorGameObjectToggleCollisions
// ----------------------------------------------------------------------------
void ActorGameObjectToggleCollisions::Destroy_eac2ae10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C188);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectTestProperty::Destroy_eac2ae40  (binary VA: 0xc2ae40)
// Original: ActorGameObjectTestProperty::~ActorGameObjectTestProperty
// ----------------------------------------------------------------------------
void ActorGameObjectTestProperty::Destroy_eac2ae40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C148);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectStop::Destroy_eac2ae70  (binary VA: 0xc2ae70)
// Original: ActorGameObjectStop::~ActorGameObjectStop
// ----------------------------------------------------------------------------
void ActorGameObjectStop::Destroy_eac2ae70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C088);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectSetProperty::Destroy_eac2aea0  (binary VA: 0xc2aea0)
// Original: ActorGameObjectSetProperty::~ActorGameObjectSetProperty
// ----------------------------------------------------------------------------
void ActorGameObjectSetProperty::Destroy_eac2aea0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C048);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectSetAnim::Destroy_eac2aed0  (binary VA: 0xc2aed0)
// Original: ActorGameObjectSetAnim::~ActorGameObjectSetAnim
// ----------------------------------------------------------------------------
void ActorGameObjectSetAnim::Destroy_eac2aed0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C008);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectReplacement::Destroy  (binary VA: 0xc2af00)
// Original: ActorGameObjectReplacement::~ActorGameObjectReplacement
// ----------------------------------------------------------------------------
void ActorGameObjectReplacement::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BFC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectMoveTo::Destroy_eac2af30  (binary VA: 0xc2af30)
// Original: ActorGameObjectMoveTo::~ActorGameObjectMoveTo
// ----------------------------------------------------------------------------
void ActorGameObjectMoveTo::Destroy_eac2af30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectHighlight::Destroy_eac2af60  (binary VA: 0xc2af60)
// Original: ActorGameObjectHighlight::~ActorGameObjectHighlight
// ----------------------------------------------------------------------------
void ActorGameObjectHighlight::Destroy_eac2af60(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectGetProperty::Destroy_eac2af90  (binary VA: 0xc2af90)
// Original: ActorGameObjectGetProperty::~ActorGameObjectGetProperty
// ----------------------------------------------------------------------------
void ActorGameObjectGetProperty::Destroy_eac2af90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectFindRandom::Destroy_eac2afc0  (binary VA: 0xc2afc0)
// Original: ActorGameObjectFindRandom::~ActorGameObjectFindRandom
// ----------------------------------------------------------------------------
void ActorGameObjectFindRandom::Destroy_eac2afc0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectExists::Destroy_eac2aff0  (binary VA: 0xc2aff0)
// Original: ActorGameObjectExists::~ActorGameObjectExists
// ----------------------------------------------------------------------------
void ActorGameObjectExists::Destroy_eac2aff0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BDC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectHide::Destroy_eac2b020  (binary VA: 0xc2b020)
// Original: ActorGameObjectHide::~ActorGameObjectHide
// ----------------------------------------------------------------------------
void ActorGameObjectHide::Destroy_eac2b020(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectEnable::Destroy_eac2b050  (binary VA: 0xc2b050)
// Original: ActorGameObjectEnable::~ActorGameObjectEnable
// ----------------------------------------------------------------------------
void ActorGameObjectEnable::Destroy_eac2b050(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectCount::Destroy_eac2b080  (binary VA: 0xc2b080)
// Original: ActorGameObjectCount::~ActorGameObjectCount
// ----------------------------------------------------------------------------
void ActorGameObjectCount::Destroy_eac2b080(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectConvertToAsset::Destroy  (binary VA: 0xc2b0b0)
// Original: ActorGameObjectConvertToAsset::~ActorGameObjectConvertToAsset
// ----------------------------------------------------------------------------
void ActorGameObjectConvertToAsset::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BCC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectAttach::Destroy_eac2b0e0  (binary VA: 0xc2b0e0)
// Original: ActorGameObjectAttach::~ActorGameObjectAttach
// ----------------------------------------------------------------------------
void ActorGameObjectAttach::Destroy_eac2b0e0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectApplyDamage::Destroy_eac2b110  (binary VA: 0xc2b110)
// Original: ActorGameObjectApplyDamage::~ActorGameObjectApplyDamage
// ----------------------------------------------------------------------------
void ActorGameObjectApplyDamage::Destroy_eac2b110(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameStartModule::Destroy_eac2b140  (binary VA: 0xc2b140)
// Original: ActorGameStartModule::~ActorGameStartModule
// ----------------------------------------------------------------------------
void ActorGameStartModule::Destroy_eac2b140(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameMissionIsCompleted::Destroy_eac2b170  (binary VA: 0xc2b170)
// Original: ActorGameMissionIsCompleted::~ActorGameMissionIsCompleted
// ----------------------------------------------------------------------------
void ActorGameMissionIsCompleted::Destroy_eac2b170(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BBC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameMissionUnload::Destroy_eac2b1a0  (binary VA: 0xc2b1a0)
// Original: ActorGameMissionUnload::~ActorGameMissionUnload
// ----------------------------------------------------------------------------
void ActorGameMissionUnload::Destroy_eac2b1a0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameMissionStop::Destroy_eac2b1d0  (binary VA: 0xc2b1d0)
// Original: ActorGameMissionStop::~ActorGameMissionStop
// ----------------------------------------------------------------------------
void ActorGameMissionStop::Destroy_eac2b1d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameMissionStart::Destroy_eac2b200  (binary VA: 0xc2b200)
// Original: ActorGameMissionStart::~ActorGameMissionStart
// ----------------------------------------------------------------------------
void ActorGameMissionStart::Destroy_eac2b200(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameMenuVideo::Destroy_eac2b230  (binary VA: 0xc2b230)
// Original: ActorGameMenuVideo::~ActorGameMenuVideo
// ----------------------------------------------------------------------------
void ActorGameMenuVideo::Destroy_eac2b230(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BAC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B260  (binary VA: 0xc2b260)
// Original: sub_C2B260
// ----------------------------------------------------------------------------
unsigned int sub_C2B260(int a1, int a2)
{
  const char *s2;
  const char *s1;

  s2 = (const char *)G4_VCALL<int>(a2, 44);
  s1 = (const char *)G4_VCALL<int>(a1, 44);
  return (unsigned int)strcmp(s1, s2) >> 31;
}

// ----------------------------------------------------------------------------
// Function: sub_C2B2C0  (binary VA: 0xc2b2c0)
// Original: sub_C2B2C0
// ----------------------------------------------------------------------------
int sub_C2B2C0(long double a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  glitch::os::Timer::Self *v4;

  v4 = (glitch::os::Timer::Self *)sub_8F0680();
  sub_9110D0(a1, v4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C2B3D0  (binary VA: 0xc2b300)
// Original: sub_C2B3D0
// ----------------------------------------------------------------------------
int sub_C2B3D0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  result = sub_638F10();
  if ( (uint8_t)result != 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C2B430_eac2b430  (binary VA: 0xc2b430)
// Original: sub_C2B430
// ----------------------------------------------------------------------------
unsigned int sub_C2B430_eac2b430(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  unsigned int result;
  int v4;

  result = sub_732CE0();
  if ( *(uint8_t *)(result + 53) == 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    grapher::ActorBase::FireEvent(a1, 3, a3);
    v4 = sub_732CE0();
    return sub_733930(v4, 4u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C2B4B0  (binary VA: 0xc2b4b0)
// Original: sub_C2B4B0
// ----------------------------------------------------------------------------
int * sub_C2B4B0(int a1, int a2)
{
  int *result;

  result = (int *)(&dword_20DA2A0);
  if ( dword_20DA2A0 == 0 )
    return (int *)G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C2B4F0  (binary VA: 0xc2b4f0)
// Original: sub_C2B4F0
// ----------------------------------------------------------------------------
int * sub_C2B4F0(int *a1, int a2, int a3, int a4, int *a5)
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
// Function: sub_C2B5B0_eac2b5b0  (binary VA: 0xc2b5b0)
// Original: sub_C2B5B0
// ----------------------------------------------------------------------------
void sub_C2B5B0_eac2b5b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BAC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B5F0_eac2b5f0  (binary VA: 0xc2b5f0)
// Original: sub_C2B5F0
// ----------------------------------------------------------------------------
void sub_C2B5F0_eac2b5f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B630_eac2b630  (binary VA: 0xc2b630)
// Original: sub_C2B630
// ----------------------------------------------------------------------------
void sub_C2B630_eac2b630(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B670_eac2b670  (binary VA: 0xc2b670)
// Original: sub_C2B670
// ----------------------------------------------------------------------------
void sub_C2B670_eac2b670(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B6B0_eac2b6b0  (binary VA: 0xc2b6b0)
// Original: sub_C2B6B0
// ----------------------------------------------------------------------------
void sub_C2B6B0_eac2b6b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BBC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B6F0_eac2b6f0  (binary VA: 0xc2b6f0)
// Original: sub_C2B6F0
// ----------------------------------------------------------------------------
void sub_C2B6F0_eac2b6f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B730_eac2b730  (binary VA: 0xc2b730)
// Original: sub_C2B730
// ----------------------------------------------------------------------------
void sub_C2B730_eac2b730(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B770_eac2b770  (binary VA: 0xc2b770)
// Original: sub_C2B770
// ----------------------------------------------------------------------------
void sub_C2B770_eac2b770(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B7B0  (binary VA: 0xc2b7b0)
// Original: sub_C2B7B0
// ----------------------------------------------------------------------------
void sub_C2B7B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BCC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B7F0_eac2b7f0  (binary VA: 0xc2b7f0)
// Original: sub_C2B7F0
// ----------------------------------------------------------------------------
void sub_C2B7F0_eac2b7f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B830_eac2b830  (binary VA: 0xc2b830)
// Original: sub_C2B830
// ----------------------------------------------------------------------------
void sub_C2B830_eac2b830(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B870_eac2b870  (binary VA: 0xc2b870)
// Original: sub_C2B870
// ----------------------------------------------------------------------------
void sub_C2B870_eac2b870(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B8B0_eac2b8b0  (binary VA: 0xc2b8b0)
// Original: sub_C2B8B0
// ----------------------------------------------------------------------------
void sub_C2B8B0_eac2b8b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BDC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B8F0_eac2b8f0  (binary VA: 0xc2b8f0)
// Original: sub_C2B8F0
// ----------------------------------------------------------------------------
void sub_C2B8F0_eac2b8f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B930_eac2b930  (binary VA: 0xc2b930)
// Original: sub_C2B930
// ----------------------------------------------------------------------------
void sub_C2B930_eac2b930(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B970_eac2b970  (binary VA: 0xc2b970)
// Original: sub_C2B970
// ----------------------------------------------------------------------------
void sub_C2B970_eac2b970(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B9B0_eac2b9b0  (binary VA: 0xc2b9b0)
// Original: sub_C2B9B0
// ----------------------------------------------------------------------------
void sub_C2B9B0_eac2b9b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B9F0  (binary VA: 0xc2b9f0)
// Original: sub_C2B9F0
// ----------------------------------------------------------------------------
void sub_C2B9F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BFC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BA30_eac2ba30  (binary VA: 0xc2ba30)
// Original: sub_C2BA30
// ----------------------------------------------------------------------------
void sub_C2BA30_eac2ba30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C008);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BA70_eac2ba70  (binary VA: 0xc2ba70)
// Original: sub_C2BA70
// ----------------------------------------------------------------------------
void sub_C2BA70_eac2ba70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C048);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BAB0_eac2bab0  (binary VA: 0xc2bab0)
// Original: sub_C2BAB0
// ----------------------------------------------------------------------------
void sub_C2BAB0_eac2bab0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C088);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BAF0_eac2baf0  (binary VA: 0xc2baf0)
// Original: sub_C2BAF0
// ----------------------------------------------------------------------------
void sub_C2BAF0_eac2baf0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C148);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BB30_eac2bb30  (binary VA: 0xc2bb30)
// Original: sub_C2BB30
// ----------------------------------------------------------------------------
void sub_C2BB30_eac2bb30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C188);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BB70_eac2bb70  (binary VA: 0xc2bb70)
// Original: sub_C2BB70
// ----------------------------------------------------------------------------
void sub_C2BB70_eac2bb70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C1C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BBB0_eac2bbb0  (binary VA: 0xc2bbb0)
// Original: sub_C2BBB0
// ----------------------------------------------------------------------------
void sub_C2BBB0_eac2bbb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C208);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BBF0_eac2bbf0  (binary VA: 0xc2bbf0)
// Original: sub_C2BBF0
// ----------------------------------------------------------------------------
void sub_C2BBF0_eac2bbf0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C248);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BC30_eac2bc30  (binary VA: 0xc2bc30)
// Original: sub_C2BC30
// ----------------------------------------------------------------------------
void sub_C2BC30_eac2bc30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C288);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BC70_eac2bc70  (binary VA: 0xc2bc70)
// Original: sub_C2BC70
// ----------------------------------------------------------------------------
void sub_C2BC70_eac2bc70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C2C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BCB0_eac2bcb0  (binary VA: 0xc2bcb0)
// Original: sub_C2BCB0
// ----------------------------------------------------------------------------
void sub_C2BCB0_eac2bcb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C308);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BCF0_eac2bcf0  (binary VA: 0xc2bcf0)
// Original: sub_C2BCF0
// ----------------------------------------------------------------------------
void sub_C2BCF0_eac2bcf0(grapher::ActorBase::Self *a1)
{
  void **v1;
  void **v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF48);
  v1 = *((void ***)a1 + 13);
  if ( v1 != (void **)((char *)a1 + 52) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)((char *)a1 + 52) )
        break;
      v1 = v2;
    }
  }
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BD50_eac2bd50  (binary VA: 0xc2bd50)
// Original: sub_C2BD50
// ----------------------------------------------------------------------------
void sub_C2BD50_eac2bd50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  void **v4;
  void **v5;
  void **v6;
  void *v7[9];

  v7[0] = v7;
  v7[1] = v7;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v7), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    if ( a2 == 1 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 4, 0);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
    else if ( a2 == 2 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 4, (*((uint8_t *)v3[2] + 176) & 4) == 0);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
    else if ( a2 != 0 )
    {
      do
      {
        v6 = (void **)*v3;
        if ( v6 == v7 )
          break;
        v3 = (void **)*v6;
      }
      while ( v3 != v7 );
    }
    else
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 4, 1);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v4 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v7 )
        break;
      v4 = v5;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2BEA0_eac2bea0  (binary VA: 0xc2bea0)
// Original: sub_C2BEA0
// ----------------------------------------------------------------------------
void sub_C2BEA0_eac2bea0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  void **v4;
  void **v5;
  void **v6;
  void *v7[9];

  v7[0] = v7;
  v7[1] = v7;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v7), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    if ( a2 == 1 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 0x2000, 0);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
    else if ( a2 == 2 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 0x2000, (*((uint8_t *)v3[2] + 177) & 0x20) == 0);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
    else if ( a2 != 0 )
    {
      do
      {
        v6 = (void **)*v3;
        if ( v6 == v7 )
          break;
        v3 = (void **)*v6;
      }
      while ( v3 != v7 );
    }
    else
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 0x2000, 1);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v4 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v7 )
        break;
      v4 = v5;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2BFF0_eac2bff0  (binary VA: 0xc2bff0)
// Original: sub_C2BFF0
// ----------------------------------------------------------------------------
void sub_C2BFF0_eac2bff0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int v4;
  int v5;
  void **v6;
  void **v7;
  int v8;
  typedef char _g4_t_v9;
  typedef void *_g4_t_v10[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v9)) > _g4_s0 ? (15u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  v10[0] = v10;
  v10[1] = v10;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v10), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    v9 = a2 == 0;
    while ( 1 )
    {
      v4 = (int)(uintptr_t)(v3[2]);
      if ( v4 == 0 )
        goto LABEL_4;
      if ( *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) == 0 )
        goto LABEL_4;
      v5 = *(uint32_t *)(v4 + 404);
      if ( v5 == 0 )
        goto LABEL_4;
      if ( ((*(int (**)(uint32_t))(*(uint32_t *)v5 + 32))(*(uint32_t *)(v4 + 404)) & 2) == 0 )
      {
        if ( *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) != 0 )
        {
          v8 = *(uint32_t *)(v4 + 404);
          if ( v8 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v8 + 36))(*(uint32_t *)(v4 + 404)) != 0 )
          {
            if ( a2 == 2 )
              v9 = *(uint8_t *)(v4 + 998) ^ 1;
            if ( v9 != 0 )
              sub_86D610(v4);
            else
              sub_86D5E0(v4);
          }
        }
        goto LABEL_4;
      }
      if ( a2 == 2 )
        v9 = *(float *)(v4 + 3220) < 1000000.0;
      if ( v9 != 0 )
      {
        sub_980320(v4, 1232348160);
LABEL_4:
        v3 = (void **)*v3;
        if ( v3 == v10 )
          break;
      }
      else
      {
        sub_980340(v4);
        v3 = (void **)*v3;
        if ( v3 == v10 )
          break;
      }
    }
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v6 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    while ( 1 )
    {
      v7 = (void **)*v6;
      opDelete(v6);
      if ( v7 == v10 )
        break;
      v6 = v7;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2C170_eac2c170  (binary VA: 0xc2c170)
// Original: sub_C2C170
// ----------------------------------------------------------------------------
void sub_C2C170_eac2c170(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  void **v4;
  void **v5;
  char v6;
  int v7;
  void **v8;
  typedef grapher::ActorBase::Self *_g4_t_v9;
  typedef void *_g4_t_v10[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v10)) > _g4_s1 ? (40u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);

  v10[0] = v10;
  v10[1] = v10;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v10), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    if ( a2 == 1 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 148);
        v3 = (void **)*v3;
      }
      while ( v3 != v10 );
    }
    else if ( a2 == 2 )
    {
      do
      {
        v6 = G4_VCALL<int>(v3[2], 156);
        v7 = *(uint32_t *)v3[2];
        v9 = (grapher::ActorBase::Self *)v3[2];
        if ( v6 != 0 )
          (*(void (**)(grapher::ActorBase::Self *))(v7 + 148))(v9);
        else
          (*(void (**)(grapher::ActorBase::Self *))(v7 + 152))(v9);
        v3 = (void **)*v3;
      }
      while ( v3 != v10 );
    }
    else if ( a2 != 0 )
    {
      do
      {
        v8 = (void **)*v3;
        if ( v8 == v10 )
          break;
        v3 = (void **)*v8;
      }
      while ( v3 != v10 );
    }
    else
    {
      do
      {
        G4_VCALL<void>(v3[2], 152);
        v3 = (void **)*v3;
      }
      while ( v3 != v10 );
    }
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v4 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v10 )
        break;
      v4 = v5;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectList::Destroy_eac2c2a0  (binary VA: 0xc2c2a0)
// Original: ActorGameObjectList::~ActorGameObjectList
// ----------------------------------------------------------------------------
void ActorGameObjectList::Destroy_eac2c2a0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF48);
  v1 = *((uint32_t **)a1 + 13);
  if ( v1 != (uint32_t *)((char *)a1 + 52) )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == (uint32_t *)((char *)a1 + 52) )
        break;
      v1 = v2;
    }
  }
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2C300_eac2c300  (binary VA: 0xc2c300)
// Original: sub_C2C300
// ----------------------------------------------------------------------------
void sub_C2C300_eac2c300(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  void **v4;
  void **v5;
  void *v6[9];

  v6[0] = v6;
  v6[1] = v6;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v6), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v6[0];
  if ( v6[0] != v6 )
  {
    if ( a2 != 0 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 108, 1);
        G4_VCALL<void>(v3[2], 148);
        v3 = (void **)*v3;
      }
      while ( v3 != v6 );
    }
    else
    {
      do
      {
        G4_VCALL<void>(v3[2], 112, 1);
        G4_VCALL<void>(v3[2], 152);
        v3 = (void **)*v3;
      }
      while ( v3 != v6 );
    }
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  v4 = (void **)v6[0];
  if ( v6[0] != v6 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v6 )
        break;
      v4 = v5;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2C400  (binary VA: 0xc2c400)
// Original: sub_C2C400
// ----------------------------------------------------------------------------
void sub_C2C400(uint32_t *a1)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  const char *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  const char *v17;
  uint32_t *i;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef const char *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef const char *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t _g4_t_v35[4];
  typedef uint32_t _g4_t_v36[2];
  typedef uint8_t _g4_t_v37[504];
  typedef uint8_t _g4_t_v38[12];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v23)) > _g4_s1 ? (0u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v27)) > _g4_s5 ? (16u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v28)) > _g4_s6 ? (16u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v29)) > _g4_s7 ? (16u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v31)) > _g4_s8 ? (24u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v32)) > _g4_s9 ? (28u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v33)) > _g4_s10 ? (32u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v34)) > _g4_s11 ? (32u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v35)) > _g4_s12 ? (48u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v36)) > _g4_s13 ? (64u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v37)) > _g4_s14 ? (72u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (576u + sizeof(_g4_t_v38)) > _g4_s15 ? (576u + sizeof(_g4_t_v38)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 576u);

  v2 = (uint32_t *)*a1;
  if ( v2 != a1 && a1 != (uint32_t *)*v2 )
  {
    v3 = v36;
    v35[0] = (uint32_t)(uintptr_t)(v35);
    v35[1] = (uint32_t)(uintptr_t)(v35);
    do
    {
      *v3 = (uint32_t)(uintptr_t)(v3);
      v3[1] = (uint32_t)(uintptr_t)(v3);
      v3 += 2;
    }
    while ( v3 != (uint32_t *)v38 );
    v4 = v35;
    v31 = v36;
    while ( 1 )
    {
      if ( v2 != v4 && (uint32_t *)*v2 != v4 )
        sub_19018A0(v4, v2, *v2);
      if ( v31 == v36 )
      {
        v5 = v36;
        v31 = (uint32_t *)(v37);
      }
      else
      {
        v33 = v36;
        v5 = v36;
        if ( (uint32_t *)v36[0] != v36 )
        {
          while ( 1 )
          {
            if ( v33 != v35 )
            {
              v6 = (uint32_t *)v35[0];
              v7 = (uint32_t *)*v33;
              if ( (uint32_t *)*v33 == v33 )
              {
LABEL_18:
                if ( v6 != v35 )
                  sub_19018A0(v33, v6, v35);
              }
              else
              {
                while ( v6 != v35 )
                {
                  v24 = (uint32_t *)v6[2];
                  v8 = G4_VCALL<int>(v7[2], 44);
                  v9 = *v24;
                  v22 = v24;
                  v25 = (const char *)v8;
                  v10 = (const char *)(*(int (**)(uint32_t *))(v9 + 44))(v22);
                  if ( strcmp(v10, v25) >= 0 )
                  {
                    v7 = (uint32_t *)*v7;
                    if ( v33 == v7 )
                      goto LABEL_18;
                  }
                  else
                  {
                    v26 = (uint32_t *)*v6;
                    sub_19018A0(v7, v6, *v6);
                    v6 = v26;
                    if ( v33 == v7 )
                      goto LABEL_18;
                  }
                }
              }
            }
            sub_1901820(v35, v33);
            v5 = v33 + 2;
            if ( v33 + 2 == v31 )
              break;
            if ( (uint32_t *)*v5 == v5 )
              goto LABEL_23;
            v33 += 2;
          }
          v31 = v33 + 4;
        }
      }
LABEL_23:
      sub_1901820(v35, v5);
      v2 = (uint32_t *)*a1;
      if ( (uint32_t *)*a1 == a1 )
        break;
      v4 = (uint32_t *)v35[0];
    }
    if ( v31 != (uint32_t *)v37 )
    {
      v34 = (uint32_t *)(v37);
      do
      {
        v13 = (uint32_t *)*v34;
        v14 = (uint32_t *)*(v34 - 2);
        v32 = v34 - 2;
        if ( (uint32_t *)*v34 == v34 )
        {
LABEL_39:
          if ( v32 != v14 )
            sub_19018A0(v34, v14, v32);
        }
        else if ( v14 != v34 - 2 )
        {
          do
          {
            v27 = (uint32_t *)v14[2];
            v15 = G4_VCALL<int>(v13[2], 44);
            v16 = *v27;
            v23 = v27;
            v28 = (const char *)v15;
            v17 = (const char *)(*(int (**)(uint32_t *))(v16 + 44))(v23);
            if ( strcmp(v17, v28) >= 0 )
            {
              v13 = (uint32_t *)*v13;
              if ( v13 == v34 )
                goto LABEL_39;
            }
            else
            {
              v29 = (uint32_t *)*v14;
              sub_19018A0(v13, v14, *v14);
              v14 = v29;
              if ( v13 == v34 )
                goto LABEL_39;
            }
          }
          while ( v32 != v14 );
        }
        v34 += 2;
      }
      while ( v34 != v31 );
    }
    sub_1901820(a1, v31 - 2);
    for ( i = (uint32_t *)(v38); ; i = v19 )
    {
      v19 = i - 2;
      v20 = (uint32_t *)*(i - 2);
      if ( v19 != v20 )
      {
        while ( 1 )
        {
          v21 = (uint32_t *)*v20;
          opDelete(v20);
          if ( v19 == v21 )
            break;
          v20 = v21;
        }
      }
      if ( v19 == v36 )
        break;
    }
    v11 = (uint32_t *)v35[0];
    if ( (uint32_t *)v35[0] != v35 )
    {
      while ( 1 )
      {
        v12 = (uint32_t *)*v11;
        opDelete(v11);
        if ( v12 == v35 )
          break;
        v11 = v12;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2C730_eac2c730  (binary VA: 0xc2c730)
// Original: sub_C2C730
// ----------------------------------------------------------------------------
int sub_C2C730_eac2c730(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int *v4;
  int *v5;
  int *v7;
  int *v8;
  int *v9;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D3C44 == 0 )
    v3 = (int *)(&dword_20D3C40);
  *((uint32_t *)a1 + 13) = v3[15];
  sub_8F0680();
  sub_8F5010();
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D5D7C == 0 )
    v4 = (int *)(&dword_20D5D78);
  sub_7B8F10((int)(uintptr_t)(v4), 1, -1);
  sub_B9D390(dword_20DDDC0, 1);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230((int)(uintptr_t)(&dword_20D5240));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D5248 == 0 )
    v5 = (int *)(&dword_20D5240);
  if ( !sub_9767E0((int)(uintptr_t)(v5)) && (uint8_t)sub_62F450(0) != 0 )
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
    sub_82D430((int)(uintptr_t)(v7), 0);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D49A8 == 0 )
      v8 = (int *)(&dword_20D49A0);
    sub_82A420((int)(uintptr_t)(v8), 1, 1);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v9 = nullptr;
    if ( byte_20D49A8 == 0 )
      v9 = (int *)(&dword_20D49A0);
    sub_82AAC0((int)(uintptr_t)(v9));
  }
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
// Function: sub_C2CB30  (binary VA: 0xc2cb30)
// Original: sub_C2CB30
// ----------------------------------------------------------------------------
void sub_C2CB30(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **i;
  int *v4;
  int v5;
  int *v6;
  void **v7;
  void **v8;
  void *v9[9];

  if ( (uint8_t)sub_638F10() != 0 )
  {
    v9[0] = v9;
    v9[1] = v9;
    sub_8560A0(a1, 4, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 0x7FFFFFFF);
    for ( i = (void **)v9[0]; i != v9; i = (void **)*i )
    {
      while ( (uint8_t)sub_C170A0((int)(uintptr_t)(i[2])) == 0 )
      {
        i = (void **)*i;
        if ( i == v9 )
          goto LABEL_13;
      }
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v4 = nullptr;
      if ( byte_20D4A64 == 0 )
        v4 = (int *)(&dword_20D4A60);
      G4_VCALL<void>(v4, 8, i[2]);
      v5 = (int)(uintptr_t)(i[2]);
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v6 = nullptr;
      if ( byte_20D4A64 == 0 )
        v6 = (int *)(&dword_20D4A60);
      sub_5B4460((int)(uintptr_t)(v6), v5, 0);
    }
LABEL_13:
    G4_VCALL<void>(a1, 28, a3);
    grapher::ActorBase::FireEvent(a1, 1, a3);
    v7 = (void **)v9[0];
    if ( v9[0] != v9 )
    {
      while ( 1 )
      {
        v8 = (void **)*v7;
        opDelete(v7);
        if ( v8 == v9 )
          break;
        v7 = v8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2CD40_eac2cd40  (binary VA: 0xc2cd40)
// Original: sub_C2CD40
// ----------------------------------------------------------------------------
void sub_C2CD40_eac2cd40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **i;
  int *v4;
  int v5;
  int *v6;
  void **v7;
  void **v8;
  void *v9[9];

  if ( (uint8_t)sub_638F10() != 0 )
  {
    v9[0] = v9;
    v9[1] = v9;
    sub_8560A0(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 0x7FFFFFFF);
    for ( i = (void **)v9[0]; i != v9; i = (void **)*i )
    {
      while ( (uint8_t)sub_C170A0((int)(uintptr_t)(i[2])) == 0 )
      {
        i = (void **)*i;
        if ( i == v9 )
          goto LABEL_13;
      }
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v4 = nullptr;
      if ( byte_20D4A64 == 0 )
        v4 = (int *)(&dword_20D4A60);
      G4_VCALL<void>(v4, 8, i[2]);
      v5 = (int)(uintptr_t)(i[2]);
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v6 = nullptr;
      if ( byte_20D4A64 == 0 )
        v6 = (int *)(&dword_20D4A60);
      sub_5B4460((int)(uintptr_t)(v6), v5, 0);
    }
LABEL_13:
    G4_VCALL<void>(a1, 28, a3);
    grapher::ActorBase::FireEvent(a1, 3, a3);
    v7 = (void **)v9[0];
    if ( v9[0] != v9 )
    {
      while ( 1 )
      {
        v8 = (void **)*v7;
        opDelete(v7);
        if ( v8 == v9 )
          break;
        v7 = v8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2CF50_eac2cf50  (binary VA: 0xc2cf50)
// Original: sub_C2CF50
// ----------------------------------------------------------------------------
void sub_C2CF50_eac2cf50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  void **v4;
  void **v5;
  void **k;
  size_t v7;
  void **j;
  int *v9;
  uint32_t *v10;
  int v11;
  void **i;
  int *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int *v17;
  int *v18;
  uint32_t *v19;
  int *v20;
  int v21;
  uint32_t *v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef void *_g4_t_obj;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef grapher::ActorContext::Self *_g4_t_v33;
  typedef grapher::ActorBase::Self *_g4_t_v34;
  typedef g4_cxa_guard_t *_g4_t_v35;
  typedef g4_cxa_guard_t *_g4_t_v36;
  typedef g4_cxa_guard_t *_g4_t_v37;
  typedef char *_g4_t_s;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41[5];
  typedef uint32_t _g4_t_v42[9];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_obj)) > _g4_s4 ? (32u + sizeof(_g4_t_obj)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v29)) > _g4_s5 ? (36u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v30)) > _g4_s6 ? (36u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v31)) > _g4_s7 ? (40u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v32)) > _g4_s8 ? (48u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v33)) > _g4_s9 ? (52u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v34)) > _g4_s10 ? (56u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v35)) > _g4_s11 ? (60u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v36)) > _g4_s12 ? (60u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v37)) > _g4_s13 ? (68u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_s)) > _g4_s14 ? (72u + sizeof(_g4_t_s)) : _g4_s14,
    _g4_s16 = (83u + sizeof(_g4_t_v39)) > _g4_s15 ? (83u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v40)) > _g4_s16 ? (88u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v41)) > _g4_s17 ? (92u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v42)) > _g4_s18 ? (112u + sizeof(_g4_t_v42)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 83u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);

  v42[5] = (uint32_t)(uintptr_t)(&a1);
  v3 = a2;
  v34 = a1;
  v33 = a3;
  v41[0] = v41;
  v41[1] = v41;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v41), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  if ( v3 == 1 )
  {
    for ( i = (void **)v41[0]; i != v41; i = (void **)*i )
    {
      v14 = (uint32_t *)(i[2]);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
      {
        v30 = (uint32_t *)(i[2]);
        v15 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
        v14 = v30;
        if ( v15 != 0 )
        {
          sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          v14 = v30;
        }
      }
      v13 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v13 = (int *)(&dword_20D4A60);
      sub_5D8870((int)(uintptr_t)(v13), v14, 0);
    }
    goto LABEL_5;
  }
  if ( v3 <= 1 )
  {
    if ( v3 == 0 )
    {
      v16 = sub_8F0680();
      v31 = v16;
      v32 = 0;
      if ( v16 != 0 )
      {
        if ( sub_8F1EA0(v16) != 0 )
        {
          v32 = sub_8F1EA0(v31);
        }
        else if ( sub_8F5BA0(v31) != 0 )
        {
          v32 = sub_8F5BA0(v31);
        }
      }
      v37 = (g4_cxa_guard_t *)v41[0];
      if ( v41[0] != v41 )
      {
        while ( 1 )
        {
          v19 = (uint32_t *)v37[2];
          if ( v19 == nullptr )
            goto LABEL_40;
          if ( (uint8_t)sub_C170A0(v37[2]) == 0 )
            break;
          G4_VCALL<void>(v19, 112, 1);
          if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
          {
LABEL_51:
            if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
            {
              sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
              __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
            }
          }
LABEL_41:
          v17 = nullptr;
          if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
            v17 = (int *)(&dword_20D4A60);
          G4_VCALL<void>(v17, 8, v19);
          if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
            && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
          {
            sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
            __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          }
          v18 = nullptr;
          if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
            v18 = (int *)(&dword_20D4A60);
          sub_5B4460((int)(uintptr_t)(v18), (int)(uintptr_t)(v19), 3);
          if ( v19 != nullptr && v32 == (uint32_t)(uintptr_t)(v19) )
          {
            v20 = (int *)G4_VCALL<int>(v19, 16);
            v21 = 0;
            if ( v20 != nullptr )
            {
              v21 = (int)(uintptr_t)(v19);
              if ( v20 != (int *)(uintptr_t)(&dword_20D68D0) )
              {
                do
                {
                  v20 = (int *)v20[1];
                  if ( v20 == nullptr )
                  {
                    v21 = 0;
                    goto LABEL_61;
                  }
                }
                while ( v20 != (int *)(uintptr_t)(&dword_20D68D0) );
                v21 = (int)(uintptr_t)(v19);
              }
            }
LABEL_61:
            v22 = sub_62A190(v31, v21);
            if ( v22 != nullptr )
            {
              v35 = *(g4_cxa_guard_t **)(*v19 + 308);
              obj = v22;
              (*(void (**)(uint32_t *, uint32_t *))(*v22 + 52))(v42, v22);
              ((void (*)(uint32_t *))v35)(v19);
              v36 = *(g4_cxa_guard_t **)(*v19 + 316);
              v23 = G4_VCALL<int>(obj, 56);
              ((void (*)(uint32_t *, int))v36)(v19, v23);
            }
          }
          v37 = (g4_cxa_guard_t *)*v37;
          if ( v37 == (g4_cxa_guard_t *)v41 )
            goto LABEL_5;
        }
        sub_C16450(v19);
        G4_VCALL<void>(v19, 32);
        if ( (*(uint8_t *)unk_20C1765) != 0 )
          G4_VCALL<void>(v19, 356);
LABEL_40:
        if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
          goto LABEL_51;
        goto LABEL_41;
      }
    }
LABEL_5:
    if ( byte_20D5B50 != 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 4 )
    {
      for ( j = (void **)v41[0]; j != v41; j = (void **)*j )
      {
        v10 = (uint32_t *)(j[2]);
        if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        {
          v29 = (uint32_t *)(j[2]);
          v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
          v10 = v29;
          if ( v11 != 0 )
          {
            sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
            __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
            v10 = v29;
          }
        }
        v9 = nullptr;
        if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
          v9 = (int *)(&dword_20D4A60);
        sub_5D8560((int)(uintptr_t)(v9), v10, v24, v25, v26, v27);
      }
    }
    goto LABEL_5;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39) + 1, "RELEASE_", (int)(uintptr_t)(&v39));
  for ( k = (void **)v41[0]; k != v41; k = (void **)*k )
  {
    s = (char *)G4_VCALL<int>(k[2], 44);
    g4_std::string::construct_copy(&v40, (char *)&v39 + 1);
    v7 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(&v40), s, v7);
    sub_C17C80((int)(uintptr_t)(k[2]), (int)(uintptr_t)(&v40));
    g4_std::string::Destroy(&v40);
    G4_VCALL<void>(k[2], 40, 512, 1);
  }
  g4_std::string::Destroy((char *)&v39 + 1);
  if ( byte_20D5B50 == 0 )
  {
LABEL_14:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
  }
LABEL_6:
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v34, v33);
  v4 = (void **)v41[0];
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v41 )
        break;
      v4 = v5;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2D580  (binary VA: 0xc2d580)
// Original: sub_C2D580
// ----------------------------------------------------------------------------
int sub_C2D580(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v4)) > _g4_s2 ? (20u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v5)) > _g4_s3 ? (24u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "Teleport To Estate", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Player", (int)(uintptr_t)(&v2) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "In", (int)(uintptr_t)(&v2) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "Out", (int)(uintptr_t)(&v2) + 3);
  grapher::ActorBase::AddPin(a1, 1, v6, 0, -1);
  return ((g4_std::string::Destroy(v6)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2D6C0_eac2d6c0  (binary VA: 0xc2d6c0)
// Original: sub_C2D6C0
// ----------------------------------------------------------------------------
int sub_C2D6C0_eac2d6c0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Mission End", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Missions", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Use fade in at the end of the mission screen.", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Use Fades", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Use Fades", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 0, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2D8F0_eac2d8f0  (binary VA: 0xc2d8f0)
// Original: sub_C2D8F0
// ----------------------------------------------------------------------------
int sub_C2D8F0_eac2d8f0(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v3)) > _g4_s1 ? (24u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v4)) > _g4_s2 ? (28u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v5)) > _g4_s3 ? (32u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v6)) > _g4_s4 ? (36u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v7)) > _g4_s5 ? (40u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v8)) > _g4_s6 ? (44u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v9)) > _g4_s7 ? (48u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v10)) > _g4_s8 ? (52u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v11)) > _g4_s9 ? (56u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v12)) > _g4_s10 ? (60u + sizeof(_g4_t_v12)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 24u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 32u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "IsCompleted", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Missions", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Comleted", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v11, 0, -1);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "Not Comleted", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 3, v12, 0, -1);
  g4_std::string::Destroy(v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "The mission id to test for completion.", (int)(uintptr_t)(&v4));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Mission ID", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 11, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Mission ID", (int)(uintptr_t)(&v3) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 1, (int)(uintptr_t)(&v9), 1);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2DB70  (binary VA: 0xc2db70)
// Original: sub_C2DB70
// ----------------------------------------------------------------------------
void sub_C2DB70(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v4;
  int i;
  grapher::ActorVariable::Self *v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

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
        v7 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
        *v7 = (uint32_t)(uintptr_t)(&off_205C408);
        v7[1] = (uint32_t)(uintptr_t)(&dword_213B814);
        grapher::HolderT_string_e830be::From(v7, a2);
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
// Function: sub_C2DD10_eac2dd10  (binary VA: 0xc2dd10)
// Original: sub_C2DD10
// ----------------------------------------------------------------------------
void sub_C2DD10_eac2dd10(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  unsigned int v4;
  unsigned int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int *v9;
  char *v10;
  void **v11;
  void **v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v13)) > _g4_s0 ? (15u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v14)) > _g4_s1 ? (20u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 15u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);

  v15[0] = v15;
  v15[1] = v15;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v15), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v15[0];
  if ( v15[0] == v15 )
    goto LABEL_14;
  v4 = 0;
  do
  {
    v3 = (void **)*v3;
    ++v4;
  }
  while ( v3 != v15 );
  if ( v4 == 0 )
  {
LABEL_14:
    v9 = (int *)((char *)&v13 + 1);
    g4_std::string::construct_copy((char *)&v13 + 1, &unk_20D67EC);
  }
  else
  {
    v5 = lrand48();
    v6 = (uint32_t *)(v15[0]);
    v7 = v5 % v4;
    if ( v5 % v4 != 0 )
    {
      v8 = 0;
      do
      {
        ++v8;
        v6 = (uint32_t *)*v6;
      }
      while ( v8 != v7 );
    }
    v9 = &v14;
    v10 = (char *)G4_VCALL<int>(v6[2], 44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), v10, (int)(uintptr_t)(&v13));
  }
  sub_C2DB70(a1, (int)(uintptr_t)(v9), a3);
  g4_std::string::Destroy(v9);
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v11 = (void **)v15[0];
  if ( v15[0] != v15 )
  {
    while ( 1 )
    {
      v12 = (void **)*v11;
      opDelete(v11);
      if ( v12 == v15 )
        break;
      v11 = v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2DE30_eac2de30  (binary VA: 0xc2de30)
// Original: sub_C2DE30
// ----------------------------------------------------------------------------
unsigned int sub_C2DE30_eac2de30(grapher::ActorBase::Self *a1, unsigned int a2, grapher::ActorContext::Self *a3)
{
  unsigned int result;
  void **v4;
  void **v5;
  void **v6;
  void *v7;
  char *v8;
  typedef void *_g4_t_v9;
  typedef void **_g4_t_v10;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v11)) > _g4_s2 ? (27u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 27u);

  result = a2;
  if ( a2 != 0 )
  {
    if ( a2 > 1 )
      return result;
    v5 = (void **)((char *)a1 + 52);
  }
  else
  {
    v4 = *((void ***)a1 + 13);
    v5 = (void **)((char *)a1 + 52);
    if ( v4 != (void **)((char *)a1 + 52) )
    {
      while ( 1 )
      {
        v10 = (void **)*v4;
        opDelete(v4);
        if ( v10 == v5 )
          break;
        v4 = v10;
      }
    }
    *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v5);
    *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v5);
    sub_8560A0(a1, 0, (int)(uintptr_t)(a1) + 52, (int)(uintptr_t)(a3), 0x7FFFFFFF);
    sub_C2C400((uint32_t *)a1 + 13);
  }
  v6 = *((void ***)a1 + 13);
  if ( v6 == v5 || (v7 = v6[2], v9 = *((void **)a1 + 13), sub_1901940(v9), opDelete(v9), v7 == nullptr) )
  {
    v7 = nullptr;
    g4_std::string::construct_copy((char *)v11 + 1, &unk_20D67EC);
  }
  else
  {
    v8 = (char *)G4_VCALL<int>(v7, 44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v11) + 1, v8, (int)(uintptr_t)(v11));
  }
  sub_C2DB70(a1, (int)(uintptr_t)(v11) + 1, a3);
  g4_std::string::Destroy((char *)v11 + 1);
  return (unsigned int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3 - (v7 == nullptr), a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C2DFA0  (binary VA: 0xc2dfa0)
// Original: sub_C2DFA0
// ----------------------------------------------------------------------------
int sub_C2DFA0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Menu [C]", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Menus", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Open", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Close", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v29, 1, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Out", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Closed", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Menu that needs to be opened.", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "MenuFlashType", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "FlashMenuTypes", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &v15);
  HIDWORD(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v16, 11, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "MenuFlashType", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v7, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( HIDWORD(v12) != 0 )
    G4_VCALL<void>(HIDWORD(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Parameter 1 to send to the menu, depends on which menu is used.", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Parameter 1", (int)(uintptr_t)(&v9) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v19, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Parameter 1", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v3, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Parameter 2 to send to the menu, depends on which menu is used.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Parameter 2", (int)(uintptr_t)(&v10) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v22, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Parameter 2", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v4, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Parameter 3 to send to the menu, depends on which menu is used.", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Parameter 3", (int)(uintptr_t)(&v11) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Parameter 3", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v26), v5, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  return ((g4_std::string::Destroy(&v27)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2E5F0_eac2e5f0  (binary VA: 0xc2e5f0)
// Original: sub_C2E5F0
// ----------------------------------------------------------------------------
int sub_C2E5F0_eac2e5f0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
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
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v6)) > _g4_s3 ? (32u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v7)) > _g4_s4 ? (36u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v9)) > _g4_s6 ? (44u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v10)) > _g4_s7 ? (60u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v11)) > _g4_s8 ? (64u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v12)) > _g4_s9 ? (68u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v13)) > _g4_s10 ? (72u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v14)) > _g4_s11 ? (76u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v15)) > _g4_s12 ? (80u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v16)) > _g4_s13 ? (84u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v17)) > _g4_s14 ? (88u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v18)) > _g4_s15 ? (92u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v19)) > _g4_s16 ? (96u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v20)) > _g4_s17 ? (100u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v21)) > _g4_s18 ? (104u + sizeof(_g4_t_v21)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Video", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Menus", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Open", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Close", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Completed", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 3, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "The name of the video to be played.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "VideoName", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 4, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "VideoName", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Whether the video will be skippable or not.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "IsSkippable", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "IsSkippable", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2EA10_eac2ea10  (binary VA: 0xc2ea10)
// Original: sub_C2EA10
// ----------------------------------------------------------------------------
int sub_C2EA10_eac2ea10(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef long double _g4_t_v10;
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
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v6)) > _g4_s3 ? (24u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v7)) > _g4_s4 ? (30u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
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
    _g4_s20 = (96u + sizeof(_g4_t_v22)) > _g4_s19 ? (96u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v23)) > _g4_s20 ? (100u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v24)) > _g4_s21 ? (104u + sizeof(_g4_t_v24)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 30u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
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
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 100u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 104u);

  grapher::ActorBase::SetArraySize(a1, 3, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Mission Start", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Missions", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Out", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v23, 0, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Completed", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 2, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "The ID of the mission", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Mission ID", (int)(uintptr_t)(&v8));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 4, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Mission ID", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Is the mission screen will be displayed?", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Show Screen", (int)(uintptr_t)(&v8) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Show Screen", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 0, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Enable automatic fades.", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Use Fades", (int)(uintptr_t)(&v9) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Use Fades", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2EEE0_eac2eee0  (binary VA: 0xc2eee0)
// Original: sub_C2EEE0
// ----------------------------------------------------------------------------
int sub_C2EEE0_eac2eee0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[20];
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
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
  typedef int _g4_t_v53[4];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v9)) > _g4_s3 ? (8u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v10)) > _g4_s4 ? (8u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v11)) > _g4_s5 ? (8u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v12)) > _g4_s6 ? (8u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v13)) > _g4_s7 ? (8u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v14)) > _g4_s8 ? (8u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v15)) > _g4_s9 ? (8u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v16)) > _g4_s10 ? (8u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (33u + sizeof(_g4_t_v17)) > _g4_s11 ? (33u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v18)) > _g4_s12 ? (36u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v19)) > _g4_s13 ? (40u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v20)) > _g4_s14 ? (44u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v21)) > _g4_s15 ? (48u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v22)) > _g4_s16 ? (52u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v23)) > _g4_s17 ? (56u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v24)) > _g4_s18 ? (76u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v25)) > _g4_s19 ? (92u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v26)) > _g4_s20 ? (108u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v27)) > _g4_s21 ? (112u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v28)) > _g4_s22 ? (116u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v29)) > _g4_s23 ? (120u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v30)) > _g4_s24 ? (124u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v31)) > _g4_s25 ? (128u + sizeof(_g4_t_v31)) : _g4_s25,
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
    _g4_s48 = (216u + sizeof(_g4_t_v53)) > _g4_s47 ? (216u + sizeof(_g4_t_v53)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 33u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 116u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 120u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Mission Outcome", (int)(uintptr_t)(&v17));
  grapher::ActorBase::SetDisplayName(a1, &v27);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Missions", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v28);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Succeed", (int)(uintptr_t)(&v23[1]));
  grapher::ActorBase::AddPin(a1, 0, &v51, 1, -1);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Fail", (int)(uintptr_t)(&v23[2]));
  grapher::ActorBase::AddPin(a1, 1, &v52, 1, -1);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), "Out", (int)(uintptr_t)(&v23[3]));
  grapher::ActorBase::AddPin(a1, 2, v53, 0, -1);
  g4_std::string::Destroy(v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Mission ID", (int)(uintptr_t)(&v17) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v23[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v29, 4, &v23[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Mission ID", (int)(uintptr_t)(&v18));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v30), v7, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( *(uint32_t *)&v23[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v23[4] + 44))(*(uint32_t *)&v23[4]);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Show Screen", (int)(uintptr_t)(&v18) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v32, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Show Screen", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v33), v8, 1, 0, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Failure type (from GIV_MissionFailTypes in GIV_mission_constants.xml)", (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Fail Type", (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "GIV_MissionFailTypes.None", (int)(uintptr_t)(&v19) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &v35);
  v24 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v36, 11, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Fail Type", (int)(uintptr_t)(&v19) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v37), v10, 1, 0, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "The text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v20) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Fail Text ID", (int)(uintptr_t)(&v20) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v25 = v11;
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v39, 11, &v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Fail Text ID", (int)(uintptr_t)(&v20) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v40), v12, 1, 0, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  if ( v25 != nullptr )
    G4_VCALL<void>(v25, 44);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "The text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v21) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Fail Hint ID", (int)(uintptr_t)(&v21));
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v26 = v13;
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v42, 11, &v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Fail Hint ID", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v43), v14, 1, 0, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  if ( v26 != nullptr )
    G4_VCALL<void>(v26, 44);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "The player's score at the end of the mission.", (int)(uintptr_t)(&v22) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Score", (int)(uintptr_t)(&v21) + 3);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v45, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Score", (int)(uintptr_t)(&v22));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v46), v15, 1, 0, (int)(uintptr_t)(&v47), 3);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Reset to the default cameraa at the end of the mission.", (int)(uintptr_t)(v23));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "Reset Camera", (int)(uintptr_t)(&v22) + 2);
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v48, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Reset Camera", (int)(uintptr_t)(&v22) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v49), v16, 1, 0, (int)(uintptr_t)(&v50), 3);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v48);
  return ((g4_std::string::Destroy(&v50)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2F920_eac2f920  (binary VA: 0xc2f920)
// Original: sub_C2F920
// ----------------------------------------------------------------------------
int sub_C2F920_eac2f920(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int64_t _g4_t_v8;
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
  typedef int _g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v6)) > _g4_s3 ? (17u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v8)) > _g4_s5 ? (24u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v9)) > _g4_s6 ? (32u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v10)) > _g4_s7 ? (36u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v11)) > _g4_s8 ? (40u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v12)) > _g4_s9 ? (44u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v13)) > _g4_s10 ? (48u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v14)) > _g4_s11 ? (52u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v15)) > _g4_s12 ? (56u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v16)) > _g4_s13 ? (60u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v17)) > _g4_s14 ? (64u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v18)) > _g4_s15 ? (68u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v19)) > _g4_s16 ? (72u + sizeof(_g4_t_v19)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 17u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
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
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);

  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Start Module", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Missions", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v18, 0, 4);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Respawn", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v19, 0, 4);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Script Name", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v11);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v12, 4, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Script Name", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v4, 1, 0, (int)(uintptr_t)(&v14), 1);
  g4_std::string::Destroy(&v13);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Use Respawn Fade", (int)(uintptr_t)(&v7) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Use Respawn Fade", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 0, (int)(uintptr_t)(&v17), 1);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C2FCD0_eac2fcd0  (binary VA: 0xc2fcd0)
// Original: sub_C2FCD0
// ----------------------------------------------------------------------------
int sub_C2FCD0_eac2fcd0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[20];
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
  typedef int _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v8)) > _g4_s4 ? (24u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v9)) > _g4_s5 ? (24u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v10)) > _g4_s6 ? (24u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (49u + sizeof(_g4_t_v11)) > _g4_s7 ? (49u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v12)) > _g4_s8 ? (52u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v13)) > _g4_s9 ? (56u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v14)) > _g4_s10 ? (60u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v15)) > _g4_s11 ? (64u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v16)) > _g4_s12 ? (84u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v17)) > _g4_s13 ? (88u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v18)) > _g4_s14 ? (92u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v19)) > _g4_s15 ? (96u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v20)) > _g4_s16 ? (100u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v21)) > _g4_s17 ? (104u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v22)) > _g4_s18 ? (108u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v23)) > _g4_s19 ? (112u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v24)) > _g4_s20 ? (116u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v25)) > _g4_s21 ? (120u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v26)) > _g4_s22 ? (124u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v27)) > _g4_s23 ? (128u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v28)) > _g4_s24 ? (132u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v29)) > _g4_s25 ? (136u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v30)) > _g4_s26 ? (140u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v31)) > _g4_s27 ? (144u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v32)) > _g4_s28 ? (148u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v33)) > _g4_s29 ? (152u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v34)) > _g4_s30 ? (156u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v35)) > _g4_s31 ? (160u + sizeof(_g4_t_v35)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 49u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Apply Damage", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Objects", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "IN", (int)(uintptr_t)(&v15[2]));
  grapher::ActorBase::AddPin(a1, 0, &v34, 1, -1);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "Out", (int)(uintptr_t)(&v15[3]));
  grapher::ActorBase::AddPin(a1, 1, v35, 0, -1);
  g4_std::string::Destroy(v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "List of objects to damage.", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Object", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v15[4] = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v19, 9, &v15[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Object", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v8, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v15[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v15[4] + 44))(*(uint32_t *)&v15[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Amount of damage", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Damage", (int)(uintptr_t)(&v12) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v22, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Damage", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v4, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Damage Info", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage Info", (int)(uintptr_t)(&v13) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Damage Info", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v5, 1, 0, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Damage filter", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Damage Filter", (int)(uintptr_t)(&v14));
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v28, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Damage Filter", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v29), v6, 1, 0, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Attacker", (int)(uintptr_t)(&v15[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Attacker", (int)(uintptr_t)(&v14) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v16 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v31, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Attacker", (int)(uintptr_t)(v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v32), v10, 1, 0, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v31);
  return ((g4_std::string::Destroy(&v33)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C303E0_eac303e0  (binary VA: 0xc303e0)
// Original: sub_C303E0
// ----------------------------------------------------------------------------
int sub_C303E0_eac303e0(grapher::ActorBase::Self *a1)
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
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
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
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
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
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Attach", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Attach", (int)(uintptr_t)(&v10[1]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Detach", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 1, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Object to attach to the parent. Needs to have a glitch scene node.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Parent of the object to attach. Needs to have a glitch scene node.", (int)(uintptr_t)(v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Parent", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Parent", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C30830  (binary VA: 0xc30830)
// Original: sub_C30830
// ----------------------------------------------------------------------------
int sub_C30830(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v8)) > _g4_s4 ? (30u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v11)) > _g4_s7 ? (56u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v12)) > _g4_s8 ? (64u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v13)) > _g4_s9 ? (68u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v14)) > _g4_s10 ? (72u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Convert to Asset", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Object to convert", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Base name to assign the object. Will be suffixed by _index.", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Base Name", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 4, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Base Name", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C30C30_eac30c30  (binary VA: 0xc30c30)
// Original: sub_C30C30
// ----------------------------------------------------------------------------
int sub_C30C30_eac30c30(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
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
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v4)) > _g4_s1 ? (20u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
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
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Count Object", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects to count", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Store count in this variable", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Result", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Result", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 1, (int)(uintptr_t)(&v16), 2);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C30FC0_eac30fc0  (binary VA: 0xc30fc0)
// Original: sub_C30FC0
// ----------------------------------------------------------------------------
int sub_C30FC0_eac30fc0(grapher::ActorBase::Self *a1)
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
  grapher::ActorBase::SetArraySize(a1, 5, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Enable Object", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Release", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Delete", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "List of objects to enable", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C31330_eac31330  (binary VA: 0xc31330)
// Original: sub_C31330
// ----------------------------------------------------------------------------
int sub_C31330_eac31330(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Hide Object", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Show", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Hide", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "List of objects to hide", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C31610_eac31610  (binary VA: 0xc31610)
// Original: sub_C31610
// ----------------------------------------------------------------------------
int sub_C31610_eac31610(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
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
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v6)) > _g4_s3 ? (32u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v7)) > _g4_s4 ? (36u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v9)) > _g4_s6 ? (44u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v10)) > _g4_s7 ? (60u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v11)) > _g4_s8 ? (64u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v12)) > _g4_s9 ? (68u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v13)) > _g4_s10 ? (72u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v14)) > _g4_s11 ? (76u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v15)) > _g4_s12 ? (80u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v16)) > _g4_s13 ? (84u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v17)) > _g4_s14 ? (88u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v18)) > _g4_s15 ? (92u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v19)) > _g4_s16 ? (96u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v20)) > _g4_s17 ? (100u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v21)) > _g4_s18 ? (104u + sizeof(_g4_t_v21)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Exists", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "In", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Exists", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v19, 0, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Doesn't Exist", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 3, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object to check.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 9, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Does the object have to be enabled to pass the test.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Enabled", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Enabled", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C31A30_eac31a30  (binary VA: 0xc31a30)
// Original: sub_C31A30
// ----------------------------------------------------------------------------
int sub_C31A30_eac31a30(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v8)) > _g4_s4 ? (30u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v11)) > _g4_s7 ? (56u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v12)) > _g4_s8 ? (64u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v13)) > _g4_s9 ? (68u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v14)) > _g4_s10 ? (72u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Find Random", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "List of ocject to find from", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Source", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Source", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Object returned", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Result", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Result", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 2);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C31E30_eac31e30  (binary VA: 0xc31e30)
// Original: sub_C31E30
// ----------------------------------------------------------------------------
int sub_C31E30_eac31e30(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef g4_int128_t _g4_t_v10;
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
  typedef int _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v7)) > _g4_s4 ? (23u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v8)) > _g4_s5 ? (24u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v9)) > _g4_s6 ? (28u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v10)) > _g4_s7 ? (32u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v11)) > _g4_s8 ? (48u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v12)) > _g4_s9 ? (52u + sizeof(_g4_t_v12)) : _g4_s9,
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
    _g4_s21 = (96u + sizeof(_g4_t_v23)) > _g4_s20 ? (96u + sizeof(_g4_t_v23)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 23u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Get Property", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Objects", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object to get the property from", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 1);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "OID of the property", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Property", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Property", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 1);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Value to get", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Value", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Value", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 2);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C322B0  (binary VA: 0xc322b0)
// Original: sub_C322B0
// ----------------------------------------------------------------------------
int sub_C322B0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
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
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v8)) > _g4_s4 ? (24u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v10)) > _g4_s6 ? (32u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v11)) > _g4_s7 ? (48u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v12)) > _g4_s8 ? (52u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v13)) > _g4_s9 ? (56u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v14)) > _g4_s10 ? (60u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v15)) > _g4_s11 ? (64u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v16)) > _g4_s12 ? (68u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v18)) > _g4_s14 ? (100u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v19)) > _g4_s15 ? (104u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v20)) > _g4_s16 ? (108u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v21)) > _g4_s17 ? (112u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v22)) > _g4_s18 ? (116u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v23)) > _g4_s19 ? (120u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v24)) > _g4_s20 ? (124u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v25)) > _g4_s21 ? (128u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v26)) > _g4_s22 ? (132u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v27)) > _g4_s23 ? (136u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v28)) > _g4_s24 ? (140u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v29)) > _g4_s25 ? (144u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v30)) > _g4_s26 ? (148u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v31)) > _g4_s27 ? (152u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v32)) > _g4_s28 ? (156u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v33)) > _g4_s29 ? (160u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v34)) > _g4_s30 ? (164u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v35)) > _g4_s31 ? (168u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v36)) > _g4_s32 ? (172u + sizeof(_g4_t_v36)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v37)) > _g4_s33 ? (176u + sizeof(_g4_t_v37)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 100u);
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
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 176u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Give Health", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Objects", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "In", (int)(uintptr_t)(&v15) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v36, 1, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Out", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 1, v37, 0, -1);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Object to give the heal", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Object", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v16 = v5;
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v20, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Object", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v6, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Amount of HP to give", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Health", (int)(uintptr_t)(&v12) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v23, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Health", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v4, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "How to apply the health value", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Modifier", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "ScriptValueModifier.Add", (int)(uintptr_t)(&v13));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &v26);
  v17 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v27, 11, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Modifier", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v28), v8, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Allow health to increase past the max health of the object.", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Allow Overflow", (int)(uintptr_t)(&v14));
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v30, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Allow Overflow", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v31), v9, 1, 0, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Affect dead or destroyed objects", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Affect dead or destroyed objects", (int)(uintptr_t)(&v14) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v33, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Affect dead or destroyed objects", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v34), v10, 1, 0, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  return ((g4_std::string::Destroy(&v35)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C32A00  (binary VA: 0xc32a00)
// Original: sub_C32A00
// ----------------------------------------------------------------------------
int sub_C32A00(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef void *_g4_t_v6;
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
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2,
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
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Get Health", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Object to query for health", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v12 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Object", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Current HP", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Health", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Health", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 2);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Maximum HP", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "MaxHealth", (int)(uintptr_t)(&v10));
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v21, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Max Health", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v6, 1, 1, (int)(uintptr_t)(&v23), 2);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "HP Ratio", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "HealthRatio", (int)(uintptr_t)(&v10) + 3);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v7), (int)(uintptr_t)(&v24), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Health Ratio", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v7, 1, 1, (int)(uintptr_t)(&v26), 2);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C32F90_eac32f90  (binary VA: 0xc32f90)
// Original: sub_C32F90
// ----------------------------------------------------------------------------
int sub_C32F90_eac32f90(grapher::ActorBase::Self *a1)
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
  typedef uint8_t _g4_t_v14[20];
  typedef uint32_t *_g4_t_v15;
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
  typedef int _g4_t_v33[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v9)) > _g4_s5 ? (28u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_v10)) > _g4_s6 ? (46u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v11)) > _g4_s7 ? (48u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v12)) > _g4_s8 ? (52u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v13)) > _g4_s9 ? (56u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v14)) > _g4_s10 ? (60u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v15)) > _g4_s11 ? (80u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v16)) > _g4_s12 ? (88u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v17)) > _g4_s13 ? (92u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v18)) > _g4_s14 ? (96u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v19)) > _g4_s15 ? (100u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v20)) > _g4_s16 ? (104u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v21)) > _g4_s17 ? (108u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v22)) > _g4_s18 ? (112u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v23)) > _g4_s19 ? (116u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v24)) > _g4_s20 ? (120u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v25)) > _g4_s21 ? (124u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v26)) > _g4_s22 ? (128u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v27)) > _g4_s23 ? (132u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v28)) > _g4_s24 ? (136u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v29)) > _g4_s25 ? (140u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v30)) > _g4_s26 ? (144u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v31)) > _g4_s27 ? (148u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v32)) > _g4_s28 ? (152u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v33)) > _g4_s29 ? (156u + sizeof(_g4_t_v33)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 132u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 136u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 140u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 144u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 148u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 152u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 156u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Highlight", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Objects", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Show", (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::AddPin(a1, 0, &v31, 1, -1);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Hide", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 1, &v32, 1, -1);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), "Out", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 2, v33, 0, -1);
  g4_std::string::Destroy(v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "List of objects to highlight.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Object", (int)(uintptr_t)(&v11));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v18, 9, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Object", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v5, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Highlight", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Highlight", (int)(uintptr_t)(&v11) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v21);
  v15 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v22, 11, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Highlight", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v7, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Show in game", (int)(uintptr_t)(&v12) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v25, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Show in game", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v8, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Show on map", (int)(uintptr_t)(&v13) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Show on map", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  return ((g4_std::string::Destroy(&v30)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C33620_eac33620  (binary VA: 0xc33620)
// Original: sub_C33620
// ----------------------------------------------------------------------------
int sub_C33620_eac33620(grapher::ActorBase::Self *a1)
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
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "List Objects", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Iter", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Out", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v23, 0, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Completed", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 2, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "List of objects to iter on", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Source", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Source", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Object returned", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Result", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Result", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 2);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C33AC0_eac33ac0  (binary VA: 0xc33ac0)
// Original: sub_C33AC0
// ----------------------------------------------------------------------------
int sub_C33AC0_eac33ac0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[20];
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
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
  typedef int _g4_t_v46;
  typedef int _g4_t_v47[4];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v10)) > _g4_s4 ? (12u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v11)) > _g4_s5 ? (12u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v12)) > _g4_s6 ? (12u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v13)) > _g4_s7 ? (12u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v14)) > _g4_s8 ? (12u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v15)) > _g4_s9 ? (12u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (33u + sizeof(_g4_t_v16)) > _g4_s10 ? (33u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v17)) > _g4_s11 ? (36u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v18)) > _g4_s12 ? (40u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v19)) > _g4_s13 ? (44u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v20)) > _g4_s14 ? (48u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v21)) > _g4_s15 ? (52u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v22)) > _g4_s16 ? (72u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v23)) > _g4_s17 ? (88u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v24)) > _g4_s18 ? (104u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v25)) > _g4_s19 ? (108u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v26)) > _g4_s20 ? (112u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v27)) > _g4_s21 ? (116u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v28)) > _g4_s22 ? (120u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v29)) > _g4_s23 ? (124u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v30)) > _g4_s24 ? (128u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v31)) > _g4_s25 ? (132u + sizeof(_g4_t_v31)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v32)) > _g4_s26 ? (136u + sizeof(_g4_t_v32)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v33)) > _g4_s27 ? (140u + sizeof(_g4_t_v33)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v34)) > _g4_s28 ? (144u + sizeof(_g4_t_v34)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v35)) > _g4_s29 ? (148u + sizeof(_g4_t_v35)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v36)) > _g4_s30 ? (152u + sizeof(_g4_t_v36)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v37)) > _g4_s31 ? (156u + sizeof(_g4_t_v37)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v38)) > _g4_s32 ? (160u + sizeof(_g4_t_v38)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v39)) > _g4_s33 ? (164u + sizeof(_g4_t_v39)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v40)) > _g4_s34 ? (168u + sizeof(_g4_t_v40)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v41)) > _g4_s35 ? (172u + sizeof(_g4_t_v41)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v42)) > _g4_s36 ? (176u + sizeof(_g4_t_v42)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v43)) > _g4_s37 ? (180u + sizeof(_g4_t_v43)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v44)) > _g4_s38 ? (184u + sizeof(_g4_t_v44)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v45)) > _g4_s39 ? (188u + sizeof(_g4_t_v45)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v46)) > _g4_s40 ? (192u + sizeof(_g4_t_v46)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v47)) > _g4_s41 ? (196u + sizeof(_g4_t_v47)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 33u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
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
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 180u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 184u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 188u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 192u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 196u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Move To", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetDisplayName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Objects", (int)(uintptr_t)(&v16) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "In", (int)(uintptr_t)(&v21[1]));
  grapher::ActorBase::AddPin(a1, 0, &v45, 1, -1);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Out", (int)(uintptr_t)(&v21[2]));
  grapher::ActorBase::AddPin(a1, 1, &v46, 0, -1);
  g4_std::string::Destroy(&v46);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v47), "Reached", (int)(uintptr_t)(&v21[3]));
  grapher::ActorBase::AddPin(a1, 2, v47, 0, -1);
  g4_std::string::Destroy(v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Object to teleport", (int)(uintptr_t)(&v17) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Object", (int)(uintptr_t)(&v16) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v21[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v27, 9, &v21[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Object", (int)(uintptr_t)(&v17));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v28), v7, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( *(uint32_t *)&v21[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v21[4] + 44))(*(uint32_t *)&v21[4]);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Destination the object should move to", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Destination", (int)(uintptr_t)(&v17) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v22 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v30, 9, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Destination", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v9, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Time to do the interpolation in ms or speed in m/s (if Use Speed = True)", (int)(uintptr_t)(&v18) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Time/Speed", (int)(uintptr_t)(&v18) + 1);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v33, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Time/Speed", (int)(uintptr_t)(&v18) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v34), v10, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Use speed instead of time in Time/Speed parameter", (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Use Speed", (int)(uintptr_t)(&v19));
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v36, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Use Speed", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v37), v11, 1, 1, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Target the object should orient towards", (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Look At", (int)(uintptr_t)(&v19) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v12 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v23 = v12;
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v39, 9, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Look At", (int)(uintptr_t)(&v20));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v40), v13, 1, 0, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Time to do the orientation interpolation", (int)(uintptr_t)(v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Look At Time", (int)(uintptr_t)(&v20) + 2);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v14 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v24 = v14;
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v42, 9, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Look At Time", (int)(uintptr_t)(&v20) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v43), v15, 1, 0, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v42);
  return ((g4_std::string::Destroy(&v44)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C343D0  (binary VA: 0xc343d0)
// Original: sub_C343D0
// ----------------------------------------------------------------------------
int sub_C343D0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
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
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v10)) > _g4_s4 ? (16u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v11)) > _g4_s5 ? (16u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v12)) > _g4_s6 ? (16u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v13)) > _g4_s7 ? (16u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v14)) > _g4_s8 ? (16u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v15)) > _g4_s9 ? (48u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v16)) > _g4_s10 ? (52u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v17)) > _g4_s11 ? (56u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v18)) > _g4_s12 ? (60u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v19)) > _g4_s13 ? (64u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v20)) > _g4_s14 ? (68u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v21)) > _g4_s15 ? (84u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v22)) > _g4_s16 ? (100u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v23)) > _g4_s17 ? (116u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v24)) > _g4_s18 ? (132u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v25)) > _g4_s19 ? (136u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v26)) > _g4_s20 ? (140u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v27)) > _g4_s21 ? (144u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v28)) > _g4_s22 ? (148u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v29)) > _g4_s23 ? (152u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v30)) > _g4_s24 ? (156u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v31)) > _g4_s25 ? (160u + sizeof(_g4_t_v31)) : _g4_s25,
    _g4_s27 = (164u + sizeof(_g4_t_v32)) > _g4_s26 ? (164u + sizeof(_g4_t_v32)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v33)) > _g4_s27 ? (168u + sizeof(_g4_t_v33)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v34)) > _g4_s28 ? (172u + sizeof(_g4_t_v34)) : _g4_s28,
    _g4_s30 = (176u + sizeof(_g4_t_v35)) > _g4_s29 ? (176u + sizeof(_g4_t_v35)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v36)) > _g4_s30 ? (180u + sizeof(_g4_t_v36)) : _g4_s30,
    _g4_s32 = (184u + sizeof(_g4_t_v37)) > _g4_s31 ? (184u + sizeof(_g4_t_v37)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v38)) > _g4_s32 ? (188u + sizeof(_g4_t_v38)) : _g4_s32,
    _g4_s34 = (192u + sizeof(_g4_t_v39)) > _g4_s33 ? (192u + sizeof(_g4_t_v39)) : _g4_s33,
    _g4_s35 = (196u + sizeof(_g4_t_v40)) > _g4_s34 ? (196u + sizeof(_g4_t_v40)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v41)) > _g4_s35 ? (200u + sizeof(_g4_t_v41)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v42)) > _g4_s36 ? (204u + sizeof(_g4_t_v42)) : _g4_s36,
    _g4_s38 = (208u + sizeof(_g4_t_v43)) > _g4_s37 ? (208u + sizeof(_g4_t_v43)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
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
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 196u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 200u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 204u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 208u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Replacement", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetDisplayName(a1, &v24);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Objects", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "In", (int)(uintptr_t)(&v19) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v42, 1, -1);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v43), "Out", (int)(uintptr_t)(&v19) + 3);
  grapher::ActorBase::AddPin(a1, 1, v43, 0, -1);
  g4_std::string::Destroy(v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "List of objects to replacement", (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Object", (int)(uintptr_t)(&v15) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v20 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 9, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Old Object", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "VFX to play (from GIV_vfx.xml)", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "VFX", (int)(uintptr_t)(&v16) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "VFXInfos.", (int)(uintptr_t)(&v16) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &v29);
  v21 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v30, 11, &v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "VFX", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v10, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v21 != nullptr )
    G4_VCALL<void>(v21, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v35),
    "VFXInfo overwrite : < 0 : infinite, 0 == invalid, > 0 : play X times. ?, 666 = Use VFXInfo. value.",
    (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "LoopCount", (int)(uintptr_t)(&v17) + 1);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v33, 1, 666);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "LoopCount", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v34), v6, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Sound to play with the VFX", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Sound", (int)(uintptr_t)(&v18));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v22 = v11;
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v36, 4, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Sound", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v37), v12, 1, 1, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "List of objects to replacement", (int)(uintptr_t)(&v19) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Object", (int)(uintptr_t)(&v18) + 3);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v23 = v13;
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v39, 9, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "New Object", (int)(uintptr_t)(&v19));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v40), v14, 1, 1, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v39);
  return ((g4_std::string::Destroy(&v41)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C34BF0_eac34bf0  (binary VA: 0xc34bf0)
// Original: sub_C34BF0
// ----------------------------------------------------------------------------
int sub_C34BF0_eac34bf0(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v8)) > _g4_s4 ? (30u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v10)) > _g4_s6 ? (36u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v11)) > _g4_s7 ? (56u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v12)) > _g4_s8 ? (64u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v13)) > _g4_s9 ? (68u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v14)) > _g4_s10 ? (72u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set Anim", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Game Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "GameObject to set the animation", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "GameObject", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "GameObject", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Animation name", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Animation", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 4, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Animation", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 0, 0, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C34FF0_eac34ff0  (binary VA: 0xc34ff0)
// Original: sub_C34FF0
// ----------------------------------------------------------------------------
int sub_C34FF0_eac34ff0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef g4_int128_t _g4_t_v10;
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
  typedef int _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v7)) > _g4_s4 ? (23u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v8)) > _g4_s5 ? (24u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v9)) > _g4_s6 ? (28u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v10)) > _g4_s7 ? (32u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v11)) > _g4_s8 ? (48u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v12)) > _g4_s9 ? (52u + sizeof(_g4_t_v12)) : _g4_s9,
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
    _g4_s21 = (96u + sizeof(_g4_t_v23)) > _g4_s20 ? (96u + sizeof(_g4_t_v23)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 23u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Set Property", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Objects", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object to set the property", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "OID of the property", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Property", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Property", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Value to set", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Value", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Value", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C35470_eac35470  (binary VA: 0xc35470)
// Original: sub_C35470
// ----------------------------------------------------------------------------
int sub_C35470_eac35470(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
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
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v4)) > _g4_s1 ? (20u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
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
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Stop", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object to stop", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Is the object set to scripted behavior after stop?", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Scripted", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Scripted", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 0, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C35800  (binary VA: 0xc35800)
// Original: sub_C35800
// ----------------------------------------------------------------------------
int sub_C35800(grapher::ActorBase::Self *a1)
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
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
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
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v6)) > _g4_s2 ? (4u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v7)) > _g4_s3 ? (4u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v8)) > _g4_s4 ? (12u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v9)) > _g4_s5 ? (12u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v10)) > _g4_s6 ? (16u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v11)) > _g4_s7 ? (20u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v12)) > _g4_s8 ? (24u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v13)) > _g4_s9 ? (28u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v14)) > _g4_s10 ? (32u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v15)) > _g4_s11 ? (48u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v16)) > _g4_s12 ? (64u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v17)) > _g4_s13 ? (68u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v18)) > _g4_s14 ? (72u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v19)) > _g4_s15 ? (76u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v20)) > _g4_s16 ? (80u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v21)) > _g4_s17 ? (84u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v22)) > _g4_s18 ? (88u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v23)) > _g4_s19 ? (92u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v24)) > _g4_s20 ? (96u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v25)) > _g4_s21 ? (100u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v26)) > _g4_s22 ? (104u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v27)) > _g4_s23 ? (108u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v28)) > _g4_s24 ? (112u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v29)) > _g4_s25 ? (116u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v30)) > _g4_s26 ? (120u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v31)) > _g4_s27 ? (124u + sizeof(_g4_t_v31)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Teleport", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Objects", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "In", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v30, 1, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Out", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 1, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "List of objects to teleport.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Object", (int)(uintptr_t)(&v10) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v14 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v18, 9, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Object", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v5, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Destination to teleport the object to", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Destination", (int)(uintptr_t)(&v11) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v21, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Destination", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v7, 1, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Snap the GameObject on the floor after the teleport. (True by default.)", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Snap To Floor", (int)(uintptr_t)(&v12));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Snap To Floor", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v8, 0, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v29),
    "The WorldLimit Teleport takes your current position and teleports the subject closer to the world Root position, ori"
    "ented towards it.",
    (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "WorldLimitFailsafe", (int)(uintptr_t)(&v12) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "WorldLimitFailsafe", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v9, 0, 0, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  return ((g4_std::string::Destroy(&v29)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C35E10_eac35e10  (binary VA: 0xc35e10)
// Original: sub_C35E10
// ----------------------------------------------------------------------------
int sub_C35E10_eac35e10(grapher::ActorBase::Self *a1)
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
  typedef long double _g4_t_v12 __attribute__((aligned(1)));
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
  typedef int _g4_t_v30[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v5)) > _g4_s2 ? (0u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v7)) > _g4_s4 ? (12u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v8)) > _g4_s5 ? (30u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v9)) > _g4_s6 ? (32u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v10)) > _g4_s7 ? (36u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v11)) > _g4_s8 ? (40u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v12)) > _g4_s9 ? (44u + sizeof(_g4_t_v12)) : _g4_s9,
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
    _g4_s28 = (124u + sizeof(_g4_t_v30)) > _g4_s27 ? (124u + sizeof(_g4_t_v30)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Test Property", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "True", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v28, 0, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "False", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Out", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Object to test the property", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Object", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 1);
  g4_std::string::Destroy(&v16);
  if ( DWORD1(v12) != 0 )
    G4_VCALL<void>(DWORD1(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "OID of the property", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Property", (int)(uintptr_t)(&v9) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Property", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 1);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Operator applied between the property value and the input value", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Operator", (int)(uintptr_t)(&v10) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 1, 11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Operator", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 1);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Value to test", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Value", (int)(uintptr_t)(&v11) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Value", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 1);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C36440_eac36440  (binary VA: 0xc36440)
// Original: sub_C36440
// ----------------------------------------------------------------------------
int sub_C36440_eac36440(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Collisions", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Physic", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object to enable or disable collision", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C36770_eac36770  (binary VA: 0xc36770)
// Original: sub_C36770
// ----------------------------------------------------------------------------
int sub_C36770_eac36770(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef g4_int128_t _g4_t_v10;
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
  typedef int _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v7)) > _g4_s4 ? (23u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v8)) > _g4_s5 ? (24u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v9)) > _g4_s6 ? (28u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v10)) > _g4_s7 ? (32u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v11)) > _g4_s8 ? (48u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v12)) > _g4_s9 ? (52u + sizeof(_g4_t_v12)) : _g4_s9,
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
    _g4_s21 = (96u + sizeof(_g4_t_v23)) > _g4_s20 ? (96u + sizeof(_g4_t_v23)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 23u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Set Movability", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Physic", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Enable", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object to enable or disable collision", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Can the object be moved by other objects.", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Movable", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Movable", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Can the object fall", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Can Fall", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Can Fall", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C36BF0_eac36bf0  (binary VA: 0xc36bf0)
// Original: sub_C36BF0
// ----------------------------------------------------------------------------
int sub_C36BF0_eac36bf0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Immobilized", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object to enable or disable immobility", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C36F20_eac36f20  (binary VA: 0xc36f20)
// Original: sub_C36F20
// ----------------------------------------------------------------------------
int sub_C36F20_eac36f20(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Indestructible", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "List of objects to enable or disable indestructibility.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C37250_eac37250  (binary VA: 0xc37250)
// Original: sub_C37250
// ----------------------------------------------------------------------------
int sub_C37250_eac37250(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Global Spawn", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "The character aiming at his target.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Filter", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "SpawnZoneFilter.All", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v10);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Filter", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  return ((g4_std::string::Destroy(&v13)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C375A0_eac375a0  (binary VA: 0xc375a0)
// Original: sub_C375A0
// ----------------------------------------------------------------------------
int sub_C375A0_eac375a0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Targetable", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "List of objects to enable or disable targetability.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C378D0_eac378d0  (binary VA: 0xc378d0)
// Original: sub_C378D0
// ----------------------------------------------------------------------------
int sub_C378D0_eac378d0(grapher::ActorBase::Self *a1)
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
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v5)) > _g4_s2 ? (0u + sizeof(_g4_t_v5)) : _g4_s2,
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
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Value", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects to get the value from.", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 1);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Store the value in this variable.", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Value", (int)(uintptr_t)(&v7) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Value", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 2);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C37C60  (binary VA: 0xc37c60)
// Original: sub_C37C60
// ----------------------------------------------------------------------------
int sub_C37C60(int a1, uint32_t *a2, unsigned int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  char v8; // bp
  unsigned int v9;
  char v11; // bp
  int v12;
  unsigned int v13;
  bool v14;
  int v15;
  unsigned int v16;
  char v17;
  uint32_t *v19;
  uint32_t *v20;

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v20 = v5;
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
  v19 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v20 != v19 )
      v11 = v19[4] > v6;
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v19, v20);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    v14 = true;
    if ( v20 != v4 )
      v14 = *a3 < v4[4];
    v17 = v14;
    v15 = opNew(0x18u);
    if ( v15 != -16 )
    {
      v16 = *a3;
      *(uint32_t *)(v15 + 20) = a3[1];
      *(uint32_t *)(v15 + 16) = v16;
    }
    sub_1904970(v17, v15, v4, v20);
    *(uint32_t *)a1 = v15;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
  }
  else
  {
    v19 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C37DE0  (binary VA: 0xc37de0)
// Original: sub_C37DE0
// ----------------------------------------------------------------------------
int * sub_C37DE0(int *result, uint32_t *a2, int a3, int *a4)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef bool _g4_t_v21;
  typedef char _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v22)) > _g4_s5 ? (20u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v24)) > _g4_s7 ? (28u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v26)) > _g4_s9 ? (28u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v27)) > _g4_s10 ? (28u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v28)) > _g4_s11 ? (28u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v29)) > _g4_s12 ? (32u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v30)) > _g4_s13 ? (36u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v31)) > _g4_s14 ? (36u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v32)) > _g4_s15 ? (40u + sizeof(_g4_t_v32)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);

  v29 = result;
  v30 = a2 + 1;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v11 = a2[4];
      v31 = v11;
      if ( *(uint32_t *)(v11 + 16) < (unsigned int)*a4 )
      {
        v21 = v11 == a3;
        v6 = opNew(0x18u);
        if ( v6 != -16 )
        {
          v12 = *a4;
          *(uint32_t *)(v6 + 20) = a4[1];
          *(uint32_t *)(v6 + 16) = v12;
        }
        v20 = a3;
        v19 = v31;
        v18 = v6;
        v17 = v21;
        goto LABEL_9;
      }
    }
    goto LABEL_20;
  }
  if ( (unsigned int)*a4 >= *(uint32_t *)(a3 + 16) )
  {
    if ( (unsigned int)*a4 <= *(uint32_t *)(a3 + 16) )
    {
      *result = a3;
      return result;
    }
    if ( a3 == a2[4] )
    {
      sub_C2B4F0(result, (int)(uintptr_t)(a2), 0, a3, a4);
      return v29;
    }
    v25 = *a4;
    v8 = sub_19048E0(a3);
    if ( v25 < *(uint32_t *)(v8 + 16) )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v26 = v8;
        v9 = opNew(0x18u);
        if ( v9 != -16 )
        {
          v10 = *a4;
          *(uint32_t *)(v9 + 20) = a4[1];
          *(uint32_t *)(v9 + 16) = v10;
        }
        sub_1904970(1, v9, v26, v30);
        ++a2[5];
        *v29 = v9;
        return v29;
      }
      else
      {
        v15 = opNew(0x18u);
        if ( v15 != -16 )
        {
          v16 = *a4;
          *(uint32_t *)(v15 + 20) = a4[1];
          *(uint32_t *)(v15 + 16) = v16;
        }
        v28 = v15;
        sub_1904970(0, v15, a3, v30);
        ++a2[5];
        *v29 = v28;
        return v29;
      }
    }
LABEL_20:
    sub_C37C60((int)(uintptr_t)(v32), a2, (unsigned int *)a4);
    *v29 = v32[0];
    return v29;
  }
  if ( a3 == a2[3] )
  {
    sub_C2B4F0(result, (int)(uintptr_t)(a2), a3, a3, a4);
    return v29;
  }
  v23 = *a4;
  v5 = (uint32_t *)sub_1904940(a3);
  if ( v23 <= v5[4] )
    goto LABEL_20;
  if ( v5[3] != 0 )
  {
    v6 = opNew(0x18u);
    if ( v6 != -16 )
    {
      v7 = *a4;
      *(uint32_t *)(v6 + 20) = a4[1];
      *(uint32_t *)(v6 + 16) = v7;
    }
    v19 = a3;
    v20 = (int)(uintptr_t)(v30);
    v18 = v6;
    v17 = 1;
LABEL_9:
    v24 = v6;
    sub_1904970(v17, v18, v19, v20);
    ++a2[5];
    *v29 = v24;
    return v29;
  }
  v27 = v5;
  v22 = v30 == v5;
  v13 = opNew(0x18u);
  if ( v13 != -16 )
  {
    v14 = *a4;
    *(uint32_t *)(v13 + 20) = a4[1];
    *(uint32_t *)(v13 + 16) = v14;
  }
  sub_1904970(v22, v13, v27, v30);
  ++a2[5];
  *v29 = v13;
  return v29;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameMenuVideo::ActorGameMenuVideo(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameMissionStart::ActorGameMissionStart(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameMissionStop::ActorGameMissionStop(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameMissionUnload::ActorGameMissionUnload(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameMissionIsCompleted::ActorGameMissionIsCompleted(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameStartModule::ActorGameStartModule(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectApplyDamage::ActorGameObjectApplyDamage(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectAttach::ActorGameObjectAttach(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameObjectConvertToAsset::Construct_eac382e0  (binary VA: 0xc382e0)
// Original: ActorGameObjectConvertToAsset::ActorGameObjectConvertToAsset
// ----------------------------------------------------------------------------
uint32_t * ActorGameObjectConvertToAsset::Construct_eac382e0(grapher::ActorBase::Self *a1, unsigned int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *result;
  uint32_t *v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t _g4_t_v12[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BCC8);
  v2 = (uint32_t *)((char *)a1 + 52);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v3 = (uint32_t *)dword_20D672C;
  v4 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_20;
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
LABEL_20:
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
  }
  else
  {
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
    v6 = v4[5];
    if ( v6 != 0 )
    {
      v9 = v5;
      G4_VCALL<void>(v6, 4);
      v5 = v9;
    }
  }
  result = (uint32_t *)dword_20D672C;
  v8 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_18;
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= result[4] )
    {
      v8 = result;
      result = (uint32_t *)result[2];
      if ( result == nullptr )
        goto LABEL_16;
    }
    result = (uint32_t *)result[3];
  }
  while ( result != nullptr );
LABEL_16:
  if ( v8 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v2) < v8[4] )
  {
LABEL_18:
    v10 = v5;
    v12[0] = (uint32_t)(uintptr_t)((char *)a1 + 52);
    v12[1] = 0;
    result = (uint32_t *)sub_C37DE0(v8, v12);
    v8 = v11;
    v5 = v10;
  }
  v8[5] = (uint32_t)(uintptr_t)(v5);
  *((uint32_t *)a1 + 13) = 0;
  return result;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameObjectCount::ActorGameObjectCount(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectEnable::ActorGameObjectEnable(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_C38550  (binary VA: 0xc38550)
// Original: sub_C38550
// ----------------------------------------------------------------------------
void sub_C38550(uint32_t *a1)
{
  if ( a1 != nullptr )
  {
    if ( (uint8_t)sub_C170A0((int)(uintptr_t)(a1)) != 0 )
    {
      G4_VCALL<void>(a1, 112, 1);
    }
    else
    {
      sub_C16450(a1);
      G4_VCALL<void>(a1, 32);
      if ( (*(uint8_t *)unk_20C1765) != 0 )
        G4_VCALL<void>(a1, 356);
    }
  }
}



// [Deduplicated: canonical definition in Actors module] (ActorGameObjectHide::ActorGameObjectHide(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectExists::ActorGameObjectExists(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectFindRandom::ActorGameObjectFindRandom(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectGetProperty::ActorGameObjectGetProperty(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectHighlight::ActorGameObjectHighlight(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameObjectList::Construct_eac38720  (binary VA: 0xc38720)
// Original: ActorGameObjectList::ActorGameObjectList
// ----------------------------------------------------------------------------
uint32_t * ActorGameObjectList::Construct_eac38720(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF48);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  return (uint32_t *)((char *)a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: sub_C38770  (binary VA: 0xc38770)
// Original: sub_C38770
// ----------------------------------------------------------------------------
int sub_C38770(int a1)
{
  uint32_t *v1;
  int v2;

  v1 = *(uint32_t **)(a1 + 52);
  v2 = 0;
  if ( v1 != (uint32_t *)(a1 + 52) )
  {
    v2 = v1[2];
    sub_1901940(v1);
    opDelete(v1);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectMoveTo::Construct_eac387d0  (binary VA: 0xc387d0)
// Original: ActorGameObjectMoveTo::ActorGameObjectMoveTo
// ----------------------------------------------------------------------------
int ActorGameObjectMoveTo::Construct_eac387d0(int a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF88);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  *(uint8_t *)(a1 + 108) = 1;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 1065353216;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 1065353216;
  *(uint32_t *)(a1 + 156) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectReplacement::Construct_eac38870  (binary VA: 0xc38870)
// Original: ActorGameObjectReplacement::ActorGameObjectReplacement
// ----------------------------------------------------------------------------
int ActorGameObjectReplacement::Construct_eac38870(grapher::ActorBase::Self *a1, unsigned int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t _g4_t_v14[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BFC8);
  v12 = *((uint32_t *)a1 + 13);
  v2 = (uint32_t *)((char *)a1 + 52);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v3 = (uint32_t *)dword_20D672C;
  v4 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_20;
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
LABEL_20:
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
    v5[1] = v12;
  }
  else
  {
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
    v5[1] = v12;
    v6 = v4[5];
    if ( v6 != 0 )
    {
      v10 = v5;
      G4_VCALL<void>(v6, 4);
      v5 = v10;
    }
  }
  v7 = (uint32_t *)dword_20D672C;
  v8 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_18;
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
LABEL_18:
    v11 = v5;
    v14[0] = (uint32_t)(uintptr_t)((char *)a1 + 52);
    v14[1] = 0;
    sub_C37DE0(v8, v14);
    v8 = v13;
    v5 = v11;
  }
  v8[5] = (uint32_t)(uintptr_t)(v5);
  *((uint32_t *)a1 + 13) = v12;
  return v12;
}

// ----------------------------------------------------------------------------
// Function: sub_C38A60  (binary VA: 0xc38a60)
// Original: sub_C38A60
// ----------------------------------------------------------------------------
void sub_C38A60(uint32_t *a1)
{
  if ( a1 != nullptr )
  {
    if ( (uint8_t)sub_C170A0((int)(uintptr_t)(a1)) != 0 )
    {
      G4_VCALL<void>(a1, 112, 1);
    }
    else
    {
      sub_C16450(a1);
      G4_VCALL<void>(a1, 32);
      if ( (*(uint8_t *)unk_20C1765) != 0 )
        G4_VCALL<void>(a1, 356);
    }
  }
}



// [Deduplicated: canonical definition in Actors module] (ActorGameObjectSetAnim::ActorGameObjectSetAnim(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectSetProperty::ActorGameObjectSetProperty(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectStop::ActorGameObjectStop(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectTestProperty::ActorGameObjectTestProperty(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectToggleCollisions::ActorGameObjectToggleCollisions(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectSetMovability::ActorGameObjectSetMovability(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectToggleImmobilized::ActorGameObjectToggleImmobilized(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectToggleIndestructible::ActorGameObjectToggleIndestructible(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectToggleSpawn::ActorGameObjectToggleSpawn(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectToggleTargetable::ActorGameObjectToggleTargetable(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameObjectValue::ActorGameObjectValue(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_C38DB0_eac38db0  (binary VA: 0xc38db0)
// Original: sub_C38DB0
// ----------------------------------------------------------------------------
void sub_C38DB0_eac38db0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int *v4;
  void **v5;
  void **v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef void *_g4_t_v14[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);

  v14[0] = v14;
  v14[1] = v14;
  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  if ( v3 != 0 )
  {
    v13 = (uint32_t *)v3;
    v4 = (int *)G4_VCALL<int>(v3, 16);
    if ( v4 != nullptr )
    {
      if ( v4 == (int *)(uintptr_t)(&dword_20D68D0) )
      {
LABEL_12:
        v7 = v13[330];
        if ( byte_20D34B0 == 0 )
        {
          v12 = v13[330];
          v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0);
          v7 = v12;
          if ( v11 != 0 )
          {
            sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
            __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
            v7 = v12;
          }
        }
        v8 = (int *)(&dword_20D34C0);
        if ( byte_20D34C4 != 0 )
          v8 = nullptr;
        v9 = sub_5B8890((int)(uintptr_t)(v8), v7);
        v10 = 0;
        if ( v9 >= 0 )
          v10 = v9;
        sub_836F40(a1, 1, v10, a3);
      }
      else
      {
        while ( 1 )
        {
          v4 = (int *)v4[1];
          if ( v4 == nullptr )
            break;
          if ( v4 == (int *)(uintptr_t)(&dword_20D68D0) )
            goto LABEL_12;
        }
      }
    }
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v5 = (void **)v14[0];
  if ( v14[0] != v14 )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == v14 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C38F30_eac38f30  (binary VA: 0xc38f30)
// Original: sub_C38F30
// ----------------------------------------------------------------------------
void sub_C38F30_eac38f30(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int i;
  void **v5;
  void **v6;
  void *v7[9];

  v7[0] = v7;
  v7[1] = v7;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v7), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v7[0];
  for ( i = 0; v3 != v7; ++i )
    v3 = (void **)*v3;
  sub_836F40(a1, 1, i, a3);
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v5 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == v7 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C38FF0  (binary VA: 0xc38ff0)
// Original: sub_C38FF0
// ----------------------------------------------------------------------------
void sub_C38FF0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int i;
  grapher::ActorVariable::Self *v11;
  grapher::HolderT<float> *v12;
  int v13;
  int v14;
  int v15;
  void **v16;
  void **v17;
  typedef int _g4_t_v18;
  typedef grapher::ActorContext::Self *_g4_t_v19;
  typedef float _g4_t_v20;
  typedef void *_g4_t_v21[2];
  typedef void *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v20)) > _g4_s2 ? (24u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v22)) > _g4_s4 ? (36u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  v21[0] = v21;
  v21[1] = v21;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v21), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  if ( v21[0] != v21 )
  {
    v3 = *((uint32_t *)v21[0] + 2);
    if ( v3 != 0 )
    {
      v4 = v3 + 288;
      v5 = sub_BDEDA0(v3 + 288);
      v6 = v3 + 280;
      sub_836F40(a1, 1, v5, a3);
      v7 = sub_BDEDA0(v6);
      sub_836F40(a1, 2, v7, a3);
      v8 = sub_BDEDA0(v4);
      v19 = a3;
      v20 = (float)v8 / (float)sub_BDEDA0(v6);
      if ( a3 == nullptr )
      {
        v19 = (grapher::ActorContext::Self *)&unk_20D6720;
        if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
        {
          grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
          __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        }
      }
      v22 = nullptr;
      v23 = 0;
      v24 = 0;
      grapher::ActorBase::GetVariables(a1, 3, (int)(uintptr_t)(&v22));
      v9 = (uint32_t *)(v22);
      v18 = (v23 - (int)(uintptr_t)(v22)) >> 2;
      if ( v18 != 0 )
      {
        for ( i = 0; i != v18; ++i )
        {
          v11 = (grapher::ActorVariable::Self *)v9[i];
          if ( v11 != nullptr )
          {
            v12 = (grapher::HolderT<float> *)gll_operator_new(
                                               8u,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                               102);
            *(uint32_t *)v12 = (uint32_t)(uintptr_t)(&off_205C4C8);
            grapher::HolderT_float_id_458ea9::From(v12, &v20);
            v13 = *((uint32_t *)v11 + 3);
            if ( v13 != 0 )
              *(uint8_t *)(v13 + 20) = 0;
            v14 = G4_VCALL<int>(v12, 48);
            v15 = *((uint32_t *)v11 + 1);
            *((uint32_t *)v11 + 1) = v14;
            if ( v15 != 0 )
              G4_VCALL<void>(v15, 44);
            G4_VCALL<void>(v12, 44);
            grapher::ActorContext::SaveAVar(v19, v11);
            v9 = (uint32_t *)(v22);
          }
        }
      }
      if ( v9 != nullptr )
        opDelete(v9);
    }
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v16 = (void **)v21[0];
  if ( v21[0] != v21 )
  {
    while ( 1 )
    {
      v17 = (void **)*v16;
      opDelete(v16);
      if ( v17 == v21 )
        break;
      v16 = v17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C39290_eac39290  (binary VA: 0xc39290)
// Original: sub_C39290
// ----------------------------------------------------------------------------
int sub_C39290_eac39290(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  int *v6;
  char v8;
  char v9;
  int *v10;
  char v11; // bp
  char obj;
  int v13;
  int v14;
  int v15;
  void *v16;
  grapher::ActorContext::Self *v17;
  grapher::ActorContext::Self *v18;
  g4_cxa_guard_t *v19;
  int v20;
  int v21;
  int v22;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v13, v14, v15, (int)(uintptr_t)(v16), (int)(uintptr_t)(v19), v20, v21, v22, a1);
  switch ( a3 )
  {
    case 1:
      v18 = v5;
      sub_7349D0((int)(uintptr_t)(v5), 0);
      if ( v18 != (grapher::ActorContext::Self *)0x7FFFFFFF )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
      if ( byte_20D5C00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
      {
        sub_76C650((int)(uintptr_t)(&dword_20D5C20));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
        __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
      }
      v6 = nullptr;
      obj = 1;
      if ( byte_20D5C24 == 0 )
        v6 = (int *)(&dword_20D5C20);
      goto LABEL_7;
    case 2:
      v17 = v5;
      sub_734A20((int)(uintptr_t)(v5));
      if ( v17 != (grapher::ActorContext::Self *)0x7FFFFFFF )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
      v8 = byte_20D5C00;
      if ( byte_20D5C00 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
        {
          sub_76C650((int)(uintptr_t)(&dword_20D5C20));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
          __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
        }
        v8 = byte_20D5C00;
      }
      v9 = byte_20D5C24;
      v10 = nullptr;
      if ( byte_20D5C24 == 0 )
        v10 = (int *)(&dword_20D5C20);
      v11 = *((uint8_t *)v10 + 93) ^ 1;
      if ( v8 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
        {
          sub_76C650((int)(uintptr_t)(&dword_20D5C20));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
          __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
        }
        v9 = byte_20D5C24;
      }
      v6 = nullptr;
      obj = v11;
      if ( v9 == 0 )
        v6 = (int *)(&dword_20D5C20);
      goto LABEL_7;
    case 0:
      sub_7349D0((int)(uintptr_t)(v5), 1);
      if ( byte_20D5C00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
      {
        sub_76C650((int)(uintptr_t)(&dword_20D5C20));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
        __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
      }
      v6 = nullptr;
      obj = 0;
      if ( byte_20D5C24 == 0 )
        v6 = (int *)(&dword_20D5C20);
LABEL_7:
      sub_7368C0((int)(uintptr_t)(v6), obj);
      break;
    default:
      break;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C395A0_eac395a0  (binary VA: 0xc395a0)
// Original: sub_C395A0
// ----------------------------------------------------------------------------
int sub_C395A0_eac395a0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  int *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  void *v12;
  g4_cxa_guard_t *v13;
  int v14;
  int v15;
  int v16;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v9, v10, v11, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13), v14, v15, v16, a1);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D3C44 == 0 )
    v6 = (int *)(&dword_20D3C40);
  v7 = sub_633950((int)(uintptr_t)(v6), (int)(uintptr_t)(v5));
  grapher::ActorBase::FireEvent(a2, (v7 != 3) + 2, a4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C396C0  (binary VA: 0xc396c0)
// Original: sub_C396C0
// ----------------------------------------------------------------------------
int sub_C396C0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  int v5;
  char *v6;
  void *v7;
  int result;
  int v9;
  int v10;
  int v11;
  void *v12;
  g4_cxa_guard_t *v13;
  int v14;
  int v15;
  int v16;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v5 = (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a2), Variable, a4, v9, v10, v11, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13), v14, v15, v16, a1));
  if ( v5 < 0 || v5 >= (unsigned int)dword_20D9300 )
    return G4_VCALL<int>(a2, 28, a4);
  v6 = *(char **)(dword_20D92F0 + 24 * v5 + 8);
  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v7 = nullptr;
  if ( byte_20D2D64 == 0 )
    v7 = &unk_20D2D60;
  result = sub_795B10((int)(uintptr_t)(v7), v6);
  if ( (uint8_t)result == 0 )
  {
    G4_VCALL<void>(a2, 28, a4);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C39800_eac39800  (binary VA: 0xc39800)
// Original: sub_C39800
// ----------------------------------------------------------------------------
void sub_C39800_eac39800(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorContext::Self *v7;
  void **v8;
  void **v9;
  void **v10;
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
  typedef grapher::ActorContext::Self *_g4_t_v35;
  typedef grapher::ActorContext::Self *_g4_t_v36;
  typedef grapher::ActorContext::Self *_g4_t_v37;
  typedef grapher::ActorContext::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_i;
  typedef void *_g4_t_v41[2];
  typedef uint32_t _g4_t_v42[11];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v16)) > _g4_s5 ? (16u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v17)) > _g4_s6 ? (20u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v18)) > _g4_s7 ? (20u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v19)) > _g4_s8 ? (20u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v20)) > _g4_s9 ? (24u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v21)) > _g4_s10 ? (24u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v22)) > _g4_s11 ? (24u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v23)) > _g4_s12 ? (28u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v24)) > _g4_s13 ? (28u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v25)) > _g4_s14 ? (28u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v26)) > _g4_s15 ? (32u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v27)) > _g4_s16 ? (32u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v28)) > _g4_s17 ? (32u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v29)) > _g4_s18 ? (36u + sizeof(_g4_t_v29)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v30)) > _g4_s19 ? (36u + sizeof(_g4_t_v30)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v31)) > _g4_s20 ? (36u + sizeof(_g4_t_v31)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v32)) > _g4_s21 ? (40u + sizeof(_g4_t_v32)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v33)) > _g4_s22 ? (40u + sizeof(_g4_t_v33)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v34)) > _g4_s23 ? (40u + sizeof(_g4_t_v34)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v35)) > _g4_s24 ? (40u + sizeof(_g4_t_v35)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v36)) > _g4_s25 ? (44u + sizeof(_g4_t_v36)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v37)) > _g4_s26 ? (44u + sizeof(_g4_t_v37)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v38)) > _g4_s27 ? (44u + sizeof(_g4_t_v38)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v39)) > _g4_s28 ? (44u + sizeof(_g4_t_v39)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_i)) > _g4_s29 ? (52u + sizeof(_g4_t_i)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v41)) > _g4_s30 ? (56u + sizeof(_g4_t_v41)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v42)) > _g4_s31 ? (64u + sizeof(_g4_t_v42)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v11, v14, v17, v20, v23, v26, v29, v32, v36);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v38 = sub_837200((int)(uintptr_t)(a1), v5, a3, v12, v15, v18, v21, v24, v27, v30, v33, v37);
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v7 = sub_837200((int)(uintptr_t)(a1), v6, a3, v13, v16, v19, v22, v25, v28, v31, v34, v38);
  if ( (unsigned int)(uintptr_t)(v4) <= 0xE5 )
  {
    v35 = v7;
    v41[0] = v41;
    v41[1] = v41;
    sub_8560A0(a1, 0, (int)(uintptr_t)(v41), (int)(uintptr_t)(a3), 0x7FFFFFFF);
    v42[2] = (uint32_t)(uintptr_t)((char *)v4 + 25);
    v8 = (void **)v41[0];
    v42[3] = (uint32_t)(uintptr_t)((char *)v35 + 25);
    v42[0] = v39;
    v42[1] = 23;
    for ( i = v42; v8 != v41; v8 = (void **)*v8 )
    {
      while ( sub_970B40(&i, v8[2], 0) != 0 )
      {
        grapher::ActorBase::FireEvent(a1, 1, a3);
        v8 = (void **)*v8;
        if ( v8 == v41 )
          goto LABEL_7;
      }
      grapher::ActorBase::FireEvent(a1, 2, a3);
    }
LABEL_7:
    grapher::ActorBase::FireEvent(a1, 3, a3);
    v9 = (void **)v41[0];
    if ( v41[0] != v41 )
    {
      while ( 1 )
      {
        v10 = (void **)*v9;
        opDelete(v9);
        if ( v10 == v41 )
          break;
        v9 = v10;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C399A0_eac399a0  (binary VA: 0xc399a0)
// Original: sub_C399A0
// ----------------------------------------------------------------------------
void sub_C399A0_eac399a0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *v5;
  void **i;
  void **v7;
  void **v8;
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
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef grapher::ActorContext::Self *_g4_t_v25;
  typedef grapher::ActorContext::Self *_g4_t_v26;
  typedef grapher::ActorContext::Self *_g4_t_v27;
  typedef void *_g4_t_v28[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v15)) > _g4_s6 ? (24u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v16)) > _g4_s7 ? (24u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v17)) > _g4_s8 ? (28u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v18)) > _g4_s9 ? (28u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v19)) > _g4_s10 ? (32u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v20)) > _g4_s11 ? (32u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v21)) > _g4_s12 ? (36u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v22)) > _g4_s13 ? (36u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v23)) > _g4_s14 ? (40u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v24)) > _g4_s15 ? (40u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v25)) > _g4_s16 ? (44u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v26)) > _g4_s17 ? (44u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v27)) > _g4_s18 ? (44u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v28)) > _g4_s19 ? (56u + sizeof(_g4_t_v28)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v9, v11, v13, v15, v17, v19, v21, v23, v25);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v27 = sub_837200((int)(uintptr_t)(a1), v5, a3, v10, v12, v14, v16, v18, v20, v22, v24, v26);
  if ( (unsigned int)(uintptr_t)(v4) <= 0xE5 )
  {
    v28[0] = v28;
    v28[1] = v28;
    sub_8560A0(a1, 0, (int)(uintptr_t)(v28), (int)(uintptr_t)(a3), 0x7FFFFFFF);
    for ( i = (void **)v28[0]; i != v28; i = (void **)*i )
      G4_VCALL<void>(i[2], 120, v4, v27);
    grapher::ActorBase::FireEvent(a1, 1, a3);
    v7 = (void **)v28[0];
    if ( v28[0] != v28 )
    {
      while ( 1 )
      {
        v8 = (void **)*v7;
        opDelete(v7);
        if ( v8 == v28 )
          break;
        v7 = v8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C39AD0_eac39ad0  (binary VA: 0xc39ad0)
// Original: sub_C39AD0
// ----------------------------------------------------------------------------
int sub_C39AD0_eac39ad0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint8_t *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  void **v9;
  void **v10;
  void **v11;
  grapher::ActorVariable::Self *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  int *v16;
  uint32_t *i;
  int *v18;
  int *v19;
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  long double v26; // fst7
  float v27; // xmm0_4
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
  typedef grapher::ActorContext::Self *_g4_t_v68;
  typedef grapher::ActorContext::Self *_g4_t_v69;
  typedef grapher::ActorContext::Self *_g4_t_v70;
  typedef grapher::ActorContext::Self *_g4_t_v71;
  typedef grapher::ActorContext::Self *_g4_t_v72;
  typedef grapher::ActorContext::Self *_g4_t_v73;
  typedef grapher::ActorContext::Self *_g4_t_v74;
  typedef grapher::ActorContext::Self *_g4_t_v75;
  typedef grapher::ActorContext::Self *_g4_t_v76;
  typedef grapher::ActorBase::Self *_g4_t_v77;
  typedef float _g4_t_v78;
  typedef void *_g4_t_v79[5];
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86[3];
  typedef float _g4_t_v87[3];
  typedef float _g4_t_v88[9];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v31)) > _g4_s3 ? (4u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v32)) > _g4_s4 ? (4u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v33)) > _g4_s5 ? (8u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v34)) > _g4_s6 ? (8u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v35)) > _g4_s7 ? (8u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v36)) > _g4_s8 ? (8u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v37)) > _g4_s9 ? (8u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v38)) > _g4_s10 ? (12u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v39)) > _g4_s11 ? (12u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v40)) > _g4_s12 ? (12u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v41)) > _g4_s13 ? (12u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v42)) > _g4_s14 ? (12u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v43)) > _g4_s15 ? (16u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v44)) > _g4_s16 ? (16u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v45)) > _g4_s17 ? (16u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v46)) > _g4_s18 ? (16u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v47)) > _g4_s19 ? (16u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v48)) > _g4_s20 ? (20u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v49)) > _g4_s21 ? (20u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v50)) > _g4_s22 ? (20u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v51)) > _g4_s23 ? (20u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v52)) > _g4_s24 ? (20u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v53)) > _g4_s25 ? (24u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (24u + sizeof(_g4_t_v54)) > _g4_s26 ? (24u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v55)) > _g4_s27 ? (24u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (24u + sizeof(_g4_t_v56)) > _g4_s28 ? (24u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (24u + sizeof(_g4_t_v57)) > _g4_s29 ? (24u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (28u + sizeof(_g4_t_v58)) > _g4_s30 ? (28u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v59)) > _g4_s31 ? (28u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (28u + sizeof(_g4_t_v60)) > _g4_s32 ? (28u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (28u + sizeof(_g4_t_v61)) > _g4_s33 ? (28u + sizeof(_g4_t_v61)) : _g4_s33,
    _g4_s35 = (28u + sizeof(_g4_t_v62)) > _g4_s34 ? (28u + sizeof(_g4_t_v62)) : _g4_s34,
    _g4_s36 = (32u + sizeof(_g4_t_v63)) > _g4_s35 ? (32u + sizeof(_g4_t_v63)) : _g4_s35,
    _g4_s37 = (32u + sizeof(_g4_t_v64)) > _g4_s36 ? (32u + sizeof(_g4_t_v64)) : _g4_s36,
    _g4_s38 = (32u + sizeof(_g4_t_v65)) > _g4_s37 ? (32u + sizeof(_g4_t_v65)) : _g4_s37,
    _g4_s39 = (32u + sizeof(_g4_t_v66)) > _g4_s38 ? (32u + sizeof(_g4_t_v66)) : _g4_s38,
    _g4_s40 = (32u + sizeof(_g4_t_v67)) > _g4_s39 ? (32u + sizeof(_g4_t_v67)) : _g4_s39,
    _g4_s41 = (36u + sizeof(_g4_t_v68)) > _g4_s40 ? (36u + sizeof(_g4_t_v68)) : _g4_s40,
    _g4_s42 = (36u + sizeof(_g4_t_v69)) > _g4_s41 ? (36u + sizeof(_g4_t_v69)) : _g4_s41,
    _g4_s43 = (36u + sizeof(_g4_t_v70)) > _g4_s42 ? (36u + sizeof(_g4_t_v70)) : _g4_s42,
    _g4_s44 = (36u + sizeof(_g4_t_v71)) > _g4_s43 ? (36u + sizeof(_g4_t_v71)) : _g4_s43,
    _g4_s45 = (36u + sizeof(_g4_t_v72)) > _g4_s44 ? (36u + sizeof(_g4_t_v72)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v73)) > _g4_s45 ? (108u + sizeof(_g4_t_v73)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v74)) > _g4_s46 ? (112u + sizeof(_g4_t_v74)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v75)) > _g4_s47 ? (116u + sizeof(_g4_t_v75)) : _g4_s47,
    _g4_s49 = (120u + sizeof(_g4_t_v76)) > _g4_s48 ? (120u + sizeof(_g4_t_v76)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v77)) > _g4_s49 ? (124u + sizeof(_g4_t_v77)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v78)) > _g4_s50 ? (128u + sizeof(_g4_t_v78)) : _g4_s50,
    _g4_s52 = (136u + sizeof(_g4_t_v79)) > _g4_s51 ? (136u + sizeof(_g4_t_v79)) : _g4_s51,
    _g4_s53 = (156u + sizeof(_g4_t_v80)) > _g4_s52 ? (156u + sizeof(_g4_t_v80)) : _g4_s52,
    _g4_s54 = (160u + sizeof(_g4_t_v81)) > _g4_s53 ? (160u + sizeof(_g4_t_v81)) : _g4_s53,
    _g4_s55 = (164u + sizeof(_g4_t_v82)) > _g4_s54 ? (164u + sizeof(_g4_t_v82)) : _g4_s54,
    _g4_s56 = (168u + sizeof(_g4_t_v83)) > _g4_s55 ? (168u + sizeof(_g4_t_v83)) : _g4_s55,
    _g4_s57 = (172u + sizeof(_g4_t_v84)) > _g4_s56 ? (172u + sizeof(_g4_t_v84)) : _g4_s56,
    _g4_s58 = (176u + sizeof(_g4_t_v85)) > _g4_s57 ? (176u + sizeof(_g4_t_v85)) : _g4_s57,
    _g4_s59 = (180u + sizeof(_g4_t_v86)) > _g4_s58 ? (180u + sizeof(_g4_t_v86)) : _g4_s58,
    _g4_s60 = (192u + sizeof(_g4_t_v87)) > _g4_s59 ? (192u + sizeof(_g4_t_v87)) : _g4_s59,
    _g4_s61 = (204u + sizeof(_g4_t_v88)) > _g4_s60 ? (204u + sizeof(_g4_t_v88)) : _g4_s60
  };
  alignas(16) uint8_t _g4_sf[_g4_s61];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 108u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 112u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 116u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 120u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 124u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 128u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 136u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 156u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 160u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 164u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 168u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 172u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 176u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 180u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 192u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 204u);

  LODWORD(v88[5]) = (uint32_t)(uintptr_t)(&a1);
  v77 = a1;
  v73 = a3;
  v3 = sub_857260(a1, 4, (int)(uintptr_t)(a3));
  v4 = (uint8_t *)v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    v4 = nullptr;
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 1);
    v74 = sub_837200((int)(uintptr_t)(v77), Variable, v73, v28, v33, v38, v43, v48, v53, v58, v63, v68);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 2);
    v76 = sub_837200((int)(uintptr_t)(v77), v7, v73, v29, v34, v39, v44, v49, v54, v59, v64, v69);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 3);
    v75 = sub_837200((int)(uintptr_t)(v77), v8, v73, v30, v35, v40, v45, v50, v55, v60, v65, v70);
LABEL_8:
    v79[0] = v79;
    v79[1] = v79;
    sub_8560A0(v77, 0, (int)(uintptr_t)(v79), (int)(uintptr_t)(v73), 0x7FFFFFFF);
    v9 = (void **)v79[0];
    if ( v79[0] != v79 )
    {
      do
      {
        G4_VCALL<void>(v9[2], 140, v74, v76, v75, v4);
        v9 = (void **)*v9;
      }
      while ( v9 != v79 );
      v10 = (void **)v79[0];
      if ( v79[0] != v79 )
      {
        while ( 1 )
        {
          v11 = (void **)*v10;
          opDelete(v10);
          if ( v11 == v79 )
            break;
          v10 = v11;
        }
      }
    }
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v77, 1, v73));
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 1);
  v74 = sub_837200((int)(uintptr_t)(v77), v13, v73, v28, v33, v38, v43, v48, v53, v58, v63, v68);
  v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 2);
  v76 = sub_837200((int)(uintptr_t)(v77), v14, v73, v31, v36, v41, v46, v51, v56, v61, v66, v71);
  v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 3);
  v75 = sub_837200((int)(uintptr_t)(v77), v15, v73, v32, v37, v42, v47, v52, v57, v62, v67, v72);
  if ( v4[4977] == 0 )
    goto LABEL_8;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v16 = nullptr;
  if ( byte_20D4A64 == 0 )
    v16 = (int *)(&dword_20D4A60);
  for ( i = *(uint32_t **)(v16[8] + 16); i != nullptr; i = (uint32_t *)i[111] )
  {
    v18 = (int *)G4_VCALL<int>(i, 16);
    if ( v18 != nullptr )
    {
      if ( v18 == (int *)(uintptr_t)(&dword_20D70C4) )
        goto LABEL_33;
      while ( 1 )
      {
        v18 = (int *)v18[1];
        if ( v18 == nullptr )
          break;
        if ( v18 == (int *)(uintptr_t)(&dword_20D70C4) )
          goto LABEL_33;
      }
    }
    v19 = (int *)G4_VCALL<int>(i, 16);
    if ( v19 == nullptr )
      goto LABEL_30;
    if ( v19 != (int *)(uintptr_t)(&dword_20D68D0) )
    {
      while ( 1 )
      {
        v19 = (int *)v19[1];
        if ( v19 == nullptr )
          break;
        if ( v19 == (int *)(uintptr_t)(&dword_20D68D0) )
          goto LABEL_33;
      }
LABEL_30:
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        goto LABEL_38;
      continue;
    }
LABEL_33:
    (*(void (**)(float *, uint32_t *))(*i + 52))(&v83, i);
    (*(void (**)(float *))(*(uint32_t *)v4 + 52))(&v80);
    v78 = fsqrt(
            (float)((float)((float)(v81 - v84) * (float)(v81 - v84)) + (float)((float)(v80 - v83) * (float)(v80 - v83)))
          + (float)((float)(v82 - v85) * (float)(v82 - v85)));
    (*(void (**)(float *))(*(uint32_t *)v4 + 52))(v88);
    (*(void (**)(float *))(*i + 52))(v87);
    v20 = v87[0] - v88[0];
    v21 = v87[1] - v88[1];
    v22 = v87[2] - v88[2];
    v23 = (float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22);
    if ( v23 != 0.0 )
    {
      v24 = 1.0 / fsqrt(v23);
      v25 = (float)((float)((float)(v23 * v24) * v24) + -3.0) * (float)(v24 * -0.5);
      v20 = v20 * v25;
      v21 = v21 * v25;
      v22 = v22 * v25;
    }
    (*(void (**)(float *, uint8_t *))(*(uint32_t *)v4 + 296))(v86, v4);
    v26 = acos(fminf(fmaxf((float)((float)(v21 * v86[1]) + (float)(v20 * v86[0])) + (float)(v22 * v86[2]), -1.0), 1.0));
    if ( v78 >= 180.0 )
      goto LABEL_30;
    v27 = v26;
    if ( v27 >= 1.5707964f )
      goto LABEL_30;
    G4_VCALL<void>(i, 140, v74, v76, v75, v4);
    if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
    {
LABEL_38:
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
    }
  }
  v4[4977] = 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v77, 1, v73));
}

// ----------------------------------------------------------------------------
// Function: sub_C3A130_eac3a070  (binary VA: 0xc3a070)
// Original: sub_C3A130
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * sub_C3A130_eac3a070(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  grapher::ActorContext::Self *result;
  grapher::ActorVariable::Self *v5;
  int v6;
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  grapher::ActorVariable::Self *Variable;
  float v13; // xmm0_4
  float v14; // xmm0_4
  grapher::ActorVariable::Self *v15;
  grapher::ActorContext::Self *v16;
  __m128 v17;
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  grapher::ActorContext::Self *v37;
  float v38;
  int v39;
  int v40;
  float v41;
  grapher::ActorContext::Self *v42;
  int v43;
  __m128 v44;

  v42 = (grapher::ActorContext::Self *)sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v43 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v3 = sub_857260(a1, 4, (int)(uintptr_t)(a3));
  if ( v42 != nullptr && v43 != 0 )
  {
    v6 = *((uint32_t *)a1 + 26);
    v7 = (float)a2;
    switch ( v6 )
    {
      case 1:
        v8 = *((float *)a1 + 28);
        if ( v8 > 0.0 )
        {
          v11 = (float)(v7 / v8) + *((float *)a1 + 25);
          *((float *)a1 + 25) = v11;
          goto LABEL_35;
        }
LABEL_42:
        v11 = *((float *)a1 + 25);
        goto LABEL_35;
      case 2:
        v19 = *((float *)a1 + 28);
        v20 = 0.0;
        if ( v19 <= 0.0 )
        {
          v11 = *((float *)a1 + 25);
        }
        else
        {
          v11 = (float)(v7 / v19) + *((float *)a1 + 25);
          *((float *)a1 + 25) = v11;
        }
        if ( v11 <= 1.0 && v19 > 0.0 )
          goto LABEL_44;
        break;
      case 3:
        v28 = *((float *)a1 + 28);
        v20 = 0.0;
        if ( *((uint8_t *)a1 + 108) != 0 )
        {
          if ( v28 <= 0.0 )
          {
            v11 = *((float *)a1 + 25);
          }
          else
          {
            v11 = (float)(v7 / v28) + *((float *)a1 + 25);
            *((float *)a1 + 25) = v11;
          }
          if ( v11 <= 1.0 && v28 > 0.0 )
            goto LABEL_44;
          *((uint8_t *)a1 + 108) = 0;
LABEL_36:
          v22 = *((float *)a1 + 13);
          *((uint32_t *)a1 + 25) = 1065353216;
          v24 = *((float *)a1 + 14);
          v23 = *((float *)a1 + 16) - v22;
          v25 = *((float *)a1 + 15);
          v21 = *((float *)a1 + 17) - v24;
          v20 = *((float *)a1 + 18) - v25;
          goto LABEL_32;
        }
        if ( v28 <= 0.0 )
        {
          v11 = *((float *)a1 + 25);
        }
        else
        {
          v11 = *((float *)a1 + 25) - (float)(v7 / v28);
          *((float *)a1 + 25) = v11;
        }
        if ( v11 >= 0.0 && v28 > 0.0 )
          goto LABEL_44;
        *((uint8_t *)a1 + 108) = 1;
        break;
      case 4:
        v8 = *((float *)a1 + 28);
        if ( v8 > 0.0 )
        {
          v9 = *((float *)a1 + 25);
          if ( v9 >= *((float *)a1 + 29) )
            v10 = v7 / (float)(*((float *)a1 + 30) * v8);
          else
            v10 = v7 / v8;
          v11 = v10 + v9;
          *((float *)a1 + 25) = v10 + v9;
LABEL_35:
          if ( v11 <= 1.0 && v8 > 0.0 )
          {
LABEL_44:
            v22 = *((float *)a1 + 13);
            v24 = *((float *)a1 + 14);
            v25 = *((float *)a1 + 15);
            v23 = (float)(*((float *)a1 + 16) - v22) * v11;
            v21 = (float)(*((float *)a1 + 17) - v24) * v11;
            v20 = (float)(*((float *)a1 + 18) - v25) * v11;
            goto LABEL_32;
          }
          goto LABEL_36;
        }
        goto LABEL_42;
      default:
LABEL_27:
        v40 = v3;
        G4_VCALL<void>(v43, 308, (char *)a1 + 76);
        v3 = v40;
        goto LABEL_3;
    }
    *((uint32_t *)a1 + 25) = 0;
    v21 = 0.0;
    v22 = *((float *)a1 + 13);
    v23 = 0.0;
    v24 = *((float *)a1 + 14);
    v25 = *((float *)a1 + 15);
LABEL_32:
    v26 = (float)(v20 + v25) + *((float *)a1 + 24);
    v27 = (float)(v23 + v22) + *((float *)a1 + 22);
    *((float *)a1 + 20) = (float)(v21 + v24) + *((float *)a1 + 23);
    *((float *)a1 + 21) = v26;
    *((float *)a1 + 19) = v27;
    goto LABEL_27;
  }
LABEL_3:
  if ( v3 != 0 && v43 != 0 )
  {
    v39 = v3;
    v41 = *((float *)a1 + 39);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
    v13 = (float)(int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, a3, v29, v30, v31, v32, v33, v34, v35, v36, v37));
    v3 = v39;
    if ( v13 > v41 )
    {
      v14 = (float)a2 + *((float *)a1 + 39);
g4_m128_lane<uint64_t>(v44, 0) = 0;
      *((float *)a1 + 39) = v14;
g4_m128_lane<uint64_t>(v44, 1) = 0x3F80000000000000LL;
      v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
      v16 = sub_837200((int)(uintptr_t)(a1), v15, a3, v29, v30, v31, v32, v33, v34, v35, v36, v37);
      sub_A04410(
        (int)(uintptr_t)(&v44),
        *((float *)a1 + 31),
        *((float *)a1 + 32),
        *((float *)a1 + 33),
        *((float *)a1 + 34),
        *((float *)a1 + 35),
        *((float *)a1 + 36),
        *((float *)a1 + 37),
        *((float *)a1 + 38),
        fminf(fmaxf(v14 / (float)(int)(uintptr_t)(v16), 0.0), 1.0));
g4_m128_raw(v17) =g4_m128_lane<uint32_t>(v44, 1);
g4_m128_lane<float>(v17, 0) = (float)((float)((float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v17, 0))
                                      + (float)(g4_m128_lane<float>(v44, 0) *g4_m128_lane<float>(v44, 0)))
                              + (float)(g4_m128_lane<float>(v44, 2) *g4_m128_lane<float>(v44, 2)))
                      + (float)(g4_m128_lane<float>(v44, 3) *g4_m128_lane<float>(v44, 3));
      if (g4_m128_lane<float>(v17, 0) != 0.0 )
      {
        v18 = 1.0 / fsqrt(g4_m128_lane<float>(v17, 0));
g4_m128_lane<float>(v17, 0) = (float)((float)((float)(g4_m128_lane<float>(v17, 0) * v18) * v18) + -3.0) * (float)(v18 * -0.5);
        v44 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v44);
      }
      G4_VCALL<void>(v43, 316, &v44);
      v3 = v39;
    }
  }
  result = v42;
  if ( v42 == nullptr || *((uint32_t *)a1 + 26) == 0 )
  {
    if ( v3 != 0 )
      goto LABEL_7;
    goto LABEL_8;
  }
  if ( *((float *)a1 + 25) >= 1.0 )
  {
    if ( v3 != 0 )
    {
LABEL_7:
      v38 = *((float *)a1 + 39);
      v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
      result = sub_837200((int)(uintptr_t)(a1), v5, a3, v29, v30, v31, v32, v33, v34, v35, v36, v37);
      if ( v38 < (float)(int)(uintptr_t)(result) )
        return result;
    }
LABEL_8:
    G4_VCALL<void>(a1, 28, a3);
    return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3A700_eac3a700  (binary VA: 0xc3a700)
// Original: sub_C3A700
// ----------------------------------------------------------------------------
int sub_C3A700_eac3a700(int a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  grapher::ActorContext::Self *v4;
  int v5;
  void *v6;
  int v7;
  uint32_t *v9;
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v32;
  int v33;
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42; // xmm3_4
  float *v43;
  float v44; // xmm6_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm4_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm2_4
  float v51; // xmm6_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm3_4
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef void *_g4_t_obj;
  typedef void *_g4_t_obja;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef g4_cxa_guard_t *_g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77[3];
  typedef float _g4_t_v78[9];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v56)) > _g4_s1 ? (4u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v57)) > _g4_s2 ? (16u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_obj)) > _g4_s3 ? (20u + sizeof(_g4_t_obj)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_obja)) > _g4_s4 ? (20u + sizeof(_g4_t_obja)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v60)) > _g4_s5 ? (24u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v61)) > _g4_s6 ? (24u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v62)) > _g4_s7 ? (28u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v63)) > _g4_s8 ? (28u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v64)) > _g4_s9 ? (32u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v65)) > _g4_s10 ? (36u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v66)) > _g4_s11 ? (36u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v67)) > _g4_s12 ? (40u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v68)) > _g4_s13 ? (40u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v69)) > _g4_s14 ? (40u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v70)) > _g4_s15 ? (40u + sizeof(_g4_t_v70)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v71)) > _g4_s16 ? (44u + sizeof(_g4_t_v71)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v72)) > _g4_s17 ? (48u + sizeof(_g4_t_v72)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v73)) > _g4_s18 ? (52u + sizeof(_g4_t_v73)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v74)) > _g4_s19 ? (60u + sizeof(_g4_t_v74)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v75)) > _g4_s20 ? (64u + sizeof(_g4_t_v75)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v76)) > _g4_s21 ? (68u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v77)) > _g4_s22 ? (84u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v78)) > _g4_s23 ? (96u + sizeof(_g4_t_v78)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 20u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 84u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 96u);

  LODWORD(v78[5]) = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a3;
  obj = (void *)sub_857260(a1, 0, a3);
  v67 = (g4_cxa_guard_t *)sub_857260(v3, 1, v4);
  v5 = sub_857260(v3, 4, v4);
  v6 = obj;
  v7 = v5;
  if ( obj != nullptr && v67 != nullptr )
  {
    v61 = v5;
    (*(void (**)(float *))(*(uint32_t *)obj + 52))(&v71);
    (*(void (**)(float *))(*v67 + 52))(&v74);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 2);
    v70 = (int)(uintptr_t)(sub_837200(v3, Variable, v4));
    v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 3);
    v33 = (int)(uintptr_t)(sub_837200(v3, v32, v4));
    v6 = obj;
    v34 = v71;
    v7 = v61;
    v35 = v72;
    v36 = v73;
    v37 = v74;
    if ( v33 != 0 )
    {
      v39 = v75;
      v38 = v76;
      v70 = (int)(float)((float)((float)(1.0 / (float)v70) * 1000.0)
                       * fsqrt(
                           (float)((float)((float)(v72 - v75) * (float)(v72 - v75))
                                 + (float)((float)(v71 - v74) * (float)(v71 - v74)))
                         + (float)((float)(v73 - v76) * (float)(v73 - v76))));
    }
    else
    {
      v38 = v76;
      v39 = v75;
    }
    *(float *)(v3 + 72) = v38;
    *(uint32_t *)(v3 + 100) = 0;
    *(float *)(v3 + 52) = v34;
    *(uint32_t *)(v3 + 104) = 1;
    *(float *)(v3 + 56) = v35;
    *(uint8_t *)(v3 + 108) = 1;
    *(float *)(v3 + 60) = v36;
    *(uint32_t *)(v3 + 88) = 0;
    *(float *)(v3 + 76) = v34;
    *(uint32_t *)(v3 + 92) = 0;
    *(float *)(v3 + 80) = v35;
    *(uint32_t *)(v3 + 96) = 0;
    *(float *)(v3 + 84) = v36;
    *(uint32_t *)(v3 + 116) = 0;
    *(float *)(v3 + 64) = v37;
    *(uint32_t *)(v3 + 120) = 1065353216;
    *(float *)(v3 + 68) = v39;
    *(float *)(v3 + 112) = (float)v70;
  }
  if ( v7 != 0 && obj != nullptr )
  {
    v60 = v7;
    obja = v6;
    v9 = (uint32_t *)G4_VCALL<int>(v6, 56, v55, v56);
    *(uint32_t *)(v3 + 124) = *v9;
    *(uint32_t *)(v3 + 128) = v9[1];
    *(uint32_t *)(v3 + 132) = v9[2];
    *(uint32_t *)(v3 + 136) = v9[3];
    (*(void (**)(float *, void *))(*(uint32_t *)obja + 296))(&v74, obja);
    v76 = 0.0;
    v10 = (float)(v75 * v75) + (float)(v74 * v74);
    if ( v10 != 0.0 )
    {
      v11 = 1.0 / fsqrt(v10);
      v12 = (float)((float)((float)(v10 * v11) * v11) + -3.0) * (float)(v11 * -0.5);
      v74 = v74 * v12;
      v75 = v12 * v75;
    }
    (*(void (**)(float *, void *))(*(uint32_t *)obja + 52))(v78, obja);
    (*(void (**)(float *, int))(*(uint32_t *)v60 + 52))(v77, v60);
    v13 = v77[0] - v78[0];
    v14 = v77[1] - v78[1];
    v15 = (float)(v14 * v14) + (float)(v13 * v13);
    if ( v15 != 0.0 )
    {
      v16 = fsqrt(v15);
      v17 = (float)((float)((float)(v15 * (float)(1.0 / v16)) * (float)(1.0 / v16)) + -3.0)
          * (float)((float)(1.0 / v16) * -0.5);
      v14 = v14 * v17;
      v13 = v13 * v17;
      v15 = (float)(v13 * v13) + (float)(v14 * v14);
    }
    v18 = v76;
    v19 = v75;
    v65 = v18 * v18;
    v20 = (float)((float)(v74 * v74) + (float)(v19 * v19)) + (float)(v18 * v18);
    if ( v20 == 0.0 )
    {
      v68 = v76;
      v62 = v75;
      v57 = v74;
    }
    else
    {
      v21 = fsqrt(v20);
      v22 = (float)((float)((float)(v20 * (float)(1.0 / v21)) * (float)(1.0 / v21)) + -3.0)
          * (float)((float)(1.0 / v21) * -0.5);
      v57 = v74 * v22;
      v62 = v75 * v22;
      v68 = v22 * v76;
    }
    if ( v15 != 0.0 )
    {
      v23 = 1.0 / fsqrt(v15);
      v24 = (float)((float)((float)(v15 * v23) * v23) + -3.0) * (float)(v23 * -0.5);
      v13 = v13 * v24;
      v14 = v14 * v24;
    }
    v25 = (float)(v62 * v14) + (float)(v57 * v13);
    if ( v25 >= 0.999999f )
    {
      v64 = 0.0;
      v63 = 1.0;
      v69 = 0.0;
      v66 = 0.0;
    }
    else if ( v25 > -0.999999f )
    {
      v40 = v68 * v14;
      v41 = fsqrt((float)(v25 + 1.0) + (float)(v25 + 1.0));
      v42 = (float)(v14 * v57) - (float)(v13 * v62);
      v63 = v41 * 0.5;
      v66 = (float)-v40 * (float)(1.0 / v41);
      v69 = (float)(v68 * v13) * (float)(1.0 / v41);
      v64 = (float)(1.0 / v41) * v42;
    }
    else
    {
      v26 = -v76;
      v27 = (float)(v26 * v26) + (float)(v75 * v75);
      if ( fabs(v27) > 0.000001f )
      {
        v65 = 0.0;
        v18 = 0.0;
      }
      else
      {
        v19 = -v74;
        v27 = v19 * v19;
        v26 = 0.0;
      }
      v28 = v27 + v65;
      if ( v28 != 0.0 )
      {
        v29 = 1.0 / fsqrt(v28);
        v30 = (float)((float)((float)(v28 * v29) * v29) + -3.0) * (float)(v29 * -0.5);
        v18 = v18 * v30;
        v26 = v26 * v30;
        v19 = v19 * v30;
      }
      v64 = v19;
      v69 = v26;
      v66 = v18;
      v63 = -0.00000004371139f;
    }
    v43 = (float *)G4_VCALL<int>(obja, 56);
    v44 = v43[3];
    v45 = *v43;
    v46 = v43[1];
    v47 = v43[2];
    v48 = (float)((float)((float)(v63 * v44) - (float)(v66 * *v43)) - (float)(v69 * v46)) - (float)(v64 * v47);
    *(float *)(v3 + 152) = v48;
    v49 = (float)((float)((float)(v64 * v44) + (float)(v63 * v47)) + (float)(v66 * v46)) - (float)(v69 * v45);
    *(float *)(v3 + 148) = v49;
    v50 = (float)((float)((float)(v69 * v44) + (float)(v63 * v46)) + (float)(v64 * v45)) - (float)(v66 * v47);
    *(float *)(v3 + 144) = v50;
    v51 = (float)((float)((float)(v44 * v66) + (float)(v45 * v63)) + (float)(v47 * v69)) - (float)(v46 * v64);
    *(float *)(v3 + 140) = v51;
    v52 = (float)((float)((float)(v50 * v50) + (float)(v51 * v51)) + (float)(v49 * v49)) + (float)(v48 * v48);
    if ( v52 != 0.0 )
    {
      v53 = 1.0 / fsqrt(v52);
      v54 = (float)((float)((float)(v52 * v53) * v53) + -3.0) * (float)(v53 * -0.5);
      *(float *)(v3 + 140) = v51 * v54;
      *(float *)(v3 + 144) = v50 * v54;
      *(float *)(v3 + 148) = v49 * v54;
      *(float *)(v3 + 152) = v54 * v48;
    }
    *(uint32_t *)(v3 + 156) = 0;
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, (grapher::ActorBase::Self *)v3, v4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)v3, 1, v4));
}

// ----------------------------------------------------------------------------
// Function: sub_C3AEE0  (binary VA: 0xc3aee0)
// Original: sub_C3AEE0
// ----------------------------------------------------------------------------
unsigned int sub_C3AEE0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  unsigned int result;
  int *s1;
  void *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v9;
  grapher::ActorContext::Self *v10;
  int v11;
  uint32_t *v12;
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
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  grapher::ActorContext::Self *v46;
  grapher::ActorContext::Self *v47;
  grapher::ActorContext::Self *v48;
  grapher::ActorContext::Self *v49;
  grapher::ActorContext::Self *v50;
  g4_cxa_guard_t *v51;
  grapher::ActorContext::Self *v52;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  result = (unsigned int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, a3, v14, v18, v22, v26, v30, v34, v38, v42, v46));
  if ( (result & 0x80000000) == 0 && result < dword_20D9300 )
  {
    s1 = *(int **)(dword_20D92F0 + 24 * result + 8);
    if ( a2 != 0 )
    {
      if ( a2 == 1 && strcmp((const char *)s1, *(const char **)(dword_20D92F0 + 8)) == 0 )
      {
        if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
        {
          sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
          __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
        }
        v6 = nullptr;
        if ( byte_20D2D64 == 0 )
          v6 = &unk_20D2D60;
        sub_795950((int)(uintptr_t)(v6), s1);
      }
    }
    else if ( sub_629790() )
    {
      v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
      v51 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a1), v7, a3, v15, v19, v23, v27, v31, v35, v39, v43, v47);
      v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
      v52 = sub_837200((int)(uintptr_t)(a1), v8, a3, v16, v20, v24, v28, v32, v36, v40, v44, v48);
      v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      v10 = sub_837200((int)(uintptr_t)(a1), v9, a3, v17, v21, v25, v29, v33, v37, v41, v45, v49);
      v11 = (int)(uintptr_t)(v10);
      if ( byte_20D2D50 == 0 )
      {
        v50 = v10;
        v13 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50);
        v11 = (int)(uintptr_t)(v50);
        if ( v13 != 0 )
        {
          sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
          __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
          v11 = (int)(uintptr_t)(v50);
        }
      }
      v12 = nullptr;
      if ( byte_20D2D64 == 0 )
        v12 = (uint32_t *)(&unk_20D2D60);
      sub_7A08C0(v12, (char *)s1, 0, v11, (int)(uintptr_t)(v52), (int)(uintptr_t)(v51));
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    }
    return (unsigned int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3B1C0_eac3b1c0  (binary VA: 0xc3b1c0)
// Original: sub_C3B1C0
// ----------------------------------------------------------------------------
int sub_C3B1C0_eac3b1c0(grapher::ActorBase::Self *a1)
{
  grapher::ActorVariable::Self *Variable;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef grapher::ActorManager::Self *_g4_t_v5;
  typedef g4_cxa_guard_t *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v7)) > _g4_s4 ? (16u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v8)) > _g4_s5 ? (20u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v9)) > _g4_s6 ? (24u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v10)) > _g4_s7 ? (28u + sizeof(_g4_t_v10)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(&v9, (int)(uintptr_t)(a1), Variable, nullptr, v3, v4, (int)(uintptr_t)(v5), (int)(uintptr_t)(v6), v7, v8, (int)(uintptr_t)(v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), v9, (int)(uintptr_t)(&v8) + 3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, v10, a1, 0);
  g4_std::string::Destroy(v10);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3B2E0_eac3b2e0  (binary VA: 0xc3b2e0)
// Original: sub_C3B2E0
// ----------------------------------------------------------------------------
int sub_C3B2E0_eac3b2e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorVariable::Self *Variable;
  void **v5;
  void **v6;
  void **v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[5];
  typedef char *_g4_t_v18;
  typedef void *_g4_t_v19[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v15)) > _g4_s6 ? (24u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v16)) > _g4_s7 ? (24u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (47u + sizeof(_g4_t_v17)) > _g4_s8 ? (47u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v18)) > _g4_s9 ? (52u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v19)) > _g4_s10 ? (56u + sizeof(_g4_t_v19)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 47u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);

  v3 = a1;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(&v18, (int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, v12, v13, v14, v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17[1]), v18, (int)(uintptr_t)(v17));
  g4_std::string::Destroy(&v18);
  v19[0] = v19;
  v16 = *(uint32_t *)&v17[1];
  v19[1] = v19;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v19), 0, 0x7FFFFFFF);
  v5 = (void **)v19[0];
  if ( v19[0] != v19 )
  {
    do
    {
      G4_VCALL<void>(v5[2], 404, v16);
      v5 = (void **)*v5;
    }
    while ( v5 != v19 );
    v3 = a1;
  }
  grapher::ActorBase::FireEvent(v3, 1, a3);
  v6 = (void **)v19[0];
  if ( v19[0] != v19 )
  {
    while ( 1 )
    {
      v7 = (void **)*v6;
      opDelete(v6);
      if ( v7 == v19 )
        break;
      v6 = v7;
    }
  }
  return ((g4_std::string::Destroy(&v17[1])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3B4C0_eac3b400  (binary VA: 0xc3b400)
// Original: sub_C3B4C0
// ----------------------------------------------------------------------------
int sub_C3B4C0_eac3b400(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  grapher::ActorVariable::Self *Variable;
  int *v5;
  int *v6;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  g4_cxa_guard_t *v13;
  int v14;
  int v15;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v12 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D3C44 == 0 )
    v3 = (int *)(&dword_20D3C40);
  sub_632640((int)(uintptr_t)(v3));
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13), v14, v15) == 0 )
  {
    if ( byte_20D4980 != 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
  if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
  {
    sub_9BA6C0((int)(uintptr_t)(&dword_20D5DA8));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
    __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
  }
  v8 = nullptr;
  if ( byte_20D5DAC == 0 )
    v8 = (int *)(&dword_20D5DA8);
  sub_99C110((int)(uintptr_t)(v8), 9);
  if ( byte_20D4980 == 0 )
  {
LABEL_16:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
  }
LABEL_6:
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  sub_82A420((int)(uintptr_t)(v5), 1, 1);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D49A8 == 0 )
    v6 = (int *)(&dword_20D49A0);
  sub_82D430((int)(uintptr_t)(v6), 0);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C3B760_eac3b760  (binary VA: 0xc3b760)
// Original: sub_C3B760
// ----------------------------------------------------------------------------
char sub_C3B760_eac3b760(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4; // bp
  grapher::ActorVariable::Self *v5;
  int *v6;
  int v7;
  grapher::ActorVariable::Self *v8;
  char v9; // bp
  int *v10;
  bool v11;
  int v12;
  int v13;
  int *v14;
  bool v15;
  int *v16;
  int v18;
  int v19;
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
  int v32;
  int v33;
  int v34;
  int v35;
  void *v36;
  void *v37;
  int *v38;
  g4_cxa_guard_t *v39;
  char v40;
  g4_cxa_guard_t *v41;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v18, v21, v24, v27, v30, v33, (int)(uintptr_t)(v36));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  sub_837730((int)(uintptr_t)(a1), v5, a3, v19, v22, v25, v28, v31, v34, (int)(uintptr_t)(v37));
  if ( byte_20D3C30 == 0 )
  {
    v39 = (g4_cxa_guard_t *)&byte_20D3C30;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      v38 = (int *)(&dword_20D3C40);
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
  }
  v6 = nullptr;
  if ( byte_20D3C44 == 0 )
    v6 = (int *)(&dword_20D3C40);
  v7 = sub_669490(v6[13]);
  if ( v7 != 0 )
  {
    if ( v7 >= 0 )
    {
      v15 = v7 == 4;
      v7 -= 4;
      if ( v15 || v7 == 1 )
      {
        G4_VCALL<void>(a1, 28, a3);
        if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
        {
          sub_976230((int)(uintptr_t)(&dword_20D5240));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
          __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
        }
        v16 = nullptr;
        if ( byte_20D5248 == 0 )
          v16 = (int *)(&dword_20D5240);
        LOBYTE(v7) = sub_9767D0((int)(uintptr_t)(v16));
        if ( (uint8_t)v7 == 0 )
          LOBYTE(v7) = (uint8_t)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      }
    }
  }
  else
  {
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v9 = v4 ^ 1;
    v40 = sub_837200((int)(uintptr_t)(a1), v8, a3, v20, v23, v26, v29, v32, v35, (int)(uintptr_t)(v38), (int)(uintptr_t)(v39), (grapher::ActorContext::Self *)v41) != nullptr;
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230((int)(uintptr_t)(&dword_20D5240));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v10 = nullptr;
    if ( byte_20D5248 == 0 )
      v10 = (int *)(&dword_20D5240);
    v11 = sub_9767D0((int)(uintptr_t)(v10));
    v12 = *((uint32_t *)a1 + 13);
    v13 = -!v11;
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v14 = nullptr;
    if ( byte_20D3C44 == 0 )
      v14 = (int *)(&dword_20D3C40);
    LOBYTE(v7) = sub_6310F0((int)(uintptr_t)(v14), v12, v13, v9, v40);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_C3BA80_eac3ba80  (binary VA: 0xc3ba80)
// Original: sub_C3BA80
// ----------------------------------------------------------------------------
void sub_C3BA80_eac3ba80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  uint8_t v5;
  void **v6;
  uint32_t *v7;
  int *v8;
  int *v9;
  int v10;
  char *v11;
  uint32_t *v12;
  void **v13;
  void **v14;
  uint32_t *v15;
  char *v16;
  int v17;
  bool v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  uint32_t *v23;
  typedef grapher::ActorBase::Self *_g4_t_v24;
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
  typedef char _g4_t_v39;
  typedef uint8_t _g4_t_v40;
  typedef void *_g4_t_v41[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v29)) > _g4_s5 ? (20u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v30)) > _g4_s6 ? (20u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v31)) > _g4_s7 ? (24u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v32)) > _g4_s8 ? (24u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v33)) > _g4_s9 ? (28u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v34)) > _g4_s10 ? (28u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v35)) > _g4_s11 ? (32u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v36)) > _g4_s12 ? (32u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v37)) > _g4_s13 ? (36u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v38)) > _g4_s14 ? (36u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (42u + sizeof(_g4_t_v39)) > _g4_s15 ? (42u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (43u + sizeof(_g4_t_v40)) > _g4_s16 ? (43u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v41)) > _g4_s17 ? (56u + sizeof(_g4_t_v41)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 42u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 43u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);

  v41[0] = v41;
  v41[1] = v41;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v41), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v39 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v25, v27, v29, v31, v33, v35, v37);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v5 = sub_837730((int)(uintptr_t)(a1), v4, a3, v26, v28, v30, v32, v34, v36, v38);
  v6 = (void **)v41[0];
  v40 = v5;
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (uint32_t *)(v6[2]);
        if ( v7 != nullptr )
          break;
LABEL_18:
        v6 = (void **)*v6;
        if ( v6 == v41 )
          goto LABEL_19;
      }
      v8 = (int *)(*(int (**)(void *))(*v7 + 16))(v6[2]);
      if ( v8 == nullptr )
        goto LABEL_8;
      if ( v8 != (int *)(uintptr_t)(&dword_20D75F0) )
      {
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_24;
        }
LABEL_8:
        v9 = (int *)G4_VCALL<int>(v7, 16);
        if ( v9 != nullptr )
        {
          while ( v9 != (int *)(uintptr_t)(&dword_20D68D0) )
          {
            v9 = (int *)v9[1];
            if ( v9 == nullptr )
              goto LABEL_18;
          }
          if ( v7[195] != 0 )
          {
            if ( v39 != 0 )
            {
              v10 = sub_6645E0();
              v11 = nullptr;
              v12 = (uint32_t *)v7[195];
              if ( v12 != nullptr )
                v11 = (char *)v12 + *(uint32_t *)(*v12 - 12);
              G4_VCALL<void>(v10, 108, v11);
            }
            else
            {
              v21 = sub_6645E0();
              v22 = nullptr;
              v23 = (uint32_t *)v7[195];
              if ( v23 != nullptr )
                v22 = (char *)v23 + *(uint32_t *)(*v23 - 12);
              G4_VCALL<void>(v21, 104, v22, 1065353216, 1036831949, 1, 1016);
            }
            v24 = (grapher::ActorBase::Self *)(*(uint32_t *)(*(uint32_t *)v7[195] - 12) + v7[195]);
            G4_VCALL<void>(v24, 52, v40);
          }
        }
        goto LABEL_18;
      }
LABEL_24:
      v15 = (uint32_t *)v7[459];
      if ( v15 != nullptr )
      {
        v16 = (char *)v15 + *(uint32_t *)(*v15 - 12);
        v17 = 1232348160;
        if ( v39 != 0 )
          v17 = 944879383;
        G4_VCALL<void>(v16, 176, v17);
      }
      v18 = G4_VCALL<int>(v7, 456) == 0;
      v19 = v7[469];
      v20 = v7[468];
      if ( !v18 && (v20 & 0x100) != 0 )
      {
        if ( v20 < 0 || (v19 & 1) != 0 )
          goto LABEL_18;
        if ( (v19 & 4) != 0 )
          goto LABEL_32;
        v6 = (void **)*v6;
        if ( v6 == v41 )
          break;
      }
      else
      {
        if ( v20 < 0 || (v19 & 1) != 0 )
          goto LABEL_18;
LABEL_32:
        if ( (v19 & 4) != 0 )
          goto LABEL_18;
        sub_96D5A0(v7, v40);
        v6 = (void **)*v6;
        if ( v6 == v41 )
          break;
      }
    }
  }
LABEL_19:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v13 = (void **)v41[0];
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      v14 = (void **)*v13;
      opDelete(v13);
      if ( v14 == v41 )
        break;
      v13 = v14;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C3BD60  (binary VA: 0xc3bd60)
// Original: sub_C3BD60
// ----------------------------------------------------------------------------
void sub_C3BD60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4; // si
  grapher::ActorVariable::Self *v5;
  g4_cxa_guard_t v6;
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  double v12; // xmm1_8
  float v13; // xmm0_4
  long double v14; // fst7
  int *v15;
  int v16;
  int v17;
  int v18;
  void **v19;
  void **v20;
  int v21;
  int v22;
  int v23;
  void *v24;
  int v25;
  int *v26;
  int *v27;
  void *v28;
  int *v29;
  void *v30;
  int v31;
  int *v32;
  void *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  typedef float _g4_t_v40;
  typedef char _g4_t_objd;
  typedef uint32_t *_g4_t_obj;
  typedef void *_g4_t_obja;
  typedef void *_g4_t_objb;
  typedef void *_g4_t_obje;
  typedef void *_g4_t_objf;
  typedef uint32_t *_g4_t_objc;
  typedef int _g4_t_v48;
  typedef bool _g4_t_v49;
  typedef char _g4_t_v50;
  typedef grapher::ActorContext::Self *_g4_t_v51;
  typedef grapher::ActorBase::Self *_g4_t_v52;
  typedef double _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef g4_cxa_guard_t *_g4_t_v56;
  typedef g4_cxa_guard_t *_g4_t_v57;
  typedef void *_g4_t_v58[4];
  typedef float _g4_t_v59[5];
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63[10];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_objd)) > _g4_s1 ? (28u + sizeof(_g4_t_objd)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_obj)) > _g4_s2 ? (28u + sizeof(_g4_t_obj)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_obja)) > _g4_s3 ? (28u + sizeof(_g4_t_obja)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_objb)) > _g4_s4 ? (28u + sizeof(_g4_t_objb)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_obje)) > _g4_s5 ? (28u + sizeof(_g4_t_obje)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_objf)) > _g4_s6 ? (28u + sizeof(_g4_t_objf)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_objc)) > _g4_s7 ? (28u + sizeof(_g4_t_objc)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v48)) > _g4_s8 ? (32u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (38u + sizeof(_g4_t_v49)) > _g4_s9 ? (38u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (39u + sizeof(_g4_t_v50)) > _g4_s10 ? (39u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v51)) > _g4_s11 ? (40u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v52)) > _g4_s12 ? (44u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v53)) > _g4_s13 ? (48u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v54)) > _g4_s14 ? (48u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v55)) > _g4_s15 ? (56u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v56)) > _g4_s16 ? (60u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v57)) > _g4_s17 ? (60u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v58)) > _g4_s18 ? (64u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v59)) > _g4_s19 ? (80u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v60)) > _g4_s20 ? (100u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v61)) > _g4_s21 ? (104u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v62)) > _g4_s22 ? (108u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v63)) > _g4_s23 ? (112u + sizeof(_g4_t_v63)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_objd &objd = *reinterpret_cast<_g4_t_objd *>(_g4_sf + 28u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 28u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 28u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 28u);
  _g4_t_obje &obje = *reinterpret_cast<_g4_t_obje *>(_g4_sf + 28u);
  _g4_t_objf &objf = *reinterpret_cast<_g4_t_objf *>(_g4_sf + 28u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 38u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 39u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 100u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 104u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 108u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);

  LODWORD(v63[6]) = (uint32_t)(uintptr_t)(&a1);
  v52 = a1;
  v51 = a3;
  v58[0] = v58;
  v58[1] = v58;
  v48 = sub_857260(a1, 1, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v52, 2);
  v4 = sub_837730(v52, Variable, v51);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v52, 3);
  objd = sub_837730(v52, v5, v51);
  sub_8560A0(v52, 0, (int)(uintptr_t)(v58), (int)(uintptr_t)(v51), 0x7FFFFFFF);
  if ( objd == 0 )
  {
    if ( v48 == 0 )
      goto LABEL_17;
    v57 = (g4_cxa_guard_t *)v58[0];
    if ( v58[0] == v58 )
      goto LABEL_17;
    v50 = v4 ^ 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = v57[2];
        if ( v25 != 0 )
          break;
LABEL_75:
        v57 = (g4_cxa_guard_t *)*v57;
        if ( v57 == (g4_cxa_guard_t *)v58 )
          goto LABEL_76;
      }
      v26 = (int *)(*(int (**)(g4_cxa_guard_t))(*(uint32_t *)v25 + 16))(v57[2]);
      v54 = 0;
      v55 = 0;
      if ( v26 != nullptr )
      {
        if ( v26 == (int *)(uintptr_t)(&dword_20D68D0) )
        {
LABEL_86:
          v54 = v25;
          v55 = 0;
          if ( *(int *)(v25 + 1096) > 0 )
          {
            v54 = v25;
            v55 = **(uint32_t **)(v25 + 1104);
          }
        }
        else
        {
          while ( 1 )
          {
            v26 = (int *)v26[1];
            if ( v26 == nullptr )
              break;
            if ( v26 == (int *)(uintptr_t)(&dword_20D68D0) )
              goto LABEL_86;
          }
          v54 = 0;
          v55 = 0;
        }
      }
      v27 = (int *)G4_VCALL<int>(v25, 16);
      v28 = nullptr;
      if ( v27 != nullptr )
      {
        v28 = (void *)v25;
        if ( v27 != (int *)(uintptr_t)(&dword_20D707C) )
        {
          do
          {
            v27 = (int *)v27[1];
            if ( v27 == nullptr )
            {
              v28 = nullptr;
              goto LABEL_52;
            }
          }
          while ( v27 != (int *)(uintptr_t)(&dword_20D707C) );
          v28 = (void *)v25;
        }
      }
LABEL_52:
      obja = v28;
      v29 = (int *)G4_VCALL<int>(v25, 16);
      v30 = obja;
      if ( v29 != nullptr )
      {
        if ( v29 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_79:
          if ( G4_VCALL<int>(v25, 456) != 0 )
            G4_VCALL<void>(v25, 708);
          *(uint8_t *)(v25 + 308) = v50;
          v36 = *(uint32_t *)v25;
          if ( v50 != 0 )
          {
            *(uint32_t *)(v25 + 304) = 0;
            (*(void (**)(int, int))(v36 + 324))(v25, v48);
            *(uint8_t *)(v25 + 308) = 1;
            v37 = 0;
          }
          else
          {
            *(uint32_t *)(v25 + 304) = 3;
            (*(void (**)(int, int))(v36 + 324))(v25, v48);
            *(uint8_t *)(v25 + 308) = 0;
            v37 = 3;
          }
          goto LABEL_83;
        }
        while ( 1 )
        {
          v29 = (int *)v29[1];
          if ( v29 == nullptr )
            break;
          if ( v29 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_79;
        }
      }
      v49 = v54 == 0 && obja != nullptr;
      if ( v49 )
      {
        v31 = G4_VCALL<int>(obja, 456);
        v30 = obja;
      }
      else
      {
        v31 = v54;
      }
      if ( v31 != 0 )
      {
        objb = v30;
        v32 = (int *)G4_VCALL<int>(v31, 16);
        if ( v32 != nullptr )
        {
          while ( v32 != (int *)(uintptr_t)(&dword_20D6EC0) )
          {
            v32 = (int *)v32[1];
            if ( v32 == nullptr )
              goto LABEL_89;
          }
          if ( v49 )
            v54 = G4_VCALL<int>(objb, 456);
          v33 = nullptr;
          if ( v54 != 0 )
          {
            if ( *(int *)(v54 + 1096) > 0 )
            {
              v33 = **(void ***)(v54 + 1104);
              if ( v33 != nullptr )
              {
                obje = **(void ***)(v54 + 1104);
                G4_VCALL<void>(v33, 708);
                G4_VCALL<void>(obje, 324, v48);
                v33 = obje;
              }
            }
            objf = v33;
            G4_VCALL<void>(v54, 468);
            v33 = objf;
          }
          objc = (uint32_t *)(v33);
          G4_VCALL<void>(v25, 324, v48);
          if ( objc != nullptr )
          {
            if ( G4_VCALL<int>(objc, 456) == 0
              || (v34 = objc[468], v35 = objc[469], (v34 & 0x100) == 0)
              || v34 < 0
              || (v35 & 1) != 0
              || (v35 & 4) != 0 )
            {
              G4_VCALL<void>(objc, 664, v54, 1);
            }
          }
          goto LABEL_75;
        }
      }
LABEL_89:
      if ( v55 != 0 && G4_VCALL<int>(v55, 456) != 0 && (*(uint8_t *)(v55 + 1873) & 8) != 0 )
        G4_VCALL<void>(v55, 708);
      *(uint8_t *)(v25 + 308) = v50;
      *(uint32_t *)(v25 + 304) = v50 == 0 ? 3 : 0;
      G4_VCALL<void>(v25, 324, v48);
      if ( v55 != 0 )
      {
        if ( G4_VCALL<int>(v55, 456) == 0
          || (v38 = *(uint32_t *)(v55 + 1872), v39 = *(uint32_t *)(v55 + 1876), (v38 & 0x100) == 0)
          || v38 < 0
          || (v39 & 1) != 0
          || (v39 & 4) != 0 )
        {
          if ( G4_VCALL<int>(v55, 456) == 0 || (*(uint8_t *)(v55 + 1873) & 8) == 0 )
          {
            G4_VCALL<void>(v55, 664, v54, 1);
            goto LABEL_75;
          }
        }
      }
      *(uint8_t *)(v25 + 308) = v50;
      v37 = v50 == 0 ? 3 : 0;
LABEL_83:
      *(uint32_t *)(v25 + 304) = v37;
      v57 = (g4_cxa_guard_t *)*v57;
      if ( v57 == (g4_cxa_guard_t *)v58 )
      {
LABEL_76:
        if ( byte_20D5B50 == 0 )
          goto LABEL_77;
        goto LABEL_18;
      }
    }
  }
  v56 = (g4_cxa_guard_t *)v58[0];
  if ( v58[0] != v58 )
  {
    while ( 1 )
    {
      v6 = v56[2];
      if ( v6 == 0 )
        goto LABEL_16;
      (*(void (**)(float *))(*(uint32_t *)v6 + 52))(&v60);
      v7 = -v61;
      v8 = -v60;
      v9 = (float)(v7 * v7) + (float)(v8 * v8);
      if ( v9 != 0.0 )
      {
        v10 = 1.0 / fsqrt(v9);
        v11 = (float)((float)((float)(v9 * v10) * v10) + -3.0) * (float)(v10 * -0.5);
        v8 = v8 * v11;
        v7 = v7 * v11;
      }
      v59[2] = v62;
      v59[0] = (float)(v8 * 2000.0) + v60;
      v59[1] = (float)(2000.0 * v7) + v61;
      v53 = acos(fminf(fmaxf(-v7, -1.0), 1.0));
      v12 = 1.0;
      if ( v8 <= 0.0 )
        v12 = -1.0;
      v63[0] = 0.0;
      v63[1] = 0.0;
      v13 = v12 * v53;
      v40 = sinf(v13 * 0.5);
      v14 = cosf(v13 * 0.5);
      v63[2] = v40;
      v63[3] = v14;
      v15 = (int *)G4_VCALL<int>(v6, 16);
      if ( v15 == nullptr )
        goto LABEL_13;
      if ( v15 != (int *)(uintptr_t)(&dword_20D6EC0) )
        break;
LABEL_23:
      v16 = *(uint32_t *)(v6 + 1096);
      if ( v16 > 0 )
      {
        v21 = **(uint32_t **)(v6 + 1104);
        if ( v21 != 0 )
        {
          obj = **(uint32_t ***)(v6 + 1104);
          G4_VCALL<void>(v21, 708);
          G4_VCALL<void>(v6, 320, v59, v63);
          if ( G4_VCALL<int>(obj, 456) == 0
            || ((v22 = obj[468]) & 0x100) == 0
            || v22 < 0
            || (obj[469] & 1) != 0
            || (v16 = obj[469] & 4) != 0 )
          {
            G4_VCALL<void>(obj, 664, v6, 1);
            if ( sub_8F0680(v23) == v6 )
            {
LABEL_28:
              if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
              {
                sub_9C9CC0(&unk_20D4E60);
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
                __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
              }
              v24 = nullptr;
              if ( byte_20D4E64 == 0 )
                v24 = &unk_20D4E60;
              sub_9CE370(v24, 0);
              goto LABEL_16;
            }
            goto LABEL_15;
          }
        }
      }
LABEL_14:
      if ( sub_8F0680(v16) == v6 )
        goto LABEL_28;
LABEL_15:
      v18 = sub_8F0680(v17);
      if ( G4_VCALL<int>(v18, 456) == v6 )
        goto LABEL_28;
LABEL_16:
      v56 = (g4_cxa_guard_t *)*v56;
      if ( v56 == (g4_cxa_guard_t *)v58 )
        goto LABEL_17;
    }
    while ( 1 )
    {
      v15 = (int *)v15[1];
      if ( v15 == nullptr )
        break;
      if ( v15 == (int *)(uintptr_t)(&dword_20D6EC0) )
        goto LABEL_23;
    }
LABEL_13:
    G4_VCALL<void>(v6, 320, v59, v63);
    goto LABEL_14;
  }
LABEL_17:
  if ( byte_20D5B50 == 0 )
  {
LABEL_77:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
  }
LABEL_18:
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v52, v51);
  v19 = (void **)v58[0];
  if ( v58[0] != v58 )
  {
    while ( 1 )
    {
      v20 = (void **)*v19;
      opDelete(v19);
      if ( v20 == v58 )
        break;
      v19 = v20;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C3C640_eac3c640  (binary VA: 0xc3c640)
// Original: sub_C3C640
// ----------------------------------------------------------------------------
void sub_C3C640_eac3c640(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4;
  void **v5;
  int v6;
  int v7;
  bool v8;
  void **v9;
  void **v10;
  int v11;
  uint32_t **v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef char _g4_t_v22;
  typedef void *_g4_t_v23[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v21)) > _g4_s7 ? (40u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (47u + sizeof(_g4_t_v22)) > _g4_s8 ? (47u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v23)) > _g4_s9 ? (56u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 47u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);

  v23[0] = v23;
  v23[1] = v23;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v23), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v14, v15, v16, v17, v18, v19, v20);
  v5 = (void **)v23[0];
  v22 = v4;
  while ( v5 != v23 )
  {
    while ( 1 )
    {
      G4_VCALL<void>(v5[2], 76);
      v6 = (int)(uintptr_t)(v5[2]);
      if ( v6 != 0 && *(uint32_t *)(*(uint32_t *)(v6 + 408) - 12) != 0 )
      {
        v7 = *(uint32_t *)(v6 + 404);
        if ( v7 != 0 )
          break;
LABEL_16:
        if ( *(uint32_t *)(*(uint32_t *)(v6 + 408) - 12) != 0 )
        {
          v11 = *(uint32_t *)(v6 + 404);
          if ( v11 != 0 && G4_VCALL<uint8_t>(v11, 36) != 0 )
          {
            v12 = (uint32_t **)v5[2];
            if ( (int)(uintptr_t)(v12[274]) > 0 )
            {
              v13 = *v12[276];
              v21 = (uint32_t *)v13;
              if ( v13 != 0 )
              {
                sub_9B9E50(v13, 0, 0, 0, 0, 0, 0, nullptr);
                sub_9B8920(v21, 0);
                sub_9B71D0(v21, nullptr, 1);
                if ( v22 != 0 )
                  goto LABEL_9;
              }
            }
          }
        }
      }
LABEL_3:
      v5 = (void **)*v5;
      if ( v5 == v23 )
        goto LABEL_10;
    }
    v8 = (G4_VCALL<int>(v7, 32) & 2) == 0;
    v6 = (int)(uintptr_t)(v5[2]);
    if ( v8 )
    {
      if ( v6 == 0 )
        goto LABEL_3;
      goto LABEL_16;
    }
    v21 = (uint32_t *)(v5[2]);
    sub_9B9E50(v6, 0, 0, 0, 0, 0, 0, nullptr);
    sub_9B8920(v21, 0);
    sub_9B71D0(v21, nullptr, 1);
    if ( v22 == 0 )
      goto LABEL_3;
LABEL_9:
    G4_VCALL<void>(v21, 120, 136, 1);
    v5 = (void **)*v5;
  }
LABEL_10:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v9 = (void **)v23[0];
  if ( v23[0] != v23 )
  {
    while ( 1 )
    {
      v10 = (void **)*v9;
      opDelete(v9);
      if ( v10 == v23 )
        break;
      v9 = v10;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C3C8E0_eac3c8e0  (binary VA: 0xc3c8e0)
// Original: sub_C3C8E0
// ----------------------------------------------------------------------------
void sub_C3C8E0_eac3c8e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  uint32_t *j;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *i;
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
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef grapher::ActorContext::Self *_g4_t_v34;
  typedef grapher::ActorContext::Self *_g4_t_v35;
  typedef uint8_t _g4_t_v36;
  typedef uint32_t _g4_t_v37[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v16)) > _g4_s5 ? (16u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v17)) > _g4_s6 ? (20u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v18)) > _g4_s7 ? (20u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v19)) > _g4_s8 ? (20u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v20)) > _g4_s9 ? (24u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v21)) > _g4_s10 ? (24u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v22)) > _g4_s11 ? (24u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v23)) > _g4_s12 ? (28u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v24)) > _g4_s13 ? (28u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v25)) > _g4_s14 ? (28u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v26)) > _g4_s15 ? (32u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v27)) > _g4_s16 ? (32u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v28)) > _g4_s17 ? (32u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v29)) > _g4_s18 ? (36u + sizeof(_g4_t_v29)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v30)) > _g4_s19 ? (36u + sizeof(_g4_t_v30)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v31)) > _g4_s20 ? (36u + sizeof(_g4_t_v31)) : _g4_s20,
    _g4_s22 = (39u + sizeof(_g4_t_v32)) > _g4_s21 ? (39u + sizeof(_g4_t_v32)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v33)) > _g4_s22 ? (40u + sizeof(_g4_t_v33)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v34)) > _g4_s23 ? (40u + sizeof(_g4_t_v34)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v35)) > _g4_s24 ? (44u + sizeof(_g4_t_v35)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v36)) > _g4_s25 ? (44u + sizeof(_g4_t_v36)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v37)) > _g4_s26 ? (48u + sizeof(_g4_t_v37)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 39u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);

  v37[0] = (uint32_t)(uintptr_t)(v37);
  v37[1] = (uint32_t)(uintptr_t)(v37);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v37), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v34 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v11, v14, v17, v20, v23, v26, v29, v33, v35);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v36 = sub_837730((int)(uintptr_t)(a1), v4, a3, v12, v15, v18, v21, v24, v27, v30);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v32 = sub_837730((int)(uintptr_t)(a1), v5, a3, v13, v16, v19, v22, v25, v28, v31);
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      for ( i = (uint32_t *)v37[0]; i != v37; i = (uint32_t *)*i )
      {
        if ( i[2] != 0 )
          sub_C1A860(i[2]);
      }
    }
  }
  else
  {
    for ( j = (uint32_t *)v37[0]; j != v37; j = (uint32_t *)*j )
    {
      v7 = j[2];
      if ( v7 != 0 )
        G4_VCALL<void>(v7, 288, v34, v32, v36);
    }
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  v8 = (uint32_t *)v37[0];
  if ( (uint32_t *)v37[0] != v37 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v8;
      opDelete(v8);
      if ( v9 == v37 )
        break;
      v8 = v9;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C3CA70  (binary VA: 0xc3ca70)
// Original: sub_C3CA70
// ----------------------------------------------------------------------------
void sub_C3CA70(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int **v14;
  uint32_t *v15;
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
  typedef grapher::ActorContext::Self *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef grapher::ActorContext::Self *_g4_t_v52;
  typedef grapher::ActorContext::Self *_g4_t_v53;
  typedef uint8_t _g4_t_v54;
  typedef char _g4_t_v55;
  typedef grapher::ActorBase::Self *_g4_t_v56;
  typedef void (*_g4_t_v57)(int, int, uint32_t);
  typedef void (*_g4_t_v58)(int, int, uint32_t);
  typedef int _g4_t_v59;
  typedef uint32_t _g4_t_v60[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v21)) > _g4_s4 ? (16u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v23)) > _g4_s6 ? (16u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v24)) > _g4_s7 ? (16u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v25)) > _g4_s8 ? (20u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v26)) > _g4_s9 ? (20u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v27)) > _g4_s10 ? (20u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v28)) > _g4_s11 ? (20u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v29)) > _g4_s12 ? (24u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v30)) > _g4_s13 ? (24u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v31)) > _g4_s14 ? (24u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v32)) > _g4_s15 ? (24u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v33)) > _g4_s16 ? (28u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v34)) > _g4_s17 ? (28u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v35)) > _g4_s18 ? (28u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v36)) > _g4_s19 ? (28u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v37)) > _g4_s20 ? (32u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v38)) > _g4_s21 ? (32u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v39)) > _g4_s22 ? (32u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v40)) > _g4_s23 ? (32u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v41)) > _g4_s24 ? (36u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v42)) > _g4_s25 ? (36u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (36u + sizeof(_g4_t_v43)) > _g4_s26 ? (36u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v44)) > _g4_s27 ? (36u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v45)) > _g4_s28 ? (40u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v46)) > _g4_s29 ? (40u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v47)) > _g4_s30 ? (40u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v48)) > _g4_s31 ? (40u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v49)) > _g4_s32 ? (40u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (40u + sizeof(_g4_t_v50)) > _g4_s33 ? (40u + sizeof(_g4_t_v50)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v51)) > _g4_s34 ? (40u + sizeof(_g4_t_v51)) : _g4_s34,
    _g4_s36 = (44u + sizeof(_g4_t_v52)) > _g4_s35 ? (44u + sizeof(_g4_t_v52)) : _g4_s35,
    _g4_s37 = (44u + sizeof(_g4_t_v53)) > _g4_s36 ? (44u + sizeof(_g4_t_v53)) : _g4_s36,
    _g4_s38 = (47u + sizeof(_g4_t_v54)) > _g4_s37 ? (47u + sizeof(_g4_t_v54)) : _g4_s37,
    _g4_s39 = (48u + sizeof(_g4_t_v55)) > _g4_s38 ? (48u + sizeof(_g4_t_v55)) : _g4_s38,
    _g4_s40 = (52u + sizeof(_g4_t_v56)) > _g4_s39 ? (52u + sizeof(_g4_t_v56)) : _g4_s39,
    _g4_s41 = (56u + sizeof(_g4_t_v57)) > _g4_s40 ? (56u + sizeof(_g4_t_v57)) : _g4_s40,
    _g4_s42 = (56u + sizeof(_g4_t_v58)) > _g4_s41 ? (56u + sizeof(_g4_t_v58)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v59)) > _g4_s42 ? (60u + sizeof(_g4_t_v59)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v60)) > _g4_s43 ? (64u + sizeof(_g4_t_v60)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 47u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);

  v3 = a1;
  v60[0] = (uint32_t)(uintptr_t)(v60);
  v60[1] = (uint32_t)(uintptr_t)(v60);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v60), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v59 = (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, a3, v17, v21, v25, v29, v33, v37, v41, v45, v52));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v47 = sub_837200((int)(uintptr_t)(a1), v5, a3, v18, v22, v26, v30, v34, v38, v42, v46, v53);
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  v55 = sub_837730((int)(uintptr_t)(a1), v6, a3, v19, v23, v27, v31, v35, v39, v43);
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v54 = sub_837730((int)(uintptr_t)(a1), v7, a3, v20, v24, v28, v32, v36, v40, v44);
  if ( v47 == (grapher::ActorContext::Self *)((char *)&dword_0 + 1) )
  {
    if ( (uint32_t *)v60[0] == v60 )
      goto LABEL_4;
    v56 = a1;
    v14 = (int **)v60[0];
    if ( v55 != 0 )
    {
      do
      {
        (*(void (**)(int *, int, uint32_t))(*v14[2] + 276))(v14[2], v59, v54);
        v14 = (int **)*v14;
      }
      while ( v14 != (int **)(uintptr_t)(v60) );
    }
    else
    {
      do
      {
        v50 = v14[2];
        if ( G4_VCALL<uint8_t>(v50, 208) == 0 )
          G4_VCALL<void>(v50, 276, v59, v54);
        v14 = (int **)*v14;
      }
      while ( v14 != (int **)(uintptr_t)(v60) );
    }
    goto LABEL_25;
  }
  if ( v47 == (grapher::ActorContext::Self *)((char *)&dword_0 + 2) )
  {
    if ( (uint32_t *)v60[0] == v60 )
      goto LABEL_4;
    if ( v55 != 0 )
    {
      v11 = (uint32_t *)v60[0];
      do
      {
        v12 = v11[2];
        v49 = v12;
        v57 = *(void (**)(int, int, uint32_t))(*(uint32_t *)v12 + 276);
        v13 = sub_BDEDA0(v12 + 280);
        v57(v49, (int)(float)((float)(v59 * v13) * 0.01f), v54);
        v11 = (uint32_t *)*v11;
      }
      while ( v11 != v60 );
      v3 = a1;
      goto LABEL_4;
    }
    v56 = a1;
    v15 = (uint32_t *)v60[0];
    do
    {
      v51 = v15[2];
      if ( G4_VCALL<uint8_t>(v51, 208) == 0 )
      {
        v58 = *(void (**)(int, int, uint32_t))(*(uint32_t *)v51 + 276);
        v16 = sub_BDEDA0(v51 + 280);
        v58(v51, (int)(float)((float)(v59 * v16) * 0.01f), v54);
      }
      v15 = (uint32_t *)*v15;
    }
    while ( v15 != v60 );
LABEL_25:
    v3 = v56;
    goto LABEL_4;
  }
  if ( v47 == nullptr && (uint32_t *)v60[0] != v60 )
  {
    v10 = (uint32_t *)v60[0];
    if ( v55 != 0 )
    {
      do
      {
        sub_BDEE30((uint32_t *)(v10[2] + 288), v59);
        v10 = (uint32_t *)*v10;
      }
      while ( v10 != v60 );
    }
    else
    {
      do
      {
        v48 = (uint32_t *)v10[2];
        if ( G4_VCALL<uint8_t>(v48, 208) == 0 )
          sub_BDEE30(v48 + 72, v59);
        v10 = (uint32_t *)*v10;
      }
      while ( v10 != v60 );
    }
    v3 = a1;
  }
LABEL_4:
  grapher::ActorBase::FireEvent(v3, 1, a3);
  v8 = (uint32_t *)v60[0];
  if ( (uint32_t *)v60[0] != v60 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v8;
      opDelete(v8);
      if ( v9 == v60 )
        break;
      v8 = v9;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C3CDC0_eac3cdc0  (binary VA: 0xc3cdc0)
// Original: sub_C3CDC0
// ----------------------------------------------------------------------------
int sub_C3CDC0_eac3cdc0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int *v4;
  uint32_t *v5;
  int *v6;
  grapher::ActorVariable::Self *v8;
  int *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef g4_cxa_guard_t *_g4_t_v17;
  typedef g4_cxa_guard_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef void *_g4_t_s2[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v18)) > _g4_s8 ? (28u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v19)) > _g4_s9 ? (32u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v20)) > _g4_s10 ? (32u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v21)) > _g4_s11 ? (36u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v22)) > _g4_s12 ? (36u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v23)) > _g4_s13 ? (40u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_s2)) > _g4_s14 ? (44u + sizeof(_g4_t_s2)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 44u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(s2, (int)(uintptr_t)(a1), Variable, a3, v11, v13, (int)(uintptr_t)(v15), (int)(uintptr_t)(v17), v19, v21, v23);
  if ( byte_20D3C30 == 0 )
  {
    v18 = (g4_cxa_guard_t *)&byte_20D3C30;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      v16 = (int *)(&dword_20D3C40);
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v5 = *(uint32_t **)sub_6313F0((int)(uintptr_t)(v4));
  if ( *(v5 - 3) == *((uint32_t *)s2[0] - 3) && memcmp(v5, s2[0], *(v5 - 3)) == 0 )
  {
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v8, nullptr, v10, v12, v14, (int)(uintptr_t)(v16), (int)(uintptr_t)(v18), v20, v22) != 0 )
    {
      if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
      {
        sub_9BA6C0((int)(uintptr_t)(&dword_20D5DA8));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
        __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D5DAC == 0 )
        v9 = (int *)(&dword_20D5DA8);
      sub_99C000((int)(uintptr_t)(v9), 10);
    }
    grapher::ActorBase::FireEvent(a1, 1, a3);
  }
  else
  {
    grapher::ActorBase::FireEvent(a1, a2, a3);
  }
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D3C44 == 0 )
    v6 = (int *)(&dword_20D3C40);
  sub_6313C0((int)(uintptr_t)(v6), (int)(uintptr_t)(s2));
  return ((g4_std::string::Destroy(s2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3D040_eac3d040  (binary VA: 0xc3d040)
// Original: sub_C3D040
// ----------------------------------------------------------------------------
int sub_C3D040_eac3d040(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  g4_cxa_guard_t *v6;
  int *v7;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorContext::Self *v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  int v22;
  int v23;
  char v24;
  grapher::ActorContext::Self *v25;
  int v26;
  int v27;
  g4_cxa_guard_t *v28;
  g4_cxa_guard_t *v29;
  g4_cxa_guard_t *v30;
  g4_cxa_guard_t *v31;
  g4_cxa_guard_t *v32;
  g4_cxa_guard_t *v33;
  g4_cxa_guard_t *v34;
  g4_cxa_guard_t *v35;
  g4_cxa_guard_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  grapher::ActorContext::Self *v48;
  grapher::ActorContext::Self *v49;

  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 4);
      v25 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v14, (int)(uintptr_t)(v18), v22, (int)(uintptr_t)(v28), (int)(uintptr_t)(v33), v37, v41, v45, a1);
      v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
      v31 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a2), v10, a4, v16, (int)(uintptr_t)(v20), (int)(uintptr_t)(v25), (int)(uintptr_t)(v30), (int)(uintptr_t)(v35), v39, v43, v46, v48);
      v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 3);
      v12 = sub_837200((int)(uintptr_t)(a2), v11, a4, v17, (int)(uintptr_t)(v21), v26, (int)(uintptr_t)(v31), (int)(uintptr_t)(v36), v40, v44, v47, v49);
      if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
      {
        sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
        __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
      }
      v13 = nullptr;
      if ( byte_20D3C44 == 0 )
        v13 = (int *)(&dword_20D3C40);
      sub_631340(v13, (int)(uintptr_t)(v12), (int)(uintptr_t)(v32), v27);
    }
  }
  else
  {
    v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 6);
    v23 = (uint8_t)sub_837730((int)(uintptr_t)(a2), v4, a4, v14, (int)(uintptr_t)(v18), v22, (int)(uintptr_t)(v28), (int)(uintptr_t)(v33), v37, v41);
    v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 5);
    v6 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a2), v5, a4, v15, (int)(uintptr_t)(v19), v23, (int)(uintptr_t)(v29), (int)(uintptr_t)(v34), v38, v42, v45, a1);
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v7 = nullptr;
    if ( byte_20D3C44 == 0 )
      v7 = (int *)(&dword_20D3C40);
    sub_63C6B0((int)(uintptr_t)(v7), 1, v6, v24);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 2, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C3D290_eac3d290  (binary VA: 0xc3d290)
// Original: sub_C3D290
// ----------------------------------------------------------------------------
int sub_C3D290_eac3d290(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  void *v11;
  int *v12;
  int v14;
  typedef unsigned int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef const char *_g4_t_v18;
  typedef const char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef gameswf::ASValue::Self *_g4_t_v28;
  typedef gameswf::ASValue::Self *_g4_t_v29;
  typedef int *_g4_t_v30;
  typedef gameswf::ASValue::Self *_g4_t_v31;
  typedef void *_g4_t_obj;
  typedef void *_g4_t_obja;
  typedef uint32_t *_g4_t_objb;
  typedef g4_cxa_guard_t *_g4_t_v35;
  typedef char _g4_t_v36;
  typedef g4_cxa_guard_t *_g4_t_v37;
  typedef char *_g4_t_s;
  typedef uint16_t _g4_t_v39[6];
  typedef unsigned int _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef void *_g4_t_v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef int16_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef void *_g4_t_v51;
  typedef gameswf::Self *_g4_t_v52;
  typedef int16_t _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef uint8_t _g4_t_v56[36];
  typedef uint8_t _g4_t_v57[44];
  typedef grapher::ActorBase::Self **_g4_t_v58;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v20)) > _g4_s5 ? (16u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v21)) > _g4_s6 ? (16u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v22)) > _g4_s7 ? (20u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v23)) > _g4_s8 ? (20u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v24)) > _g4_s9 ? (24u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v25)) > _g4_s10 ? (24u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v26)) > _g4_s11 ? (28u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v27)) > _g4_s12 ? (28u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v28)) > _g4_s13 ? (32u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v29)) > _g4_s14 ? (32u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v30)) > _g4_s15 ? (32u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v31)) > _g4_s16 ? (32u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_obj)) > _g4_s17 ? (36u + sizeof(_g4_t_obj)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_obja)) > _g4_s18 ? (36u + sizeof(_g4_t_obja)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_objb)) > _g4_s19 ? (36u + sizeof(_g4_t_objb)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v35)) > _g4_s20 ? (40u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v36)) > _g4_s21 ? (40u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v37)) > _g4_s22 ? (44u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_s)) > _g4_s23 ? (52u + sizeof(_g4_t_s)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v39)) > _g4_s24 ? (56u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v40)) > _g4_s25 ? (68u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v41)) > _g4_s26 ? (72u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v42)) > _g4_s27 ? (80u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (81u + sizeof(_g4_t_v43)) > _g4_s28 ? (81u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v44)) > _g4_s29 ? (88u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v45)) > _g4_s30 ? (92u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v46)) > _g4_s31 ? (96u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (98u + sizeof(_g4_t_v47)) > _g4_s32 ? (98u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (99u + sizeof(_g4_t_v48)) > _g4_s33 ? (99u + sizeof(_g4_t_v48)) : _g4_s33,
    _g4_s35 = (112u + sizeof(_g4_t_v49)) > _g4_s34 ? (112u + sizeof(_g4_t_v49)) : _g4_s34,
    _g4_s36 = (113u + sizeof(_g4_t_v50)) > _g4_s35 ? (113u + sizeof(_g4_t_v50)) : _g4_s35,
    _g4_s37 = (120u + sizeof(_g4_t_v51)) > _g4_s36 ? (120u + sizeof(_g4_t_v51)) : _g4_s36,
    _g4_s38 = (124u + sizeof(_g4_t_v52)) > _g4_s37 ? (124u + sizeof(_g4_t_v52)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v53)) > _g4_s38 ? (128u + sizeof(_g4_t_v53)) : _g4_s38,
    _g4_s40 = (130u + sizeof(_g4_t_v54)) > _g4_s39 ? (130u + sizeof(_g4_t_v54)) : _g4_s39,
    _g4_s41 = (131u + sizeof(_g4_t_v55)) > _g4_s40 ? (131u + sizeof(_g4_t_v55)) : _g4_s40,
    _g4_s42 = (136u + sizeof(_g4_t_v56)) > _g4_s41 ? (136u + sizeof(_g4_t_v56)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v57)) > _g4_s42 ? (172u + sizeof(_g4_t_v57)) : _g4_s42,
    _g4_s44 = (216u + sizeof(_g4_t_v58)) > _g4_s43 ? (216u + sizeof(_g4_t_v58)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 36u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 36u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 81u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 98u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 99u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 113u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 120u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 130u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 131u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 136u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 172u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 216u);

  v58 = &a1;
  v3 = a1;
  v4 = a3;
  if ( a2 == 0 )
  {
    v5 = sub_732CE0();
    v37 = (g4_cxa_guard_t *)sub_767E40(v5, 4u, 0, 0);
    if ( v37 != nullptr )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
      sub_837C70(&s, (int)(uintptr_t)(v3), Variable, v4, v20, v22, v24, v26, (int)(uintptr_t)(v28), (int)(uintptr_t)(obj), (int)(uintptr_t)(v35));
      v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
      v36 = sub_837730((int)(uintptr_t)(v3), v7, v4, v17, v21, v23, v25, v27, (int)(uintptr_t)(v29), (int)(uintptr_t)(obja));
      v39[0] = 0;
      gameswf::ASValue::setString((gameswf::ASValue::Self *)v39, s);
      v42 = 1;
      v43 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v42, 9);
      v8 = (gameswf::Self *)&v43;
      if ( v42 == -1 )
        v8 = v45;
      gameswf::Strcpy_s(v8, &byte_9[1], (gameswf::Self *)"videoName", v18);
      v46 = -1;
      v47 = 127;
      v48 |= 1u;
      gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v56);
      gameswf::CharacterHandle::setMember(
        (gameswf::CharacterHandle::Self *)v56,
        (const gameswf::String::Self *)&v42,
        (const gameswf::ASValue::Self *)v39);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v56);
      if ( v42 == -1 && (v48 & 1) != 0 )
        gameswf::free_internal(v45, v44, v15);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v39);
      v41 = v36;
      LOWORD(v40) = 1;
      v49 = 1;
      v50 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v49, 11);
      v9 = (gameswf::Self *)&v50;
      if ( v49 == -1 )
        v9 = v52;
      gameswf::Strcpy_s(v9, &byte_9[3], (gameswf::Self *)"isSkippable", v19);
      v53 = -1;
      v54 = 127;
      v55 |= 1u;
      gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v57);
      gameswf::CharacterHandle::setMember(
        (gameswf::CharacterHandle::Self *)v57,
        (const gameswf::String::Self *)&v49,
        (const gameswf::ASValue::Self *)&v40);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v57);
      if ( v49 == -1 && (v55 & 1) != 0 )
        gameswf::free_internal(v52, v51, v16);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v40);
      v10 = (gameswf::Self *)off_20BB7B8[0];
      if ( byte_20D2B90 == 0 )
      {
        v31 = (gameswf::ASValue::Self *)off_20BB7B8[0];
        v14 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90);
        v10 = (gameswf::Self *)(v31);
        if ( v14 != 0 )
        {
          sub_793360((int)(uintptr_t)(&unk_20D2B98));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
          __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
          v10 = (gameswf::Self *)(v31);
        }
      }
      v11 = nullptr;
      if ( byte_20D2B9C == 0 )
        v11 = &unk_20D2B98;
      sub_7933D0((int)(uintptr_t)(v11), v10, (void (*)(const gameswf::ASNativeEventState::Self *))sub_794990, (int)(uintptr_t)(v37), (int)(uintptr_t)("stage"), 0);
      if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
      {
        sub_51DC30((int)(uintptr_t)(&unk_20D5500));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
        __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
      }
      v12 = nullptr;
      if ( byte_20D5514 == 0 )
        v12 = (int *)&unk_20D5500;
      v30 = v12;
      objb = (uint32_t *)sub_4EBBF0(4u, 1);
      sub_637E00(objb);
      sub_51DCA0(v30, (int)(uintptr_t)(objb));
      g4_std::string::Destroy(&s);
    }
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v3, v4);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 2, v4));
}

// ----------------------------------------------------------------------------
// Function: sub_C3D810  (binary VA: 0xc3d810)
// Original: sub_C3D810
// ----------------------------------------------------------------------------
int sub_C3D810(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  char *v4;
  grapher::ActorVariable::Self *Variable;
  char *v6;
  char *v7;
  int v8;
  int *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  int *v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef void *_g4_t_obj;
  typedef int *_g4_t_obja;
  typedef g4_cxa_guard_t *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef grapher::ActorContext::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34[4];
  typedef uint32_t _g4_t_s[70];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v21)) > _g4_s4 ? (12u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_obj)) > _g4_s6 ? (20u + sizeof(_g4_t_obj)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_obja)) > _g4_s7 ? (20u + sizeof(_g4_t_obja)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v25)) > _g4_s8 ? (24u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v26)) > _g4_s9 ? (24u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v27)) > _g4_s10 ? (28u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v28)) > _g4_s11 ? (28u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v29)) > _g4_s12 ? (32u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v30)) > _g4_s13 ? (32u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v31)) > _g4_s14 ? (36u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v32)) > _g4_s15 ? (40u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v33)) > _g4_s16 ? (52u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v34)) > _g4_s17 ? (56u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_s)) > _g4_s18 ? (72u + sizeof(_g4_t_s)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 20u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 72u);

  s[66] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v31 = a3;
  v27 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = (char *)v3 + 52;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
  sub_837C70(&v33, (int)(uintptr_t)(v3), Variable, v31, v18, v20, (int)(uintptr_t)(v22), (int)(uintptr_t)(obj), (int)(uintptr_t)(v25), v27, v29);
  v34[0] = (char *)v3 + 52;
  v30 = (int)(uintptr_t)(v31) + 8;
  v6 = *((char **)v31 + 3);
  if ( v6 == nullptr )
    goto LABEL_41;
  v7 = (char *)v31 + 8;
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= *((uint32_t *)v6 + 4) )
    {
      v7 = v6;
      v6 = *((char **)v6 + 2);
      if ( v6 == nullptr )
        goto LABEL_6;
    }
    v6 = *((char **)v6 + 3);
  }
  while ( v6 != nullptr );
LABEL_6:
  if ( (char *)v30 == v7 || (unsigned int)(uintptr_t)(v4) < *((uint32_t *)v7 + 4) )
  {
LABEL_41:
    if ( byte_20D6700 == 0 )
    {
      v26 = (char *)(&byte_20D6700);
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v13 = (uint32_t *)dword_20D672C;
    v14 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v4) <= v13[4] )
        {
          v14 = v13;
          v13 = (uint32_t *)v13[2];
        }
        else
        {
          v13 = (uint32_t *)v13[3];
        }
      }
      while ( v13 != nullptr );
      if ( v14 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v4) < v14[4] )
        v14 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)v3 + 13) = *(uint32_t *)(v14[5] + 4);
    v16 = (int *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v16 = (int)(uintptr_t)(&off_205CD10);
    v16[1] = *((uint32_t *)v3 + 13);
    obja = v16;
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)v31 + 4), v34) = (uint32_t)(uintptr_t)(v16);
  }
  else
  {
    *((uint32_t *)v3 + 13) = *(uint32_t *)(*((uint32_t *)v7 + 5) + 4);
  }
  if ( v28 != 0 )
  {
    v8 = *((uint32_t *)v3 + 13);
    *((uint32_t *)v3 + 13) = v8 + 1;
    sprintf((char *)s, "%s%02d", v33, v8);
    if ( byte_20D4A50 == 0 )
    {
      v26 = (char *)(&byte_20D4A50);
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        obja = (int *)(&dword_20D4A60);
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
    }
    v9 = nullptr;
    if ( byte_20D4A64 == 0 )
      v9 = (int *)(&dword_20D4A60);
    sub_5D8BA0(v9, (char *)s, v28, v17, v19, v21, (int)(uintptr_t)(s), (int)(uintptr_t)(obja), (int)(uintptr_t)(v26), v28, v30, (int)(uintptr_t)(v31), v32);
  }
  v34[0] = (char *)v3 + 52;
  v10 = *((uint32_t **)v31 + 3);
  if ( v10 == nullptr )
    goto LABEL_30;
  v11 = (uint32_t *)v30;
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v10[4] )
    {
      v11 = v10;
      v10 = (uint32_t *)v10[2];
      if ( v10 == nullptr )
        goto LABEL_19;
    }
    v10 = (uint32_t *)v10[3];
  }
  while ( v10 != nullptr );
LABEL_19:
  if ( (uint32_t *)v30 == v11 || (unsigned int)(uintptr_t)(v4) < v11[4] )
  {
LABEL_30:
    v15 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v15 = (uint32_t)(uintptr_t)(&off_205CD10);
    v15[1] = *((uint32_t *)v3 + 13);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)v31 + 4), v34) = (uint32_t)(uintptr_t)(v15);
  }
  else
  {
    *(uint32_t *)(v11[5] + 4) = *((uint32_t *)v3 + 13);
  }
  grapher::ActorBase::FireEvent(v3, 1, v31);
  return ((g4_std::string::Destroy(&v33)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3DBE0  (binary VA: 0xc3dbe0)
// Original: sub_C3DBE0
// ----------------------------------------------------------------------------
void sub_C3DBE0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  char *v5;
  char *v6;
  char *v7;
  grapher::ActorBase::Self *v8;
  int v9;
  void **v10;
  int *v11;
  void **v12;
  uint32_t *v13;
  uint32_t *v14;
  void **v15;
  uint32_t *v16;
  void *v17;
  int v18;
  int v19;
  void **v20;
  void **v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  void *v26;
  volatile int32_t *v27;
  int v28;
  glf::Self *v29;
  int *v30;
  char *v31;
  int v32;
  char *v33;
  bool v34;
  uint32_t **v35;
  int *v36;
  int *v37;
  char *v38;
  char *v39;
  void **v40;
  void **v41;
  void **v42;
  void **v43;
  char *v44;
  unsigned int v45;
  int v46;
  int *v47;
  size_t v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  unsigned int v54;
  g4_cxa_guard_t *v55;
  g4_cxa_guard_t *v56;
  g4_cxa_guard_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  unsigned int v61;
  uint32_t *v62;
  typedef void *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef void ***_g4_t_v66;
  typedef void **_g4_t_v67;
  typedef void **_g4_t_v68;
  typedef void **_g4_t_v69;
  typedef glf::Self *_g4_t_v70;
  typedef volatile int32_t *_g4_t_obj;
  typedef unsigned int _g4_t_obja;
  typedef char *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef char *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef grapher::ActorContext::Self *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef g4_cxa_guard_t *_g4_t_v80;
  typedef grapher::ActorBase::Self *_g4_t_v81;
  typedef char *_g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef g4_cxa_guard_t *_g4_t_v84;
  typedef void **_g4_t_v85;
  typedef g4_cxa_guard_t *_g4_t_v86;
  typedef g4_cxa_guard_t *_g4_t_v87;
  typedef g4_cxa_guard_t *_g4_t_v88;
  typedef g4_cxa_guard_t *_g4_t_v89;
  typedef g4_cxa_guard_t *_g4_t_v90;
  typedef size_t _g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint32_t _g4_t_v93[2];
  typedef glf::Self *_g4_t_v94;
  typedef uint32_t *_g4_t_v95;
  typedef void *_g4_t_v96[4];
  typedef void *_g4_t_v97[4];
  typedef void *_g4_t_v98[4];
  typedef void *_g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef uint32_t *_g4_t_v101;
  typedef g4_cxa_guard_t _g4_t_v102;
  typedef g4_cxa_guard_t _g4_t_v103;
  typedef g4_cxa_guard_t _g4_t_v104;
  typedef uint8_t _g4_t_v105[12];
  typedef char _g4_t_v106[12];
  typedef uint32_t _g4_t_v107[14];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v63)) > _g4_s0 ? (12u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v64)) > _g4_s1 ? (16u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v65)) > _g4_s2 ? (48u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v66)) > _g4_s3 ? (52u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v67)) > _g4_s4 ? (52u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v68)) > _g4_s5 ? (52u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v69)) > _g4_s6 ? (52u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v70)) > _g4_s7 ? (52u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_obj)) > _g4_s8 ? (56u + sizeof(_g4_t_obj)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_obja)) > _g4_s9 ? (56u + sizeof(_g4_t_obja)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v73)) > _g4_s10 ? (60u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v74)) > _g4_s11 ? (64u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v75)) > _g4_s12 ? (68u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v76)) > _g4_s13 ? (72u + sizeof(_g4_t_v76)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v77)) > _g4_s14 ? (76u + sizeof(_g4_t_v77)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v78)) > _g4_s15 ? (84u + sizeof(_g4_t_v78)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v79)) > _g4_s16 ? (88u + sizeof(_g4_t_v79)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v80)) > _g4_s17 ? (92u + sizeof(_g4_t_v80)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v81)) > _g4_s18 ? (96u + sizeof(_g4_t_v81)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v82)) > _g4_s19 ? (108u + sizeof(_g4_t_v82)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v83)) > _g4_s20 ? (112u + sizeof(_g4_t_v83)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v84)) > _g4_s21 ? (116u + sizeof(_g4_t_v84)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v85)) > _g4_s22 ? (116u + sizeof(_g4_t_v85)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v86)) > _g4_s23 ? (120u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v87)) > _g4_s24 ? (120u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v88)) > _g4_s25 ? (120u + sizeof(_g4_t_v88)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v89)) > _g4_s26 ? (120u + sizeof(_g4_t_v89)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v90)) > _g4_s27 ? (124u + sizeof(_g4_t_v90)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v91)) > _g4_s28 ? (128u + sizeof(_g4_t_v91)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v92)) > _g4_s29 ? (128u + sizeof(_g4_t_v92)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v93)) > _g4_s30 ? (136u + sizeof(_g4_t_v93)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v94)) > _g4_s31 ? (144u + sizeof(_g4_t_v94)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v95)) > _g4_s32 ? (148u + sizeof(_g4_t_v95)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v96)) > _g4_s33 ? (152u + sizeof(_g4_t_v96)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v97)) > _g4_s34 ? (168u + sizeof(_g4_t_v97)) : _g4_s34,
    _g4_s36 = (184u + sizeof(_g4_t_v98)) > _g4_s35 ? (184u + sizeof(_g4_t_v98)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v99)) > _g4_s36 ? (200u + sizeof(_g4_t_v99)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v100)) > _g4_s37 ? (204u + sizeof(_g4_t_v100)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v101)) > _g4_s38 ? (208u + sizeof(_g4_t_v101)) : _g4_s38,
    _g4_s40 = (212u + sizeof(_g4_t_v102)) > _g4_s39 ? (212u + sizeof(_g4_t_v102)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v103)) > _g4_s40 ? (216u + sizeof(_g4_t_v103)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v104)) > _g4_s41 ? (220u + sizeof(_g4_t_v104)) : _g4_s41,
    _g4_s43 = (224u + sizeof(_g4_t_v105)) > _g4_s42 ? (224u + sizeof(_g4_t_v105)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v106)) > _g4_s43 ? (236u + sizeof(_g4_t_v106)) : _g4_s43,
    _g4_s45 = (248u + sizeof(_g4_t_v107)) > _g4_s44 ? (248u + sizeof(_g4_t_v107)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 56u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 68u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 72u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 84u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 108u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 112u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 116u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 120u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 120u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 120u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 120u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 124u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 128u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 128u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 136u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 144u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 148u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 152u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 168u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 184u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 200u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 204u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 208u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 212u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 216u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 220u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 224u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 236u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 248u);

  v107[10] = (uint32_t)(uintptr_t)(&a1);
  v81 = a1;
  v77 = a3;
  v97[0] = v97;
  v97[1] = v97;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v97), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v98[0] = v98;
  v98[1] = v98;
  sub_8560A0(v81, 4, (int)(uintptr_t)(v98), (int)(uintptr_t)(v77), 0x7FFFFFFF);
  grapher::ActorBase::GetVariable(v81, 3);
  sub_837C70(&v94);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v81, 1);
  v76 = (int)(uintptr_t)(sub_837200(v81, Variable, v77));
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v81, 2);
  v79 = (int)(uintptr_t)(sub_837200(v81, v4, v77));
  v5 = (char *)v77 + 8;
  v75 = (char *)v81 + 52;
  v96[0] = (char *)v81 + 52;
  v73 = (char *)v77 + 8;
  v6 = *((char **)v77 + 3);
  if ( v6 == nullptr )
    goto LABEL_165;
  v7 = (char *)v81 + 52;
  do
  {
    while ( (unsigned int)(uintptr_t)(v81) + 52 <= *((uint32_t *)v6 + 4) )
    {
      v5 = v6;
      v6 = *((char **)v6 + 2);
      if ( v6 == nullptr )
        goto LABEL_6;
    }
    v6 = *((char **)v6 + 3);
  }
  while ( v6 != nullptr );
LABEL_6:
  if ( v73 == v5 || (unsigned int)(uintptr_t)(v75) < *((uint32_t *)v5 + 4) )
  {
LABEL_165:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v58 = (uint32_t *)dword_20D672C;
    v59 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v75) <= v58[4] )
        {
          v59 = v58;
          v58 = (uint32_t *)v58[2];
        }
        else
        {
          v58 = (uint32_t *)v58[3];
        }
      }
      while ( v58 != nullptr );
      if ( v59 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v75) < v59[4] )
        v59 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)v81 + 13) = *(uint32_t *)(v59[5] + 4);
    v62 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v62 = (uint32_t)(uintptr_t)(&off_205CD10);
    v62[1] = *((uint32_t *)v81 + 13);
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v77 + 4),
                 v96) = (uint32_t)(uintptr_t)(v62);
    v8 = v81;
  }
  else
  {
    v8 = v81;
    *((uint32_t *)v81 + 13) = *(uint32_t *)(*((uint32_t *)v5 + 5) + 4);
  }
  v9 = dword_20DEA40;
  v10 = (void **)v97[0];
  *((uint32_t *)v8 + 13) = dword_20DEA40;
  dword_20DEA40 = v9 + 1;
  v99 = nullptr;
  v100 = nullptr;
  v101 = nullptr;
  v80 = nullptr;
  if ( v10 != v97 )
  {
    v86 = nullptr;
    v84 = nullptr;
    do
    {
      v67 = v10;
      (*(void (**)(g4_cxa_guard_t *))(*(uint32_t *)v10[2] + 52))(&v102);
      v12 = v67;
      if ( v86 == v84 )
      {
        v53 = v84 - v80;
        v92 = 3;
        v54 = -1431655765 * v53;
        if ( -1431655765 * v53 != 0 )
        {
          v61 = 1431655766 * v53;
          if ( v54 > 2 * v54 || v61 > 0x15555555 )
            v92 = -1;
          else
            v92 = 6 * v54;
        }
        obja = v54;
        v90 = (g4_cxa_guard_t *)opNew(v92 * 4);
        v12 = v67;
        v55 = &v90[3 * obja];
        if ( v55 != nullptr )
        {
          *v55 = v102;
          v55[1] = v103;
          v55[2] = v104;
        }
        v56 = v80;
        if ( v84 == v80 )
        {
          v84 = v90 + 3;
        }
        else
        {
          v57 = v90;
          do
          {
            if ( v57 != nullptr )
            {
              *v57 = *v56;
              v57[1] = v56[1];
              v57[2] = v56[2];
            }
            v56 += 3;
            v57 += 3;
          }
          while ( v56 != v84 );
          v84 = &v90[((unsigned int)((char *)v84 - (char *)(v80 + 3)) >> 2) + 6];
        }
        if ( v80 != nullptr )
        {
          opDelete(v80);
          v12 = v67;
        }
        v80 = v90;
        v86 = &v90[v92];
      }
      else
      {
        if ( v84 != nullptr )
        {
          *v84 = v102;
          v84[1] = v103;
          v84[2] = v104;
        }
        v84 += 3;
      }
      v68 = v12;
      v13 = (uint32_t *)G4_VCALL<int>(v12[2], 56);
      v14 = v100;
      v15 = v68;
      if ( v100 == v101 )
      {
        g4_std::vector_quaternion_3bf682::M_insert_aux(&v99, v100, v13);
        v15 = v68;
      }
      else
      {
        v16 = nullptr;
        if ( v100 != nullptr )
        {
          *v100 = *v13;
          v14[1] = v13[1];
          v14[2] = v13[2];
          v14[3] = v13[3];
          v16 = v100;
        }
        v100 = v16 + 4;
      }
      v17 = v15[2];
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
      {
        v69 = v15;
        v18 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
        v15 = v69;
        if ( v18 != 0 )
        {
          sub_5B3AF0(&dword_20D4A60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          v15 = v69;
        }
      }
      v11 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v11 = (int *)(&dword_20D4A60);
      v66 = (void ***)v15;
      sub_5D8870(v11, v17, 0);
      v10 = *v66;
    }
    while ( *v66 != v97 );
  }
  v19 = sub_8F0680(v7);
  v74 = v19;
  v78 = 0;
  if ( v19 != 0 )
  {
    if ( sub_8F1EA0(v19) != 0 )
    {
      v78 = sub_8F1EA0(v74);
    }
    else if ( sub_8F5BA0(v74) != 0 )
    {
      v78 = sub_8F5BA0(v74);
    }
  }
  v85 = (void **)v98[0];
  if ( v98[0] != v98 )
  {
    v83 = 0;
    while ( 1 )
    {
      v20 = (void **)v97[0];
      if ( v97[0] == v97 )
      {
        v25 = -16;
        v24 = -3;
        v83 = 0;
      }
      else
      {
        v21 = (void **)v97[0];
        v22 = 0;
        do
        {
          v21 = (void **)*v21;
          ++v22;
        }
        while ( v21 != v97 );
        v23 = v83;
        if ( v83 >= v22 )
        {
          v45 = 0;
          do
          {
            v20 = (void **)*v20;
            ++v45;
          }
          while ( v20 != v97 );
          v83 = v45;
          v25 = 16 * (v45 - 1);
          v24 = 3 * (v45 - 1);
        }
        else
        {
          ++v83;
          v24 = 3 * v23;
          v25 = 16 * v23;
        }
      }
      v91 = (size_t)v85[2];
      sub_C18FC0(v91, &v80[v24]);
      sub_C18FF0(v91, (char *)v99 + v25);
      if ( v91 == 0 )
        goto LABEL_69;
      v95 = nullptr;
      (*(void (**)(uint8_t *))(*(uint32_t *)v91 + 52))(v105);
      if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
      {
        sub_7B3590(v46, &dword_20D4B80, v91, v64);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
        __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
      }
      v26 = nullptr;
      if ( byte_20D4B84 == 0 )
        v26 = &dword_20D4B80;
      v63 = v26;
      sub_7B30D0(v93);
      if ( v95 != nullptr )
      {
        v27 = (volatile int32_t *)((uint32_t *)((char *)v95 + *(uint32_t *)(*v95 - 16)));
        if ( __sync_fetch_and_add(v27 + 1, 0xFFFFFFFF) == 1 )
        {
          obj = v27;
          G4_VCALL<void>(v27, 8, v63, v76, v105, v91, &v95, 0);
          G4_VCALL<void>(obj, 4);
        }
      }
      v28 = v93[0];
      v87 = (g4_cxa_guard_t *)v93[0];
      if ( v93[0] != 0 )
      {
        *(uint32_t *)(v93[0] + 40) = *((uint32_t *)v81 + 13);
        if ( v79 != 666 )
          *(uint32_t *)(v28 + 92) = v79;
      }
      v29 = v94;
      if ( *((uint32_t *)v94 - 3) != 0 )
      {
        if ( byte_20D4AB0 == 0 )
        {
          v70 = v94;
          v52 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
          v29 = v70;
          if ( v52 != 0 )
          {
            sub_ADB4E0(&dword_20D4AC0);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
            __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
            v29 = v70;
          }
        }
        v30 = nullptr;
        if ( byte_20D4AC4 == 0 )
          v30 = (int *)(&dword_20D4AC0);
        sub_AC4FE0((vox::EmitterHandle::Self *)v107, (int)(uintptr_t)(v30), v29, 1028443341);
        vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v107);
        v87 = (g4_cxa_guard_t *)v93[0];
      }
      if ( v87 != nullptr )
        break;
LABEL_66:
      v93[0] = 0;
      if ( (uint8_t)sub_C170A0(v91) == 0 )
      {
        sub_C16450(v91);
        G4_VCALL<void>(v91, 32);
        if ( (*(uint8_t *)unk_20C1765) != 0 )
          G4_VCALL<void>(v91, 356);
LABEL_69:
        if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
          goto LABEL_112;
        goto LABEL_70;
      }
      G4_VCALL<void>(v91, 112, 1);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
      {
LABEL_112:
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
        {
          sub_5B3AF0(&dword_20D4A60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
        }
      }
LABEL_70:
      v36 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v36 = (int *)(&dword_20D4A60);
      G4_VCALL<void>(v36, 8, v91);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0(&dword_20D4A60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v37 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v37 = (int *)(&dword_20D4A60);
      sub_5B4460(v37, v91, 3);
      if ( v91 != 0 && v78 == v91 )
      {
        v47 = (int *)G4_VCALL<int>(v91, 16);
        v48 = 0;
        if ( v47 != nullptr )
        {
          v48 = v91;
          if ( v47 != (int *)(uintptr_t)(&dword_20D68D0) )
          {
            do
            {
              v47 = (int *)v47[1];
              if ( v47 == nullptr )
              {
                v48 = 0;
                goto LABEL_125;
              }
            }
            while ( v47 != (int *)(uintptr_t)(&dword_20D68D0) );
            v48 = v91;
          }
        }
LABEL_125:
        v49 = (int)(uintptr_t)(sub_62A190(v74, v48));
        v50 = v49;
        if ( v49 != 0 )
        {
          v88 = *(g4_cxa_guard_t **)(*(uint32_t *)v91 + 308);
          (*(void (**)(char *, int))(*(uint32_t *)v49 + 52))(v106, v49);
          ((void (*)(size_t))v88)(v91);
          v89 = *(g4_cxa_guard_t **)(*(uint32_t *)v91 + 316);
          v51 = G4_VCALL<int>(v50, 56);
          ((void (*)(size_t, int))v89)(v91, v51);
        }
      }
      v85 = (void **)*v85;
      if ( v85 == v98 )
        goto LABEL_77;
    }
    v82 = (char *)v87[2];
    v31 = (char *)v87[1];
    v32 = (v82 - v31) >> 2;
    if ( (v82 - v31) >> 4 > 0 )
    {
      if ( *(uint32_t **)v31 != v93 )
      {
        if ( *((uint32_t **)v31 + 1) == v93 )
        {
          v31 += 4;
        }
        else if ( *((uint32_t **)v31 + 2) == v93 )
        {
          v31 += 8;
        }
        else if ( *((uint32_t **)v31 + 3) == v93 )
        {
          v31 += 12;
        }
        else
        {
          v65 = (v82 - v31) >> 4;
          do
          {
            v34 = v65-- == 1;
            v35 = (uint32_t **)(v31 + 16);
            v31 += 16;
            if ( v34 )
            {
              v32 = (v82 - v31) >> 2;
              goto LABEL_63;
            }
            if ( *v35 == v93 )
              goto LABEL_103;
            v33 = v31 + 4;
            if ( v35[1] == v93 )
              break;
            v33 = v31 + 8;
            if ( v35[2] == v93 )
              break;
            v33 = v31 + 12;
          }
          while ( v35[3] != v93 );
          v31 = v33;
        }
      }
      goto LABEL_103;
    }
LABEL_63:
    if ( v32 != 2 )
    {
      if ( v32 != 3 )
      {
        if ( v32 != 1 )
          goto LABEL_66;
LABEL_102:
        if ( *(uint32_t **)v31 != v93 )
          goto LABEL_66;
        goto LABEL_103;
      }
      if ( *(uint32_t **)v31 == v93 )
      {
LABEL_103:
        if ( v82 != v31 )
        {
          v44 = v31 + 4;
          if ( v82 != v31 + 4 && (v82 - v44) >> 2 != 0 )
          {
            memmove(v31, v31 + 4, 4 * ((v82 - v44) >> 2));
            v82 = (char *)v87[2];
          }
          v87[2] = (g4_cxa_guard_t)(v82 - 4);
        }
        goto LABEL_66;
      }
      v31 += 4;
    }
    if ( *(uint32_t **)v31 != v93 )
    {
      v31 += 4;
      goto LABEL_102;
    }
    goto LABEL_103;
  }
LABEL_77:
  v96[0] = (char *)v81 + 52;
  v38 = *((char **)v77 + 3);
  if ( v38 == nullptr )
    goto LABEL_153;
  v39 = (char *)v77 + 8;
  do
  {
    while ( (unsigned int)(uintptr_t)(v75) <= *((uint32_t *)v38 + 4) )
    {
      v39 = v38;
      v38 = *((char **)v38 + 2);
      if ( v38 == nullptr )
        goto LABEL_82;
    }
    v38 = *((char **)v38 + 3);
  }
  while ( v38 != nullptr );
LABEL_82:
  if ( v39 == v73 || (unsigned int)(uintptr_t)(v75) < *((uint32_t *)v39 + 4) )
  {
LABEL_153:
    v60 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v60 = (uint32_t)(uintptr_t)(&off_205CD10);
    v60[1] = *((uint32_t *)v81 + 13);
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v77 + 4),
                 v96) = (uint32_t)(uintptr_t)(v60);
    if ( byte_20D5B50 != 0 )
      goto LABEL_85;
  }
  else
  {
    v34 = byte_20D5B50 == 0;
    *(uint32_t *)(*((uint32_t *)v39 + 5) + 4) = *((uint32_t *)v81 + 13);
    if ( !v34 )
      goto LABEL_85;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
LABEL_85:
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v81, v77);
  if ( v99 != nullptr )
    opDelete(v99);
  if ( v80 != nullptr )
    opDelete(v80);
  g4_std::string::Destroy(&v94);
  v40 = (void **)v98[0];
  if ( v98[0] != v98 )
  {
    while ( 1 )
    {
      v41 = (void **)*v40;
      opDelete(v40);
      if ( v41 == v98 )
        break;
      v40 = v41;
    }
  }
  v42 = (void **)v97[0];
  if ( v97[0] != v97 )
  {
    while ( 1 )
    {
      v43 = (void **)*v42;
      opDelete(v42);
      if ( v43 == v97 )
        break;
      v42 = v43;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C3EBE0  (binary VA: 0xc3ebe0)
// Original: sub_C3EBE0
// ----------------------------------------------------------------------------
void sub_C3EBE0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BA88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3EC10  (binary VA: 0xc3ec10)
// Original: sub_C3EC10
// ----------------------------------------------------------------------------
void sub_C3EC10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3EC40  (binary VA: 0xc3ec40)
// Original: sub_C3EC40
// ----------------------------------------------------------------------------
void sub_C3EC40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BEC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3EC70  (binary VA: 0xc3ec70)
// Original: sub_C3EC70
// ----------------------------------------------------------------------------
void sub_C3EC70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C0C8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3ECA0  (binary VA: 0xc3eca0)
// Original: sub_C3ECA0
// ----------------------------------------------------------------------------
void sub_C3ECA0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C108);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3ECD0  (binary VA: 0xc3ecd0)
// Original: sub_C3ECD0
// ----------------------------------------------------------------------------
void sub_C3ECD0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BA88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3ED10  (binary VA: 0xc3ed10)
// Original: sub_C3ED10
// ----------------------------------------------------------------------------
void sub_C3ED10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3ED50  (binary VA: 0xc3ed50)
// Original: sub_C3ED50
// ----------------------------------------------------------------------------
void sub_C3ED50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BEC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3ED90  (binary VA: 0xc3ed90)
// Original: sub_C3ED90
// ----------------------------------------------------------------------------
void sub_C3ED90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C0C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3EDD0  (binary VA: 0xc3edd0)
// Original: sub_C3EDD0
// ----------------------------------------------------------------------------
void sub_C3EDD0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C108);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_quaternion_3bf682::M_insert_aux  (binary VA: 0xc3ee10)
// Original: std::vector<glitch::core::quaternion>::_M_insert_aux
// ----------------------------------------------------------------------------
uint32_t * g4_std::vector_quaternion_3bf682::M_insert_aux(int *a1, double *a2, unsigned int *a3)
{
  int *v3;
  unsigned int *v4;
  uint32_t *v5;
  uint32_t *result;
  int v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  uint32_t *v12;
  __m128 v13;
  double *v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int *v18;
  double *v19;
  uint32_t *v20;
  double *v21;
  double *v22;
  uint32_t *v23;
  int v24;
  size_t v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;

  v3 = a1;
  v4 = a3;
  v5 = (uint32_t *)a1[1];
  if ( v5 != (uint32_t *)a1[2] )
  {
    result = nullptr;
    if ( v5 != nullptr )
    {
      *v5 = *(v5 - 4);
      v5[1] = *(v5 - 3);
      v5[2] = *(v5 - 2);
      v5[3] = *(v5 - 1);
      result = (uint32_t *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(result + 4);
    v7 = ((char *)(result - 4) - (char *)a2) >> 4;
g4_m128_raw(v8) = *a3;
g4_m128_raw(v9) = a3[1];
g4_m128_raw(v10) = a3[2];
g4_m128_raw(v11) = a3[3];
    if ( v7 > 0 )
    {
      v12 = result - 8;
      result -= 4;
      do
      {
        --v7;
        *result = *v12;
        result[1] = v12[1];
        result[2] = v12[2];
        result[3] = v12[3];
        v12 -= 4;
        result -= 4;
      }
      while ( v7 != 0 );
    }
g4_m128_lane<uint64_t>(v13, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v9), 0);
g4_m128_lane<uint64_t>(v13, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v10, v11), 0);
    _mm_storel_ps(a2, v13);
    _mm_storeh_ps(a2 + 1, v13);
    return result;
  }
  v14 = (double *)*a1;
  v15 = ((int)(uintptr_t)(v5) - *a1) >> 4;
  v27 = v15;
  if ( v15 != 0 )
  {
    v16 = 2 * v15;
    v29 = v16;
    if ( v27 > v16 || v16 > 0xFFFFFFF )
    {
      v25 = 0xFFFFFFF0;
      v17 = ((char *)a2 - (char *)v14) >> 4;
    }
    else
    {
      v25 = 32 * v27;
      v17 = ((char *)a2 - (char *)v14) >> 4;
      if ( v29 == 0 )
      {
        v26 = 16;
        v30 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v25 = 16;
    v17 = ((char *)a2 - (char *)v14) >> 4;
  }
  v24 = v17;
  v30 = opNew(v25);
  v26 = v30 + 16;
  v4 = a3;
  v17 = v24;
LABEL_12:
  v18 = (unsigned int *)(v30 + 16 * v17);
  if ( v18 != nullptr )
  {
    *v18 = *v4;
    v18[1] = v4[1];
    v18[2] = v4[2];
    v18[3] = v4[3];
  }
  v19 = (double *)*a1;
  v28 = *a1;
  if ( (double *)*a1 != a2 )
  {
    v20 = (uint32_t *)v30;
    do
    {
      if ( v20 != nullptr )
      {
        *v20 = *(uint32_t *)v19;
        v20[1] = *((uint32_t *)v19 + 1);
        v20[2] = *((uint32_t *)v19 + 2);
        v20[3] = *((uint32_t *)v19 + 3);
      }
      v19 += 2;
      v20 += 4;
    }
    while ( v19 != a2 );
    v26 = v30 + (((unsigned int)(uintptr_t)(a2) - v28 - 16) & 0xFFFFFFF0) + 32;
  }
  v21 = (double *)a1[1];
  if ( v21 != a2 )
  {
    v22 = a2;
    v23 = (uint32_t *)v26;
    do
    {
      if ( v23 != nullptr )
      {
        *v23 = *(uint32_t *)v22;
        v23[1] = *((uint32_t *)v22 + 1);
        v23[2] = *((uint32_t *)v22 + 2);
        v23[3] = *((uint32_t *)v22 + 3);
      }
      v22 += 2;
      v23 += 4;
    }
    while ( v21 != v22 );
    v3 = a1;
    v26 += (((char *)v21 - (char *)(a2 + 2)) & 0xFFFFFFF0) + 16;
  }
  if ( *v3 != 0 )
    opDelete((void *)*v3);
  *v3 = v30;
  v3[1] = v26;
  v3[2] = v25 + v30;
  return (uint32_t *)(v25 + v30);
}


