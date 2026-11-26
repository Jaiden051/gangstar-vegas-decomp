#include "Core/Utils/DecompTypes.h"
#include "TU41_GrapherActorsBatch5_Character.h"

// ----------------------------------------------------------------------------
// Function: sub_C5AA50  (binary VA: 0xc5aa50)
// Original: sub_C5AA50
// ----------------------------------------------------------------------------
int sub_C5AA50()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DEB64);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DEB64, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEB68), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEB68, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEB6C), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEB6C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEB70), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEB70, &unk_20D1280);
  dword_20DEB74 = 1056964608;
  dword_20DEB78 = 1056964608;
  dword_20DEB7C = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetWeapon::Destroy_eac5ab50  (binary VA: 0xc5ab50)
// Original: ActorGameCharacterSetWeapon::~ActorGameCharacterSetWeapon
// ----------------------------------------------------------------------------
void ActorGameCharacterSetWeapon::Destroy_eac5ab50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetRandomDestination::Destroy_eac5ab80  (binary VA: 0xc5ab80)
// Original: ActorGameCharacterSetRandomDestination::~ActorGameCharacterSetRandomDestination
// ----------------------------------------------------------------------------
void ActorGameCharacterSetRandomDestination::Destroy_eac5ab80(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetPathDestination::Destroy_eac5abb0  (binary VA: 0xc5abb0)
// Original: ActorGameCharacterSetPathDestination::~ActorGameCharacterSetPathDestination
// ----------------------------------------------------------------------------
void ActorGameCharacterSetPathDestination::Destroy_eac5abb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D268);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMoveAnimation::Destroy_eac5abe0  (binary VA: 0xc5abe0)
// Original: ActorGameCharacterSetMoveAnimation::~ActorGameCharacterSetMoveAnimation
// ----------------------------------------------------------------------------
void ActorGameCharacterSetMoveAnimation::Destroy_eac5abe0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMood::Destroy_eac5ac10  (binary VA: 0xc5ac10)
// Original: ActorGameCharacterSetMood::~ActorGameCharacterSetMood
// ----------------------------------------------------------------------------
void ActorGameCharacterSetMood::Destroy_eac5ac10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMonitoredAnim::Destroy_eac5ac40  (binary VA: 0xc5ac40)
// Original: ActorGameCharacterSetMonitoredAnim::~ActorGameCharacterSetMonitoredAnim
// ----------------------------------------------------------------------------
void ActorGameCharacterSetMonitoredAnim::Destroy_eac5ac40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D168);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetInVehicle::Destroy_eac5ac70  (binary VA: 0xc5ac70)
// Original: ActorGameCharacterSetInVehicle::~ActorGameCharacterSetInVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterSetInVehicle::Destroy_eac5ac70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D128);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetInteractionPreset::Destroy_eac5aca0  (binary VA: 0xc5aca0)
// Original: ActorGameCharacterSetInteractionPreset::~ActorGameCharacterSetInteractionPreset
// ----------------------------------------------------------------------------
void ActorGameCharacterSetInteractionPreset::Destroy_eac5aca0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D0E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetDriveBehaviour::Destroy_eac5acd0  (binary VA: 0xc5acd0)
// Original: ActorGameCharacterSetDriveBehaviour::~ActorGameCharacterSetDriveBehaviour
// ----------------------------------------------------------------------------
void ActorGameCharacterSetDriveBehaviour::Destroy_eac5acd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D0A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterRequestToken::Destroy_eac5ad00  (binary VA: 0xc5ad00)
// Original: ActorGameCharacterRequestToken::~ActorGameCharacterRequestToken
// ----------------------------------------------------------------------------
void ActorGameCharacterRequestToken::Destroy_eac5ad00(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D068);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterReloadWeapon::Destroy_eac5ad30  (binary VA: 0xc5ad30)
// Original: ActorGameCharacterReloadWeapon::~ActorGameCharacterReloadWeapon
// ----------------------------------------------------------------------------
void ActorGameCharacterReloadWeapon::Destroy_eac5ad30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D028);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterRaiseWeapon::Destroy_eac5ad60  (binary VA: 0xc5ad60)
// Original: ActorGameCharacterRaiseWeapon::~ActorGameCharacterRaiseWeapon
// ----------------------------------------------------------------------------
void ActorGameCharacterRaiseWeapon::Destroy_eac5ad60(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CFE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterPushOutOfVehicle::Destroy_eac5ad90  (binary VA: 0xc5ad90)
// Original: ActorGameCharacterPushOutOfVehicle::~ActorGameCharacterPushOutOfVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterPushOutOfVehicle::Destroy_eac5ad90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CFA8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterProstrate::Destroy_eac5adc0  (binary VA: 0xc5adc0)
// Original: ActorGameCharacterProstrate::~ActorGameCharacterProstrate
// ----------------------------------------------------------------------------
void ActorGameCharacterProstrate::Destroy_eac5adc0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterPlayAnim::Destroy_eac5adf0  (binary VA: 0xc5adf0)
// Original: ActorGameCharacterPlayAnim::~ActorGameCharacterPlayAnim
// ----------------------------------------------------------------------------
void ActorGameCharacterPlayAnim::Destroy_eac5adf0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMove::Destroy_eac5ae20  (binary VA: 0xc5ae20)
// Original: ActorGameCharacterMove::~ActorGameCharacterMove
// ----------------------------------------------------------------------------
void ActorGameCharacterMove::Destroy_eac5ae20(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMeleeAttack::Destroy_eac5ae50  (binary VA: 0xc5ae50)
// Original: ActorGameCharacterMeleeAttack::~ActorGameCharacterMeleeAttack
// ----------------------------------------------------------------------------
void ActorGameCharacterMeleeAttack::Destroy_eac5ae50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEA8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMelee::Destroy_eac5ae80  (binary VA: 0xc5ae80)
// Original: ActorGameCharacterMelee::~ActorGameCharacterMelee
// ----------------------------------------------------------------------------
void ActorGameCharacterMelee::Destroy_eac5ae80(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterLockWantedLevel::Destroy_eac5aeb0  (binary VA: 0xc5aeb0)
// Original: ActorGameCharacterLockWantedLevel::~ActorGameCharacterLockWantedLevel
// ----------------------------------------------------------------------------
void ActorGameCharacterLockWantedLevel::Destroy_eac5aeb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterKill::Destroy_eac5aee0  (binary VA: 0xc5aee0)
// Original: ActorGameCharacterKill::~ActorGameCharacterKill
// ----------------------------------------------------------------------------
void ActorGameCharacterKill::Destroy_eac5aee0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetWeaponDamage::Destroy_eac5af10  (binary VA: 0xc5af10)
// Original: ActorGameCharacterGetWeaponDamage::~ActorGameCharacterGetWeaponDamage
// ----------------------------------------------------------------------------
void ActorGameCharacterGetWeaponDamage::Destroy_eac5af10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetOut::Destroy_eac5af40  (binary VA: 0xc5af40)
// Original: ActorGameCharacterGetOut::~ActorGameCharacterGetOut
// ----------------------------------------------------------------------------
void ActorGameCharacterGetOut::Destroy_eac5af40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetIn::Destroy_eac5af70  (binary VA: 0xc5af70)
// Original: ActorGameCharacterGetIn::~ActorGameCharacterGetIn
// ----------------------------------------------------------------------------
void ActorGameCharacterGetIn::Destroy_eac5af70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCoverObject::Destroy_eac5afa0  (binary VA: 0xc5afa0)
// Original: ActorGameCharacterCoverObject::~ActorGameCharacterCoverObject
// ----------------------------------------------------------------------------
void ActorGameCharacterCoverObject::Destroy_eac5afa0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCA8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterFollow::Destroy_eac5afd0  (binary VA: 0xc5afd0)
// Original: ActorGameCharacterFollow::~ActorGameCharacterFollow
// ----------------------------------------------------------------------------
void ActorGameCharacterFollow::Destroy_eac5afd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterFlinch::Destroy_eac5b000  (binary VA: 0xc5b000)
// Original: ActorGameCharacterFlinch::~ActorGameCharacterFlinch
// ----------------------------------------------------------------------------
void ActorGameCharacterFlinch::Destroy_eac5b000(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B030_eac5b030  (binary VA: 0xc5b030)
// Original: sub_C5B030
// ----------------------------------------------------------------------------
int sub_C5B030_eac5b030(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  int v4;
  int v5;
  bool v6;

  result = *((uint32_t *)a1 + 14);
  if ( result == 0 )
    goto LABEL_9;
  v4 = *(uint32_t *)(result + 4336);
  if ( v4 != *((uint32_t *)a1 + 13) )
  {
    grapher::ActorBase::FireEvent(a1, 7, a3);
    result = *((uint32_t *)a1 + 14);
    v4 = *(uint32_t *)(result + 4336);
  }
  *((uint32_t *)a1 + 13) = v4;
  if ( *(uint32_t *)(result + 4284) == 0
    && ((unsigned int)(*(uint32_t *)(result + 4296) - 2) <= 2
     || (v5 = *(uint32_t *)(result + 4280)) == 0
     || *(uint32_t *)(v5 + 532) - *(uint32_t *)(v5 + 528) <= 19
     || (v6 = (uint8_t)sub_986060(result) == 0, result = *((uint32_t *)a1 + 14), v6))
    || *(uint8_t *)(result + 3205) != 0 )
  {
    *(uint8_t *)(result + 1945) = 0;
LABEL_9:
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 6, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C5B120_eac5b120  (binary VA: 0xc5b120)
// Original: sub_C5B120
// ----------------------------------------------------------------------------
int sub_C5B120_eac5b120(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  if ( *((uint32_t *)a1 + 13) == 0 || (uint8_t)(result = sub_986060(*((uint32_t *)a1 + 13))) == 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C5B190_eac5b190  (binary VA: 0xc5b190)
// Original: sub_C5B190
// ----------------------------------------------------------------------------
void sub_C5B190_eac5b190(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B1D0_eac5b1d0  (binary VA: 0xc5b1d0)
// Original: sub_C5B1D0
// ----------------------------------------------------------------------------
void sub_C5B1D0_eac5b1d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B210_eac5b210  (binary VA: 0xc5b210)
// Original: sub_C5B210
// ----------------------------------------------------------------------------
void sub_C5B210_eac5b210(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B250_eac5b250  (binary VA: 0xc5b250)
// Original: sub_C5B250
// ----------------------------------------------------------------------------
void sub_C5B250_eac5b250(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B290_eac5b290  (binary VA: 0xc5b290)
// Original: sub_C5B290
// ----------------------------------------------------------------------------
void sub_C5B290_eac5b290(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B2D0_eac5b2d0  (binary VA: 0xc5b2d0)
// Original: sub_C5B2D0
// ----------------------------------------------------------------------------
void sub_C5B2D0_eac5b2d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B310_eac5b310  (binary VA: 0xc5b310)
// Original: sub_C5B310
// ----------------------------------------------------------------------------
void sub_C5B310_eac5b310(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B350_eac5b350  (binary VA: 0xc5b350)
// Original: sub_C5B350
// ----------------------------------------------------------------------------
void sub_C5B350_eac5b350(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B390_eac5b390  (binary VA: 0xc5b390)
// Original: sub_C5B390
// ----------------------------------------------------------------------------
void sub_C5B390_eac5b390(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B3D0_eac5b3d0  (binary VA: 0xc5b3d0)
// Original: sub_C5B3D0
// ----------------------------------------------------------------------------
void sub_C5B3D0_eac5b3d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B410_eac5b410  (binary VA: 0xc5b410)
// Original: sub_C5B410
// ----------------------------------------------------------------------------
void sub_C5B410_eac5b410(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B450_eac5b450  (binary VA: 0xc5b450)
// Original: sub_C5B450
// ----------------------------------------------------------------------------
void sub_C5B450_eac5b450(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B490_eac5b490  (binary VA: 0xc5b490)
// Original: sub_C5B490
// ----------------------------------------------------------------------------
void sub_C5B490_eac5b490(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CFA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B4D0_eac5b4d0  (binary VA: 0xc5b4d0)
// Original: sub_C5B4D0
// ----------------------------------------------------------------------------
void sub_C5B4D0_eac5b4d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CFE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B510_eac5b510  (binary VA: 0xc5b510)
// Original: sub_C5B510
// ----------------------------------------------------------------------------
void sub_C5B510_eac5b510(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D028);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B550_eac5b550  (binary VA: 0xc5b550)
// Original: sub_C5B550
// ----------------------------------------------------------------------------
void sub_C5B550_eac5b550(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D068);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B590_eac5b590  (binary VA: 0xc5b590)
// Original: sub_C5B590
// ----------------------------------------------------------------------------
void sub_C5B590_eac5b590(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D0A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B5D0_eac5b5d0  (binary VA: 0xc5b5d0)
// Original: sub_C5B5D0
// ----------------------------------------------------------------------------
void sub_C5B5D0_eac5b5d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D0E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B610_eac5b610  (binary VA: 0xc5b610)
// Original: sub_C5B610
// ----------------------------------------------------------------------------
void sub_C5B610_eac5b610(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D128);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B650_eac5b650  (binary VA: 0xc5b650)
// Original: sub_C5B650
// ----------------------------------------------------------------------------
void sub_C5B650_eac5b650(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D168);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B690_eac5b690  (binary VA: 0xc5b690)
// Original: sub_C5B690
// ----------------------------------------------------------------------------
void sub_C5B690_eac5b690(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B6D0_eac5b6d0  (binary VA: 0xc5b6d0)
// Original: sub_C5B6D0
// ----------------------------------------------------------------------------
void sub_C5B6D0_eac5b6d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B710_eac5b710  (binary VA: 0xc5b710)
// Original: sub_C5B710
// ----------------------------------------------------------------------------
void sub_C5B710_eac5b710(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D268);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B750_eac5b750  (binary VA: 0xc5b750)
// Original: sub_C5B750
// ----------------------------------------------------------------------------
void sub_C5B750_eac5b750(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B790_eac5b790  (binary VA: 0xc5b790)
// Original: sub_C5B790
// ----------------------------------------------------------------------------
void sub_C5B790_eac5b790(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B7D0_eac5b7d0  (binary VA: 0xc5b7d0)
// Original: sub_C5B7D0
// ----------------------------------------------------------------------------
void sub_C5B7D0_eac5b7d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B810  (binary VA: 0xc5b810)
// Original: sub_C5B810
// ----------------------------------------------------------------------------
void sub_C5B810(int a1, uint32_t *a2)
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
                                      sub_C5B810(a1, v9[3]);
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
// Function: sub_C5B9C0_eac5b9c0  (binary VA: 0xc5b9c0)
// Original: sub_C5B9C0
// ----------------------------------------------------------------------------
int sub_C5B9C0_eac5b9c0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int v4;
  int v6[4];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, "Subject", (int)(uintptr_t)(v6));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v4 = sub_5B44E0((int)(uintptr_t)(v3), (int)(uintptr_t)(v6) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v4 != 0 )
    sub_9D7630(v4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C5BAD0_eac5bad0  (binary VA: 0xc5bad0)
// Original: sub_C5BAD0
// ----------------------------------------------------------------------------
int sub_C5BAD0_eac5bad0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = sub_857260(a1, 0, (int)(uintptr_t)(a2));
  v3 = v2;
  if ( v2 != 0 && *(uint32_t *)(*(uint32_t *)(v2 + 408) - 12) != 0 )
  {
    v4 = *(uint32_t *)(v2 + 404);
    if ( v4 != 0
      && (((*(int (**)(uint32_t))(*(uint32_t *)v4 + 32))(*(uint32_t *)(v3 + 404)) & 2) != 0
       || *(uint32_t *)(*(uint32_t *)(v3 + 408) - 12) != 0
       && (v6 = *(uint32_t *)(v3 + 404)) != 0
       && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v6 + 36))(*(uint32_t *)(v3 + 404)) != 0
       && *(int *)(v3 + 1096) > 0
       && (v3 = **(uint32_t **)(v3 + 1104)) != 0) )
    {
      sub_9B8920((uint32_t *)v3, 0);
      *(uint8_t *)(v3 + 1945) = 0;
    }
  }
  return grapher::ActorBase::Cancel(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C5BBB0  (binary VA: 0xc5bbb0)
// Original: sub_C5BBB0
// ----------------------------------------------------------------------------
int sub_C5BBB0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  grapher::HolderT<int> *v16;
  grapher::HolderT<int> *v18;
  int v36;
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
  typedef const char *_g4_t_v31;
  typedef const char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v26)) > _g4_s7 ? (24u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v27)) > _g4_s8 ? (28u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v28)) > _g4_s9 ? (32u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v29)) > _g4_s10 ? (36u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v30)) > _g4_s11 ? (40u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v31)) > _g4_s12 ? (44u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v32)) > _g4_s13 ? (48u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v33)) > _g4_s14 ? (52u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v34)) > _g4_s15 ? (56u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v35)) > _g4_s16 ? (60u + sizeof(_g4_t_v35)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);

  v10 = *(uint32_t *)(a1 + 4);
  v28 = (int)(uintptr_t)(&dword_213B814);
  if ( v10 != 0 )
    G4_VCALL<void>(v10, 32, &v28);
  v11 = sub_1938090((int)(uintptr_t)(&v28), "..", 0, 2u);
  if ( v11 == -1 )
  {
    v35[0] = 0;
    v18 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
    *(uint32_t *)v18 = (uint32_t)(uintptr_t)(&off_205C508);
    grapher::HolderT_int_id_fe4c74::From(v18, v35);
    (**(void (***)(grapher::HolderT<int> *, int *, int, int, int, int, int, int, int, int, int, const char *, const char *))v18)(
      v18,
      &v33,
      v20,
      v21,
      v23,
      v24,
      v25,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v36 = a10;
    G4_VCALL<void>(v18, 44);
  }
  else
  {
    v12 = v11 + 2;
    sub_193A6F0(&v31, &v28, 0, v11);
    if ( v12 > *(uint32_t *)(v28 - 12) )
      sub_1900210("basic_string::substr");
    sub_193A6F0(&v32, &v28, v12, -1);
    v13 = atoi(v31);
    v14 = atoi(v32);
    v15 = v14;
    if ( v13 > v14 )
    {
      v15 = v13;
      v13 = v14;
    }
    v26 = v15;
    v34 = lrand48() % (v15 - v13 + 1) + v13;
    v16 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
    *(uint32_t *)v16 = (uint32_t)(uintptr_t)(&off_205C508);
    grapher::HolderT_int_id_fe4c74::From(v16, &v34);
    (**(void (***)(grapher::HolderT<int> *, int *, int, int, int, int, int, int, int, int, int, const char *, const char *))v16)(
      v16,
      &v33,
      v19,
      v22,
      v23,
      v24,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v36 = a10;
    G4_VCALL<void>(v16, 44);
    g4_std::string::Destroy(&a9);
    g4_std::string::Destroy(&a8);
  }
  g4_std::string::Destroy(&v28);
  return v36;
}

// ----------------------------------------------------------------------------
// Function: sub_C5BDB0  (binary VA: 0xc5bdb0)
// Original: sub_C5BDB0
// ----------------------------------------------------------------------------
g4_cxa_guard_t * sub_C5BDB0(uint32_t *a1)
{
  int v2;
  grapher::HolderT<int> *v3;
  grapher::HolderT<int> *v5;
  typedef g4_cxa_guard_t *_g4_t_v6;
  typedef g4_cxa_guard_t *_g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef uint8_t _g4_t_v9[4];
  typedef int _g4_t_Constant;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v9)) > _g4_s3 ? (36u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_Constant)) > _g4_s4 ? (40u + sizeof(_g4_t_Constant)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v11)) > _g4_s5 ? (44u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_Constant &Constant = *reinterpret_cast<_g4_t_Constant *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);

  v2 = sub_1938090((int)(uintptr_t)(a1), ".", 0, 1u);
  if ( v2 == -1 )
  {
    v11[0] = -1;
    v5 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(&off_205C508);
    grapher::HolderT_int_id_fe4c74::From(v5, v11);
    (**(void (***)(grapher::HolderT<int> *, g4_cxa_guard_t **))v5)(v5, &v7);
    v6 = v7;
    G4_VCALL<void>(v5, 44);
  }
  else
  {
    if ( *(uint32_t *)(*a1 - 12) < (unsigned int)(v2 + 1) )
      sub_1900210("basic_string::substr");
    sub_193A6F0(v9, a1, v2 + 1, *(uint32_t *)(*a1 - 12));
    sub_193A6F0(v8, a1, 0, v2);
    if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
    {
      grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
      __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
    }
    Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v8, v9);
    v3 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(&off_205C508);
    grapher::HolderT_int_id_fe4c74::From(v3, &Constant);
    (**(void (***)(grapher::HolderT<int> *, g4_cxa_guard_t **))v3)(v3, &v7);
    v6 = v7;
    G4_VCALL<void>(v3, 44);
    g4_std::string::Destroy(v8);
    g4_std::string::Destroy(v9);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_C5BFC0  (binary VA: 0xc5bfc0)
// Original: sub_C5BFC0
// ----------------------------------------------------------------------------
void * sub_C5BFC0(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  size_t n;
  void *result;
  void *v11;
  unsigned int v12;
  uint8_t *src;

  v2 = (uint8_t *)*a1;
  v4 = *(uint32_t *)(*a1 - 12);
  v5 = *(uint32_t *)(*a1 - 8);
  if ( a2 >= *((uint32_t *)v2 - 3) )
    v4 = a2;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v4 > v5 )
    {
      v12 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v4 = v12;
    }
  }
  src = v2;
  v6 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v6 + 4) = v4;
  *(uint32_t *)(v6 + 8) = 0;
  v7 = v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *(uint8_t *)(v7 + 12) = *src;
    else
      memcpy((void *)(v7 + 12), src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = &unk_20D3E6C;
  if ( (void *)v7 != &unk_20D3E6C )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = v8;
    *(uint8_t *)(v7 + v8 + 12) = 0;
  }
  v11 = (void *)(*a1 - 12);
  if ( v11 != &unk_20D3E6C )
  {
    result = (void *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (void *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = v7 + 12;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C5C120_eac5c120  (binary VA: 0xc5c120)
// Original: sub_C5C120
// ----------------------------------------------------------------------------
int sub_C5C120_eac5c120(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef void *_g4_t_v6;
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
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v5)) > _g4_s3 ? (12u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v6)) > _g4_s4 ? (12u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v7)) > _g4_s5 ? (17u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v8)) > _g4_s6 ? (20u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v9)) > _g4_s7 ? (24u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v10)) > _g4_s8 ? (28u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v11)) > _g4_s9 ? (32u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v12)) > _g4_s10 ? (36u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v13)) > _g4_s11 ? (40u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v14)) > _g4_s12 ? (44u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v15)) > _g4_s13 ? (48u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v16)) > _g4_s14 ? (52u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v17)) > _g4_s15 ? (56u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v18)) > _g4_s16 ? (60u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v19)) > _g4_s17 ? (64u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v20)) > _g4_s18 ? (68u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v21)) > _g4_s19 ? (72u + sizeof(_g4_t_v21)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v22)) > _g4_s20 ? (76u + sizeof(_g4_t_v22)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v23)) > _g4_s21 ? (80u + sizeof(_g4_t_v23)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v24)) > _g4_s22 ? (84u + sizeof(_g4_t_v24)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v25)) > _g4_s23 ? (88u + sizeof(_g4_t_v25)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v26)) > _g4_s24 ? (92u + sizeof(_g4_t_v26)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v27)) > _g4_s25 ? (96u + sizeof(_g4_t_v27)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v28)) > _g4_s26 ? (100u + sizeof(_g4_t_v28)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v29)) > _g4_s27 ? (104u + sizeof(_g4_t_v29)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v30)) > _g4_s28 ? (108u + sizeof(_g4_t_v30)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 17u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Melee Attack", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "AI", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v29, 1, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Fierce or quick attack", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Fierce", (int)(uintptr_t)(&v7) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v14, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Fierce", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v2, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Ground or normal attack", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Ground", (int)(uintptr_t)(&v8) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v17, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Ground", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v3, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Left or right attack", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Left", (int)(uintptr_t)(&v9) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v20, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Left", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v21), v4, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Combo attack", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Combo", (int)(uintptr_t)(&v10));
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v23, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Combo", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v24), v5, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Attack return", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Return", (int)(uintptr_t)(&v10) + 3);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v26, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Return", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v27), v6, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  return ((g4_std::string::Destroy(&v28)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5C710  (binary VA: 0xc5c710)
// Original: sub_C5C710
// ----------------------------------------------------------------------------
void sub_C5C710(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
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
  grapher::ActorBase::GetVariables(a1, 3, (int)(uintptr_t)(&v13));
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
// Function: sub_C5C8B0_eac5c8b0  (binary VA: 0xc5c8b0)
// Original: sub_C5C8B0
// ----------------------------------------------------------------------------
int sub_C5C8B0_eac5c8b0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "Prostrate", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "AI", (int)(uintptr_t)(&v2) + 1);
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
// Function: sub_C5C9F0_eac5c9f0  (binary VA: 0xc5c9f0)
// Original: sub_C5C9F0
// ----------------------------------------------------------------------------
int sub_C5C9F0_eac5c9f0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Flinch", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "AI", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Melee", (int)(uintptr_t)(&v10[1]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Weapon", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 1, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "The attacked character.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Subject", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The attacking character.", (int)(uintptr_t)(v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Attacker", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Attacker", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5CE30_eac5ce30  (binary VA: 0xc5ce30)
// Original: sub_C5CE30
// ----------------------------------------------------------------------------
int sub_C5CE30_eac5ce30(grapher::ActorBase::Self *a1)
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
  typedef uint8_t _g4_t_v12[20];
  typedef uint32_t *_g4_t_v13;
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
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v5)) > _g4_s1 ? (0u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v6)) > _g4_s2 ? (0u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v7)) > _g4_s3 ? (0u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v8)) > _g4_s4 ? (8u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (15u + sizeof(_g4_t_v9)) > _g4_s5 ? (15u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v10)) > _g4_s6 ? (16u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v11)) > _g4_s7 ? (20u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v12)) > _g4_s8 ? (24u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v13)) > _g4_s9 ? (44u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v14)) > _g4_s10 ? (56u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v15)) > _g4_s11 ? (60u + sizeof(_g4_t_v15)) : _g4_s11,
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
    _g4_s23 = (104u + sizeof(_g4_t_v26)) > _g4_s22 ? (104u + sizeof(_g4_t_v26)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Follow", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Characters", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "In", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 0, &v25, 1, -1);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 1, v26, 0, -1);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Character who will follow the target", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v10) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 9, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Subject", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 1);
  g4_std::string::Destroy(&v17);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Character to follow", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 1);
  g4_std::string::Destroy(&v20);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Can the character use free running.", (int)(uintptr_t)(&v12[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Free running", (int)(uintptr_t)(&v11) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Free running", (int)(uintptr_t)(v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v8, 1, 0, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  return ((g4_std::string::Destroy(&v24)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5D330_eac5d330  (binary VA: 0xc5d330)
// Original: sub_C5D330
// ----------------------------------------------------------------------------
int sub_C5D330_eac5d330(grapher::ActorBase::Self *a1)
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
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v10)) > _g4_s5 ? (24u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v11)) > _g4_s6 ? (24u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v12)) > _g4_s7 ? (32u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (46u + sizeof(_g4_t_v13)) > _g4_s8 ? (46u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v14)) > _g4_s9 ? (48u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v15)) > _g4_s10 ? (52u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v16)) > _g4_s11 ? (56u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v17)) > _g4_s12 ? (60u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v18)) > _g4_s13 ? (64u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v19)) > _g4_s14 ? (84u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v20)) > _g4_s15 ? (100u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v21)) > _g4_s16 ? (108u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v22)) > _g4_s17 ? (112u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v23)) > _g4_s18 ? (116u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v24)) > _g4_s19 ? (120u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v25)) > _g4_s20 ? (124u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v26)) > _g4_s21 ? (128u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v27)) > _g4_s22 ? (132u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v28)) > _g4_s23 ? (136u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v29)) > _g4_s24 ? (140u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v30)) > _g4_s25 ? (144u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v31)) > _g4_s26 ? (148u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v32)) > _g4_s27 ? (152u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v33)) > _g4_s28 ? (156u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v34)) > _g4_s29 ? (160u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v35)) > _g4_s30 ? (164u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v36)) > _g4_s31 ? (168u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v37)) > _g4_s32 ? (172u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v38)) > _g4_s33 ? (176u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (180u + sizeof(_g4_t_v39)) > _g4_s34 ? (180u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (184u + sizeof(_g4_t_v40)) > _g4_s35 ? (184u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (188u + sizeof(_g4_t_v41)) > _g4_s36 ? (188u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (192u + sizeof(_g4_t_v42)) > _g4_s37 ? (192u + sizeof(_g4_t_v42)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 46u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
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
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 160u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 164u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 168u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 172u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 176u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 180u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 184u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 188u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 192u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Cover Object", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "AI", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Enter", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v38, 1, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Exit", (int)(uintptr_t)(v18));
  grapher::ActorBase::AddPin(a1, 1, &v39, 1, -1);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Get Strafe", (int)(uintptr_t)(&v18[1]));
  grapher::ActorBase::AddPin(a1, 2, &v40, 1, -1);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Get Type", (int)(uintptr_t)(&v18[2]));
  grapher::ActorBase::AddPin(a1, 3, &v41, 1, -1);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v42), "Out", (int)(uintptr_t)(&v18[3]));
  grapher::ActorBase::AddPin(a1, 4, v42, 0, -1);
  g4_std::string::Destroy(v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "The character in cover", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Target", (int)(uintptr_t)(&v14));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v18[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v18[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Target", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( *(uint32_t *)&v18[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v18[4] + 44))(*(uint32_t *)&v18[4]);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Cover object to enter (in case random is false)", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Cover", (int)(uintptr_t)(&v14) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v19 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v26, 9, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Cover", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v27), v9, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Select random cover to enter", (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Random", (int)(uintptr_t)(&v15) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v29, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Random", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v30), v5, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Random strafe point returned", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Strafe", (int)(uintptr_t)(&v16) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v20 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 9, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Strafe", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 0, (int)(uintptr_t)(&v34), 2);
  g4_std::string::Destroy(&v33);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Cover type returned", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Type", (int)(uintptr_t)(&v17));
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v35, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Type", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v36), v12, 1, 0, (int)(uintptr_t)(&v37), 2);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  return ((g4_std::string::Destroy(&v37)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5DBA0_eac5dba0  (binary VA: 0xc5dba0)
// Original: sub_C5DBA0
// ----------------------------------------------------------------------------
int sub_C5DBA0_eac5dba0(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
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
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52[4];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v7)) > _g4_s2 ? (0u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v8)) > _g4_s3 ? (0u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v9)) > _g4_s4 ? (0u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v10)) > _g4_s5 ? (0u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v11)) > _g4_s6 ? (8u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v12)) > _g4_s7 ? (8u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v13)) > _g4_s8 ? (8u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v14)) > _g4_s9 ? (8u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v15)) > _g4_s10 ? (16u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v16)) > _g4_s11 ? (20u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v17)) > _g4_s12 ? (24u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v18)) > _g4_s13 ? (28u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v19)) > _g4_s14 ? (32u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v20)) > _g4_s15 ? (36u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v21)) > _g4_s16 ? (40u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v22)) > _g4_s17 ? (44u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v23)) > _g4_s18 ? (60u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v24)) > _g4_s19 ? (76u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v25)) > _g4_s20 ? (92u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v26)) > _g4_s21 ? (96u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v27)) > _g4_s22 ? (100u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v28)) > _g4_s23 ? (104u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v29)) > _g4_s24 ? (108u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v30)) > _g4_s25 ? (112u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v31)) > _g4_s26 ? (116u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v32)) > _g4_s27 ? (120u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v33)) > _g4_s28 ? (124u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v34)) > _g4_s29 ? (128u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v35)) > _g4_s30 ? (132u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v36)) > _g4_s31 ? (136u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v37)) > _g4_s32 ? (140u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v38)) > _g4_s33 ? (144u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v39)) > _g4_s34 ? (148u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v40)) > _g4_s35 ? (152u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v41)) > _g4_s36 ? (156u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (160u + sizeof(_g4_t_v42)) > _g4_s37 ? (160u + sizeof(_g4_t_v42)) : _g4_s37,
    _g4_s39 = (164u + sizeof(_g4_t_v43)) > _g4_s38 ? (164u + sizeof(_g4_t_v43)) : _g4_s38,
    _g4_s40 = (168u + sizeof(_g4_t_v44)) > _g4_s39 ? (168u + sizeof(_g4_t_v44)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v45)) > _g4_s40 ? (172u + sizeof(_g4_t_v45)) : _g4_s40,
    _g4_s42 = (176u + sizeof(_g4_t_v46)) > _g4_s41 ? (176u + sizeof(_g4_t_v46)) : _g4_s41,
    _g4_s43 = (180u + sizeof(_g4_t_v47)) > _g4_s42 ? (180u + sizeof(_g4_t_v47)) : _g4_s42,
    _g4_s44 = (184u + sizeof(_g4_t_v48)) > _g4_s43 ? (184u + sizeof(_g4_t_v48)) : _g4_s43,
    _g4_s45 = (188u + sizeof(_g4_t_v49)) > _g4_s44 ? (188u + sizeof(_g4_t_v49)) : _g4_s44,
    _g4_s46 = (192u + sizeof(_g4_t_v50)) > _g4_s45 ? (192u + sizeof(_g4_t_v50)) : _g4_s45,
    _g4_s47 = (196u + sizeof(_g4_t_v51)) > _g4_s46 ? (196u + sizeof(_g4_t_v51)) : _g4_s46,
    _g4_s48 = (200u + sizeof(_g4_t_v52)) > _g4_s47 ? (200u + sizeof(_g4_t_v52)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 116u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 120u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 124u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 132u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 136u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 148u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 152u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 156u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 160u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 164u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 176u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 184u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 188u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 192u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 196u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 200u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Get In", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetDisplayName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Characters", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "In", (int)(uintptr_t)(&v21));
  grapher::ActorBase::AddPin(a1, 0, &v49, 1, -1);
  g4_std::string::Destroy(&v49);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Teleport", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v50, 1, -1);
  g4_std::string::Destroy(&v50);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Out", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v51, 0, -1);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v52), "Reached", (int)(uintptr_t)(&v21) + 3);
  grapher::ActorBase::AddPin(a1, 3, v52, 0, -1);
  g4_std::string::Destroy(v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Character who will get in the vehicle", (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Subject", (int)(uintptr_t)(&v15) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v22 = v5;
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v27, 9, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Subject", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v28), v6, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Vehicle to get in", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Vehicle", (int)(uintptr_t)(&v16) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v23 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v30, 9, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Vehicle", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v8, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "The position of the actor in the vehicle.", (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Door", (int)(uintptr_t)(&v17) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "VehicleDoor.Driver", (int)(uintptr_t)(&v17));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &v33);
  v24 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v34, 11, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Door", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v35), v10, 1, 0, (int)(uintptr_t)(&v36), 3);
  g4_std::string::Destroy(&v35);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "True if the actor can be hijacked.", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Hijackable", (int)(uintptr_t)(&v18));
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v37, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Hijackable", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v38), v11, 1, 0, (int)(uintptr_t)(&v39), 3);
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "True if the actor can be thrown out of the vehicle.", (int)(uintptr_t)(&v19) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Throwable", (int)(uintptr_t)(&v18) + 3);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v40, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Throwable", (int)(uintptr_t)(&v19));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v41), v12, 1, 0, (int)(uintptr_t)(&v42), 3);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "True if the actor can get out of the vehicle by itself.", (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Can get out", (int)(uintptr_t)(&v19) + 2);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v43, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Can get out", (int)(uintptr_t)(&v19) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v44), v13, 1, 0, (int)(uintptr_t)(&v45), 3);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v48),
    "Failsafe. The actor will be teleported to the Vehicle at the end of the given timer (in ms).",
    (int)(uintptr_t)(&v20) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Failsafe", (int)(uintptr_t)(&v20) + 1);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v46, 2, 3000);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Failsafe", (int)(uintptr_t)(&v20) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v47), v14, 1, 0, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v46);
  return ((g4_std::string::Destroy(&v48)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5E5F0_eac5e5f0  (binary VA: 0xc5e5f0)
// Original: sub_C5E5F0
// ----------------------------------------------------------------------------
int sub_C5E5F0_eac5e5f0(grapher::ActorBase::Self *a1)
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
  typedef uint32_t *_g4_t_v13;
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
  typedef int _g4_t_v30[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v6)) > _g4_s2 ? (4u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v7)) > _g4_s3 ? (4u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v8)) > _g4_s4 ? (12u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v9)) > _g4_s5 ? (16u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v10)) > _g4_s6 ? (20u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v11)) > _g4_s7 ? (24u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v12)) > _g4_s8 ? (28u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v13)) > _g4_s9 ? (32u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v14)) > _g4_s10 ? (48u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v15)) > _g4_s11 ? (64u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v16)) > _g4_s12 ? (68u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v17)) > _g4_s13 ? (72u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v18)) > _g4_s14 ? (76u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v19)) > _g4_s15 ? (80u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v20)) > _g4_s16 ? (84u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v21)) > _g4_s17 ? (88u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v22)) > _g4_s18 ? (92u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v23)) > _g4_s19 ? (96u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v24)) > _g4_s20 ? (100u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v25)) > _g4_s21 ? (104u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v26)) > _g4_s22 ? (108u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v27)) > _g4_s23 ? (112u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v28)) > _g4_s24 ? (116u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v29)) > _g4_s25 ? (120u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v30)) > _g4_s26 ? (124u + sizeof(_g4_t_v30)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
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
  grapher::ActorBase::SetArraySize(a1, 4, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Get Out", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Characters", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Teleport", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Out", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Completed", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The character who will get out of the vehicle", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Subject", (int)(uintptr_t)(&v9) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v13 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Subject", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The door from where the character will get out", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Door", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "VehicleDoor.Driver", (int)(uintptr_t)(&v10) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v20);
  v14 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v21, 11, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Door", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v7, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "The character will eject from the vehicle when exiting.", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Force Eject", (int)(uintptr_t)(&v11) + 1);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v24, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Force Eject", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v8, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5EBC0_eac5ebc0  (binary VA: 0xc5ebc0)
// Original: sub_C5EBC0
// ----------------------------------------------------------------------------
int sub_C5EBC0_eac5ebc0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Get Weapon Damage", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Normal", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Melee", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "Out", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 2, v29, 0, -1);
  g4_std::string::Destroy(v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character to get weapon info from", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( DWORD1(v12) != 0 )
    G4_VCALL<void>(DWORD1(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The weapon damage", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Damage", (int)(uintptr_t)(&v10));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Damage", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 2);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The weapon damage info", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Damage Info", (int)(uintptr_t)(&v10) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Damage Info", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 2);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "The weapon damage filter flags", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Damage Filter", (int)(uintptr_t)(&v11) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage Filter", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 2);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5F1A0_eac5f1a0  (binary VA: 0xc5f1a0)
// Original: sub_C5F1A0
// ----------------------------------------------------------------------------
int sub_C5F1A0_eac5f1a0(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[20];
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
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v9)) > _g4_s5 ? (16u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v10)) > _g4_s6 ? (16u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (30u + sizeof(_g4_t_v11)) > _g4_s7 ? (30u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v12)) > _g4_s8 ? (32u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v13)) > _g4_s9 ? (36u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v14)) > _g4_s10 ? (40u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v15)) > _g4_s11 ? (44u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v16)) > _g4_s12 ? (48u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v17)) > _g4_s13 ? (68u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v18)) > _g4_s14 ? (76u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v19)) > _g4_s15 ? (80u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v20)) > _g4_s16 ? (84u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v21)) > _g4_s17 ? (88u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v22)) > _g4_s18 ? (92u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v23)) > _g4_s19 ? (96u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v24)) > _g4_s20 ? (100u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v25)) > _g4_s21 ? (104u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v26)) > _g4_s22 ? (108u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v27)) > _g4_s23 ? (112u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v28)) > _g4_s24 ? (116u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v29)) > _g4_s25 ? (120u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v30)) > _g4_s26 ? (124u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v31)) > _g4_s27 ? (128u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v32)) > _g4_s28 ? (132u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v33)) > _g4_s29 ? (136u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v34)) > _g4_s30 ? (140u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v35)) > _g4_s31 ? (144u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v36)) > _g4_s32 ? (148u + sizeof(_g4_t_v36)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v37)) > _g4_s33 ? (152u + sizeof(_g4_t_v37)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v38)) > _g4_s34 ? (156u + sizeof(_g4_t_v38)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v39)) > _g4_s35 ? (160u + sizeof(_g4_t_v39)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 30u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
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
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 132u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 148u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 152u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 156u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 160u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Go To", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Characters", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Drive", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&off_1B36EC5, (int)(uintptr_t)(v16));
  grapher::ActorBase::AddPin(a1, 1, &v36, 1, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Walk", (int)(uintptr_t)(&v16[1]));
  grapher::ActorBase::AddPin(a1, 2, &v37, 1, -1);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Out", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddPin(a1, 3, &v38, 0, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v39), "Reached", (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::AddPin(a1, 4, v39, 0, -1);
  g4_std::string::Destroy(v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "List of characters which will go to destination.", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v12));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v20, 9, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v5, 1, 1, (int)(uintptr_t)(&v22), 1);
  g4_std::string::Destroy(&v21);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "The destination to go to.", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Destination", (int)(uintptr_t)(&v12) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Destination", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 1);
  g4_std::string::Destroy(&v24);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Can the character react to attacks during the go to.", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "React to attacks", (int)(uintptr_t)(&v13) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "React to attacks", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v8, 1, 0, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Can the character use free running.", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Free running", (int)(uintptr_t)(&v14) + 1);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v29, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Free running", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v30), v9, 1, 0, (int)(uintptr_t)(&v31), 1);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Enable pathfinding for go to.", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Enable pathfinding", (int)(uintptr_t)(&v15));
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v32, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Enable pathfinding", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v33), v10, 1, 0, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5F9A0_eac5f9a0  (binary VA: 0xc5f9a0)
// Original: sub_C5F9A0
// ----------------------------------------------------------------------------
int sub_C5F9A0_eac5f9a0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
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
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v7)) > _g4_s3 ? (20u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v8)) > _g4_s4 ? (20u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v9)) > _g4_s5 ? (20u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v10)) > _g4_s6 ? (32u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v11)) > _g4_s7 ? (36u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v12)) > _g4_s8 ? (40u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v13)) > _g4_s9 ? (44u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v14)) > _g4_s10 ? (48u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v15)) > _g4_s11 ? (64u + sizeof(_g4_t_v15)) : _g4_s11,
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
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
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
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Kill", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Characters", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "In", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v30, 1, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Out", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 1, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "List of characters to kill.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v10) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v14 = v5;
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v18, 9, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v6, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Did the character play his death animation?", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Animated", (int)(uintptr_t)(&v11) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Animated", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v4, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Did the character drop his loot?", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "DropLoot", (int)(uintptr_t)(&v12));
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Drop Loot", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v7, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Animation name. Default played if none specified", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "AnimName", (int)(uintptr_t)(&v12) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 4, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Anim Name", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v9, 1, 0, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v27);
  return ((g4_std::string::Destroy(&v29)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5FFA0_eac5ffa0  (binary VA: 0xc5ffa0)
// Original: sub_C5FFA0
// ----------------------------------------------------------------------------
int sub_C5FFA0_eac5ffa0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Move", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The character to move.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 9, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  return ((g4_std::string::Destroy(&v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C60230_eac60230  (binary VA: 0xc60230)
// Original: sub_C60230
// ----------------------------------------------------------------------------
int sub_C60230_eac60230(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef void *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[20];
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
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48[4];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v7)) > _g4_s2 ? (0u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v9)) > _g4_s4 ? (12u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v10)) > _g4_s5 ? (12u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v11)) > _g4_s6 ? (12u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v12)) > _g4_s7 ? (12u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v13)) > _g4_s8 ? (12u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v14)) > _g4_s9 ? (20u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (31u + sizeof(_g4_t_v15)) > _g4_s10 ? (31u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v16)) > _g4_s11 ? (32u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v17)) > _g4_s12 ? (36u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v18)) > _g4_s13 ? (40u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v19)) > _g4_s14 ? (44u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v20)) > _g4_s15 ? (48u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v21)) > _g4_s16 ? (52u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v22)) > _g4_s17 ? (72u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v23)) > _g4_s18 ? (88u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v24)) > _g4_s19 ? (100u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v25)) > _g4_s20 ? (104u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v26)) > _g4_s21 ? (108u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v27)) > _g4_s22 ? (112u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v28)) > _g4_s23 ? (116u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v29)) > _g4_s24 ? (120u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v30)) > _g4_s25 ? (124u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v31)) > _g4_s26 ? (128u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v32)) > _g4_s27 ? (132u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v33)) > _g4_s28 ? (136u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v34)) > _g4_s29 ? (140u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v35)) > _g4_s30 ? (144u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v36)) > _g4_s31 ? (148u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v37)) > _g4_s32 ? (152u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v38)) > _g4_s33 ? (156u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v39)) > _g4_s34 ? (160u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v40)) > _g4_s35 ? (164u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v41)) > _g4_s36 ? (168u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v42)) > _g4_s37 ? (172u + sizeof(_g4_t_v42)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v43)) > _g4_s38 ? (176u + sizeof(_g4_t_v43)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v44)) > _g4_s39 ? (180u + sizeof(_g4_t_v44)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v45)) > _g4_s40 ? (184u + sizeof(_g4_t_v45)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v46)) > _g4_s41 ? (188u + sizeof(_g4_t_v46)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v47)) > _g4_s42 ? (192u + sizeof(_g4_t_v47)) : _g4_s42,
    _g4_s44 = (196u + sizeof(_g4_t_v48)) > _g4_s43 ? (196u + sizeof(_g4_t_v48)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 100u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Play Anim", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetDisplayName(a1, &v24);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Characters", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetCategoryName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "In", (int)(uintptr_t)(&v21[2]));
  grapher::ActorBase::AddPin(a1, 0, &v47, 1, -1);
  g4_std::string::Destroy(&v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v48), "Out", (int)(uintptr_t)(&v21[3]));
  grapher::ActorBase::AddPin(a1, 1, v48, 0, -1);
  g4_std::string::Destroy(v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "List of characters who will play the animation", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v16) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v21[4] = (uint32_t)(uintptr_t)(v8);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v26, 9, &v21[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Target", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v27), v9, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( *(uint32_t *)&v21[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v21[4] + 44))(*(uint32_t *)&v21[4]);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "The animation name to play", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Animation name", (int)(uintptr_t)(&v17));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v22 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v29, 4, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Animation", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v30), v11, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "The animation id to play", (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Animation id", (int)(uintptr_t)(&v17) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v32, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Animation id", (int)(uintptr_t)(&v18));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v33), v5, 1, 0, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Is the Animation picked randomly in the aniamtion list?", (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Random", (int)(uintptr_t)(&v18) + 2);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v35, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Random", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v36), v6, 1, 0, (int)(uintptr_t)(&v37), 3);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Speed of the animation", (int)(uintptr_t)(&v19) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Speed", (int)(uintptr_t)(&v19) + 1);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v7), (int)(uintptr_t)(&v38), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Speed", (int)(uintptr_t)(&v19) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v39), v7, 1, 0, (int)(uintptr_t)(&v40), 3);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "The generic container for the animation", (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Generic", (int)(uintptr_t)(&v20));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v12 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v23 = v12;
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v41, 4, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Generic", (int)(uintptr_t)(&v20) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v42), v13, 1, 0, (int)(uintptr_t)(&v43), 3);
  g4_std::string::Destroy(&v42);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "The transition time in ms.", (int)(uintptr_t)(&v21[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Transition", (int)(uintptr_t)(&v20) + 3);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v44, 1, 500);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Transition", (int)(uintptr_t)(v21));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v45), v14, 1, 0, (int)(uintptr_t)(&v46), 3);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v44);
  return ((g4_std::string::Destroy(&v46)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C60BB0_eac60bb0  (binary VA: 0xc60bb0)
// Original: sub_C60BB0
// ----------------------------------------------------------------------------
int sub_C60BB0_eac60bb0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Push Out Of Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "AI", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Begin", (int)(uintptr_t)(&v10[1]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "End", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 1, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "The character pushing the occupant out.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Subject", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The occupant vehicle. Deprecated.", (int)(uintptr_t)(v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Vehicle", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C60FF0_eac60ff0  (binary VA: 0xc60ff0)
// Original: sub_C60FF0
// ----------------------------------------------------------------------------
int sub_C60FF0_eac60ff0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Raise Weapon", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Raise", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Lower", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The character raising his weapon.", (int)(uintptr_t)(&v6));
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
// Function: sub_C612D0_eac612d0  (binary VA: 0xc612d0)
// Original: sub_C612D0
// ----------------------------------------------------------------------------
int sub_C612D0_eac612d0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Reload Weapon", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Weapon", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Projectile", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The character reloading his weapon.", (int)(uintptr_t)(&v6));
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
// Function: sub_C615B0_eac615b0  (binary VA: 0xc615b0)
// Original: sub_C615B0
// ----------------------------------------------------------------------------
int sub_C615B0_eac615b0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Request Token", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "AI", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Request", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Relinquish", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Steal", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 3, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "The character requesting the token.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Target", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 9, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Target", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Request melee token instead of combat token.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Melee", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Melee", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 0, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C619D0_eac619d0  (binary VA: 0xc619d0)
// Original: sub_C619D0
// ----------------------------------------------------------------------------
int sub_C619D0_eac619d0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Set Drive Behaviour", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Reckless", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Normal", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The Driver who will have the behavior", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C61D00_eac61d00  (binary VA: 0xc61d00)
// Original: sub_C61D00
// ----------------------------------------------------------------------------
int sub_C61D00_eac61d00(grapher::ActorBase::Self *a1)
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
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set Interaction Preset", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "List of characters to whom apply the preset.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The name of the preset from GIV_interaction_properties.xml.", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Preset", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "InteractionPropertiesPresets", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v17);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 11, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Preset", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C62130_eac62130  (binary VA: 0xc62130)
// Original: sub_C62130
// ----------------------------------------------------------------------------
int sub_C62130_eac62130(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Set In Vehicle", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The character getting in.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Subject", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 9, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  return ((g4_std::string::Destroy(&v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C623C0_eac623c0  (binary VA: 0xc623c0)
// Original: sub_C623C0
// ----------------------------------------------------------------------------
int sub_C623C0_eac623c0(grapher::ActorBase::Self *a1)
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
  typedef uint8_t _g4_t_v12[20];
  typedef uint32_t *_g4_t_v13;
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
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v5)) > _g4_s1 ? (0u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v6)) > _g4_s2 ? (0u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v7)) > _g4_s3 ? (0u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v8)) > _g4_s4 ? (8u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (15u + sizeof(_g4_t_v9)) > _g4_s5 ? (15u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v10)) > _g4_s6 ? (16u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v11)) > _g4_s7 ? (20u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v12)) > _g4_s8 ? (24u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v13)) > _g4_s9 ? (44u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v14)) > _g4_s10 ? (56u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v15)) > _g4_s11 ? (60u + sizeof(_g4_t_v15)) : _g4_s11,
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
    _g4_s23 = (104u + sizeof(_g4_t_v26)) > _g4_s22 ? (104u + sizeof(_g4_t_v26)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Set Monitored Anim", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "AI", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "In", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 0, &v25, 1, -1);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 1, v26, 0, -1);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "The character for the monitored animation.", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v10) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 9, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Subject", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The animation to monitor.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Animation", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 4, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Animation", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Is the animation interruptable?", (int)(uintptr_t)(&v12[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Interruptable", (int)(uintptr_t)(&v11) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Interruptable", (int)(uintptr_t)(v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v8, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  return ((g4_std::string::Destroy(&v24)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C628C0_eac628c0  (binary VA: 0xc628c0)
// Original: sub_C628C0
// ----------------------------------------------------------------------------
int sub_C628C0_eac628c0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set Mood", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "The character that will be in the mood", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Target", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The animation set of the mood", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Animation Set", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 4, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Animation Set", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C62CC0_eac62cc0  (binary VA: 0xc62cc0)
// Original: sub_C62CC0
// ----------------------------------------------------------------------------
int sub_C62CC0_eac62cc0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Set Move Animation", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "AI", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "The character to animate.", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Target", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Target", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "The animation intensity.", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Intensity", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, 1000);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Intensity", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The animation direction.", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Forward", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Forward", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C63140_eac63140  (binary VA: 0xc63140)
// Original: sub_C63140
// ----------------------------------------------------------------------------
int sub_C63140_eac63140(grapher::ActorBase::Self *a1)
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
  typedef void *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef void *_g4_t_v16;
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
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
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
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73[4];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v5)) > _g4_s1 ? (0u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v6)) > _g4_s2 ? (0u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v7)) > _g4_s3 ? (0u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v8)) > _g4_s4 ? (0u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v9)) > _g4_s5 ? (8u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v10)) > _g4_s6 ? (8u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v11)) > _g4_s7 ? (8u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v12)) > _g4_s8 ? (8u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v13)) > _g4_s9 ? (8u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v14)) > _g4_s10 ? (8u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v15)) > _g4_s11 ? (8u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v16)) > _g4_s12 ? (8u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v17)) > _g4_s13 ? (16u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v18)) > _g4_s14 ? (20u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v19)) > _g4_s15 ? (24u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v20)) > _g4_s16 ? (28u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v21)) > _g4_s17 ? (32u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v22)) > _g4_s18 ? (36u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v23)) > _g4_s19 ? (40u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v24)) > _g4_s20 ? (44u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v25)) > _g4_s21 ? (48u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v26)) > _g4_s22 ? (52u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v27)) > _g4_s23 ? (56u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v28)) > _g4_s24 ? (60u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v29)) > _g4_s25 ? (76u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v30)) > _g4_s26 ? (92u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v31)) > _g4_s27 ? (96u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v32)) > _g4_s28 ? (100u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v33)) > _g4_s29 ? (104u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v34)) > _g4_s30 ? (108u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v35)) > _g4_s31 ? (112u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v36)) > _g4_s32 ? (116u + sizeof(_g4_t_v36)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v37)) > _g4_s33 ? (120u + sizeof(_g4_t_v37)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v38)) > _g4_s34 ? (124u + sizeof(_g4_t_v38)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v39)) > _g4_s35 ? (128u + sizeof(_g4_t_v39)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v40)) > _g4_s36 ? (132u + sizeof(_g4_t_v40)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v41)) > _g4_s37 ? (136u + sizeof(_g4_t_v41)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v42)) > _g4_s38 ? (140u + sizeof(_g4_t_v42)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v43)) > _g4_s39 ? (144u + sizeof(_g4_t_v43)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v44)) > _g4_s40 ? (148u + sizeof(_g4_t_v44)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v45)) > _g4_s41 ? (152u + sizeof(_g4_t_v45)) : _g4_s41,
    _g4_s43 = (156u + sizeof(_g4_t_v46)) > _g4_s42 ? (156u + sizeof(_g4_t_v46)) : _g4_s42,
    _g4_s44 = (160u + sizeof(_g4_t_v47)) > _g4_s43 ? (160u + sizeof(_g4_t_v47)) : _g4_s43,
    _g4_s45 = (164u + sizeof(_g4_t_v48)) > _g4_s44 ? (164u + sizeof(_g4_t_v48)) : _g4_s44,
    _g4_s46 = (168u + sizeof(_g4_t_v49)) > _g4_s45 ? (168u + sizeof(_g4_t_v49)) : _g4_s45,
    _g4_s47 = (172u + sizeof(_g4_t_v50)) > _g4_s46 ? (172u + sizeof(_g4_t_v50)) : _g4_s46,
    _g4_s48 = (176u + sizeof(_g4_t_v51)) > _g4_s47 ? (176u + sizeof(_g4_t_v51)) : _g4_s47,
    _g4_s49 = (180u + sizeof(_g4_t_v52)) > _g4_s48 ? (180u + sizeof(_g4_t_v52)) : _g4_s48,
    _g4_s50 = (184u + sizeof(_g4_t_v53)) > _g4_s49 ? (184u + sizeof(_g4_t_v53)) : _g4_s49,
    _g4_s51 = (188u + sizeof(_g4_t_v54)) > _g4_s50 ? (188u + sizeof(_g4_t_v54)) : _g4_s50,
    _g4_s52 = (192u + sizeof(_g4_t_v55)) > _g4_s51 ? (192u + sizeof(_g4_t_v55)) : _g4_s51,
    _g4_s53 = (196u + sizeof(_g4_t_v56)) > _g4_s52 ? (196u + sizeof(_g4_t_v56)) : _g4_s52,
    _g4_s54 = (200u + sizeof(_g4_t_v57)) > _g4_s53 ? (200u + sizeof(_g4_t_v57)) : _g4_s53,
    _g4_s55 = (204u + sizeof(_g4_t_v58)) > _g4_s54 ? (204u + sizeof(_g4_t_v58)) : _g4_s54,
    _g4_s56 = (208u + sizeof(_g4_t_v59)) > _g4_s55 ? (208u + sizeof(_g4_t_v59)) : _g4_s55,
    _g4_s57 = (212u + sizeof(_g4_t_v60)) > _g4_s56 ? (212u + sizeof(_g4_t_v60)) : _g4_s56,
    _g4_s58 = (216u + sizeof(_g4_t_v61)) > _g4_s57 ? (216u + sizeof(_g4_t_v61)) : _g4_s57,
    _g4_s59 = (220u + sizeof(_g4_t_v62)) > _g4_s58 ? (220u + sizeof(_g4_t_v62)) : _g4_s58,
    _g4_s60 = (224u + sizeof(_g4_t_v63)) > _g4_s59 ? (224u + sizeof(_g4_t_v63)) : _g4_s59,
    _g4_s61 = (228u + sizeof(_g4_t_v64)) > _g4_s60 ? (228u + sizeof(_g4_t_v64)) : _g4_s60,
    _g4_s62 = (232u + sizeof(_g4_t_v65)) > _g4_s61 ? (232u + sizeof(_g4_t_v65)) : _g4_s61,
    _g4_s63 = (236u + sizeof(_g4_t_v66)) > _g4_s62 ? (236u + sizeof(_g4_t_v66)) : _g4_s62,
    _g4_s64 = (240u + sizeof(_g4_t_v67)) > _g4_s63 ? (240u + sizeof(_g4_t_v67)) : _g4_s63,
    _g4_s65 = (244u + sizeof(_g4_t_v68)) > _g4_s64 ? (244u + sizeof(_g4_t_v68)) : _g4_s64,
    _g4_s66 = (248u + sizeof(_g4_t_v69)) > _g4_s65 ? (248u + sizeof(_g4_t_v69)) : _g4_s65,
    _g4_s67 = (252u + sizeof(_g4_t_v70)) > _g4_s66 ? (252u + sizeof(_g4_t_v70)) : _g4_s66,
    _g4_s68 = (256u + sizeof(_g4_t_v71)) > _g4_s67 ? (256u + sizeof(_g4_t_v71)) : _g4_s67,
    _g4_s69 = (260u + sizeof(_g4_t_v72)) > _g4_s68 ? (260u + sizeof(_g4_t_v72)) : _g4_s68,
    _g4_s70 = (264u + sizeof(_g4_t_v73)) > _g4_s69 ? (264u + sizeof(_g4_t_v73)) : _g4_s69
  };
  alignas(16) uint8_t _g4_sf[_g4_s70];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 148u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 152u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 156u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 160u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 164u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 168u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 172u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 176u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 180u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 184u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 188u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 192u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 196u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 200u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 204u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 208u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 212u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 216u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 220u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 224u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 228u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 232u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 236u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 240u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 244u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 248u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 252u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 256u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 260u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 264u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 9, 11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Set Path [C]", (int)(uintptr_t)(&v17));
  grapher::ActorBase::SetDisplayName(a1, &v30);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Characters", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v31);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "Drive", (int)(uintptr_t)(&v25) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v65, 1, -1);
  g4_std::string::Destroy(&v65);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), (char *)&off_1B36EC5, (int)(uintptr_t)(&v26));
  grapher::ActorBase::AddPin(a1, 1, &v66, 1, -1);
  g4_std::string::Destroy(&v66);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "Walk", (int)(uintptr_t)(&v26) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v67, 1, -1);
  g4_std::string::Destroy(&v67);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), "Pause", (int)(uintptr_t)(&v26) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v68, 1, -1);
  g4_std::string::Destroy(&v68);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "Clear", (int)(uintptr_t)(&v26) + 3);
  grapher::ActorBase::AddPin(a1, 4, &v69, 1, -1);
  g4_std::string::Destroy(&v69);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "Out", (int)(uintptr_t)(&v27));
  grapher::ActorBase::AddPin(a1, 5, &v70, 0, -1);
  g4_std::string::Destroy(&v70);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "Reached", (int)(uintptr_t)(&v27) + 1);
  grapher::ActorBase::AddPin(a1, 6, &v71, 0, -1);
  g4_std::string::Destroy(&v71);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "Loop Completed", (int)(uintptr_t)(&v27) + 2);
  grapher::ActorBase::AddPin(a1, 7, &v72, 0, -1);
  g4_std::string::Destroy(&v72);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v73), "Paused", (int)(uintptr_t)(&v27) + 3);
  grapher::ActorBase::AddPin(a1, 8, v73, 0, -1);
  g4_std::string::Destroy(v73);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "The character who will follow the path", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Target", (int)(uintptr_t)(&v17) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v28 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v32, 9, &v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Target", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v33), v5, 1, 1, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  if ( v28 != nullptr )
    G4_VCALL<void>(v28, 44);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "The path the character will follow", (int)(uintptr_t)(&v18) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Path", (int)(uintptr_t)(&v18) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v29 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v35, 9, &v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Path", (int)(uintptr_t)(&v18) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v36), v7, 1, 1, (int)(uintptr_t)(&v37), 1);
  g4_std::string::Destroy(&v36);
  if ( v29 != nullptr )
    G4_VCALL<void>(v29, 44);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Is the character will loop on this path?", (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Loop", (int)(uintptr_t)(&v19));
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v38, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Loop", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v39), v9, 1, 0, (int)(uintptr_t)(&v40), 1);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "How many loops will the character do (-1: infinite, 0: none, 1: once, ...", (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Remaining Loops", (int)(uintptr_t)(&v19) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v41, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Remaining Loops", (int)(uintptr_t)(&v20));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v42), v10, 1, 0, (int)(uintptr_t)(&v43), 1);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Is this a combat Path?", (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Combat", (int)(uintptr_t)(&v20) + 2);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v44, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Combat", (int)(uintptr_t)(&v20) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v45), v11, 1, 0, (int)(uintptr_t)(&v46), 1);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v46);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Is the character will back tracking the path at the end", (int)(uintptr_t)(&v21) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Reverse", (int)(uintptr_t)(&v21) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v47, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "Reverse", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v48), v12, 1, 0, (int)(uintptr_t)(&v49), 1);
  g4_std::string::Destroy(&v48);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v49);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "How many time the character will stop at the end of the path", (int)(uintptr_t)(&v22) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "WaitTimer", (int)(uintptr_t)(&v22));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v50, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Wait Timer", (int)(uintptr_t)(&v22) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v51), v8, 1, 0, (int)(uintptr_t)(&v52), 1);
  g4_std::string::Destroy(&v51);
  g4_std::string::Destroy(&v50);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "The character will follow the path from the start point", (int)(uintptr_t)(&v23) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "Reset when triggered", (int)(uintptr_t)(&v22) + 3);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v53, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "Reset when triggered", (int)(uintptr_t)(&v23));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v54), v13, 1, 0, (int)(uintptr_t)(&v55), 1);
  g4_std::string::Destroy(&v54);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v55);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Random offset from the current waypoint in cm", (int)(uintptr_t)(&v24));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Distance Tolerance", (int)(uintptr_t)(&v23) + 2);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v56, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Distance Tolerance", (int)(uintptr_t)(&v23) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v57), v14, 1, 0, (int)(uintptr_t)(&v58), 1);
  g4_std::string::Destroy(&v57);
  g4_std::string::Destroy(&v56);
  g4_std::string::Destroy(&v58);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "Can the character use free running.", (int)(uintptr_t)(&v24) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Free running", (int)(uintptr_t)(&v24) + 1);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v59, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Free running", (int)(uintptr_t)(&v24) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 9, (int)(uintptr_t)(&v60), v15, 1, 0, (int)(uintptr_t)(&v61), 1);
  g4_std::string::Destroy(&v60);
  g4_std::string::Destroy(&v59);
  g4_std::string::Destroy(&v61);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "Starting waypoint index [0-pathEnd[.", (int)(uintptr_t)(&v25) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "Start waypoint", (int)(uintptr_t)(&v25));
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v62, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "Start waypoint", (int)(uintptr_t)(&v25) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 10, (int)(uintptr_t)(&v63), v16, 1, 0, (int)(uintptr_t)(&v64), 1);
  g4_std::string::Destroy(&v63);
  g4_std::string::Destroy(&v62);
  return ((g4_std::string::Destroy(&v64)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C64080_eac64080  (binary VA: 0xc64080)
// Original: sub_C64080
// ----------------------------------------------------------------------------
int sub_C64080_eac64080(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Set Path Destination", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "AI", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "The character who will follow the path", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Subject", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Is the path interrupted?", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Interrupted", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Interrupted", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C64410_eac64410  (binary VA: 0xc64410)
// Original: sub_C64410
// ----------------------------------------------------------------------------
int sub_C64410_eac64410(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Set Destination", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "AI", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "In", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v30, 1, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Out", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 1, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The character setting his destination.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Subject", (int)(uintptr_t)(&v10) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v14 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v18, 9, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Subject", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v5, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The wanted destination.", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v11) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v21, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Target", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v7, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "If it's a random destination.", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Random", (int)(uintptr_t)(&v12));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Random", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v8, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "If the subject should be fleeing away from the threat.", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Flee threat", (int)(uintptr_t)(&v12) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Flee threat", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v9, 1, 0, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  return ((g4_std::string::Destroy(&v29)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C64A20_eac64a20  (binary VA: 0xc64a20)
// Original: sub_C64A20
// ----------------------------------------------------------------------------
int sub_C64A20_eac64a20(grapher::ActorBase::Self *a1)
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
  typedef uint8_t _g4_t_v12[20];
  typedef uint32_t *_g4_t_v13;
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
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v6)) > _g4_s2 ? (4u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v7)) > _g4_s3 ? (4u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v8)) > _g4_s4 ? (12u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v9)) > _g4_s5 ? (17u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v10)) > _g4_s6 ? (20u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v11)) > _g4_s7 ? (24u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v12)) > _g4_s8 ? (28u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v13)) > _g4_s9 ? (48u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v14)) > _g4_s10 ? (52u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v15)) > _g4_s11 ? (56u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v16)) > _g4_s12 ? (60u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v17)) > _g4_s13 ? (64u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v18)) > _g4_s14 ? (68u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v19)) > _g4_s15 ? (72u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v20)) > _g4_s16 ? (76u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v21)) > _g4_s17 ? (80u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v22)) > _g4_s18 ? (84u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v23)) > _g4_s19 ? (88u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v24)) > _g4_s20 ? (92u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v25)) > _g4_s21 ? (96u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v26)) > _g4_s22 ? (100u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v27)) > _g4_s23 ? (104u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v28)) > _g4_s24 ? (108u + sizeof(_g4_t_v28)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 17u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
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
  grapher::ActorBase::SetArraySize(a1, 3, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Set Weapon", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Objects", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Give", (int)(uintptr_t)(&v12[1]));
  grapher::ActorBase::AddPin(a1, 0, &v26, 1, -1);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Remove", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 1, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 2, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v18),
    "The character who will receive the weapon. / The vehicle which will equip the weapon (available weapons are specifie"
    "d in the vehicle's primitive).",
    (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v9) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 9, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Target", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Which weapon to equip from stock_items.xml.", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Weapon Type", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v19);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v20, 11, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Weapon Oid", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v21), v7, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "How much clips to give, -1 for unlimited/all.", (int)(uintptr_t)(v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Clips", (int)(uintptr_t)(&v11) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v23, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Clips", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v24), v8, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  return ((g4_std::string::Destroy(&v25)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C64F90_eac64f90  (binary VA: 0xc64f90)
// Original: sub_C64F90
// ----------------------------------------------------------------------------
int sub_C64F90_eac64f90(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (25u + sizeof(_g4_t_v4)) > _g4_s2 ? (25u + sizeof(_g4_t_v4)) : _g4_s2,
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
    _g4_s16 = (76u + sizeof(_g4_t_v17)) > _g4_s15 ? (76u + sizeof(_g4_t_v17)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 25u);
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Lock Wanted Level", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Characters", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Lock", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Unlock", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The wanted wanted level to stick", (int)(uintptr_t)(&v5) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "WantedLevel", (int)(uintptr_t)(&v4) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "W. Level", (int)(uintptr_t)(&v5));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "How many time the wanted level set is on", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "LockTime", (int)(uintptr_t)(&v5) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Lock Time", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  return ((g4_std::string::Destroy(&v14)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C652F0_eac652f0  (binary VA: 0xc652f0)
// Original: sub_C652F0
// ----------------------------------------------------------------------------
int sub_C652F0_eac652f0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Melee", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "AI", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Reset", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Reset combo", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Combo", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Combo", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 0, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C65520_eac65520  (binary VA: 0xc65520)
// Original: sub_C65520
// ----------------------------------------------------------------------------
int sub_C65520_eac65520(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        G4_VCALL<void>(v4, 660, 0, 1);
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C655E0_eac655e0  (binary VA: 0xc655e0)
// Original: sub_C655E0
// ----------------------------------------------------------------------------
int sub_C655E0_eac655e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        switch ( a2 )
        {
          case 1:
            sub_9B7760((uint32_t *)v4, 0);
            break;
          case 2:
            sub_9B7760((uint32_t *)v4, (*(uint8_t *)(v4 + 1873) & 2) == 0);
            break;
          case 0:
            sub_9B7760((uint32_t *)v4, 1);
            break;
          default:
            break;
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C656C0_eac656c0  (binary VA: 0xc656c0)
// Original: sub_C656C0
// ----------------------------------------------------------------------------
int sub_C656C0_eac656c0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int *v4;
  int *v5;
  int v7;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = (int *)v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        if ( a2 == 0 && (uint8_t)sub_9C8160((int)(uintptr_t)(v4)) != 0 )
        {
          v7 = G4_VCALL<int>(v4, 428);
          if ( v7 != 0 )
            sub_5B2B10(v7, v4[283]);
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C65790_eac65790  (binary VA: 0xc65790)
// Original: sub_C65790
// ----------------------------------------------------------------------------
int sub_C65790_eac65790(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint32_t *v4;
  int *v5;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = (uint32_t *)v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        if ( a2 != 0 )
        {
          if ( a2 == 1 && (uint8_t)sub_987F30(v4) == 0 )
            G4_VCALL<void>(v4, 464, 1);
        }
        else
        {
          sub_9D6B10((int)(uintptr_t)(v4));
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C65850_eac65850  (binary VA: 0xc65850)
// Original: sub_C65850
// ----------------------------------------------------------------------------
int sub_C65850_eac65850(__m128i a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int v4;
  uint32_t *v5;
  int *v6;
  int64_t v8;

  v4 = sub_857260(a2, 0, (int)(uintptr_t)(a4));
  v5 = (uint32_t *)v4;
  if ( v4 != 0 )
  {
    v6 = (int *)G4_VCALL<int>(v4, 16);
    if ( v6 != nullptr )
    {
      if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        sub_9C5DF0(a1, v5);
        if ( !sub_985ED0((int)(uintptr_t)(v5)) )
        {
          LODWORD(v8) = (uint32_t)(uintptr_t)(v5);
          HIDWORD(v8) = (uint32_t)(uintptr_t)(v5 + 291);
          sub_980500(v8);
        }
      }
      else
      {
        while ( 1 )
        {
          v6 = (int *)v6[1];
          if ( v6 == nullptr )
            break;
          if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C65910_eac65910  (binary VA: 0xc65910)
// Original: sub_C65910
// ----------------------------------------------------------------------------
int sub_C65910_eac65910(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  bool v6;
  int v7;
  int v8;
  int result;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  v6 = G4_VCALL<int>(v4, 456) == 0;
  v7 = *(uint32_t *)(v4 + 1876);
  v8 = *(uint32_t *)(v4 + 1872);
  if ( !v6 && (v8 & 0x100) != 0 )
  {
    if ( v8 < 0 || (v7 & 1) != 0 || (v7 & 4) == 0 )
      goto LABEL_20;
  }
  else if ( v8 < 0 || (v7 & 1) != 0 )
  {
    goto LABEL_20;
  }
  if ( (v7 & 4) == 0 && (v7 & 8) == 0 && *(uint8_t *)(v4 + 3198) == 0 )
    goto LABEL_15;
LABEL_20:
  result = G4_VCALL<int>(v4, 208);
  if ( (uint8_t)result != 0 )
  {
LABEL_15:
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C65A00_eac65a00  (binary VA: 0xc65a00)
// Original: sub_C65A00
// ----------------------------------------------------------------------------
int sub_C65A00_eac65a00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v9;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  v6 = sub_857260(a1, 1, (int)(uintptr_t)(a3));
  if ( v6 != 0 )
  {
    v7 = (int *)G4_VCALL<int>(v6, 16);
    if ( v7 != nullptr )
    {
      if ( v7 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_15:
        if ( v4 != 0 )
        {
          if ( *(uint8_t *)(v4 + 3195) != 0 )
          {
            if ( (lrand48() & 1) != 0 )
              sub_9D4450(v4, 86, 1065353216, 125, 0, 0);
            else
              sub_9D4450(v4, 85, 1065353216, 125, 0, 0);
          }
          else
          {
            v9 = *(uint32_t *)(v4 + 4148);
            if ( v9 != -1 )
              sub_9FFF40(v4, v9, 4, 1, 1);
            *(uint32_t *)(v4 + 4148) = -1;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (int *)v7[1];
          if ( v7 == nullptr )
            break;
          if ( v7 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_15;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C65B60_eac65b60  (binary VA: 0xc65b60)
// Original: sub_C65B60
// ----------------------------------------------------------------------------
int sub_C65B60_eac65b60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  v6 = sub_857260(a1, 1, (int)(uintptr_t)(a3));
  if ( v6 != 0 )
  {
    v7 = (int *)G4_VCALL<int>(v6, 16);
    if ( v7 != nullptr )
    {
      if ( v7 == (int *)(uintptr_t)(&dword_20D68D0) )
      {
LABEL_15:
        if ( v4 != 0 )
        {
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
              G4_VCALL<void>(v4, 656);
          }
          else
          {
            G4_VCALL<void>(v4, 652);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (int *)v7[1];
          if ( v7 == nullptr )
            break;
          if ( v7 == (int *)(uintptr_t)(&dword_20D68D0) )
            goto LABEL_15;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C65C50_eac65c50  (binary VA: 0xc65c50)
// Original: sub_C65C50
// ----------------------------------------------------------------------------
void sub_C65C50_eac65c50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  grapher::ActorContext::Self *v6;
  grapher::ActorVariable::Self *Variable;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  grapher::HolderT<int> *v14;
  g4_cxa_guard_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int *v23;
  int v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  void (***v28)(uint32_t, uint32_t *);
  void (***v29)(uint32_t, uint32_t *);
  grapher::HolderT<int> *v30;
  int v31;
  int v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int *_g4_t_v36;
  typedef int *_g4_t_v37;
  typedef uint32_t *_g4_t_i;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42[3];
  typedef const char *_g4_t_v43;
  typedef const char *_g4_t_v44[4];
  typedef uint32_t _g4_t_v45[4];
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t _g4_t_v48[5];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v34)) > _g4_s1 ? (40u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v35)) > _g4_s2 ? (40u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v36)) > _g4_s3 ? (44u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v37)) > _g4_s4 ? (44u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_i)) > _g4_s5 ? (48u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v39)) > _g4_s6 ? (52u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v40)) > _g4_s7 ? (56u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v41)) > _g4_s8 ? (56u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v42)) > _g4_s9 ? (64u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v43)) > _g4_s10 ? (76u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v44)) > _g4_s11 ? (80u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v45)) > _g4_s12 ? (96u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v46)) > _g4_s13 ? (112u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v47)) > _g4_s14 ? (116u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v48)) > _g4_s15 ? (120u + sizeof(_g4_t_v48)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);

  v48[0] = (uint32_t)(uintptr_t)(v48);
  v48[1] = (uint32_t)(uintptr_t)(v48);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v48), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (uint32_t *)v48[0];
  for ( i = (uint32_t *)v48[0]; i != v48; i = (uint32_t *)*i )
  {
    v4 = v3[2];
    if ( v4 != 0 && *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) != 0 )
    {
      v5 = *(uint32_t *)(v4 + 404);
      if ( v5 != 0 && (G4_VCALL<int>(v5, 32) & 2) != 0 )
      {
        v39 = v3[2];
        if ( v39 != 0 )
        {
          v6 = a3;
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
          if ( a3 == nullptr )
          {
            v6 = (grapher::ActorContext::Self *)&unk_20D6720;
            if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
            {
              grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
              __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
            }
          }
          grapher::ActorContext::LoadAVar(v6, Variable);
          if ( *((uint32_t *)Variable + 2) == 12 )
          {
            v42[0] = (int)(uintptr_t)(&dword_213B814);
            v8 = *((uint32_t *)Variable + 1);
            if ( v8 != 0 )
              (*(void (**)(uint32_t, int *))(*(uint32_t *)v8 + 32))(*((uint32_t *)Variable + 1), v42);
            v9 = sub_1938090((int)(uintptr_t)(v42), "..", 0, 2u);
            v10 = v9;
            if ( v9 == -1 )
            {
              v47 = 0;
              v30 = (grapher::HolderT<int> *)gll_operator_new(
                                               8u,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                               102);
              *(uint32_t *)v30 = (uint32_t)(uintptr_t)(&off_205C508);
              grapher::HolderT_int_id_fe4c74::From(v30, &v47);
              (**(void (***)(grapher::HolderT<int> *, uint32_t *))v30)(v30, v45);
              v15 = (g4_cxa_guard_t *)v45[0];
              G4_VCALL<void>(v30, 44);
            }
            else
            {
              sub_193A6F0(&v43, v42, 0, v9);
              if ( (unsigned int)(v10 + 2) > *(uint32_t *)(v42[0] - 12) )
                sub_1900210("basic_string::substr");
              sub_193A6F0(v44, v42, v10 + 2, -1);
              v11 = atoi(v43);
              v12 = atoi(v44[0]);
              v13 = v12;
              if ( v11 > v12 )
              {
                v13 = v11;
                v11 = v12;
              }
              v46 = v11 + lrand48() % (v13 - v11 + 1);
              v14 = (grapher::HolderT<int> *)gll_operator_new(
                                               8u,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                               102);
              *(uint32_t *)v14 = (uint32_t)(uintptr_t)(&off_205C508);
              grapher::HolderT_int_id_fe4c74::From(v14, &v46);
              (**(void (***)(grapher::HolderT<int> *, uint32_t *))v14)(v14, v45);
              v15 = (g4_cxa_guard_t *)v45[0];
              G4_VCALL<void>(v14, 44);
              g4_std::string::Destroy(v44);
              g4_std::string::Destroy(&v43);
            }
            g4_std::string::Destroy(v42);
          }
          else if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v33) == 0
                 && *((uint32_t *)Variable + 2) == 11 )
          {
            v31 = *((uint32_t *)Variable + 1);
            v32 = 0;
            if ( v31 != 0 )
              v32 = G4_VCALL<int>(v31, 48);
            v44[0] = (const char *)&dword_213B814;
            if ( v32 != 0 )
            {
              G4_VCALL<void>(v32, 32, v44);
              G4_VCALL<void>(v32, 44);
            }
            v15 = sub_C5BDB0(v44);
            g4_std::string::Destroy(v44);
          }
          else
          {
            v27 = *((uint32_t *)Variable + 1);
            if ( v27 != 0
              && (v28 = (void (***)(uint32_t, uint32_t *))(*(int (**)(uint32_t))(*(uint32_t *)v27 + 48))(*((uint32_t *)Variable + 1)),
                  v29 = v28,
                  v28 != nullptr) )
            {
              (**v28)((uint32_t)(uintptr_t)(v28), v45);
              v15 = (g4_cxa_guard_t *)v45[0];
              ((void (*)(void (***)(uint32_t, uint32_t *)))(*v29)[11])(v29);
            }
            else
            {
              v15 = (g4_cxa_guard_t *)v45[0];
            }
          }
          if ( (int)(uintptr_t)(v15) >= 0 )
          {
            v16 = 24 * (uint32_t)(uintptr_t)(v15);
            v17 = dword_20D9E30;
            v18 = dword_20D9E30 + 24 * (uint32_t)(uintptr_t)(v15);
            v40 = *(uint32_t *)(v18 + 12);
            if ( v40 > 0 )
            {
              v19 = 0;
              v20 = (int *)(&dword_20D7600);
              v34 = v16;
              while ( 1 )
              {
                v21 = *(uint32_t *)(*(uint32_t *)(v17 + v16 + 8) + 4 * v19++);
                v36 = v20;
                (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(*v20 + 4 * v21) + 8))(
                  *(uint32_t *)(*v20 + 4 * v21),
                  v39,
                  0);
                v20 = v36;
                if ( v40 == v19 )
                  break;
                v16 = v34;
                v17 = dword_20D9E30;
              }
              v16 = v34;
              v17 = dword_20D9E30;
              v18 = dword_20D9E30 + v34;
            }
            v41 = *(uint32_t *)(v18 + 20);
            if ( v41 > 0 )
            {
              v22 = 0;
              v23 = (int *)(&dword_20D7600);
              v35 = v16;
              while ( 1 )
              {
                v24 = *(uint32_t *)(*(uint32_t *)(v17 + v16 + 16) + 4 * v22++);
                v37 = v23;
                (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v23 + 4 * v24) + 8))(
                  *(uint32_t *)(*v23 + 4 * v24),
                  v39,
                  1);
                v23 = v37;
                if ( v41 == v22 )
                  break;
                v16 = v35;
                v17 = dword_20D9E30;
              }
            }
          }
        }
      }
    }
    v3 = (uint32_t *)*i;
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v25 = (uint32_t *)v48[0];
  if ( (uint32_t *)v48[0] != v48 )
  {
    while ( 1 )
    {
      v26 = (uint32_t *)*v25;
      opDelete(v25);
      if ( v26 == v48 )
        break;
      v25 = v26;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C66180_eac66180  (binary VA: 0xc66180)
// Original: sub_C66180
// ----------------------------------------------------------------------------
int * sub_C66180_eac66180(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int *result;
  int *v7;
  bool v8;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  result = (int *)sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v7 = result;
  if ( result == nullptr || (result = (int *)G4_VCALL<int>(result, 16)) == nullptr )
  {
LABEL_14:
    v8 = false;
    goto LABEL_15;
  }
  while ( result != (int *)(uintptr_t)(&dword_20D68D0) )
  {
    result = (int *)result[1];
    if ( result == nullptr )
      goto LABEL_14;
  }
  v8 = false;
  if ( v4 != 0 )
  {
    result = (int *)G4_VCALL<int>(v4, 456);
    v8 = false;
    if ( result == v7 )
    {
      result = (int *)sub_5EC9B0((uint32_t *)v4);
      v8 = true;
      if ( (uint8_t)(uintptr_t)(result) == 0 )
      {
        result = (int *)G4_VCALL<int>(v4, 456);
        v8 = false;
        if ( result != nullptr )
          v8 = (*(uint8_t *)(v4 + 1873) & 8) != 0;
      }
    }
  }
LABEL_15:
  if ( *((uint8_t *)a1 + 53) != 0 && v8 )
  {
    G4_VCALL<void>(a1, 28, a3);
    result = (int *)grapher::ActorBase::FireEvent(a1, 3, a3);
  }
  if ( *((uint8_t *)a1 + 52) != 0 )
  {
    *((uint8_t *)a1 + 52) = 0;
  }
  else if ( *((uint8_t *)a1 + 53) == 0 )
  {
    *((uint8_t *)a1 + 53) = 1;
    return (int *)grapher::ActorBase::FireEvent(a1, 2, a3);
  }
  return result;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterFlinch::ActorGameCharacterFlinch(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterFollow::ActorGameCharacterFollow(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterCoverObject::ActorGameCharacterCoverObject(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterGetIn::ActorGameCharacterGetIn(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterGetOut::ActorGameCharacterGetOut(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterGetWeaponDamage::ActorGameCharacterGetWeaponDamage(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterKill::ActorGameCharacterKill(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterLockWantedLevel::ActorGameCharacterLockWantedLevel(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterMelee::ActorGameCharacterMelee(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterMeleeAttack::ActorGameCharacterMeleeAttack(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterMove::ActorGameCharacterMove(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterPlayAnim::ActorGameCharacterPlayAnim(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterProstrate::ActorGameCharacterProstrate(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterPushOutOfVehicle::ActorGameCharacterPushOutOfVehicle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterRaiseWeapon::ActorGameCharacterRaiseWeapon(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterReloadWeapon::ActorGameCharacterReloadWeapon(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterRequestToken::ActorGameCharacterRequestToken(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetDriveBehaviour::ActorGameCharacterSetDriveBehaviour(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetInteractionPreset::ActorGameCharacterSetInteractionPreset(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetInVehicle::ActorGameCharacterSetInVehicle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetMonitoredAnim::ActorGameCharacterSetMonitoredAnim(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetMood::ActorGameCharacterSetMood(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetMoveAnimation::ActorGameCharacterSetMoveAnimation(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetPathDestination::ActorGameCharacterSetPathDestination(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetRandomDestination::ActorGameCharacterSetRandomDestination(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetWeapon::ActorGameCharacterSetWeapon(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_C669A0_eac669a0  (binary VA: 0xc669a0)
// Original: sub_C669A0
// ----------------------------------------------------------------------------
int sub_C669A0_eac669a0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  char v15;
  char v16;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        if ( G4_VCALL<int>(v4, 428) != 0 )
        {
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
            {
              v15 = sub_987310(v4, 4096);
              v16 = sub_97FD30(v4);
              v11 = (int *)G4_VCALL<int>(v4, 428);
              v12 = sub_5B20C0(v11, v16, v15);
              sub_836F40(a1, 1, v12, a3);
              v13 = G4_VCALL<int>(v4, 428);
              sub_836F40(a1, 2, *(uint32_t *)(v13 + 616), a3);
              v14 = G4_VCALL<int>(v4, 428);
              sub_836F40(a1, 3, *(uint32_t *)(v14 + 604), a3);
            }
          }
          else
          {
            v7 = G4_VCALL<int>(v4, 428);
            v8 = sub_5B2200(v7);
            sub_836F40(a1, 1, v8, a3);
            v9 = G4_VCALL<int>(v4, 428);
            sub_836F40(a1, 2, *(uint32_t *)(v9 + 608), a3);
            v10 = G4_VCALL<int>(v4, 428);
            sub_836F40(a1, 3, *(uint32_t *)(v10 + 596), a3);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterGoTo::ActorGameCharacterGoTo(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetPath::Destroy_eac66bd0  (binary VA: 0xc66bd0)
// Original: ActorGameCharacterSetPath::~ActorGameCharacterSetPath
// ----------------------------------------------------------------------------
void ActorGameCharacterSetPath::Destroy_eac66bd0(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D228);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  *((uint32_t *)a1 + 14) = 0;
  ActorGameBase::Destroy(a1);
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSetPath::ActorGameCharacterSetPath(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGoTo::Destroy_eac66c80  (binary VA: 0xc66c80)
// Original: ActorGameCharacterGoTo::~ActorGameCharacterGoTo
// ----------------------------------------------------------------------------
void ActorGameCharacterGoTo::Destroy_eac66c80(grapher::ActorBase::Self *a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDA8);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  v2 = *((uint32_t *)a1 + 13);
  *((uint32_t *)a1 + 14) = 0;
  if ( v2 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v2 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C66CF0_eac66cf0  (binary VA: 0xc66cf0)
// Original: sub_C66CF0
// ----------------------------------------------------------------------------
void sub_C66CF0_eac66cf0(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D228);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  *((uint32_t *)a1 + 14) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C66D50_eac66d50  (binary VA: 0xc66d50)
// Original: sub_C66D50
// ----------------------------------------------------------------------------
void sub_C66D50_eac66d50(grapher::ActorBase::Self *a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDA8);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  v2 = *((uint32_t *)a1 + 13);
  *((uint32_t *)a1 + 14) = 0;
  if ( v2 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v2 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C67340_eac66dd0  (binary VA: 0xc66dd0)
// Original: sub_C67340
// ----------------------------------------------------------------------------
int sub_C67340_eac66dd0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  int v11;
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
  char v23;
  char v24;
  int v25;
  grapher::ActorContext::Self *v26;
  uint32_t v27[4];
  uint32_t v28[4];
  uint8_t v29[12];
  uint8_t v30[12];
  int v31;
  int v32;
  int v33;
  int v34;
  uint8_t v35[12];
  uint32_t v36[9];

  v36[5] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v26 = a3;
  v4 = sub_857260(a1, 0, a3);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = (int *)G4_VCALL<int>(v4, 16);
    if ( v6 != nullptr )
    {
      if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v6 = (int *)v6[1];
        if ( v6 == nullptr )
          break;
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v5 = 0;
LABEL_8:
  v7 = sub_857260(v3, 1, v26);
  v25 = v7;
  if ( v7 != 0 )
  {
    v8 = (int *)G4_VCALL<int>(v7, 16);
    if ( v8 != nullptr )
    {
      if ( v8 == (int *)(uintptr_t)(&dword_20DE814) )
        goto LABEL_15;
      while ( 1 )
      {
        v8 = (int *)v8[1];
        if ( v8 == nullptr )
          break;
        if ( v8 == (int *)(uintptr_t)(&dword_20DE814) )
          goto LABEL_15;
      }
    }
  }
  v25 = 0;
LABEL_15:
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
  v24 = sub_837730(v3, Variable, v26);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
  v23 = sub_837730(v3, v10, v26);
  if ( v5 != 0
    && (uint8_t)sub_986060(v5) == 0
    && ((unsigned int)(*(uint32_t *)(v5 + 4296) - 2) <= 2
     || (v11 = *(uint32_t *)(v5 + 4280)) == 0
     || *(uint32_t *)(v11 + 532) - *(uint32_t *)(v11 + 528) <= 19) )
  {
    if ( (uint8_t)sub_97EBD0(v5) != 0
      && (G4_VCALL<int>(v5, 456) == 0
       || (v17 = *(uint32_t *)(v5 + 1872), v18 = *(uint32_t *)(v5 + 1876), (v17 & 0x100) == 0)
       || v17 < 0
       || (v18 & 1) != 0
       || (v18 & 4) != 0) )
    {
      (*(void (**)(uint8_t *))(*(uint32_t *)v5 + 52))(v29);
      sub_9BBB00(v30);
      sub_9B4460(v5, v30, 0, 100, 0, 3);
    }
    else if ( v25 != 0
           || G4_VCALL<int>(v5, 116, 136) == 0
           || (*(uint8_t *)(v5 + 1875) & 0x10) != 0 )
    {
      if ( v23 != 0 && dword_20D75D0 != 0 )
      {
        (*(void (**)(int *, int))(*(uint32_t *)dword_20D75D0 + 52))(&v32, dword_20D75D0);
        (*(void (**)(int *))(*(uint32_t *)v5 + 52))(&v31);
        if ( G4_VCALL<int>(v5, 456) == 0
          || (v19 = *(uint32_t *)(v5 + 1872), v20 = *(uint32_t *)(v5 + 1876), (v19 & 0x100) == 0)
          || v19 < 0
          || (v20 & 1) != 0
          || (v20 & 4) != 0 )
        {
          G4_VCALL<void>(v5, 456);
        }
        (*(void (**)(int *, int))(*(uint32_t *)dword_20D75D0 + 52))(&v33, dword_20D75D0);
        if ( G4_VCALL<int>(v5, 456) == 0
          || (v21 = *(uint32_t *)(v5 + 1872), v22 = *(uint32_t *)(v5 + 1876), (v21 & 0x100) == 0)
          || v21 < 0
          || (v22 & 1) != 0
          || (v22 & 4) != 0 )
        {
          G4_VCALL<void>(v5, 456);
        }
      }
      else
      {
        (*(void (**)(int *, int))(*(uint32_t *)v5 + 52))(&v34, v5);
        if ( G4_VCALL<int>(v5, 456) != 0
          && (v13 = *(uint32_t *)(v5 + 1872), v14 = *(uint32_t *)(v5 + 1876), (v13 & 0x100) != 0)
          && v13 >= 0
          && (v14 & 1) == 0
          && (v14 & 4) == 0
          || G4_VCALL<int>(v5, 456) != 0 && ((v13 = *(uint32_t *)(v5 + 1872)) & 0x800) != 0 )
        {
          if ( (v13 & 0x800000) != 0 )
            lrand48();
        }
      }
      if ( (G4_VCALL<int>(v5, 456) != 0
         && (v15 = *(uint32_t *)(v5 + 1872), v16 = *(uint32_t *)(v5 + 1876), (v15 & 0x100) != 0)
         && v15 >= 0
         && (v16 & 1) == 0
         && (v16 & 4) == 0
         || G4_VCALL<int>(v5, 456) != 0 && ((v15 = *(uint32_t *)(v5 + 1872)) & 0x800) != 0)
        && (v15 & 0x800000) != 0 )
      {
        if ( v25 != 0 && v23 == 0 )
        {
          (*(void (**)(uint8_t *))(*(uint32_t *)v25 + 52))(v35);
          sub_9B4460(v5, v35, 3, 500, 0, 4);
        }
        else
        {
          if ( v24 != 0 )
            sub_9BBB00(v27);
          else
            memset(v27, 0, 12);
          sub_9B4460(v5, v27, 1, 500, 1, 2);
        }
      }
      else if ( v25 != 0 )
      {
        (*(void (**)(uint32_t *))(*(uint32_t *)v25 + 52))(v36);
        sub_9B4460(v5, v36, 0, 100, 0, 2);
      }
      else
      {
        if ( v24 != 0 )
          sub_9BBB00(v28);
        else
          memset(v28, 0, 12);
        sub_9B4460(v5, v28, 0, 100, 0, 2);
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v26));
}

// ----------------------------------------------------------------------------
// Function: sub_C67BA0_eac67ba0  (binary VA: 0xc67ba0)
// Original: sub_C67BA0
// ----------------------------------------------------------------------------
int sub_C67BA0_eac67ba0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837730((int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, v12, v13, v14, v15);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v8, a3, v9, v10, v11, v12, v13, v14, v15) != 0 )
    sub_9B7730(v4);
  else
    sub_9B7550(v4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C67C80_eac67c80  (binary VA: 0xc67c80)
// Original: sub_C67C80
// ----------------------------------------------------------------------------
int sub_C67C80_eac67c80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint32_t *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  int v14;
  char v15;
  int v16;
  int v17;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = (uint32_t *)v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837730((int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, v12, v14, v16, v17);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v13 = sub_837730((int)(uintptr_t)(a1), v8, a3, v9, v10, v11, v12, v14, v16, v17);
  if ( a2 == 1 )
  {
    if ( v13 != 0 )
      sub_9ABCF0(v4);
    else
      sub_9AA950(v4);
  }
  else
  {
    if ( a2 == 2 )
    {
      v15 = 1;
    }
    else
    {
      v15 = 0;
      if ( a2 != 0 )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
    }
    if ( !sub_97FD50((int)(uintptr_t)(v4)) )
    {
      if ( v13 != 0 )
        sub_9AB7E0((int)(uintptr_t)(v4), v15);
      else
        sub_9A9DA0((int)(uintptr_t)(v4));
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C67DD0_eac67dd0  (binary VA: 0xc67dd0)
// Original: sub_C67DD0
// ----------------------------------------------------------------------------
int sub_C67DD0_eac67dd0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  grapher::ActorVariable::Self *Variable;
  char v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int *_g4_t_v10;
  typedef g4_cxa_guard_t *_g4_t_v11;
  typedef g4_cxa_guard_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v12)) > _g4_s5 ? (28u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v13)) > _g4_s6 ? (32u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v14)) > _g4_s7 ? (36u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v15)) > _g4_s8 ? (43u + sizeof(_g4_t_v15)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 43u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15) + 1, "Subject", (int)(uintptr_t)(v15));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    v10 = (int *)(&dword_20D4A60);
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v11 = (g4_cxa_guard_t *)sub_5B44E0((int)(uintptr_t)(v3), (int)(uintptr_t)(v15) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)v15 + 1);
  if ( v11 != nullptr )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v5 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v7, v8, v9, (int)(uintptr_t)(v10), (int)(uintptr_t)(v11), v13, v14);
    sub_9832E0((int)(uintptr_t)(v12), v5);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C68010_eac67f20  (binary VA: 0xc67f20)
// Original: sub_C68010
// ----------------------------------------------------------------------------
int sub_C68010_eac67f20(int a1, int a2, int a3, grapher::ActorBase::Self *a4, int a5, grapher::ActorContext::Self *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  grapher::ActorVariable::Self *Variable;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v6 = sub_857260(a4, 0, (int)(uintptr_t)(a6));
  v7 = v6;
  if ( v6 != 0 )
  {
    v8 = 0;
    if ( *(uint32_t *)(*(uint32_t *)(v6 + 408) - 12) != 0 )
    {
      v14 = *(uint32_t *)(v6 + 404);
      if ( v14 != 0 )
      {
        if ( ((*(int (**)(uint32_t))(*(uint32_t *)v14 + 32))(*(uint32_t *)(v7 + 404)) & 2) != 0 )
        {
          v8 = v7;
        }
        else if ( *(uint32_t *)(*(uint32_t *)(v7 + 408) - 12) != 0 )
        {
          v15 = *(uint32_t *)(v7 + 404);
          if ( v15 != 0
            && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v15 + 36))(*(uint32_t *)(v7 + 404)) != 0
            && *(int *)(v7 + 1096) > 0 )
          {
            v8 = **(uint32_t **)(v7 + 1104);
          }
        }
      }
    }
    v9 = sub_857260(a4, 1, (int)(uintptr_t)(a6));
    if ( v9 != 0 )
    {
      sub_9B8920((uint32_t *)v8, v9);
      if ( G4_VCALL<int>(v8, 456) != 0
        && (v10 = *(uint32_t *)(v8 + 1872), v11 = *(uint32_t *)(v8 + 1876), (v10 & 0x100) != 0)
        && v10 >= 0
        && (v11 & 1) == 0
        && (v11 & 4) == 0
        || G4_VCALL<int>(v8, 456) != 0
        && (v10 = *(uint32_t *)(v8 + 1872), v11 = *(uint32_t *)(v8 + 1876), (v10 & 0x800) != 0) )
      {
        if ( *(uint32_t *)(v8 + 3688) == 0 )
        {
          *(uint32_t *)(v8 + 1876) = v11;
          *(uint32_t *)(v8 + 1872) = v10 | 0x800000;
        }
      }
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a4, 2);
      *(uint8_t *)(v8 + 1945) = sub_837730((int)(uintptr_t)(a4), Variable, a6, v16, v17, v18, v19, a1, a3, a2);
    }
    else
    {
      G4_VCALL<void>(a4, 28, a6);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a4, 1, a6));
}

// ----------------------------------------------------------------------------
// Function: sub_C681F0_eac681f0  (binary VA: 0xc681f0)
// Original: sub_C681F0
// ----------------------------------------------------------------------------
int sub_C681F0_eac681f0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  int v4;
  uint32_t *v5;
  int *v6;
  int v8;
  int *v9;
  int v10;
  int v11;
  grapher::ActorVariable::Self *Variable;
  int v13;
  void *v14;
  int v15;
  int *v16;
  int v17;
  int *v18;
  unsigned int v19;
  unsigned int v20;
  int *v21;
  char *v22;
  int v23;
  int *v24;
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
  typedef unsigned int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef grapher::ActorContext::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef char _g4_t_v41[4];
  typedef void *_g4_t_v42;
  typedef uint8_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51[3];
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58[9];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v27)) > _g4_s2 ? (20u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v28)) > _g4_s3 ? (24u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v29)) > _g4_s4 ? (28u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v30)) > _g4_s5 ? (32u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v31)) > _g4_s6 ? (36u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v32)) > _g4_s7 ? (36u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v33)) > _g4_s8 ? (36u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v34)) > _g4_s9 ? (36u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v35)) > _g4_s10 ? (40u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v36)) > _g4_s11 ? (40u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v37)) > _g4_s12 ? (40u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v38)) > _g4_s13 ? (44u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (51u + sizeof(_g4_t_v39)) > _g4_s14 ? (51u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v40)) > _g4_s15 ? (56u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v41)) > _g4_s16 ? (60u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v42)) > _g4_s17 ? (64u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v43)) > _g4_s18 ? (68u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v44)) > _g4_s19 ? (72u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v45)) > _g4_s20 ? (88u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v46)) > _g4_s21 ? (92u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v47)) > _g4_s22 ? (96u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v48)) > _g4_s23 ? (100u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v49)) > _g4_s24 ? (104u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v50)) > _g4_s25 ? (108u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v51)) > _g4_s26 ? (112u + sizeof(_g4_t_v51)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v52)) > _g4_s27 ? (124u + sizeof(_g4_t_v52)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v53)) > _g4_s28 ? (128u + sizeof(_g4_t_v53)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v54)) > _g4_s29 ? (132u + sizeof(_g4_t_v54)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v55)) > _g4_s30 ? (136u + sizeof(_g4_t_v55)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v56)) > _g4_s31 ? (140u + sizeof(_g4_t_v56)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v57)) > _g4_s32 ? (144u + sizeof(_g4_t_v57)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v58)) > _g4_s33 ? (148u + sizeof(_g4_t_v58)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 51u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 92u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 144u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 148u);

  LODWORD(v58[5]) = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v35 = a2;
  v38 = a3;
  v4 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v5 = (uint32_t *)v4;
  if ( v4 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  v6 = (int *)G4_VCALL<int>(v4, 16);
  if ( v6 == nullptr )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  while ( v6 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v6 = (int *)v6[1];
    if ( v6 == nullptr )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  }
  if ( v35 == 1 )
  {
    sub_923A70(v5);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  }
  if ( v35 <= 1 )
  {
    if ( v35 == 0 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
      if ( (uint8_t)sub_837730((int)(uintptr_t)(v3), Variable, v38, v25, v26, v27, v28, v29, v30, v31) != 0 )
      {
        v13 = v5[574];
        v42 = nullptr;
        v43 = nullptr;
        v44 = 0;
        sub_92D9F0((int)(uintptr_t)(v5), v13, (int)(uintptr_t)(&v42));
        v14 = v42;
        if ( v43 != v42 )
        {
          v36 = lrand48() % (unsigned int)((v43 - (uint8_t *)v42) >> 2);
          sub_9239B0((int)(uintptr_t)(v5), *((uint32_t *)v42 + v36));
          (*(void (**)(float *))(**((uint32_t **)v42 + v36) + 52))(&v48);
          (*(void (**)(float *))(*v5 + 52))(&v45);
          v14 = v42;
          if ( (float)((float)((float)((float)(v46 - v49) * (float)(v46 - v49))
                             + (float)((float)(v45 - v48) * (float)(v45 - v48)))
                     + (float)((float)(v47 - v50) * (float)(v47 - v50))) > 10000.0 )
          {
            (*(void (**)(float *))(**((uint32_t **)v42 + v36) + 52))(v51);
            sub_9B4460((int)(uintptr_t)(v5), v51, 0, 100, 0, 3);
            v14 = v42;
          }
        }
        if ( v14 != nullptr )
          opDelete(v14);
      }
      else
      {
        v23 = sub_857260(v3, 1, (int)(uintptr_t)(v38));
        if ( v23 != 0 )
        {
          v34 = v23;
          v24 = (int *)G4_VCALL<int>(v23, 16);
          if ( v24 != nullptr )
          {
            if ( v24 == (int *)(uintptr_t)(&dword_20D70F4) )
            {
LABEL_46:
              sub_9239B0((int)(uintptr_t)(v5), v34);
              (*(void (**)(float *))(*(uint32_t *)v34 + 52))(&v55);
              (*(void (**)(float *))(*v5 + 52))(&v52);
              if ( (float)((float)((float)((float)(v53 - v56) * (float)(v53 - v56))
                                 + (float)((float)(v52 - v55) * (float)(v52 - v55)))
                         + (float)((float)(v54 - v57) * (float)(v54 - v57))) > 10000.0 )
              {
                (*(void (**)(float *))(*(uint32_t *)v34 + 52))(v58);
                sub_9B4460((int)(uintptr_t)(v5), v58, 0, 100, 0, 3);
              }
            }
            else
            {
              while ( 1 )
              {
                v24 = (int *)v24[1];
                if ( v24 == nullptr )
                  break;
                if ( v24 == (int *)(uintptr_t)(&dword_20D70F4) )
                  goto LABEL_46;
              }
            }
          }
        }
      }
    }
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  }
  if ( v35 == 2 )
  {
    v15 = sub_857260(v3, 1, (int)(uintptr_t)(v38));
    if ( v15 != 0 )
    {
      v33 = v15;
      v16 = (int *)G4_VCALL<int>(v15, 16);
      v17 = v33;
      if ( v16 != nullptr )
      {
        if ( v16 == (int *)(uintptr_t)(&dword_20D70F4) )
          goto LABEL_36;
        while ( 1 )
        {
          v16 = (int *)v16[1];
          if ( v16 == nullptr )
            break;
          if ( v16 == (int *)(uintptr_t)(&dword_20D70F4) )
            goto LABEL_36;
        }
      }
    }
    v17 = v5[546];
    if ( v17 == 0 )
    {
      v21 = (int *)v41;
      g4_std::string::construct_copy(v41, &unk_20D67EC);
      sub_C5C710(v3, (int)(uintptr_t)(v41), v38);
LABEL_38:
      g4_std::string::Destroy(v21);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
    }
LABEL_36:
    v18 = (int *)sub_8EB590(v17);
    if ( v18[1] == *v18 )
    {
      v21 = (int *)((char *)&v39 + 1);
      g4_std::string::construct_copy((char *)&v39 + 1, &unk_20D67EC);
      sub_C5C710(v3, (int)(uintptr_t)(&v39) + 1, v38);
    }
    else
    {
      v19 = lrand48();
      v37 = *v18;
      v20 = v19 % ((v18[1] - *v18) >> 2);
      v21 = &v40;
      v22 = (char *)(*(int (**)(uint32_t))(**(uint32_t **)(v37 + 4 * v20) + 44))(*(uint32_t *)(v37 + 4 * v20));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), v22, (int)(uintptr_t)(&v39));
      sub_C5C710(v3, (int)(uintptr_t)(&v40), v38);
    }
    goto LABEL_38;
  }
  if ( v35 == 3 )
  {
    v8 = sub_857260(v3, 1, (int)(uintptr_t)(v38));
    if ( v8 != 0 )
    {
      v32 = v8;
      v9 = (int *)G4_VCALL<int>(v8, 16);
      v10 = v32;
      if ( v9 != nullptr )
      {
        if ( v9 == (int *)(uintptr_t)(&dword_20D70F4) )
          goto LABEL_19;
        while ( 1 )
        {
          v9 = (int *)v9[1];
          if ( v9 == nullptr )
            break;
          if ( v9 == (int *)(uintptr_t)(&dword_20D70F4) )
            goto LABEL_19;
        }
      }
    }
    v10 = v5[546];
    v11 = -1;
    if ( v10 == 0 )
    {
LABEL_20:
      sub_836F40(v3, 4, v11, v38);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
    }
LABEL_19:
    v11 = *(uint32_t *)(v10 + 488);
    goto LABEL_20;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
}

// ----------------------------------------------------------------------------
// Function: sub_C68750_eac68750  (binary VA: 0xc68750)
// Original: sub_C68750
// ----------------------------------------------------------------------------
int sub_C68750_eac68750(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  float v11; // xmm0_4
  char v12;
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
  grapher::ActorContext::Self *v35;
  grapher::ActorContext::Self *v36;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_9:
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        v36 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v13, v16, v19, v22, v25, v28, v31, v34, v35);
        v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        sub_837730((int)(uintptr_t)(a1), v10, a3, v15, v18, v21, v24, v27, v30, v33);
        if ( (int)(uintptr_t)(v36) > 0 )
        {
          if ( (uint8_t)sub_987F30((uint32_t *)v4) != 0 && *(uint8_t *)(v4 + 189) != 0 )
          {
            v11 = 0.17500001f;
LABEL_15:
            v12 = sub_987A40(v4);
            sub_9DA760(v4, v11, v12);
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
          }
          v11 = 1.0;
          if ( (*(uint8_t *)(v4 + 1872) & 0x20) != 0 )
            goto LABEL_15;
        }
        v11 = (float)(int)(uintptr_t)(v36) * 0.001f;
        goto LABEL_15;
      }
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_9;
      }
    }
  }
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837200((int)(uintptr_t)(a1), v6, a3, v13, v16, v19, v22, v25, v28, v31, v34, v35);
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  sub_837730((int)(uintptr_t)(a1), v7, a3, v14, v17, v20, v23, v26, v29, v32);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C688D0_eac688d0  (binary VA: 0xc688d0)
// Original: sub_C688D0
// ----------------------------------------------------------------------------
int sub_C688D0_eac688d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v9;
  grapher::ActorVariable::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
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
  uint32_t *v39;
  g4_cxa_guard_t *v40;
  g4_cxa_guard_t *v41;
  grapher::ActorContext::Self *v42;
  uint8_t v43;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837200((int)(uintptr_t)(a1), Variable, a3, v17, v20, v23, v26, v30, v33, v36, (int)(uintptr_t)(v40), v42);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    sub_837730((int)(uintptr_t)(a1), v7, a3, v18, v21, v24, v27, v31, v34, v37);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v41 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a1), v9, a3, v17, v20, v23, v26, v30, v33, v36, (int)(uintptr_t)(v40), v42);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v43 = sub_837730((int)(uintptr_t)(a1), v10, a3, v19, v22, v25, v28, v32, v35, v38);
  if ( G4_VCALL<int>(v4, 456) != 0
    && (v11 = *(uint32_t *)(v4 + 1872), v12 = *(uint32_t *)(v4 + 1876), (v11 & 0x100) != 0)
    && v11 >= 0
    && (v12 & 1) == 0
    && (v12 & 4) == 0
    || G4_VCALL<int>(v4, 456) != 0 && (*(uint8_t *)(v4 + 1873) & 8) != 0 )
  {
    v13 = G4_VCALL<int>(v4, 456);
    v29 = *(uint32_t *)(v4 + 3688);
    v39 = (uint32_t *)v13;
    v14 = G4_VCALL<int>(v13, 748, v41);
    v15 = v39;
    if ( v29 != v14 )
    {
      sub_892B60(v39, v29, v14, 1);
      v15 = v39;
    }
    *(uint32_t *)(v4 + 3684) = -1;
    sub_985D20(v4, (int)(uintptr_t)(v41), v15);
    v16 = *(uint32_t *)v4;
    if ( a2 == 1 )
    {
      (*(void (**)(int))(v16 + 708))(v4);
      grapher::ActorBase::FireEvent(a1, 3, a3);
    }
    else
    {
      (*(void (**)(int, int, uint32_t))(v16 + 668))(v4, 1, v43);
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C68B80_eac68b80  (binary VA: 0xc68b80)
// Original: sub_C68B80
// ----------------------------------------------------------------------------
int sub_C68B80_eac68b80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int *v4;
  uint32_t *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v7;
  int v8;
  uint32_t *v9;
  grapher::ActorVariable::Self *v10;
  grapher::ActorContext::Self *v11;
  unsigned int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;
  int *v19;
  int *v20;
  int *v21;
  unsigned int v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef grapher::ActorVariable::Self *_g4_t_v29;
  typedef grapher::ActorContext::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef grapher::ActorVariable::Self *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef g4_cxa_guard_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[4];
  typedef uint32_t _g4_t_v40[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v29)) > _g4_s5 ? (16u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v30)) > _g4_s6 ? (16u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v31)) > _g4_s7 ? (16u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v32)) > _g4_s8 ? (16u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v33)) > _g4_s9 ? (20u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v34)) > _g4_s10 ? (24u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v35)) > _g4_s11 ? (24u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v36)) > _g4_s12 ? (28u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v37)) > _g4_s13 ? (28u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v38)) > _g4_s14 ? (28u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v39)) > _g4_s15 ? (32u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v40)) > _g4_s16 ? (48u + sizeof(_g4_t_v40)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  if ( v3 == 0 || (v28 = (uint32_t *)v3, (v4 = (int *)G4_VCALL<int>(v3, 16)) == nullptr) )
  {
LABEL_7:
    v5 = nullptr;
    goto LABEL_8;
  }
  while ( v4 != (int *)(uintptr_t)(&dword_20DE814) )
  {
    v4 = (int *)v4[1];
    if ( v4 == nullptr )
      goto LABEL_7;
  }
  v20 = (int *)G4_VCALL<int>(v28, 16);
  if ( v20 == nullptr )
  {
LABEL_44:
    v5 = nullptr;
    goto LABEL_45;
  }
  v5 = v28;
  if ( v20 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    while ( 1 )
    {
      v20 = (int *)v20[1];
      if ( v20 == nullptr )
        goto LABEL_44;
      if ( v20 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
        v5 = v28;
        break;
      }
    }
  }
LABEL_45:
  v21 = (int *)G4_VCALL<int>(v28, 16);
  if ( v21 != nullptr )
  {
    v36 = (int)(uintptr_t)(v28);
    if ( v21 == (int *)(uintptr_t)(&dword_20D68D0) )
      goto LABEL_9;
    while ( 1 )
    {
      v21 = (int *)v21[1];
      if ( v21 == nullptr )
        break;
      if ( v21 == (int *)(uintptr_t)(&dword_20D68D0) )
      {
        v36 = (int)(uintptr_t)(v28);
        goto LABEL_9;
      }
    }
  }
LABEL_8:
  v36 = 0;
LABEL_9:
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v7 = a3;
  if ( a3 == nullptr )
  {
    v7 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 )
    {
      v32 = Variable;
      v33 = (uint32_t *)(&unk_20D6720);
      v34 = (char *)(&byte_20D6700);
      v23 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      Variable = v32;
      v7 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( v23 != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v7 = (grapher::ActorContext::Self *)&unk_20D6720;
        Variable = v32;
      }
    }
  }
  v29 = Variable;
  grapher::ActorContext::LoadAVar(v7, Variable);
  if ( *((uint32_t *)v29 + 2) == 12 )
  {
    v35 = (g4_cxa_guard_t *)sub_C5BBB0((int)(uintptr_t)(v29), v24, v25, v26, v27, (int)(uintptr_t)(v29), (int)(uintptr_t)(v33), (int)(uintptr_t)(v34), v36, v39[0]);
    if ( v5 != nullptr )
    {
LABEL_16:
      if ( a2 != 0 )
      {
        if ( sub_97FD50((int)(uintptr_t)(v5)) )
        {
          sub_907060(v5, (int)(uintptr_t)(v35));
          if ( G4_VCALL<int>(v5, 428) == 0 )
          {
            sub_8ED2D0(v5[283]);
            sub_9EE090((int)(uintptr_t)(v5), 0);
            v18 = G4_VCALL<int>(v5, 428);
            if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
            {
              sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
              __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
            }
            v19 = nullptr;
            if ( byte_20D49A8 == 0 )
              v19 = (int *)(&dword_20D49A0);
            sub_82ADA0((int)(uintptr_t)(v19), v18, 1, 0);
          }
        }
        else
        {
          G4_VCALL<void>(v5, 592, 1);
        }
      }
      else
      {
        G4_VCALL<void>(v5, 424, v35);
        v37 = G4_VCALL<int>(v5, 428);
        if ( v37 != 0 )
        {
          v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
          v11 = sub_837200(
                  (int)(uintptr_t)(a1),
                  v10,
                  nullptr,
                  v27,
                  (int)(uintptr_t)(v29),
                  (int)(uintptr_t)(v33),
                  (int)(uintptr_t)(v35),
                  v37,
                  v39[0],
                  v39[1],
                  v39[2],
                  (grapher::ActorContext::Self *)v39[3]);
          if ( v11 == (grapher::ActorContext::Self *)-1 )
          {
            v22 = sub_5B18B0(v38);
            sub_9803D0((int)(uintptr_t)(v5), v22, 1);
          }
          else
          {
            v30 = v11;
            v12 = sub_5B18B0(v38);
            sub_9803D0((int)(uintptr_t)(v5), v12, 0);
            v13 = sub_5B2340(v38);
            sub_8ED510(v5[283], v38, (uint32_t)(uintptr_t)(v30) * v13);
            v31 = sub_5B2340(v38);
            v14 = G4_VCALL<int>(v5, 428);
            sub_5B1960(v14, v31);
          }
        }
      }
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
    }
  }
  else
  {
    if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v25) != 0
      || *((uint32_t *)v29 + 2) != 11 )
    {
      v8 = *((uint32_t *)v29 + 1);
      if ( v8 != 0 && (v9 = (uint32_t *)G4_VCALL<int>(v8, 48)) != nullptr )
      {
        v33 = v9;
        G4_VCALL<void>(v9, 0, v39);
        v35 = (g4_cxa_guard_t *)v39[0];
        G4_VCALL<void>(v33, 44);
      }
      else
      {
        v35 = (g4_cxa_guard_t *)v39[0];
      }
    }
    else
    {
      v16 = *((uint32_t *)v29 + 1);
      v17 = 0;
      if ( v16 != 0 )
        v17 = G4_VCALL<int>(v16, 48);
      v40[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      if ( v17 != 0 )
      {
        v29 = (grapher::ActorVariable::Self *)v17;
        G4_VCALL<void>(v17, 32, v40);
        G4_VCALL<void>(v29, 44);
      }
      v33 = v40;
      v35 = sub_C5BDB0(v40);
      g4_std::string::Destroy(v40);
    }
    if ( v5 != nullptr )
      goto LABEL_16;
  }
  if ( v36 != 0
    && (uint8_t)sub_8707F0(v36) != 0
    && (uint8_t)sub_8ED1D0(*(uint32_t *)(v36 + 1048), (int)(uintptr_t)(v35)) != 0
    && a2 == 0 )
  {
    sub_870890(v36, (int)(uintptr_t)(v35));
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C690F0_eac690f0  (binary VA: 0xc690f0)
// Original: sub_C690F0
// ----------------------------------------------------------------------------
int sub_C690F0_eac690f0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorContext::Self *v7;
  int *v8;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  void *v18;
  g4_cxa_guard_t *v19;
  g4_cxa_guard_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  grapher::ActorContext::Self *v27;

  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
      v10 = nullptr;
      if ( byte_20D3BC4 == 0 )
        v10 = (int *)(&dword_20D3BC0);
      sub_9729A0((int)(uintptr_t)(v10));
    }
  }
  else
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
    v5 = sub_837200((int)(uintptr_t)(a2), Variable, nullptr, v11, v13, v15, (int)(uintptr_t)(v17), (int)(uintptr_t)(v19), v21, v23, v25, a1);
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
    v7 = sub_837200((int)(uintptr_t)(a2), v6, nullptr, v12, v14, v16, (int)(uintptr_t)(v18), (int)(uintptr_t)(v20), v22, v24, v26, v27);
    if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
    {
      sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
      __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D3BC4 == 0 )
      v8 = (int *)(&dword_20D3BC0);
    sub_972930((int)(uintptr_t)(v8), (int)(uintptr_t)(v7), (int)(uintptr_t)(v5));
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 2, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_C692B0_eac692b0  (binary VA: 0xc692b0)
// Original: sub_C692B0
// ----------------------------------------------------------------------------
int sub_C692B0_eac692b0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  char *v10;
  char *v11;
  bool v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorVariable::Self *v18;
  grapher::ActorVariable::Self *v19;
  grapher::ActorVariable::Self *v20;
  char v21;
  grapher::ActorVariable::Self *v22;
  grapher::ActorContext::Self *v23;
  int v24;
  int v25;
  grapher::ActorVariable::Self *v26;
  char v27;
  int v29;
  int *v30;
  int v31;
  grapher::ActorVariable::Self *v32;
  grapher::ActorVariable::Self *Variable;
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
  typedef float *_g4_t_v86;
  typedef grapher::ActorContext::Self *_g4_t_v87;
  typedef grapher::ActorContext::Self *_g4_t_v88;
  typedef grapher::ActorContext::Self *_g4_t_v89;
  typedef char _g4_t_v90;
  typedef uint32_t *_g4_t_v91;
  typedef float *_g4_t_v92;
  typedef int _g4_t_v93[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v35)) > _g4_s1 ? (12u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v36)) > _g4_s2 ? (12u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v37)) > _g4_s3 ? (12u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v38)) > _g4_s4 ? (12u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v39)) > _g4_s5 ? (12u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v40)) > _g4_s6 ? (12u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v41)) > _g4_s7 ? (16u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v42)) > _g4_s8 ? (16u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v43)) > _g4_s9 ? (16u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v44)) > _g4_s10 ? (16u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v45)) > _g4_s11 ? (16u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v46)) > _g4_s12 ? (16u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v47)) > _g4_s13 ? (16u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v48)) > _g4_s14 ? (20u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v49)) > _g4_s15 ? (20u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v50)) > _g4_s16 ? (20u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v51)) > _g4_s17 ? (20u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v52)) > _g4_s18 ? (20u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v53)) > _g4_s19 ? (20u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v54)) > _g4_s20 ? (20u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v55)) > _g4_s21 ? (24u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_v56)) > _g4_s22 ? (24u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v57)) > _g4_s23 ? (24u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (24u + sizeof(_g4_t_v58)) > _g4_s24 ? (24u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v59)) > _g4_s25 ? (24u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (24u + sizeof(_g4_t_v60)) > _g4_s26 ? (24u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v61)) > _g4_s27 ? (24u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (28u + sizeof(_g4_t_v62)) > _g4_s28 ? (28u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (28u + sizeof(_g4_t_v63)) > _g4_s29 ? (28u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (28u + sizeof(_g4_t_v64)) > _g4_s30 ? (28u + sizeof(_g4_t_v64)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v65)) > _g4_s31 ? (28u + sizeof(_g4_t_v65)) : _g4_s31,
    _g4_s33 = (28u + sizeof(_g4_t_v66)) > _g4_s32 ? (28u + sizeof(_g4_t_v66)) : _g4_s32,
    _g4_s34 = (28u + sizeof(_g4_t_v67)) > _g4_s33 ? (28u + sizeof(_g4_t_v67)) : _g4_s33,
    _g4_s35 = (28u + sizeof(_g4_t_v68)) > _g4_s34 ? (28u + sizeof(_g4_t_v68)) : _g4_s34,
    _g4_s36 = (32u + sizeof(_g4_t_v69)) > _g4_s35 ? (32u + sizeof(_g4_t_v69)) : _g4_s35,
    _g4_s37 = (32u + sizeof(_g4_t_v70)) > _g4_s36 ? (32u + sizeof(_g4_t_v70)) : _g4_s36,
    _g4_s38 = (32u + sizeof(_g4_t_v71)) > _g4_s37 ? (32u + sizeof(_g4_t_v71)) : _g4_s37,
    _g4_s39 = (32u + sizeof(_g4_t_v72)) > _g4_s38 ? (32u + sizeof(_g4_t_v72)) : _g4_s38,
    _g4_s40 = (32u + sizeof(_g4_t_v73)) > _g4_s39 ? (32u + sizeof(_g4_t_v73)) : _g4_s39,
    _g4_s41 = (32u + sizeof(_g4_t_v74)) > _g4_s40 ? (32u + sizeof(_g4_t_v74)) : _g4_s40,
    _g4_s42 = (32u + sizeof(_g4_t_v75)) > _g4_s41 ? (32u + sizeof(_g4_t_v75)) : _g4_s41,
    _g4_s43 = (36u + sizeof(_g4_t_v76)) > _g4_s42 ? (36u + sizeof(_g4_t_v76)) : _g4_s42,
    _g4_s44 = (36u + sizeof(_g4_t_v77)) > _g4_s43 ? (36u + sizeof(_g4_t_v77)) : _g4_s43,
    _g4_s45 = (36u + sizeof(_g4_t_v78)) > _g4_s44 ? (36u + sizeof(_g4_t_v78)) : _g4_s44,
    _g4_s46 = (36u + sizeof(_g4_t_v79)) > _g4_s45 ? (36u + sizeof(_g4_t_v79)) : _g4_s45,
    _g4_s47 = (36u + sizeof(_g4_t_v80)) > _g4_s46 ? (36u + sizeof(_g4_t_v80)) : _g4_s46,
    _g4_s48 = (36u + sizeof(_g4_t_v81)) > _g4_s47 ? (36u + sizeof(_g4_t_v81)) : _g4_s47,
    _g4_s49 = (36u + sizeof(_g4_t_v82)) > _g4_s48 ? (36u + sizeof(_g4_t_v82)) : _g4_s48,
    _g4_s50 = (40u + sizeof(_g4_t_v83)) > _g4_s49 ? (40u + sizeof(_g4_t_v83)) : _g4_s49,
    _g4_s51 = (40u + sizeof(_g4_t_v84)) > _g4_s50 ? (40u + sizeof(_g4_t_v84)) : _g4_s50,
    _g4_s52 = (40u + sizeof(_g4_t_v85)) > _g4_s51 ? (40u + sizeof(_g4_t_v85)) : _g4_s51,
    _g4_s53 = (44u + sizeof(_g4_t_v86)) > _g4_s52 ? (44u + sizeof(_g4_t_v86)) : _g4_s52,
    _g4_s54 = (44u + sizeof(_g4_t_v87)) > _g4_s53 ? (44u + sizeof(_g4_t_v87)) : _g4_s53,
    _g4_s55 = (44u + sizeof(_g4_t_v88)) > _g4_s54 ? (44u + sizeof(_g4_t_v88)) : _g4_s54,
    _g4_s56 = (48u + sizeof(_g4_t_v89)) > _g4_s55 ? (48u + sizeof(_g4_t_v89)) : _g4_s55,
    _g4_s57 = (52u + sizeof(_g4_t_v90)) > _g4_s56 ? (52u + sizeof(_g4_t_v90)) : _g4_s56,
    _g4_s58 = (56u + sizeof(_g4_t_v91)) > _g4_s57 ? (56u + sizeof(_g4_t_v91)) : _g4_s57,
    _g4_s59 = (60u + sizeof(_g4_t_v92)) > _g4_s58 ? (60u + sizeof(_g4_t_v92)) : _g4_s58,
    _g4_s60 = (64u + sizeof(_g4_t_v93)) > _g4_s59 ? (64u + sizeof(_g4_t_v93)) : _g4_s59
  };
  alignas(16) uint8_t _g4_sf[_g4_s60];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
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
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 36u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 36u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 40u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 44u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 44u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 52u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 60u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 64u);

  v3 = a1;
  v4 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = (int *)G4_VCALL<int>(v4, 16);
    if ( v6 != nullptr )
    {
      if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v6 = (int *)v6[1];
        if ( v6 == nullptr )
          break;
        if ( v6 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v5 = 0;
LABEL_8:
  v7 = sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v91 = (uint32_t *)v7;
  if ( v7 == 0 || (v8 = (int *)G4_VCALL<int>(v7, 16)) == nullptr )
  {
LABEL_14:
    v91 = nullptr;
    goto LABEL_15;
  }
  while ( v8 != (int *)(uintptr_t)(&dword_20D70A4) )
  {
    v8 = (int *)v8[1];
    if ( v8 == nullptr )
      goto LABEL_14;
  }
LABEL_15:
  if ( v5 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
  if ( v91 == nullptr )
  {
    if ( a2 != 4 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
LABEL_59:
    sub_9B9D80(v5);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
  }
  v9 = *((uint32_t *)a1 + 14);
  v10 = (char *)a1 + 56;
  if ( v9 != 0 )
  {
    v86 = (float *)((char *)a1 + 56);
    sub_5459F0((int)(uintptr_t)(a1) + 56, v9 + 16);
    v10 = (char *)a1 + 56;
  }
  *((uint32_t *)a1 + 14) = v5;
  v11 = *(char **)(v5 + 20);
  v12 = v11 == *(char **)(v5 + 24);
  v93[0] = (int)(uintptr_t)(v10);
  if ( v12 )
  {
    g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v5 + 16, v11, v93);
  }
  else
  {
    v13 = 0;
    if ( v11 != nullptr )
    {
      *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v10);
      v13 = *(uint32_t *)(v5 + 20);
    }
    *(uint32_t *)(v5 + 20) = v13 + 4;
  }
  *(uint32_t *)(v5 + 1872) &= ~0x800000u;
  *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
  sub_987540(v5, 0);
  sub_987580(v5, 0);
  sub_9875C0(v5, 0);
  sub_987600(v5, 0);
  switch ( a2 )
  {
    case 1:
      sub_987540(v5, 1);
      *(uint32_t *)(v5 + 1872) |= 0x20u;
      *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
      break;
    case 2:
      sub_987580(v5, 1);
      *(uint32_t *)(v5 + 1872) &= ~0x20u;
      *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
      break;
    case 0:
      *(uint32_t *)(v5 + 1872) |= 0x800000u;
      *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
      break;
    default:
      break;
  }
  if ( (unsigned int)(*(uint32_t *)(v5 + 4296) - 2) > 2 )
  {
    v14 = *(uint32_t **)(v5 + 4280);
    if ( v14 != nullptr && v14[133] - v14[132] > 19 && v91 == v14 && a2 == 3 )
    {
      sub_9B7730(v5);
      sub_9B71D0((uint32_t *)v5, nullptr, 1);
      grapher::ActorBase::FireEvent(a1, 8, a3);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
    }
  }
  v15 = *(uint32_t **)(v5 + 4284);
  if ( v15 != nullptr && v15 == v91 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v34, v41, v48, v55, v62, v69, v76) == 0 )
    {
      sub_8E9510((uint32_t *)v5, 0);
      sub_9B7550(v5);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
    }
  }
  G4_VCALL<void>(a1, 28, a3);
  *((uint32_t *)a1 + 13) = 0;
  sub_9B71D0((uint32_t *)v5, nullptr, 1);
  if ( a2 == 4 )
    goto LABEL_59;
  v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v89 = nullptr;
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v16, a3, v34, v41, v48, v55, v62, v69, v76) != 0 )
  {
    v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
    v89 = sub_837200((int)(uintptr_t)(a1), v32, a3, v35, v42, v49, v56, v63, v70, v77, v83, (grapher::ActorContext::Self *)v86);
  }
  if ( G4_VCALL<int>(v5, 456) != 0 )
  {
    *(float *)&v83 = ((long double (*)(uint32_t *))*(uint32_t *)(*v91 + 216))(v91);
    if ( *(float *)&v83 < 0.0 && v91[133] - v91[132] > 19 )
    {
      v29 = 0;
      do
      {
        v30 = sub_8EFEB0((int)(uintptr_t)(v91), v29++);
        v86 = (float *)v30;
        v31 = G4_VCALL<int>(v5, 456);
        *(float *)&v83 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v31 + 668))(v31);
        v86[3] = *(float *)&v83 * 0.2777778f;
      }
      while ( v29 < -858993459 * ((v91[133] - v91[132]) >> 2) );
      v3 = a1;
    }
  }
  sub_8E9510((uint32_t *)v5, 0);
  v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 8);
  v92 = (float *)sub_837200((int)(uintptr_t)(v3), v17, a3, v35, v42, v49, v56, v63, v70, v77, v83, (grapher::ActorContext::Self *)v86);
  v18 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
  v88 = sub_837200((int)(uintptr_t)(v3), v18, a3, v36, v43, v50, v57, v64, v71, v78, v84, v87);
  v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
  v90 = sub_837730((int)(uintptr_t)(v3), v19, a3, v37, v44, v51, v58, v65, v72, v79);
  v20 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
  v21 = sub_837730((int)(uintptr_t)(v3), v20, a3, v38, v45, v52, v59, v66, v73, v80);
  sub_9B9E50(v5, (int)(uintptr_t)(v91), (int)(uintptr_t)(v89), v21, v90, 0, (int)(uintptr_t)(v88), v92);
  v22 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 10);
  v23 = sub_837200((int)(uintptr_t)(v3), v22, a3, v39, v46, v53, v60, v67, v74, v81, v85, v88);
  sub_986CC0(v5, (int)(uintptr_t)(v23));
  if ( G4_VCALL<int>(v5, 456) != 0
    && (v24 = *(uint32_t *)(v5 + 1872), v25 = *(uint32_t *)(v5 + 1876), (v24 & 0x100) != 0)
    && v24 >= 0
    && (v25 & 1) == 0
    && (v25 & 4) == 0
    || G4_VCALL<int>(v5, 456) != 0
    && (v24 = *(uint32_t *)(v5 + 1872), v25 = *(uint32_t *)(v5 + 1876), (v24 & 0x800) != 0) )
  {
    if ( *(uint32_t *)(v5 + 3688) == 0 )
    {
      *(uint32_t *)(v5 + 1876) = v25;
      *(uint32_t *)(v5 + 1872) = v24 | 0x800000;
    }
  }
  v26 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 9);
  v27 = sub_837730((int)(uintptr_t)(v3), v26, a3, v40, v47, v54, v61, v68, v75, v82);
  v12 = byte_20D5B50 == 0;
  *(uint8_t *)(v5 + 1945) = v27;
  if ( v12 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v3, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C69970_eac69970  (binary VA: 0xc69970)
// Original: sub_C69970
// ----------------------------------------------------------------------------
char sub_C69970_eac69970(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  char v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  char result;
  int v15;
  int *v16;
  float v17;
  void *v18;
  uint8_t v19;
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
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  grapher::ActorContext::Self *v60;
  grapher::ActorContext::Self *v61;
  char v62;
  uint32_t *v63;
  char v64;
  g4_cxa_guard_t *v65;
  char v66;
  char v67;
  char v68;
  float v69;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      v64 = 1;
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
          v64 = 1;
          goto LABEL_8;
        }
      }
    }
  }
  v64 = 0;
  v4 = 0;
LABEL_8:
  v6 = sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v63 = (uint32_t *)v6;
  if ( v6 == 0 || (v7 = (int *)G4_VCALL<int>(v6, 16)) == nullptr )
  {
LABEL_14:
    v8 = 0;
    v63 = nullptr;
    goto LABEL_15;
  }
  v8 = v64 & 1;
  if ( v7 != (int *)(uintptr_t)(&dword_20D68D0) )
  {
    while ( 1 )
    {
      v7 = (int *)v7[1];
      if ( v7 == nullptr )
        goto LABEL_14;
      if ( v7 == (int *)(uintptr_t)(&dword_20D68D0) )
      {
        v8 = v64;
        break;
      }
    }
  }
LABEL_15:
  LOBYTE(v60) = v8;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v65 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a1), Variable, a3, v23, v28, v33, v38, v43, v48, v53, v58, v60);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
  v66 = sub_837730((int)(uintptr_t)(a1), v10, a3, v24, v29, v34, v39, v44, v49, v54);
  v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v67 = sub_837730((int)(uintptr_t)(a1), v11, a3, v25, v30, v35, v40, v45, v50, v55);
  v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  v68 = sub_837730((int)(uintptr_t)(a1), v12, a3, v26, v31, v36, v41, v46, v51, v56);
  v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
  v69 = sub_838060((int)(uintptr_t)(a1), v13, a3, v27, v32, v37, v42, v47, v52, v57, v59, v61);
  result = G4_VCALL<int>(a1, 28, a3);
  if ( v62 != 0 )
  {
    if ( G4_VCALL<int>(v4, 168) == 0 )
      sub_C38550((uint32_t *)v4);
    if ( G4_VCALL<int>(v63, 168) == 0 )
      sub_C38550(v63);
    result = a2;
    if ( a2 != 0 )
    {
      if ( a2 == 1 )
      {
        *(uint32_t *)(v4 + 3684) = -1;
        sub_985D20(v4, (int)(uintptr_t)(v65), v63);
        v15 = G4_VCALL<int>(v63, 748, *(uint32_t *)(v4 + 3684));
        *(uint32_t *)(v4 + 3688) = v15;
        G4_VCALL<void>(v4, 664, v63, v15 == 0);
        *(uint8_t *)(v4 + 3199) = v67;
        *(uint8_t *)(v4 + 3200) = v68;
        sub_9655C0(v4, v66);
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
        grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
        *((uint8_t *)a1 + 52) = 1;
        *((uint8_t *)a1 + 53) = 0;
        result = sub_97FD30(v4);
        if ( result != 0 )
        {
          if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
          {
            sub_976230((int)(uintptr_t)(&dword_20D5240));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
            __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
          }
          v16 = nullptr;
          if ( byte_20D5248 == 0 )
            v16 = (int *)(&dword_20D5240);
          if ( !sub_9767E0((int)(uintptr_t)(v16)) && byte_20D186E == 0 )
          {
            v17 = *(float *)(dword_20DA1B0 + 64);
            if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
            {
              sub_9C9CC0((int)(uintptr_t)(&unk_20D4E60));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
              __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
            }
            v18 = nullptr;
            if ( byte_20D4E64 == 0 )
              v18 = &unk_20D4E60;
            sub_9CE370((int)(uintptr_t)(v18), v17);
          }
          v19 = sub_62F450(0);
          return sub_977DC0(*(uint32_t *)(dword_20DDDC0 + 868), v4, (int)(uintptr_t)(v63), v19, 1);
        }
      }
    }
    else
    {
      v20 = *(uint32_t *)v4;
      *(float *)(v4 + 3964) = v69;
      if ( (*(int (**)(int))(v20 + 456))(v4) == 0
        || (v21 = *(uint32_t *)(v4 + 1872), v22 = *(uint32_t *)(v4 + 1876), (v21 & 0x100) == 0)
        || v21 < 0
        || (v22 & 1) != 0
        || (v22 & 4) != 0 )
      {
        *(uint32_t *)(v4 + 3684) = -1;
        sub_985D20(v4, (int)(uintptr_t)(v65), v63);
        G4_VCALL<void>(v4, 624, 1, v63, *(uint32_t *)(v4 + 3684) == 0);
        if ( !sub_97FD50(v4) )
          *(uint8_t *)(v4 + 3444) = v65 == nullptr;
      }
      *(uint8_t *)(v4 + 3199) = v67;
      *(uint8_t *)(v4 + 3200) = v68;
      sub_9655C0(v4, v66);
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
      result = (char)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      *((uint8_t *)a1 + 53) = 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C69F90  (binary VA: 0xc69f90)
// Original: sub_C69F90
// ----------------------------------------------------------------------------
uint32_t * sub_C69F90(uint32_t *a1, int a2, int *a3, int *a4)
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
    if ( a3 != (int *)(uintptr_t)(&dword_20D7CC4) )
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
  sub_1904970(v11, v4, a3, &dword_20D7CC4);
  ++dword_20D7CD4;
  *a1 = (uint32_t)(uintptr_t)(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C6A0B0  (binary VA: 0xc6a0b0)
// Original: sub_C6A0B0
// ----------------------------------------------------------------------------
int sub_C6A0B0(int a1, int *a2)
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

  v3 = (int *)dword_20D7CC8;
  if ( dword_20D7CC8 == 0 )
  {
    v3 = (int *)(&dword_20D7CC4);
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
    sub_C69F90(v12, 0, v11, a2);
LABEL_13:
    v9 = v12[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_10:
  if ( (int *)dword_20D7CCC == v3 )
  {
    sub_C69F90(v12, 0, v3, a2);
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
// Function: sub_C6A190  (binary VA: 0xc6a190)
// Original: sub_C6A190
// ----------------------------------------------------------------------------
int sub_C6A190(const char *a1)
{
  int *v2;
  unsigned int v3;
  int *v4;
  uint32_t *v5;
  int v6;
  size_t v7;
  const char *v8;
  unsigned int i;
  int v10;
  int *v11;
  int result;
  int *v13;
  int *v14;
  typedef int *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef uint32_t _g4_t_v17[2];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[2];
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v23)) > _g4_s8 ? (64u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v24)) > _g4_s9 ? (72u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v25)) > _g4_s10 ? (76u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v26)) > _g4_s11 ? (80u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v27)) > _g4_s12 ? (84u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v28)) > _g4_s13 ? (88u + sizeof(_g4_t_v28)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);

  v2 = (int *)dword_20D7CC8;
  if ( dword_20D7CC8 != 0 )
  {
    v15 = (int *)(&dword_20D7CC4);
    do
    {
      while ( (unsigned int)v2[4] > 0xA347D0D0 )
      {
        v15 = v2;
        v2 = (int *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_6;
      }
      v2 = (int *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_6:
    if ( v15 != (int *)(uintptr_t)(&dword_20D7CC4) )
    {
      if ( (unsigned int)v15[4] <= 0xA347D0D1 )
        goto LABEL_15;
      v21 = &v18;
      v20 = &v18;
      v26 = &v24;
      v27 = &v24;
      v22 = 0;
      v28 = 0;
      v18 = 0;
      v19 = nullptr;
      v23[0] = -1555574575;
      v24 = 0;
      v25 = nullptr;
      v3 = v15[4];
      if ( v3 <= 0xA347D0D1 )
      {
        v5 = nullptr;
        if ( v3 > 0xA347D0D0 )
          goto LABEL_14;
        if ( v15 == (int *)dword_20D7CD0 )
          goto LABEL_37;
        v14 = (int *)sub_19048E0(v15);
        if ( (unsigned int)v14[4] <= 0xA347D0D1 )
          goto LABEL_29;
        if ( v15[3] == 0 )
LABEL_37:
          sub_C69F90(v17, 0, v15, v23);
        else
          sub_C69F90(v17, (int)(uintptr_t)(v14), v14, v23);
      }
      else
      {
        if ( v15 != (int *)dword_20D7CCC )
        {
          v4 = (int *)sub_1904940(v15);
          if ( (unsigned int)v4[4] <= 0xA347D0D0 )
          {
            if ( v4[3] != 0 )
              sub_C69F90(v17, (int)(uintptr_t)(v15), v15, v23);
            else
              sub_C69F90(v17, 0, v4, v23);
            goto LABEL_13;
          }
LABEL_29:
          sub_C6A0B0((int)(uintptr_t)(&v16), v23);
          v15 = v16;
          v5 = v25;
          goto LABEL_14;
        }
        sub_C69F90(v17, (int)(uintptr_t)(v15), v15, v23);
      }
LABEL_13:
      v15 = (int *)v17[0];
      v5 = v25;
LABEL_14:
      sub_C5B810(v3, v5);
      sub_C5B810(v6, v19);
LABEL_15:
      v7 = strlen(a1);
      v8 = &a1[v7];
      for ( i = 0; a1 != v8; i ^= (i << 6) + (i >> 2) - 1640531527 + v10 )
        v10 = *a1++;
      v11 = (int *)v15[7];
      result = -1;
      if ( v11 != nullptr )
      {
        v13 = v15 + 6;
        do
        {
          while ( v11[4] >= i )
          {
            v13 = v11;
            v11 = (int *)v11[2];
            if ( v11 == nullptr )
              goto LABEL_22;
          }
          v11 = (int *)v11[3];
        }
        while ( v11 != nullptr );
LABEL_22:
        result = -1;
        if ( v15 + 6 != v13 && v13[4] <= i )
          return v13[5];
      }
      return result;
    }
  }
  v20 = &v18;
  v21 = &v18;
  v26 = &v24;
  v27 = &v24;
  v18 = 0;
  v19 = nullptr;
  v22 = 0;
  v23[0] = -1555574575;
  v24 = 0;
  v25 = nullptr;
  v28 = 0;
  if ( dword_20D7CD4 != 0 && *(uint32_t *)(dword_20D7CD0 + 16) <= 0xA347D0D0 )
  {
    sub_C69F90(v17, 0, (int *)dword_20D7CD0, v23);
    v15 = (int *)v17[0];
    v5 = v25;
    goto LABEL_14;
  }
  goto LABEL_29;
}

// ----------------------------------------------------------------------------
// Function: sub_C6A4A0_eac6a4a0  (binary VA: 0xc6a4a0)
// Original: sub_C6A4A0
// ----------------------------------------------------------------------------
int sub_C6A4A0_eac6a4a0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  bool v14;
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
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef const char *_g4_t_v32[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v21)) > _g4_s6 ? (20u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v22)) > _g4_s7 ? (24u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v23)) > _g4_s8 ? (24u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v24)) > _g4_s9 ? (28u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v25)) > _g4_s10 ? (28u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (31u + sizeof(_g4_t_v26)) > _g4_s11 ? (31u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v27)) > _g4_s12 ? (32u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v28)) > _g4_s13 ? (32u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v29)) > _g4_s14 ? (36u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v30)) > _g4_s15 ? (36u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v31)) > _g4_s16 ? (40u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v32)) > _g4_s17 ? (44u + sizeof(_g4_t_v32)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 31u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        sub_837C70(v32, (int)(uintptr_t)(a1), Variable, a3, (int)(uintptr_t)(v32), v19, v22, v24, v27, v29, v31);
        v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v26 = sub_837730((int)(uintptr_t)(a1), v8, a3, v15, v16, v20, v23, v25, v28, v30);
        v9 = sub_C6A190(v32[0]);
        v10 = 0;
        if ( v9 >= 0 )
          v10 = v9;
        v21 = v10;
        v11 = sub_988270((uint32_t *)(v4 + 460), v10, 1);
        v12 = v21;
        v13 = v17;
        if ( v11 || (v14 = sub_988270((uint32_t *)(v4 + 460), v21, 0), v12 = v21, v13 = v17, v14) )
        {
          v18 = v13;
          sub_97E8D0(v4, v12, v26 ^ 1);
          g4_std::string::Destroy(v18);
        }
        else
        {
          g4_std::string::Destroy(v17);
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_C6A620_eac6a620  (binary VA: 0xc6a620)
// Original: sub_C6A620
// ----------------------------------------------------------------------------
int sub_C6A620_eac6a620(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  void **v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  void **v12;
  void **v13;
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
  typedef void *_g4_t_obj;
  typedef void *_g4_t_obja;
  typedef void *_g4_t_objb;
  typedef void *_g4_t_objc;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int16_t _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef grapher::ActorContext::Self *_g4_t_v39;
  typedef grapher::ActorBase::Self *_g4_t_v40;
  typedef const char *_g4_t_v41;
  typedef void *_g4_t_v42[10];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v21)) > _g4_s6 ? (20u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v22)) > _g4_s7 ? (20u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v23)) > _g4_s8 ? (24u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v24)) > _g4_s9 ? (24u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v25)) > _g4_s10 ? (24u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v26)) > _g4_s11 ? (28u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v27)) > _g4_s12 ? (28u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v28)) > _g4_s13 ? (28u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_obj)) > _g4_s14 ? (32u + sizeof(_g4_t_obj)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_obja)) > _g4_s15 ? (32u + sizeof(_g4_t_obja)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_objb)) > _g4_s16 ? (32u + sizeof(_g4_t_objb)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_objc)) > _g4_s17 ? (32u + sizeof(_g4_t_objc)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v33)) > _g4_s18 ? (36u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v34)) > _g4_s19 ? (36u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v35)) > _g4_s20 ? (36u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (38u + sizeof(_g4_t_v36)) > _g4_s21 ? (38u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v37)) > _g4_s22 ? (40u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v38)) > _g4_s23 ? (40u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v39)) > _g4_s24 ? (44u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v40)) > _g4_s25 ? (52u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v41)) > _g4_s26 ? (76u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v42)) > _g4_s27 ? (80u + sizeof(_g4_t_v42)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 32u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 32u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 32u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 38u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);

  v42[6] = &a1;
  v40 = a1;
  v39 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  HIBYTE(v34) = sub_837730((int)(uintptr_t)(v40), Variable, v39, v15, v17, v20, v23, v26, (int)(uintptr_t)(obj), v33);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v40, 2);
  BYTE2(v35) = sub_837730((int)(uintptr_t)(v40), v4, v39, v16, v18, v21, v24, v27, (int)(uintptr_t)(obja), v34);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v40, 3);
  sub_837C70(&v41, (int)(uintptr_t)(v40), v5, v39, v19, v22, v25, v28, (int)(uintptr_t)(objb), v35, v37);
  v42[0] = v42;
  v42[1] = v42;
  sub_8560A0(v40, 0, (int)(uintptr_t)(v42), (int)(uintptr_t)(v39), 0x7FFFFFFF);
  v38 = -1;
  if ( *((uint32_t *)v41 - 3) != 0 )
    v38 = sub_C6A190(v41);
  v6 = (void **)v42[0];
  if ( v42[0] != v42 )
  {
    while ( 1 )
    {
      v10 = (uint32_t *)(v6[2]);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      if ( v10 == nullptr )
        goto LABEL_13;
      if ( *(uint32_t *)(v10[102] - 12) == 0 )
        goto LABEL_13;
      v7 = v10[101];
      if ( v7 == 0 || ((*(int (**)(uint32_t))(*(uint32_t *)v7 + 32))(v10[101]) & 2) == 0 )
        goto LABEL_13;
      v8 = G4_VCALL<int>(v10, 560);
      if ( sub_A6DB10(v8) != dword_20D76D0 )
        break;
      v11 = v10[468];
      if ( (v11 & 0x2000) != 0 )
      {
LABEL_13:
        v6 = (void **)*v6;
        if ( v6 == v42 )
          goto LABEL_20;
      }
      else
      {
        if ( (v11 & 0x1000) == 0 )
          goto LABEL_11;
        v6 = (void **)*v6;
        if ( v6 == v42 )
          goto LABEL_20;
      }
    }
    objc = (void *)dword_20D76D0;
    v9 = G4_VCALL<int>(v10, 560);
    sub_A6DB00(v9, (int)(uintptr_t)(objc));
    sub_BDEE30(v10 + 72, 0);
LABEL_11:
    G4_VCALL<void>(v10, 420, HIBYTE(v36), (uint8_t)v36);
    if ( v38 != -1 )
      sub_9D4450((int)(uintptr_t)(v10), v38, 1065353216, 125, 0, 1);
    goto LABEL_13;
  }
LABEL_20:
  grapher::ActorBase::FireEvent(v40, 1, v39);
  v12 = (void **)v42[0];
  if ( v42[0] != v42 )
  {
    while ( 1 )
    {
      v13 = (void **)*v12;
      opDelete(v12);
      if ( v13 == v42 )
        break;
      v12 = v13;
    }
  }
  return ((g4_std::string::Destroy(&v41)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C6A920_eac6a920  (binary VA: 0xc6a920)
// Original: sub_C6A920
// ----------------------------------------------------------------------------
void sub_C6A920_eac6a920(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  g4_cxa_guard_t **v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  grapher::HolderT<int> *v13;
  grapher::ActorContext::Self *v14;
  grapher::ActorVariable::Self *v15;
  int v16;
  void (***v17)(uint32_t, uint32_t);
  unsigned int v18;
  size_t v19;
  char *v20;
  int v21;
  grapher::DebugConstants::Self *v22;
  g4_cxa_guard_t **v23;
  int v24;
  void *v25;
  char *v26;
  unsigned int v27;
  grapher::ActorVariable::Self *Variable;
  int *v29;
  grapher::ActorVariable::Self *v30;
  int v31;
  grapher::ActorVariable::Self *v32;
  char *v33;
  char *v34;
  void **v35;
  void **v36;
  grapher::HolderT<int> *v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  grapher::HolderT<int> *v42;
  int v43;
  grapher::HolderT<int> *v44;
  int v45;
  unsigned int v46;
  int v47;
  char *v48;
  typedef char *_g4_t_v49;
  typedef grapher::ActorBase::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef grapher::ActorContext::Self *_g4_t_v54;
  typedef grapher::DebugConstants::Self *_g4_t_v55;
  typedef grapher::DebugConstants::Self *_g4_t_v56;
  typedef grapher::DebugConstants::Self *_g4_t_v57;
  typedef grapher::DebugConstants::Self *_g4_t_v58;
  typedef grapher::DebugConstants::Self *_g4_t_v59;
  typedef grapher::DebugConstants::Self *_g4_t_v60;
  typedef grapher::DebugConstants::Self *_g4_t_v61;
  typedef char *_g4_t_obj;
  typedef uint8_t *_g4_t_obja;
  typedef grapher::HolderT<int> *_g4_t_objb;
  typedef void *_g4_t_objc;
  typedef void *_g4_t_objd;
  typedef void *_g4_t_obje;
  typedef int *_g4_t_src;
  typedef grapher::ActorBase::Self *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v72;
  typedef void **_g4_t_v73;
  typedef int *_g4_t_dest;
  typedef unsigned int _g4_t_desta;
  typedef grapher::ActorContext::Self *_g4_t_v76;
  typedef g4_cxa_guard_t *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef g4_cxa_guard_t *_g4_t_v79;
  typedef int _g4_t_v80[4];
  typedef char _g4_t_v81[4];
  typedef char *_g4_t_nptr;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t _g4_t_v85[2];
  typedef char _g4_t_v86[4];
  typedef char _g4_t_v87[4];
  typedef int _g4_t_Constant;
  typedef int _g4_t_v89;
  typedef void *_g4_t_v90[2];
  typedef char *_g4_t_v91;
  typedef char *_g4_t_v92;
  typedef char *_g4_t_v93;
  typedef void *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef grapher::ActorBase::Self **_g4_t_v97;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v49)) > _g4_s0 ? (4u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v50)) > _g4_s1 ? (8u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v51)) > _g4_s2 ? (8u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v52)) > _g4_s3 ? (12u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v53)) > _g4_s4 ? (12u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v54)) > _g4_s5 ? (16u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v55)) > _g4_s6 ? (48u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v56)) > _g4_s7 ? (48u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v57)) > _g4_s8 ? (48u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v58)) > _g4_s9 ? (48u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v59)) > _g4_s10 ? (48u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v60)) > _g4_s11 ? (48u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v61)) > _g4_s12 ? (48u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_obj)) > _g4_s13 ? (52u + sizeof(_g4_t_obj)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_obja)) > _g4_s14 ? (52u + sizeof(_g4_t_obja)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_objb)) > _g4_s15 ? (52u + sizeof(_g4_t_objb)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_objc)) > _g4_s16 ? (52u + sizeof(_g4_t_objc)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_objd)) > _g4_s17 ? (52u + sizeof(_g4_t_objd)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_obje)) > _g4_s18 ? (52u + sizeof(_g4_t_obje)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_src)) > _g4_s19 ? (56u + sizeof(_g4_t_src)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v69)) > _g4_s20 ? (64u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v70)) > _g4_s21 ? (68u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_n)) > _g4_s22 ? (72u + sizeof(_g4_t_n)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v72)) > _g4_s23 ? (76u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v73)) > _g4_s24 ? (80u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_dest)) > _g4_s25 ? (84u + sizeof(_g4_t_dest)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_desta)) > _g4_s26 ? (84u + sizeof(_g4_t_desta)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v76)) > _g4_s27 ? (88u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v77)) > _g4_s28 ? (92u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v78)) > _g4_s29 ? (92u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v79)) > _g4_s30 ? (92u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v80)) > _g4_s31 ? (100u + sizeof(_g4_t_v80)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v81)) > _g4_s32 ? (116u + sizeof(_g4_t_v81)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_nptr)) > _g4_s33 ? (120u + sizeof(_g4_t_nptr)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v83)) > _g4_s34 ? (124u + sizeof(_g4_t_v83)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v84)) > _g4_s35 ? (128u + sizeof(_g4_t_v84)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v85)) > _g4_s36 ? (132u + sizeof(_g4_t_v85)) : _g4_s36,
    _g4_s38 = (140u + sizeof(_g4_t_v86)) > _g4_s37 ? (140u + sizeof(_g4_t_v86)) : _g4_s37,
    _g4_s39 = (144u + sizeof(_g4_t_v87)) > _g4_s38 ? (144u + sizeof(_g4_t_v87)) : _g4_s38,
    _g4_s40 = (148u + sizeof(_g4_t_Constant)) > _g4_s39 ? (148u + sizeof(_g4_t_Constant)) : _g4_s39,
    _g4_s41 = (152u + sizeof(_g4_t_v89)) > _g4_s40 ? (152u + sizeof(_g4_t_v89)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v90)) > _g4_s41 ? (156u + sizeof(_g4_t_v90)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v91)) > _g4_s42 ? (164u + sizeof(_g4_t_v91)) : _g4_s42,
    _g4_s44 = (168u + sizeof(_g4_t_v92)) > _g4_s43 ? (168u + sizeof(_g4_t_v92)) : _g4_s43,
    _g4_s45 = (172u + sizeof(_g4_t_v93)) > _g4_s44 ? (172u + sizeof(_g4_t_v93)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v94)) > _g4_s45 ? (180u + sizeof(_g4_t_v94)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v95)) > _g4_s46 ? (184u + sizeof(_g4_t_v95)) : _g4_s46,
    _g4_s48 = (188u + sizeof(_g4_t_v96)) > _g4_s47 ? (188u + sizeof(_g4_t_v96)) : _g4_s47,
    _g4_s49 = (204u + sizeof(_g4_t_v97)) > _g4_s48 ? (204u + sizeof(_g4_t_v97)) : _g4_s48
  };
  alignas(16) uint8_t _g4_sf[_g4_s49];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 52u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 52u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 52u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 52u);
  _g4_t_objd &objd = *reinterpret_cast<_g4_t_objd *>(_g4_sf + 52u);
  _g4_t_obje &obje = *reinterpret_cast<_g4_t_obje *>(_g4_sf + 52u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 84u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 88u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 92u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 92u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 100u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 116u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 120u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 124u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 128u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 132u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 140u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 144u);
  _g4_t_Constant &Constant = *reinterpret_cast<_g4_t_Constant *>(_g4_sf + 148u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 152u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 156u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 164u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 168u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 172u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 180u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 184u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 188u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 204u);

  v97 = &a1;
  v69 = a1;
  v76 = a3;
  v90[0] = v90;
  v90[1] = v90;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v90), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (uint32_t *)(v90[0]);
  v73 = (void **)v90[0];
  if ( v90[0] != v90 )
  {
    while ( 1 )
    {
      v4 = v3[2];
      v72 = v4;
      if ( v4 != 0
        && G4_VCALL<uint8_t>(v4, 208, v50, v52, v54) == 0 )
      {
        break;
      }
LABEL_63:
      v3 = (uint32_t *)(*v73);
      v73 = (void **)*v73;
      if ( v73 == v90 )
        goto LABEL_64;
    }
    v94 = nullptr;
    v95 = 0;
    v96 = 0;
    grapher::ActorBase::GetVariables(v69, 2, (int)(uintptr_t)(&v94));
    v5 = (uint32_t *)(v94);
    v70 = (v95 - (int)(uintptr_t)(v94)) >> 2;
    if ( v70 != 0 )
    {
      n = 0;
      v6 = nullptr;
      src = nullptr;
      v7 = 0;
      while ( 1 )
      {
        v14 = v76;
        v15 = (grapher::ActorVariable::Self *)v5[v7];
        if ( v76 == nullptr )
        {
          v14 = (grapher::ActorContext::Self *)&unk_20D6720;
          if ( byte_20D6700 == 0 )
          {
            v60 = (grapher::DebugConstants::Self *)v5[v7];
            v43 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
            v15 = (grapher::ActorVariable::Self *)(v60);
            v14 = (grapher::ActorContext::Self *)&unk_20D6720;
            if ( v43 != 0 )
            {
              grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
              __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
              v14 = (grapher::ActorContext::Self *)&unk_20D6720;
              v15 = (grapher::ActorVariable::Self *)(v60);
            }
          }
        }
        v55 = (grapher::DebugConstants::Self *)(v15);
        grapher::ActorContext::LoadAVar(v14, v15);
        if ( *((uint32_t *)v55 + 2) == 12 )
          break;
        if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v51) == 0
          && *((uint32_t *)v55 + 2) == 11 )
        {
          v38 = *((uint32_t *)v55 + 1);
          v39 = 0;
          if ( v38 != 0 )
            v39 = (*(int (**)(uint32_t))(*(uint32_t *)v38 + 48))(*((uint32_t *)v55 + 1));
          v91 = (char *)&dword_213B814;
          if ( v39 != 0 )
          {
            objd = (void *)v39;
            G4_VCALL<void>(v39, 32, &v91);
            G4_VCALL<void>(objd, 44);
          }
          v40 = sub_1938090((int)(uintptr_t)(&v91), ".", 0, 1u);
          if ( v40 == -1 )
          {
            v89 = -1;
            v44 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
            *(uint32_t *)v44 = (uint32_t)(uintptr_t)(&off_205C508);
            v61 = (grapher::DebugConstants::Self *)(v44);
            grapher::HolderT_int_id_fe4c74::From(v44, &v89);
            (**(void (***)(grapher::DebugConstants::Self *, uint32_t *))v61)(v61, v85);
            v77 = (g4_cxa_guard_t *)v85[0];
            G4_VCALL<void>(v61, 44);
          }
          else
          {
            v41 = *((uint32_t *)v91 - 3);
            if ( v41 < v40 + 1 )
LABEL_100:
              sub_1900210("basic_string::substr");
            obje = (void *)v40;
            sub_193A6F0(v87, &v91, v40 + 1, v41);
            sub_193A6F0(v86, &v91, 0, obje);
            if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
            {
              grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
              __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
            }
            Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v86, v87);
            v42 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
            *(uint32_t *)v42 = (uint32_t)(uintptr_t)(&off_205C508);
            v59 = (grapher::DebugConstants::Self *)(v42);
            grapher::HolderT_int_id_fe4c74::From(v42, &Constant);
            (**(void (***)(grapher::DebugConstants::Self *, uint32_t *))v59)(v59, v85);
            v77 = (g4_cxa_guard_t *)v85[0];
            G4_VCALL<void>(v59, 44);
            g4_std::string::Destroy(v86);
            g4_std::string::Destroy(v87);
          }
          g4_std::string::Destroy(&v91);
LABEL_14:
          if ( (g4_cxa_guard_t **)n != v6 )
            goto LABEL_15;
LABEL_25:
          v18 = (int)(n - (uint32_t)(uintptr_t)(src)) >> 2;
          v19 = 4;
          if ( v18 != 0 )
          {
            if ( v18 > 2 * v18 || 2 * v18 > 0x3FFFFFFF )
              v19 = 0xFFFFFFFC;
            else
              v19 = 8 * v18;
          }
          v56 = (grapher::DebugConstants::Self *)v19;
          v20 = (char *)opNew(v19);
          v21 = (int)(n - (uint32_t)(uintptr_t)(src)) >> 2;
          dest = (int *)v20;
          v22 = v56;
          v23 = (g4_cxa_guard_t **)&v20[4 * v21];
          if ( v23 != nullptr )
            *v23 = v77;
          if ( v21 != 0 )
          {
            memmove(v20, src, 4 * v21);
            v22 = v56;
          }
          v6 = v23 + 1;
          if ( src != nullptr )
          {
            v57 = v22;
            opDelete(src);
            v22 = v57;
          }
          ++v7;
          src = dest;
          n = (size_t)v22 + (uint32_t)(uintptr_t)(dest);
          v5 = (uint32_t *)(v94);
          if ( v70 == v7 )
            goto LABEL_35;
        }
        else
        {
          v16 = *((uint32_t *)v55 + 1);
          if ( v16 == 0
            || (v17 = (void (***)(uint32_t, uint32_t))(*(int (**)(uint32_t))(*(uint32_t *)v16 + 48))(*((uint32_t *)v55 + 1))) == nullptr )
          {
            v77 = (g4_cxa_guard_t *)v85[0];
            goto LABEL_14;
          }
          objc = v17;
          (**v17)((uint32_t)(uintptr_t)(v17), (uint32_t)(uintptr_t)(v85));
          v77 = (g4_cxa_guard_t *)v85[0];
          G4_VCALL<void>(objc, 44);
          if ( (g4_cxa_guard_t **)n == v6 )
            goto LABEL_25;
LABEL_15:
          if ( v6 != nullptr )
            *v6 = v77;
          ++v6;
          ++v7;
          v5 = (uint32_t *)(v94);
          if ( v70 == v7 )
          {
LABEL_35:
            desta = ((char *)v6 - (char *)src) >> 2;
            goto LABEL_36;
          }
        }
      }
      v80[0] = (int)(uintptr_t)(&dword_213B814);
      v8 = *((uint32_t *)v55 + 1);
      if ( v8 != 0 )
        G4_VCALL<void>(v8, 32, v80);
      v9 = sub_1938090((int)(uintptr_t)(v80), "..", 0, 2u);
      if ( v9 == -1 )
      {
        v84 = 0;
        v37 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v37 = (uint32_t)(uintptr_t)(&off_205C508);
        v58 = (grapher::DebugConstants::Self *)(v37);
        grapher::HolderT_int_id_fe4c74::From(v37, &v84);
        (**(void (***)(grapher::DebugConstants::Self *, uint32_t *))v58)(v58, v85);
        v77 = (g4_cxa_guard_t *)v85[0];
        G4_VCALL<void>(v58, 44);
      }
      else
      {
        obj = (char *)v9;
        sub_193A6F0(&nptr, v80, 0, v9);
        if ( (unsigned int)(uintptr_t)(obj + 2) > *(uint32_t *)(v80[0] - 12) )
          goto LABEL_100;
        sub_193A6F0(&v91, v80, obj + 2, -1);
        obja = (uint8_t *)atoi(nptr);
        v10 = atoi(v91);
        v11 = obja;
        v12 = (uint8_t *)v10;
        if ( (int)(uintptr_t)(obja) > v10 )
        {
          v12 = obja;
          v11 = (uint8_t *)v10;
        }
        v83 = (int)(uintptr_t)(&v11[lrand48() % (v12 - v11 + 1)]);
        v13 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v13 = (uint32_t)(uintptr_t)(&off_205C508);
        objb = v13;
        grapher::HolderT_int_id_fe4c74::From(v13, &v83);
        (**(void (***)(void *, uint32_t *))objb)(objb, v85);
        v77 = (g4_cxa_guard_t *)v85[0];
        G4_VCALL<void>(objb, 44);
        g4_std::string::Destroy(&v91);
        g4_std::string::Destroy(&nptr);
      }
      g4_std::string::Destroy(v80);
      goto LABEL_14;
    }
    desta = 0;
    src = nullptr;
LABEL_36:
    if ( v5 != nullptr )
      opDelete(v5);
    if ( desta == 1 && *src == -2 )
    {
      sub_9D6900(v72, 125);
LABEL_61:
      if ( src != nullptr )
        opDelete(src);
      goto LABEL_63;
    }
    v94 = nullptr;
    v95 = 0;
    v96 = 0;
    v91 = nullptr;
    v92 = nullptr;
    v93 = nullptr;
    v24 = 0;
    grapher::ActorBase::GetVariables(v69, 1, (int)(uintptr_t)(&v94));
    v25 = v94;
    v78 = (v95 - (int)(uintptr_t)(v94)) >> 2;
    if ( v78 != 0 )
    {
      do
      {
        sub_837C70(v81);
        if ( v92 == v93 )
        {
          g4_std::vector_string_86c307::M_insert_aux(&v91, v92, v81);
        }
        else
        {
          v26 = nullptr;
          if ( v92 != nullptr )
          {
            g4_std::string::construct_copy(v92, v81);
            v26 = v92;
          }
          v92 = v26 + 4;
        }
        ++v24;
        g4_std::string::Destroy(v81);
        v25 = v94;
      }
      while ( v78 != v24 );
    }
    if ( v25 != nullptr )
      opDelete(v25);
    v27 = 0;
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v69, 3);
    if ( (uint8_t)sub_837730(v69, Variable, v76) != 0 )
    {
      if ( *src < 0 )
      {
        v46 = lrand48();
        v29 = src;
        v27 = v46 % ((v92 - v91) >> 2);
        if ( *src >= 0 )
          goto LABEL_51;
        goto LABEL_94;
      }
      v27 = lrand48() % desta;
    }
    v29 = src;
    if ( *src >= 0 )
    {
LABEL_51:
      v79 = (g4_cxa_guard_t *)v29[v27];
LABEL_52:
      v52 = grapher::ActorBase::GetVariable(v69, 5);
      v54 = v76;
      v50 = v69;
      sub_837C70(&nptr);
      if ( *((uint32_t *)nptr - 3) != 0 )
      {
        v45 = sub_C6A190();
        sub_9FFF40(v72, v79, v45, 1, 1);
      }
      else if ( *(uint8_t *)(v72 + 2357) == 0
             || v79 != (g4_cxa_guard_t *)((char *)off_9C + 3) && v79 != (g4_cxa_guard_t *)((char *)off_9C + 1) )
      {
        if ( v79 == (g4_cxa_guard_t *)-1 )
        {
          v47 = sub_4EBDC0(0x35u);
          *(uint32_t *)(v47 + 4) = 40;
          *(uint32_t *)(v47 + 8) = 0;
          std::memcpy((void *)(v47 + 12), "[for Designer]: It looks like animation ", 40);
          if ( (void *)v47 != &unk_20D3E6C )
          {
            *(uint32_t *)(v47 + 8) = 0;
            *(uint32_t *)v47 = 40;
            *(uint8_t *)(v47 + 52) = 0;
          }
          v94 = (void *)(v47 + 12);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            *(const char **)&v91[v27 * 4]);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            "\nin module ");
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            *(const char **)(*((uint32_t *)v69 + 12) + 72));
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            "\nfrom graph ");
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            *(const char **)(*((uint32_t *)v69 + 12) + 92));
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            "\ndoes not exist! Please check spelling\n");
          v48 = (char *)v94 - 12;
          if ( (char *)v94 - 12 != (char *)&unk_20D3E6C
            && __sync_fetch_and_add((volatile int32_t *)v94 - 1, 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr((int)(uintptr_t)(v48));
          }
        }
        v30 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v69, 6);
        v31 = (int)(uintptr_t)(sub_837200(v69, v30, v76));
        v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v69, 4);
        v53 = sub_838060(v69, v32, v76);
        sub_9D4450(v72, v79, LODWORD(v53), v31, 0, 0);
      }
      g4_std::string::Destroy(&nptr);
      v33 = v92;
      v34 = v91;
      if ( v92 != v91 )
      {
        do
        {
          v49 = v34;
          v34 += 4;
          g4_std::string::Destroy(v49);
        }
        while ( v33 != v34 );
        v34 = v91;
      }
      if ( v34 != nullptr )
        opDelete(v34);
      goto LABEL_61;
    }
LABEL_94:
    v79 = (g4_cxa_guard_t *)sub_C6A190();
    goto LABEL_52;
  }
LABEL_64:
  grapher::ActorBase::FireEvent(v69, 1, v76);
  v35 = (void **)v90[0];
  if ( v90[0] != v90 )
  {
    while ( 1 )
    {
      v36 = (void **)*v35;
      opDelete(v35);
      if ( v36 == v90 )
        break;
      v35 = v36;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C6B6B0  (binary VA: 0xc6b6b0)
// Original: sub_C6B6B0
// ----------------------------------------------------------------------------
uint32_t * sub_C6B6B0(uint32_t *a1, int a2, int *a3, int *a4)
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
// Function: sub_C6B7D0  (binary VA: 0xc6b7d0)
// Original: sub_C6B7D0
// ----------------------------------------------------------------------------
int sub_C6B7D0(int a1, int *a2)
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
    sub_C6B6B0(v12, 0, v11, a2);
LABEL_13:
    v9 = v12[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_10:
  if ( (int *)dword_20D7CE4 == v3 )
  {
    sub_C6B6B0(v12, 0, v3, a2);
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
// Function: sub_C6B8B0_eac6b8b0  (binary VA: 0xc6b8b0)
// Original: sub_C6B8B0
// ----------------------------------------------------------------------------
int sub_C6B8B0_eac6b8b0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_s[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v19)) > _g4_s6 ? (20u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v20)) > _g4_s7 ? (20u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v21)) > _g4_s8 ? (24u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v22)) > _g4_s9 ? (24u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v23)) > _g4_s10 ? (24u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_s)) > _g4_s11 ? (44u + sizeof(_g4_t_s)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837C70(s, (int)(uintptr_t)(a1), Variable, a3, v13, v14, v15, v16, v17, v18, v21);
    goto LABEL_8;
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(s, (int)(uintptr_t)(a1), v8, a3, v13, v14, v15, v16, v17, v18, v21);
  v9 = sub_5A5890(s[0], 0xA078B2C1);
  v10 = dword_20DE720;
  if ( dword_20DE720 == 0 )
  {
    v19 = v9;
    v22 = sub_4EBBF0(0x4Cu, 1);
    sub_C01030(v22);
    dword_20DE720 = v22;
    sub_C025A0(v22);
    v9 = v19;
    v10 = dword_20DE720;
  }
  v11 = (int *)sub_C01ED0(v10, v9);
  v12 = dword_20DE720;
  if ( dword_20DE720 == 0 )
  {
    v20 = v11;
    v23 = sub_4EBBF0(0x4Cu, 1);
    sub_C01030(v23);
    dword_20DE720 = v23;
    sub_C025A0(v23);
    v11 = v20;
    v12 = dword_20DE720;
  }
  sub_C011B0(v12, v4, (uint32_t *)(v4 + 464), v11);
LABEL_8:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  return ((g4_std::string::Destroy(s)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C6BAA0_eac6baa0  (binary VA: 0xc6baa0)
// Original: sub_C6BAA0
// ----------------------------------------------------------------------------
int sub_C6BAA0_eac6baa0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int *v4;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  grapher::ActorVariable::Self *Variable;
  int v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorVariable::Self *v18;
  grapher::ActorVariable::Self *v19;
  int v20;
  grapher::ActorVariable::Self *v21;
  grapher::ActorVariable::Self *v22;
  grapher::ActorVariable::Self *v23;
  typedef float _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_s;
  typedef float _g4_t_v33[4];
  typedef float _g4_t_v34[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v25)) > _g4_s1 ? (32u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v26)) > _g4_s2 ? (32u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v27)) > _g4_s3 ? (32u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v28)) > _g4_s4 ? (32u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v29)) > _g4_s5 ? (32u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (43u + sizeof(_g4_t_v31)) > _g4_s7 ? (43u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_s)) > _g4_s8 ? (48u + sizeof(_g4_t_s)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v33)) > _g4_s9 ? (52u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v34)) > _g4_s10 ? (68u + sizeof(_g4_t_v34)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 43u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31) + 1, "Subject", (int)(uintptr_t)(&v31));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0(&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v4 = (int *)sub_5B44E0(v3, (char *)&v31 + 1, a3);
  g4_std::string::Destroy((char *)&v31 + 1);
  if ( v4 != nullptr )
  {
    g4_std::string::construct_copy(&s, v4 + 626);
    if ( (uint8_t)sub_8ED2E0(v4[283]) == 0 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      if ( (uint8_t)sub_837730(a1, Variable, a3) == 0 )
      {
        v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
        if ( (uint8_t)sub_837730(a1, v19, a3) == 0 )
        {
          v22 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
          if ( (uint8_t)sub_837730(a1, v22, a3) == 0 )
          {
            v23 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
            if ( (uint8_t)sub_837730(a1, v23, a3) != 0 )
              goto LABEL_26;
          }
        }
      }
      sub_5A5890(s, -1757258454);
      v16 = sub_C6A190();
LABEL_15:
      if ( v16 == -1 )
        goto LABEL_16;
LABEL_26:
      v20 = G4_VCALL<int>(v4, 56);
      sub_9D9CA0(v4, v20, 0, 0, 0);
      sub_9FFF40(v4);
      sub_97E8D0(v4, 4, 0);
      *((uint8_t *)v4 + 3404) = 1;
      sub_987840(v4, 0);
      sub_9879B0(v4, 0);
      v4[721] = -1;
      goto LABEL_16;
    }
    v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    if ( (uint8_t)sub_837730(a1, v5, a3) != 0 )
    {
      *((uint8_t *)v4 + 4977) = 0;
      v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
      if ( (uint8_t)sub_837730(a1, v6, a3) != 0 )
      {
        if ( (uint8_t)sub_982C00(v4) != 0 )
        {
LABEL_9:
          lrand48();
          v7 = G4_VCALL<int>(v4, 56);
          sub_9D9CA0(v4, v7, 0, 0, 0);
          sub_9FFF40(v4);
          sub_97E8D0(v4, 4, 0);
          *((uint8_t *)v4 + 3404) = 1;
          sub_987840(v4, 0);
          sub_9879B0(v4, 0);
          v8 = *v4;
          v4[721] = -1;
          (*(void (**)(float *, int *))(v8 + 52))(v34, v4);
          (*(void (**)(float *))(*(uint32_t *)v4[574] + 52))(v33);
          v9 = v33[0] - v33[3];
          v10 = v33[1] - v34[0];
          v11 = (float)(v10 * v10) + (float)(v9 * v9);
          if ( v11 != v24 )
          {
            v12 = 1.0 / fsqrt(v11);
            v13 = (float)((float)((float)(v11 * v12) * v12) + -3.0) * (float)(v12 * -0.5);
            v9 = v9 * v13;
            v10 = v10 * v13;
          }
          v34[4] = 0.0;
          v34[2] = v9;
          v34[3] = v10;
          sub_98EFF0((char)(uintptr_t)(v4));
          g4_std::string::Destroy(&s);
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
        }
        v29 = (uint32_t *)dword_20D9B90;
        if ( v29[18 * sub_5A5890(s, -1757258454) + 3] != 0 )
          goto LABEL_36;
LABEL_16:
        g4_std::string::Destroy(&s);
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
      }
      if ( (uint8_t)sub_982C00(v4) != 0 )
        goto LABEL_9;
      v27 = (uint32_t *)dword_20D9B90;
      if ( v27[18 * sub_5A5890(s, -1757258454) + 9] == 0 )
        goto LABEL_16;
    }
    else
    {
      v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
      if ( (uint8_t)sub_837730(a1, v17, a3) != 0 )
      {
        v18 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
        if ( (uint8_t)sub_837730(a1, v18, a3) != 0 )
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v25 = (uint32_t *)dword_20D9B90;
          if ( v25[18 * sub_5A5890(s, -1757258454) + 5] == 0 )
            goto LABEL_16;
        }
        else
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v30 = (uint32_t *)dword_20D9B90;
          if ( v30[18 * sub_5A5890(s, -1757258454) + 11] == 0 )
            goto LABEL_16;
        }
      }
      else
      {
        v21 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
        if ( (uint8_t)sub_837730(a1, v21, a3) != 0 )
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v26 = (uint32_t *)dword_20D9B90;
          if ( v26[18 * sub_5A5890(s, -1757258454) + 7] == 0 )
            goto LABEL_16;
        }
        else
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v28 = (uint32_t *)dword_20D9B90;
          if ( v28[18 * sub_5A5890(s, -1757258454) + 13] == 0 )
            goto LABEL_16;
        }
      }
    }
LABEL_36:
    sub_5A5890(s, -1757258454);
    lrand48();
    v16 = sub_C6A190();
    goto LABEL_15;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


