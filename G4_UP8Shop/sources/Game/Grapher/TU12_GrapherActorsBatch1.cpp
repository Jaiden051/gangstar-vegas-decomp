#include "Core/Utils/DecompTypes.h"
#include "TU12_GrapherActorsBatch1.h"

// ----------------------------------------------------------------------------
// Function: sub_81E660  (binary VA: 0x81e660)
// Original: sub_81E660
// ----------------------------------------------------------------------------
int sub_81E660()
{
  int result;
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20D6668);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D6668, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D666C), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D666C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D6670), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D6670, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D6674), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D6674, &unk_20D1280);
  dword_20D6678 = 1056964608;
  dword_20D667C = 1056964608;
  dword_20D6680 = 1056964608;
  dword_20D6624 = 0;
  sub_5F76C0(&dword_20D6624, 0);
  __cxa_atexit((void (*)(void *))sub_656770, &dword_20D6624, &unk_20D1280);
  dword_20D6614 = 0;
  dword_20D6618 = 0;
  dword_20D661C = 0;
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_aabbox3d_float_GameAlloc_fbdedc::Destroy,
    &dword_20D6614,
    &unk_20D1280);
  dword_20D6608 = 0;
  dword_20D660C = 0;
  dword_20D6610 = 0;
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_aabbox3d_float_GameAlloc_fbdedc::Destroy,
    &dword_20D6608,
    &unk_20D1280);
  dword_20D65F0 = 0;
  dword_20D65F4 = 0;
  dword_20D65F8 = 0;
  dword_20D65FC = 1065353216;
  dword_20D6600 = 1065353216;
  dword_20D6604 = 1065353216;
  dword_20D6684 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D6684, &unk_20D1280);
  dword_20D6688 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D6688, &unk_20D1280);
  dword_20D668C = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D668C, &unk_20D1280);
  dword_20D6690 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D6690, &unk_20D1280);
  dword_20D6694 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D6694, &unk_20D1280);
  dword_20D6698 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D6698, &unk_20D1280);
  dword_20D669C = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D669C, &unk_20D1280);
  dword_20D66A0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D66A0, &unk_20D1280);
  result = opNewArray(0x10u);
  dword_20D66A4 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81E920  (binary VA: 0x81e920)
// Original: sub_81E920
// ----------------------------------------------------------------------------
int sub_81E920(int a1)
{
  return *(uint32_t *)(a1 + 128);
}

// ----------------------------------------------------------------------------
// Function: sub_81E930  (binary VA: 0x81e930)
// Original: sub_81E930
// ----------------------------------------------------------------------------
int sub_81E930(int a1, int a2)
{
  int result;
  int v3;

  result = a1;
  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 40, "visible", 0, a1 + 24, *(uint32_t *)(*(uint32_t *)(a1 + 64) + 8 * a2 + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81E9A0_ea81e9a0  (binary VA: 0x81e9a0)
// Original: sub_81E9A0
// ----------------------------------------------------------------------------
int sub_81E9A0_ea81e9a0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BEA8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameWorldTimeFormat::Destroy_ea81e9d0  (binary VA: 0x81e9d0)
// Original: ActorGameWorldTimeFormat::~ActorGameWorldTimeFormat
// ----------------------------------------------------------------------------
int ActorGameWorldTimeFormat::Destroy_ea81e9d0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameWorldTime::Destroy_ea81ea00  (binary VA: 0x81ea00)
// Original: ActorGameWorldTime::~ActorGameWorldTime
// ----------------------------------------------------------------------------
int ActorGameWorldTime::Destroy_ea81ea00(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE28);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameWorldSetLock::Destroy_ea81ea30  (binary VA: 0x81ea30)
// Original: ActorGameWorldSetLock::~ActorGameWorldSetLock
// ----------------------------------------------------------------------------
int ActorGameWorldSetLock::Destroy_ea81ea30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BDE8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameWorldChangeLocation::Destroy_ea81ea60  (binary VA: 0x81ea60)
// Original: ActorGameWorldChangeLocation::~ActorGameWorldChangeLocation
// ----------------------------------------------------------------------------
int ActorGameWorldChangeLocation::Destroy_ea81ea60(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameWorldItem::Destroy_ea81ea90  (binary VA: 0x81ea90)
// Original: ActorGameWorldItem::~ActorGameWorldItem
// ----------------------------------------------------------------------------
int ActorGameWorldItem::Destroy_ea81ea90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD28);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameWorldCoverEligible::Destroy_ea81eac0  (binary VA: 0x81eac0)
// Original: ActorGameWorldCoverEligible::~ActorGameWorldCoverEligible
// ----------------------------------------------------------------------------
int ActorGameWorldCoverEligible::Destroy_ea81eac0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCE8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleToggleRadio::Destroy_ea81eaf0  (binary VA: 0x81eaf0)
// Original: ActorGameVehicleToggleRadio::~ActorGameVehicleToggleRadio
// ----------------------------------------------------------------------------
int ActorGameVehicleToggleRadio::Destroy_ea81eaf0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCA8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleSetSpeed::Destroy_ea81eb20  (binary VA: 0x81eb20)
// Original: ActorGameVehicleSetSpeed::~ActorGameVehicleSetSpeed
// ----------------------------------------------------------------------------
int ActorGameVehicleSetSpeed::Destroy_ea81eb20(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleLockDoors::Destroy_ea81eb50  (binary VA: 0x81eb50)
// Original: ActorGameVehicleLockDoors::~ActorGameVehicleLockDoors
// ----------------------------------------------------------------------------
int ActorGameVehicleLockDoors::Destroy_ea81eb50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC28);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleDestroy::Destroy_ea81eb80  (binary VA: 0x81eb80)
// Original: ActorGameVehicleDestroy::~ActorGameVehicleDestroy
// ----------------------------------------------------------------------------
int ActorGameVehicleDestroy::Destroy_ea81eb80(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBE8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameTrackVehicleSold::Destroy_ea81ebb0  (binary VA: 0x81ebb0)
// Original: ActorGameTrackVehicleSold::~ActorGameTrackVehicleSold
// ----------------------------------------------------------------------------
int ActorGameTrackVehicleSold::Destroy_ea81ebb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBA8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameStatCounters::Destroy_ea81ebe0  (binary VA: 0x81ebe0)
// Original: ActorGameStatCounters::~ActorGameStatCounters
// ----------------------------------------------------------------------------
int ActorGameStatCounters::Destroy_ea81ebe0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB68);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameSoundMusic::Destroy_ea81ec10  (binary VA: 0x81ec10)
// Original: ActorGameSoundMusic::~ActorGameSoundMusic
// ----------------------------------------------------------------------------
int ActorGameSoundMusic::Destroy_ea81ec10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB28);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameSoundOneLiners::Destroy_ea81ec40  (binary VA: 0x81ec40)
// Original: ActorGameSoundOneLiners::~ActorGameSoundOneLiners
// ----------------------------------------------------------------------------
int ActorGameSoundOneLiners::Destroy_ea81ec40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BAE8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameSoundAmbience::Destroy_ea81ec70  (binary VA: 0x81ec70)
// Original: ActorGameSoundAmbience::~ActorGameSoundAmbience
// ----------------------------------------------------------------------------
int ActorGameSoundAmbience::Destroy_ea81ec70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BAA8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameSoundFX::Destroy_ea81eca0  (binary VA: 0x81eca0)
// Original: ActorGameSoundFX::~ActorGameSoundFX
// ----------------------------------------------------------------------------
int ActorGameSoundFX::Destroy_ea81eca0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA68);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameScriptExec::Destroy_ea81ecd0  (binary VA: 0x81ecd0)
// Original: ActorGameScriptExec::~ActorGameScriptExec
// ----------------------------------------------------------------------------
int ActorGameScriptExec::Destroy_ea81ecd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA28);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerSetThrowable::Destroy_ea81ed00  (binary VA: 0x81ed00)
// Original: ActorGamePlayerSetThrowable::~ActorGamePlayerSetThrowable
// ----------------------------------------------------------------------------
int ActorGamePlayerSetThrowable::Destroy_ea81ed00(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9E8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveRespect::Destroy_ea81ed30  (binary VA: 0x81ed30)
// Original: ActorGamePlayerGiveRespect::~ActorGamePlayerGiveRespect
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveRespect::Destroy_ea81ed30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9A8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveItem::Destroy_ea81ed60  (binary VA: 0x81ed60)
// Original: ActorGamePlayerGiveItem::~ActorGamePlayerGiveItem
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveItem::Destroy_ea81ed60(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B928);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveCurrency::Destroy_ea81ed90  (binary VA: 0x81ed90)
// Original: ActorGamePlayerGiveCurrency::~ActorGamePlayerGiveCurrency
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveCurrency::Destroy_ea81ed90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8E8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerEquipGear::Destroy_ea81edc0  (binary VA: 0x81edc0)
// Original: ActorGamePlayerEquipGear::~ActorGamePlayerEquipGear
// ----------------------------------------------------------------------------
int ActorGamePlayerEquipGear::Destroy_ea81edc0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8A8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGamePhysicsExplosion::Destroy_ea81edf0  (binary VA: 0x81edf0)
// Original: ActorGamePhysicsExplosion::~ActorGamePhysicsExplosion
// ----------------------------------------------------------------------------
int ActorGamePhysicsExplosion::Destroy_ea81edf0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B868);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameWorldRace::Destroy_ea81ee20  (binary VA: 0x81ee20)
// Original: ActorGameWorldRace::~ActorGameWorldRace
// ----------------------------------------------------------------------------
int ActorGameWorldRace::Destroy_ea81ee20(grapher::ActorBase::Self *a1)
{
  char *v1;
  char *v2;
  char *v3;
  int v4;

  v1 = *((char **)a1 + 14);
  v2 = *((char **)a1 + 13);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BDA8);
  v3 = v1;
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      v4 = *((uint32_t *)v3 - 1);
      if ( v4 != 0 )
      {
        G4_VCALL<void>(v4, 12);
        v1 = *((char **)a1 + 14);
        v2 = *((char **)a1 + 13);
      }
      v3 = v1 - 4;
      *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v1 - 4);
      if ( v1 - 4 == v2 )
        break;
      v1 -= 4;
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}



// ============================================================================
// Address:   0x81ee90 (size: 48 bytes)
// Symbol:    sub_81EE90
// Demangled: sub_81EE90
// ============================================================================
int (**sub_81EE90(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C348);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C3B4);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}


// ============================================================================
// Address:   0x81eec0 (size: 48 bytes)
// Symbol:    sub_81EEC0
// Demangled: sub_81EEC0
// ============================================================================
int (**sub_81EEC0(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C2C8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C334);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}


// ============================================================================
// Address:   0x81eef0 (size: 48 bytes)
// Symbol:    sub_81EEF0
// Demangled: sub_81EEF0
// ============================================================================
int (**sub_81EEF0(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C248);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C2B4);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}


// ============================================================================
// Address:   0x81ef20 (size: 48 bytes)
// Symbol:    sub_81EF20
// Demangled: sub_81EF20
// ============================================================================
int (**sub_81EF20(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C1C8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C234);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}


// ============================================================================
// Address:   0x81ef50 (size: 48 bytes)
// Symbol:    sub_81EF50
// Demangled: sub_81EF50
// ============================================================================
int (**sub_81EF50(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205BFA8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C014);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}
// ----------------------------------------------------------------------------
// Function: sub_81EF80  (binary VA: 0x81ef80)
// Original: sub_81EF80
// ----------------------------------------------------------------------------
int sub_81EF80(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v2 = sub_8F0680(v1);
  result = sub_983D40(v2);
  v4 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 40, "qty", (float)result, a1 + 24, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81EFF0  (binary VA: 0x81eff0)
// Original: sub_81EFF0
// ----------------------------------------------------------------------------
int sub_81EFF0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = *(uint32_t *)(*(uint32_t *)(sub_8F0680(v1) + 1132) + 76);
  v4 = sub_8F0680(v3);
  result = sub_983B60(v4, v2);
  v6 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
  if ( v6 != 0 )
    return G4_VCALL<int>(v6, 40, "qty", (float)result, a1 + 24, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81F080  (binary VA: 0x81f080)
// Original: sub_81F080
// ----------------------------------------------------------------------------
int sub_81F080(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  bool v13;
  int v14;

  if ( (*(uint8_t *)(a1 + 8) & 1) != 0 )
  {
    v8 = sub_8F0680(v1);
    v9 = sub_BDEDA0(v8 + 288);
    v11 = sub_8F0680(v10);
    v1 = sub_BDEDA0(v11 + 280);
    v12 = 100 * v9 / v1;
    v13 = false;
    if ( v12 <= 0x64 )
      v13 = v12 - 1 <= 0x17;
    v14 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v14 != 0 )
      G4_VCALL<void>(v14, 40, "pulse", (float)((float)0 * 65536.0) + (float)v13, a1 + 24, 0);
  }
  v2 = *(uint32_t *)(*(uint32_t *)(sub_8F0680(v1) + 1132) + 76);
  v4 = sub_8F0680(v3);
  result = sub_983B60(v4, v2);
  if ( *(uint32_t *)(a1 + 104) != result )
  {
    v6 = *(uint32_t *)(a1 + 12);
    *(uint32_t *)(a1 + 104) = result;
    v7 = *(uint32_t *)(v6 + 4);
    if ( v7 != 0 )
      return G4_VCALL<int>(v7, 40, "qty", (float)result, a1 + 24, 0);
  }
  return result;
}



// ============================================================================
// Address:   0x81f1d0 (size: 139 bytes)
// Symbol:    sub_81F1D0
// Demangled: sub_81F1D0
// ============================================================================
int (**sub_81F1D0(uint32_t *a1))(int)
{
  int v1;
  void (***v2)(uint32_t);
  void (**v3)(uint32_t);
  void (***v4)(uint32_t);
  void (**v5)(uint32_t);
  void (***v7)(uint32_t);
  void (***v8)(uint32_t);
  void (***v9)(uint32_t);

  *a1 = (uint32_t)(uintptr_t)(&off_205C0A8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C114);
  v1 = a1[26];
  v9 = (void (***)(uint32_t))a1[27];
  if ( (void (***)(uint32_t))v1 == v9 )
  {
    a1[27] = v1;
  }
  else
  {
    v2 = (void (***)(uint32_t))a1[26];
    do
    {
      v3 = *v2;
      v7 = v2;
      v2 += 6;
      (*v3)((uint32_t)(uintptr_t)(v7));
    }
    while ( v9 != v2 );
    v4 = (void (***)(uint32_t))a1[26];
    a1[27] = v1;
    if ( (void (***)(uint32_t))v1 != v4 )
    {
      do
      {
        v5 = *v4;
        v8 = v4;
        v4 += 6;
        (*v5)((uint32_t)(uintptr_t)(v8));
      }
      while ( (void (***)(uint32_t))v1 != v4 );
      v1 = a1[26];
    }
  }
  if ( v1 != 0 )
    sub_4EB870(v1);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}
// ----------------------------------------------------------------------------
// Function: sub_81F260  (binary VA: 0x81f260)
// Original: sub_81F260
// ----------------------------------------------------------------------------
int sub_81F260(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;

  result = sub_8F0680(v1);
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 428);
    v3 = result;
    if ( *(uint32_t *)(a1 + 120) != result )
    {
      if ( result != 0 )
      {
        if ( sub_5B1A50(result) )
        {
          result = sub_5B1820(v3);
          if ( result >= 0 && result < (unsigned int)dword_20D7DA0 )
          {
            v4 = *(uint32_t *)(dword_20D7D90 + (result << 6) + 20);
            result = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
            if ( result != 0 )
            {
              (*(void (**)(uint32_t, void **, int, int, const char *))(*(uint32_t *)result + 44))(
                *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4),
                (void **)(&off_1B1FE25),
                v4,
                a1 + 24,
                "weapon_img");
              result = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
              if ( result != 0 )
                result = G4_VCALL<int>(result, 44, "mode", "punch", a1 + 24, 0);
            }
          }
        }
        else
        {
          result = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
          if ( result != 0 )
            result = G4_VCALL<int>(result, 44, "mode", "shoot", a1 + 24, 0);
        }
      }
      *(uint32_t *)(a1 + 120) = v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81F390  (binary VA: 0x81f390)
// Original: sub_81F390
// ----------------------------------------------------------------------------
int sub_81F390(uint32_t *a1)
{
  if ( (a1[2] & 3) == 3 )
    sub_7FF990((int)(uintptr_t)(a1), 0);
  return sub_7F6A40(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_81F3F0  (binary VA: 0x81f3f0)
// Original: sub_81F3F0
// ----------------------------------------------------------------------------
int sub_81F3F0(uint32_t *a1, int a2)
{
  int v2;
  bool v3;
  int v4;
  int v5;
  int v7;
  int v8;

  if ( (a1[2] & 3) == 3 && a1[30] != 0 )
  {
    if ( sub_5B1A50(a1[30]) )
    {
      v7 = sub_8F0680(v2);
      sub_7FF990(
        (int)(uintptr_t)(a1),
        (int)(float)((float)((float)((float)((float)HIWORD(*(uint32_t *)(v7 + 5536)) * 65536.0)
                                   + (float)(uint16_t)*(uint32_t *)(v7 + 5536))
                           / (float)(int)a1[29])
                   * 100.0));
    }
    else
    {
      v3 = sub_5B1B10(a1[30]);
      v4 = 100;
      if ( !v3 )
      {
        v8 = sub_5B1900(a1[30]);
        v4 = 100 * (int)(float)((float)v8 / (float)sub_5B2340(a1[30]));
      }
      v5 = *(uint32_t *)(a1[3] + 4);
      if ( v5 != 0 )
        G4_VCALL<void>(v5, 40, "ammos", (float)v4, a1 + 6, 0);
    }
  }
  return sub_7F7520(a1, a2);
}



// ============================================================================
// Address:   0x81f520 (size: 48 bytes)
// Symbol:    sub_81F520
// Demangled: sub_81F520
// ============================================================================
int (**sub_81F520(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C028);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C094);
  return (int (**)(int))(uintptr_t)(sub_80DFF0(a1));
}
// ----------------------------------------------------------------------------
// Function: sub_81F550  (binary VA: 0x81f550)
// Original: sub_81F550
// ----------------------------------------------------------------------------
int sub_81F550(int a1)
{
  int v1;
  int v2;
  int result;
  int v4;

  v2 = sub_8F0680(v1);
  result = sub_983CA0(v2);
  v4 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 40, "qty", (float)result, a1 + 24, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81F5C0  (binary VA: 0x81f5c0)
// Original: sub_81F5C0
// ----------------------------------------------------------------------------
int sub_81F5C0(int a1)
{
  return sub_801D10(*(uint32_t *)(a1 + 12), (int)(uintptr_t)("hide"), 0, a1 + 24, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_81F610  (binary VA: 0x81f610)
// Original: sub_81F610
// ----------------------------------------------------------------------------
int sub_81F610(int a1)
{
  return sub_801D10(*(uint32_t *)(a1 + 12), (int)(uintptr_t)("show"), 1u, a1 + 24, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_81F660  (binary VA: 0x81f660)
// Original: sub_81F660
// ----------------------------------------------------------------------------
int * sub_81F660(int *a1, int *a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  float v8; // xmm1_4
  int v9;
  int v10;
  signed int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  signed int v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29;
  typedef int _g4_t_v30;
  typedef float _g4_t_v31;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v22)) > _g4_s3 ? (32u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v23)) > _g4_s4 ? (48u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v25)) > _g4_s6 ? (76u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v26)) > _g4_s7 ? (88u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v27)) > _g4_s8 ? (92u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v28)) > _g4_s9 ? (96u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v29)) > _g4_s10 ? (100u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v30)) > _g4_s11 ? (104u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v31)) > _g4_s12 ? (108u + sizeof(_g4_t_v31)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);

  *a1 = a3;
  v4 = dword_20D9B70;
  a1[1] = a4;
  if ( *(uint8_t *)(v4 + 8) != 0 )
  {
    v24 = sub_801D60(a2[3], (int)(uintptr_t)("stageWidth"), (int)(uintptr_t)("stage"), 0, 0);
    v7 = sub_B97E20(v6);
    v8 = (float)v24 / (float)(*(uint32_t *)(*(uint32_t *)(v7 + 304) + 48) + *(uint32_t *)(*(uint32_t *)(v7 + 304) + 12));
    v21 = a2[21];
    v20 = a2[20];
    v19 = a2[3];
    v26 = 0;
    v27 = 0;
    sub_801F00(v19, (int)(uintptr_t)(a2 + 6), v20, v21, (int)(uintptr_t)(&v26), (int)(uintptr_t)(&v27), 1u);
    v9 = v26;
    v10 = v27;
    *a1 = v26;
    a1[1] = v10;
    v11 = a2[26];
    v25 = (int)(float)((float)a3 * v8);
    if ( v11 < (int)__builtin_abs(v25 - v9) )
      *a1 = v25 + v11 * (2 * (v25 - v9 <= v11) - 1);
    v12 = a2[3];
    v28 = 0;
    v29 = 0.0;
    v30 = 0;
    v31 = 0.0;
    sub_801FD0(v12, (int)(uintptr_t)(&v28));
    v14 = sub_B97E20(v13);
    v22 = (float)(*(uint32_t *)(*(uint32_t *)(v14 + 304) + 52) + *(uint32_t *)(*(uint32_t *)(v14 + 304) + 16))
        / (float)(v31 - v29);
    v23 = (float)sub_801D60(a2[3], (int)(uintptr_t)("stageHeight"), (int)(uintptr_t)("stage"), 0, 0) * v22;
    v16 = sub_B97E20(v15);
    v17 = a2[26];
    v18 = (int)(float)((float)((float)((float)(v23
                                             - (float)(*(uint32_t *)(*(uint32_t *)(v16 + 304) + 52)
                                                     + *(uint32_t *)(*(uint32_t *)(v16 + 304) + 16)))
                                     * 0.5)
                             + (float)a4)
                     / v22);
    if ( v17 < (int)__builtin_abs(v18 - v27) )
      a1[1] = v17 * (2 * (v18 - v27 <= v17) - 1) + v18;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_81F900  (binary VA: 0x81f900)
// Original: sub_81F900
// ----------------------------------------------------------------------------
int sub_81F900(uint32_t *a1)
{
  int result;
  int v2;

  result = (int)(uintptr_t)(a1);
  v2 = a1[3];
  a1[2] &= ~2u;
  a1[27] = 0;
  a1[29] = 0;
  if ( v2 != 0 )
    return sub_801E70(v2, 0, 0, (int)(uintptr_t)(a1 + 6), a1[32]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81F960_ea81f960  (binary VA: 0x81f960)
// Original: sub_81F960
// ----------------------------------------------------------------------------
int sub_81F960_ea81f960(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int v5;
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
  int v17;
  int v18;

  v3 = sub_857260(a1, 0, a3);
  switch ( a2 )
  {
    case 1:
      v18 = v3;
      v8 = sub_8F0680(v4);
      sub_9A5670(v8 + 2296, v18);
      v10 = sub_8F0680(v9);
      sub_98F350(v10, 0);
      v12 = sub_8F0680(v11);
      sub_98C400(v12);
      v14 = sub_8F0680(v13);
      sub_9D6B10(v14);
      v16 = sub_8F0680(v15);
      sub_90DA60(v16, v18, 0);
      break;
    case 2:
      v7 = sub_8F0680(v4);
      sub_9A5670(v7 + 2296, 0);
      break;
    case 0:
      v17 = v3;
      v5 = sub_8F0680(v4);
      sub_90DA60(v5, v17, 1);
      break;
    default:
      break;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_81FA90_ea81fa90  (binary VA: 0x81fa90)
// Original: sub_81FA90
// ----------------------------------------------------------------------------
int sub_81FA90_ea81fa90(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81FAD0_ea81fad0  (binary VA: 0x81fad0)
// Original: sub_81FAD0
// ----------------------------------------------------------------------------
int * sub_81FAD0_ea81fad0(int a1, int a2)
{
  int *result;

  result = (int *)(&dword_20DA2A0);
  if ( dword_20DA2A0 == 0 )
    return (int *)G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81FB10  (binary VA: 0x81fb10)
// Original: sub_81FB10
// ----------------------------------------------------------------------------
int sub_81FB10(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  bool v15;
  int v16;

  if ( (*(uint8_t *)(a1 + 8) & 1) != 0 )
  {
    v10 = sub_8F0680(v1);
    v11 = G4_VCALL<int>(v10, 456);
    v12 = v11;
    if ( v11 != 0 )
    {
      v13 = sub_BDEDA0(v11 + 288);
      v1 = sub_BDEDA0(v12 + 280);
      v14 = 100 * v13 / v1;
      v15 = false;
      if ( v14 <= 0x64 )
        v15 = v14 - 1 <= 0x17;
      v16 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
      if ( v16 != 0 )
        G4_VCALL<void>(v16, 40, "pulse", (float)((float)0 * 65536.0) + (float)v15, a1 + 24, 0);
    }
  }
  v2 = *(uint32_t *)(a1 + 104);
  v3 = sub_8F0680(v1);
  result = sub_983D40(v3);
  if ( v2 != result )
  {
    v6 = sub_8F0680(v5);
    *(uint32_t *)(a1 + 104) = sub_983D40(v6);
    v8 = sub_8F0680(v7);
    result = sub_983D40(v8);
    v9 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v9 != 0 )
      return G4_VCALL<int>(v9, 40, "qty", (float)result, a1 + 24, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81FC80  (binary VA: 0x81fc80)
// Original: sub_81FC80
// ----------------------------------------------------------------------------
int sub_81FC80(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  bool v15;
  int v16;

  if ( (*(uint8_t *)(a1 + 8) & 1) != 0 )
  {
    v10 = sub_8F0680(v1);
    v11 = sub_BDEDA0(v10 + 1852);
    v13 = sub_8F0680(v12);
    v1 = sub_BDEDA0(v13 + 1860);
    v14 = 100 * v11 / v1;
    v15 = false;
    if ( v14 <= 0x64 )
      v15 = v14 - 1 <= 0x17;
    v16 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v16 != 0 )
      G4_VCALL<void>(v16, 40, "pulse", (float)((float)0 * 65536.0) + (float)v15, a1 + 24, 0);
  }
  v2 = *(uint32_t *)(a1 + 104);
  v3 = sub_8F0680(v1);
  result = sub_983CA0(v3);
  if ( v2 != result )
  {
    v6 = sub_8F0680(v5);
    *(uint32_t *)(a1 + 104) = sub_983CA0(v6);
    v8 = sub_8F0680(v7);
    result = sub_983CA0(v8);
    v9 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v9 != 0 )
      return G4_VCALL<int>(v9, 40, "qty", (float)result, a1 + 24, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_81FDE0  (binary VA: 0x81fde0)
// Original: sub_81FDE0
// ----------------------------------------------------------------------------
int16_t sub_81FDE0(int a1, int a2)
{
  int16_t *v2;
  int16_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int16_t *v12;
  int16_t v13;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef float _g4_t_v21;
  typedef int _g4_t_v22;
  typedef float _g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v18)) > _g4_s3 ? (56u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v19)) > _g4_s4 ? (60u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v20)) > _g4_s5 ? (64u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v21)) > _g4_s6 ? (68u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v22)) > _g4_s7 ? (72u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v23)) > _g4_s8 ? (76u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);

  if ( *(uint8_t *)(dword_20D9B70 + 8) != 0 )
  {
    v2 = (int16_t *)G4_VCALL<int>(dword_20D42C0, 56, a2);
    v3 = v2;
    if ( v2 != nullptr )
    {
      v4 = *(uint32_t *)(a1 + 12);
      v20 = 0;
      v21 = 0.0;
      v22 = 0;
      v23 = 0.0;
      sub_801FD0(v4, (int)(uintptr_t)(&v20));
      v6 = sub_B97E20(v5);
      v15 = (float)(*(uint32_t *)(*(uint32_t *)(v6 + 304) + 52) + *(uint32_t *)(*(uint32_t *)(v6 + 304) + 16))
          / (float)(v23 - v21);
      v16 = (float)sub_801D60(*(uint32_t *)(a1 + 12), (int)(uintptr_t)("stageHeight"), (int)(uintptr_t)("stage"), 0, 0) * v15;
      v8 = sub_B97E20(v7);
      v17 = (float)(v16 - (float)(*(uint32_t *)(*(uint32_t *)(v8 + 304) + 52) + *(uint32_t *)(*(uint32_t *)(v8 + 304) + 16)))
          * 0.5;
      v9 = sub_801D60(*(uint32_t *)(a1 + 12), (int)(uintptr_t)("stageWidth"), (int)(uintptr_t)("stage"), 0, 0);
      v11 = sub_B97E20(v10);
      sub_801EB0(
        *(uint32_t *)(a1 + 12),
        a1 + 24,
        (int)(float)((float)((float)v9
                           / (float)(*(uint32_t *)(*(uint32_t *)(v11 + 304) + 48) + *(uint32_t *)(*(uint32_t *)(v11 + 304) + 12)))
                   * (float)*v3),
        (int)(float)((float)((float)v3[1] + v17) / v15),
        (int)(uintptr_t)(&v18),
        (int)(uintptr_t)(&v19),
        0);
      *(uint16_t *)(a1 + 140) = v18;
      LOWORD(v2) = v19;
      *(uint16_t *)(a1 + 142) = v19;
    }
  }
  else
  {
    v2 = (int16_t *)G4_VCALL<int>(dword_20D42C0, 60, a2);
    v12 = v2;
    if ( v2 != nullptr )
    {
      v2 = (int16_t *)G4_VCALL<int>(dword_20D42C0, 56, a2);
      if ( v2 != nullptr )
      {
        v13 = v2[1] - v12[1];
        LOWORD(v2) = *v2 - *v12;
        *(uint16_t *)(a1 + 140) = (uint16_t)(uintptr_t)(v2);
        *(uint16_t *)(a1 + 142) = v13;
      }
    }
  }
  return (int16_t)(uintptr_t)(v2);
}

// ----------------------------------------------------------------------------
// Function: sub_820050  (binary VA: 0x820050)
// Original: sub_820050
// ----------------------------------------------------------------------------
size_t sub_820050(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EB830(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      sub_4EB870(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_8201D0_ea8201d0  (binary VA: 0x8201d0)
// Original: sub_8201D0
// ----------------------------------------------------------------------------
int sub_8201D0_ea8201d0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "TimeScale", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "World", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Factor at which the game time is scaled", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Scale Factor", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v2), (int)(uintptr_t)(&v7), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Scale Factor", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 1, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_820400  (binary VA: 0x820400)
// Original: sub_820400
// ----------------------------------------------------------------------------
void sub_820400(grapher::ActorBase::Self *a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v11[0] = (uint32_t)(uintptr_t)(v11);
  v11[1] = (uint32_t)(uintptr_t)(v11);
  sub_8560A0(a1, a2, (int)(uintptr_t)(v11), a4, 0x7FFFFFFF);
  v4 = (uint32_t *)v11[0];
  if ( (uint32_t *)v11[0] != v11 )
  {
    do
    {
      v5 = v4[2];
      if ( v5 != 0 )
      {
        v10 = v4[2];
        v6 = (int *)(*(int (**)(int))(*(uint32_t *)v5 + 16))(v10);
        if ( v6 != nullptr )
        {
          while ( v6 != (int *)(uintptr_t)(&dword_20D75F0) )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              goto LABEL_10;
          }
          v7 = opNew(0xCu);
          if ( v7 != -8 )
            *(uint32_t *)(v7 + 8) = v10;
          sub_1901920(v7, a3);
        }
      }
LABEL_10:
      v4 = (uint32_t *)*v4;
    }
    while ( v4 != v11 );
    v8 = (uint32_t *)v11[0];
    if ( (uint32_t *)v11[0] != v11 )
    {
      while ( 1 )
      {
        v9 = (uint32_t *)*v8;
        opDelete(v8);
        if ( v9 == v11 )
          break;
        v8 = v9;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8204F0_ea8204f0  (binary VA: 0x8204f0)
// Original: sub_8204F0
// ----------------------------------------------------------------------------
void sub_8204F0_ea8204f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820530_ea820530  (binary VA: 0x820530)
// Original: sub_820530
// ----------------------------------------------------------------------------
void sub_820530_ea820530(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B928);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820570_ea820570  (binary VA: 0x820570)
// Original: sub_820570
// ----------------------------------------------------------------------------
void sub_820570_ea820570(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8205B0_ea8205b0  (binary VA: 0x8205b0)
// Original: sub_8205B0
// ----------------------------------------------------------------------------
void sub_8205B0_ea8205b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8205F0_ea8205f0  (binary VA: 0x8205f0)
// Original: sub_8205F0
// ----------------------------------------------------------------------------
void sub_8205F0_ea8205f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820630_ea820630  (binary VA: 0x820630)
// Original: sub_820630
// ----------------------------------------------------------------------------
void sub_820630_ea820630(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820670_ea820670  (binary VA: 0x820670)
// Original: sub_820670
// ----------------------------------------------------------------------------
void sub_820670_ea820670(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BAA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8206B0_ea8206b0  (binary VA: 0x8206b0)
// Original: sub_8206B0
// ----------------------------------------------------------------------------
void sub_8206B0_ea8206b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BAE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8206F0_ea8206f0  (binary VA: 0x8206f0)
// Original: sub_8206F0
// ----------------------------------------------------------------------------
void sub_8206F0_ea8206f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820730_ea820730  (binary VA: 0x820730)
// Original: sub_820730
// ----------------------------------------------------------------------------
void sub_820730_ea820730(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820770_ea820770  (binary VA: 0x820770)
// Original: sub_820770
// ----------------------------------------------------------------------------
void sub_820770_ea820770(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8207B0_ea8207b0  (binary VA: 0x8207b0)
// Original: sub_8207B0
// ----------------------------------------------------------------------------
void sub_8207B0_ea8207b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8207F0_ea8207f0  (binary VA: 0x8207f0)
// Original: sub_8207F0
// ----------------------------------------------------------------------------
void sub_8207F0_ea8207f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820830_ea820830  (binary VA: 0x820830)
// Original: sub_820830
// ----------------------------------------------------------------------------
void sub_820830_ea820830(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820870_ea820870  (binary VA: 0x820870)
// Original: sub_820870
// ----------------------------------------------------------------------------
void sub_820870_ea820870(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8208B0_ea8208b0  (binary VA: 0x8208b0)
// Original: sub_8208B0
// ----------------------------------------------------------------------------
void sub_8208B0_ea8208b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8208F0_ea8208f0  (binary VA: 0x8208f0)
// Original: sub_8208F0
// ----------------------------------------------------------------------------
void sub_8208F0_ea8208f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820930_ea820930  (binary VA: 0x820930)
// Original: sub_820930
// ----------------------------------------------------------------------------
void sub_820930_ea820930(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820970_ea820970  (binary VA: 0x820970)
// Original: sub_820970
// ----------------------------------------------------------------------------
void sub_820970_ea820970(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BDE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8209B0_ea8209b0  (binary VA: 0x8209b0)
// Original: sub_8209B0
// ----------------------------------------------------------------------------
void sub_8209B0_ea8209b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8209F0_ea8209f0  (binary VA: 0x8209f0)
// Original: sub_8209F0
// ----------------------------------------------------------------------------
void sub_8209F0_ea8209f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820A30_ea820a30  (binary VA: 0x820a30)
// Original: sub_820A30
// ----------------------------------------------------------------------------
void sub_820A30_ea820a30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BEA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820A70_ea820a70  (binary VA: 0x820a70)
// Original: sub_820A70
// ----------------------------------------------------------------------------
void sub_820A70_ea820a70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820AB0_ea820ab0  (binary VA: 0x820ab0)
// Original: sub_820AB0
// ----------------------------------------------------------------------------
void sub_820AB0_ea820ab0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B868);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820AF0  (binary VA: 0x820af0)
// Original: sub_820AF0
// ----------------------------------------------------------------------------
void sub_820AF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205BFA8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C014);
  sub_80D840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820B40  (binary VA: 0x820b40)
// Original: sub_820B40
// ----------------------------------------------------------------------------
void sub_820B40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C1C8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C234);
  sub_80D840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820B90  (binary VA: 0x820b90)
// Original: sub_820B90
// ----------------------------------------------------------------------------
void sub_820B90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C248);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C2B4);
  sub_80D840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820BE0  (binary VA: 0x820be0)
// Original: sub_820BE0
// ----------------------------------------------------------------------------
void sub_820BE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C2C8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C334);
  sub_80D840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820C30  (binary VA: 0x820c30)
// Original: sub_820C30
// ----------------------------------------------------------------------------
void sub_820C30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C348);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C3B4);
  sub_80D840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820C80  (binary VA: 0x820c80)
// Original: sub_820C80
// ----------------------------------------------------------------------------
void sub_820C80(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C028);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C094);
  sub_80DFF0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_820CD0  (binary VA: 0x820cd0)
// Original: sub_820CD0
// ----------------------------------------------------------------------------
int sub_820CD0(int *a1)
{
  char *v1;
  int result;
  int v3;
  int v4;
  typedef char *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v1 = (char *)a1[16];
  v5 = (char *)a1[17];
  result = (unsigned int)(v5 - v1) >> 3;
  if ( result != 0 && v1 != v5 )
  {
    while ( *(uint32_t *)v1 != 0 )
    {
      result = sub_BDEDA0(*(uint32_t *)v1 + 280);
      v3 = result;
      if ( result != 0 )
      {
        v6 = sub_BDEDA0(*(uint32_t *)v1 + 288);
        g4_std::string::construct_copy(v7, v1 + 4);
        g4_std::string::append((int)(uintptr_t)(v7), ".", 1u);
        g4_std::string::append((int)(uintptr_t)(v7), "mc_hp_bar", 9u);
        v4 = *(uint32_t *)(a1[3] + 4);
        if ( v4 != 0 )
          G4_VCALL<void>(v4, 40, "value", (float)(int)(float)((float)((float)v6 / (float)v3) * 100.0), a1 + 6, v7[0]);
        v1 += 8;
        g4_std::string::Destroy(v7);
        if ( v5 == v1 )
          return result;
      }
      else
      {
LABEL_4:
        v1 += 8;
        if ( v5 == v1 )
          return result;
      }
    }
    result = sub_801D60(a1[3], (int)(uintptr_t)("visible"), (int)(uintptr_t)(a1 + 6), *((uint32_t *)v1 + 1), 0);
    if ( result != 0 )
    {
      result = *(uint32_t *)(a1[3] + 4);
      if ( result != 0 )
        result = G4_VCALL<int>(result, 40, "visible", 0, a1 + 6, *((uint32_t *)v1 + 1));
    }
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_820E90  (binary VA: 0x820e90)
// Original: sub_820E90
// ----------------------------------------------------------------------------
void sub_820E90(int a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  uint32_t v5[4];

  if ( (*(uint8_t *)(a1 + 8) & 1) != 0 )
  {
    v1 = *(uint32_t *)(a1 + 116);
    v2 = *(uint32_t *)(a1 + 108);
    v5[1] = 8;
    v5[0] = (uint32_t)(uintptr_t)(&off_205C558);
    v5[2] = v2;
    v5[3] = v1;
    if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
    {
      sub_A6BF60(&dword_20D54A0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
      __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D54A8 == 0 )
      v3 = (int *)(&dword_20D54A0);
    sub_A736A0(v3, v5);
    v5[0] = (uint32_t)(uintptr_t)(&off_204B178);
    v4 = *(uint32_t *)(a1 + 12);
    if ( v4 != 0 )
      sub_801E70(v4, 0, 0, a1 + 24, *(uint32_t *)(a1 + 128));
  }
  *(uint16_t *)(a1 + 140) = 0;
  *(uint16_t *)(a1 + 142) = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_820FD0  (binary VA: 0x820fd0)
// Original: sub_820FD0
// ----------------------------------------------------------------------------
void sub_820FD0(int a1, uint32_t *a2)
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
                                      sub_820FD0(a1, v9[3]);
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
// Function: sub_821180_ea821180  (binary VA: 0x821180)
// Original: sub_821180
// ----------------------------------------------------------------------------
void sub_821180_ea821180(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  int *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *k;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *j;
  uint32_t *v14;
  uint32_t *i;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t _g4_t_v22[4];
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t **_g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v20)) > _g4_s4 ? (8u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v21)) > _g4_s5 ? (8u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v24)) > _g4_s8 ? (36u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);

  v22[0] = (uint32_t)(uintptr_t)(v22);
  v22[1] = (uint32_t)(uintptr_t)(v22);
  v23 = (uint32_t *)(&v23);
  v24 = &v23;
  sub_8560A0(a1, 0, (int)(uintptr_t)(&v23), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = v23;
  if ( v23 != (uint32_t *)(uintptr_t)(&v23) )
  {
    do
    {
      v4 = v3[2];
      if ( v4 != 0 )
      {
        v16 = v3[2];
        v19 = v3;
        v5 = (int *)(*(int (**)(int))(*(uint32_t *)v4 + 16))(v16);
        v3 = v19;
        if ( v5 != nullptr )
        {
          while ( v5 != (int *)(uintptr_t)(&dword_20D70F4) )
          {
            v5 = (int *)v5[1];
            if ( v5 == nullptr )
              goto LABEL_10;
          }
          v6 = opNew(0xCu);
          if ( v6 != -8 )
            *(uint32_t *)(v6 + 8) = v16;
          sub_1901920(v6, v22);
          v3 = v19;
        }
      }
LABEL_10:
      v3 = (uint32_t *)*v3;
    }
    while ( v3 != (uint32_t *)(uintptr_t)(&v23) );
    v7 = v23;
    if ( v23 != (uint32_t *)(uintptr_t)(&v23) )
    {
      while ( 1 )
      {
        v8 = (uint32_t *)*v7;
        opDelete(v7);
        if ( v8 == (uint32_t *)(uintptr_t)(&v23) )
          break;
        v7 = v8;
      }
    }
  }
  switch ( a2 )
  {
    case 1:
      v23 = (uint32_t *)(&v23);
      v24 = &v23;
      sub_820400(a1, 1, (int)(uintptr_t)(&v23), (int)(uintptr_t)(a3));
      v14 = (uint32_t *)v22[0];
      for ( i = v23; v14 != v22; v14 = (uint32_t *)*v14 )
      {
        if ( v14[2] != 0 && i != (uint32_t *)(uintptr_t)(&v23) )
        {
          do
          {
            if ( i[2] != 0 )
            {
              v18 = v14;
              sub_8EB330(v14[2], i[2]);
              v14 = v18;
            }
            i = (uint32_t *)*i;
          }
          while ( i != (uint32_t *)(uintptr_t)(&v23) );
          i = v23;
        }
      }
      if ( i != (uint32_t *)(uintptr_t)(&v23) )
      {
        while ( 1 )
        {
          v21 = (uint32_t *)*i;
          opDelete(i);
          if ( v21 == (uint32_t *)(uintptr_t)(&v23) )
            break;
          i = v21;
        }
      }
      break;
    case 2:
      v23 = (uint32_t *)(&v23);
      v24 = &v23;
      sub_820400(a1, 1, (int)(uintptr_t)(&v23), (int)(uintptr_t)(a3));
      v12 = (uint32_t *)v22[0];
      for ( j = v23; v12 != v22; v12 = (uint32_t *)*v12 )
      {
        if ( v12[2] != 0 && j != (uint32_t *)(uintptr_t)(&v23) )
        {
          do
          {
            if ( j[2] != 0 )
            {
              v17 = v12;
              sub_8EB3E0(v12[2], j[2]);
              v12 = v17;
            }
            j = (uint32_t *)*j;
          }
          while ( j != (uint32_t *)(uintptr_t)(&v23) );
          j = v23;
        }
      }
      if ( j != (uint32_t *)(uintptr_t)(&v23) )
      {
        while ( 1 )
        {
          v20 = (uint32_t *)*j;
          opDelete(j);
          if ( v20 == (uint32_t *)(uintptr_t)(&v23) )
            break;
          j = v20;
        }
      }
      break;
    case 0:
      for ( k = (uint32_t *)v22[0]; k != v22; k = (uint32_t *)*k )
      {
        if ( k[2] != 0 )
          sub_8EB500(k[2]);
      }
      break;
    default:
      break;
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v10 = (uint32_t *)v22[0];
  if ( (uint32_t *)v22[0] != v22 )
  {
    while ( 1 )
    {
      v11 = (uint32_t *)*v10;
      opDelete(v10);
      if ( v11 == v22 )
        break;
      v10 = v11;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_821440_ea821440  (binary VA: 0x821440)
// Original: sub_821440
// ----------------------------------------------------------------------------
void sub_821440_ea821440(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **i;
  uint8_t *v4;
  int *v5;
  bool v6;
  bool v7;
  void **v8;
  void **v9;
  void *v10[9];

  v10[0] = v10;
  v10[1] = v10;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v10), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  for ( i = (void **)v10[0]; i != v10; i = (void **)*i )
  {
    v4 = (uint8_t *)(i[2]);
    if ( v4 != nullptr )
    {
      v5 = (int *)(*(int (**)(void *))(*(uint32_t *)v4 + 16))(i[2]);
      if ( v5 != nullptr )
      {
        while ( v5 != (int *)(uintptr_t)(&dword_20D68D0) )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            goto LABEL_11;
        }
        v6 = false;
        v7 = false;
        if ( a2 != 1 )
        {
          LOBYTE(v6) = 1;
          v7 = true;
          if ( a2 == 2 )
          {
            v7 = v4[177] >= 0;
            v6 = v7;
          }
        }
        v4[1011] = v7;
        G4_VCALL<void>(v4, 40, 0x8000, v6);
      }
    }
LABEL_11:
    ;
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v8 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    while ( 1 )
    {
      v9 = (void **)*v8;
      opDelete(v8);
      if ( v9 == v10 )
        break;
      v8 = v9;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_821560  (binary VA: 0x821560)
// Original: sub_821560
// ----------------------------------------------------------------------------
int sub_821560(int a1, int a2)
{
  int result;
  uint32_t *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_s[60];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_s)) > _g4_s3 ? (32u + sizeof(_g4_t_s)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);

  result = a2;
  v3 = (uint32_t *)(*(uint32_t *)(a1 + 64) + 8 * a2);
  if ( *v3 != 0 )
  {
    v4 = "follower_0";
    if ( a2 != 0 )
    {
      v4 = "follower_1";
      if ( a2 != 1 )
        v4 = "follower_2";
    }
    g4_std_compat::string_assign((int)(uintptr_t)(v3 + 1), v4, 0xAu);
    g4_std::string::construct_copy(&v11, v3 + 1);
    g4_std::string::append((int)(uintptr_t)(&v11), ".", 1u);
    g4_std::string::append((int)(uintptr_t)(&v11), "mc_img", 6u);
    v9 = a1 + 24;
    v5 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v5 != 0 )
      G4_VCALL<void>(v5, 40, "visible", 1065353216, v9, v3[1]);
    sprintf(s, "%s.tga", *(uint32_t *)(*v3 + 208));
    v6 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v6 != 0 )
      G4_VCALL<void>(v6, 44, &off_1B1FE25, s, v9, v11);
    v10 = sub_BDEDA0(*v3 + 288);
    v7 = sub_BDEDA0(*v3 + 280);
    v8 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v8 != 0 )
      G4_VCALL<void>(v8, 40, "value", (float)(int)(float)((float)((float)v10 / (float)v7) * 100.0), v9, v3[1]);
    return ((g4_std::string::Destroy(&v11)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_8219C0  (binary VA: 0x821740)
// Original: sub_8219C0
// ----------------------------------------------------------------------------
int sub_8219C0(int a1)
{
  int result;
  int v2;
  char v3;
  int *v4;
  uint32_t v5[4];

  result = *(uint32_t *)(a1 + 8) & 3;
  if ( result == 3 )
  {
    v2 = *(uint32_t *)(a1 + 104);
    v3 = *(uint8_t *)(a1 + 101);
    v5[1] = 14;
    v5[0] = (uint32_t)(uintptr_t)(&off_205C5A0);
    LOBYTE(v5[2]) = v3;
    v5[3] = v2;
    if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
    {
      sub_A6BF60(&dword_20D54A0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
      __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D54A8 == 0 )
      v4 = (int *)(&dword_20D54A0);
    return sub_A736A0(v4, v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_821AB0  (binary VA: 0x821ab0)
// Original: sub_821AB0
// ----------------------------------------------------------------------------
int sub_821AB0(int a1)
{
  int result;
  int v2;
  char v3;
  int *v4;
  uint32_t v5[4];

  result = *(uint32_t *)(a1 + 8) & 3;
  if ( result == 3 )
  {
    v2 = *(uint32_t *)(a1 + 104);
    v3 = *(uint8_t *)(a1 + 101);
    v5[1] = 15;
    v5[0] = (uint32_t)(uintptr_t)(&off_205C588);
    LOBYTE(v5[2]) = v3;
    v5[3] = v2;
    if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
    {
      sub_A6BF60(&dword_20D54A0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
      __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D54A8 == 0 )
      v4 = (int *)(&dword_20D54A0);
    return sub_A736A0(v4, v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_821BA0  (binary VA: 0x821ba0)
// Original: sub_821BA0
// ----------------------------------------------------------------------------
void sub_821BA0(int a1)
{
  int v1;
  int v2;
  int v3;
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6;
  int *v7;
  int v8;
  int v9;
  float v10; // xmm0_4
  double v11; // xmm1_8
  double v12; // xmm0_8
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  typedef int _g4_t_v19;
  typedef bool _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);

  if ( (*(uint8_t *)(a1 + 8) & 1) != 0 )
  {
    v1 = *(int16_t *)(a1 + 140);
    v2 = -*(int16_t *)(a1 + 142);
    v20 = v2 >= 0 && *(uint16_t *)(a1 + 142) != 0;
    *(uint8_t *)(a1 + 112) = v1 > 0;
    *(uint8_t *)(a1 + 113) = v20;
    if ( (v1 | v2) != 0 )
    {
      if ( v2 != 0 || v1 == 0 )
      {
        if ( v2 == 0 || v1 != 0 )
        {
          v11 = (float)v2;
          v12 = (float)v1;
          v13 = (float)*(int *)(a1 + 104);
          v14 = sqrt(v12 * v12 + v11 * v11);
          if ( v14 > v13 )
          {
            v18 = v13 / v14;
            *(uint32_t *)(a1 + 116) = 1065353216;
            v2 = (int)(float)((float)v2 * v18);
            v1 = (int)(float)(v18 * (float)v1);
            v11 = (float)v2;
            v12 = (float)v1;
          }
          else
          {
            *(float *)(a1 + 116) = v14 / v13;
          }
          v19 = v2;
          v15 = atan2(v12, v11);
          v5 = -v15;
          *(float *)(a1 + 108) = v5;
          v21 = -v19;
        }
        else
        {
          v9 = *(uint32_t *)(a1 + 104);
          if ( (int)__builtin_abs(v2) > v9 )
          {
            v17 = -1.0;
            if ( v20 )
              v17 = 1.0;
            *(uint32_t *)(a1 + 116) = 1065353216;
            v2 = (int)(float)((float)v9 * v17);
          }
          else
          {
            v10 = (float)v2 / (float)v9;
            if ( v10 <= 0.0 )
              v10 = (float)-(float)v2 / (float)v9;
            *(float *)(a1 + 116) = v10;
          }
          v5 = 3.1415927f;
          if ( v2 > 0 )
            v5 = 0.0;
          v1 = 0;
          *(float *)(a1 + 108) = v5;
          v21 = -v2;
        }
      }
      else
      {
        v3 = *(uint32_t *)(a1 + 104);
        if ( (int)__builtin_abs(v1) <= v3 )
        {
          v16 = (float)v1 / (float)v3;
          if ( v16 <= 0.0 )
            v16 = (float)-(float)v1 / (float)v3;
          *(float *)(a1 + 116) = v16;
        }
        else
        {
          v4 = -1.0;
          if ( v1 > 0 )
            v4 = 1.0;
          *(uint32_t *)(a1 + 116) = 1065353216;
          v1 = (int)(float)((float)v3 * v4);
        }
        v5 = 1.5707964f;
        if ( v1 > 0 )
          v5 = -1.5707964f;
        *(float *)(a1 + 108) = v5;
        v21 = 0;
      }
      if ( v5 <= 0.17453292f && v5 >= -0.17453292f )
      {
        *(uint32_t *)(a1 + 108) = 0;
        v5 = 0.0;
      }
      v6 = *(uint32_t *)(a1 + 116);
      v22[1] = 7;
      v22[0] = (uint32_t)(uintptr_t)(&off_205C570);
      v22[3] = v6;
      *(float *)&v22[2] = v5;
      if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
      {
        sub_A6BF60(&dword_20D54A0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
        __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D54A8 == 0 )
        v7 = (int *)(&dword_20D54A0);
      sub_A736A0(v7, v22);
      v22[0] = (uint32_t)(uintptr_t)(&off_204B178);
      v8 = *(uint32_t *)(a1 + 12);
      if ( v8 != 0 )
        sub_801E70(v8, COERCE_INT((float)v1), COERCE_INT((float)v21), a1 + 24, *(uint32_t *)(a1 + 128));
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_821F30_ea821f30  (binary VA: 0x821f30)
// Original: sub_821F30
// ----------------------------------------------------------------------------
void sub_821F30_ea821f30(grapher::ActorBase::Self *a1)
{
  char *v1;
  char *v2;
  char *v3;
  int v4;

  v1 = *((char **)a1 + 14);
  v2 = *((char **)a1 + 13);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BDA8);
  v3 = v1;
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      v4 = *((uint32_t *)v3 - 1);
      if ( v4 != 0 )
      {
        G4_VCALL<void>(v4, 12);
        v1 = *((char **)a1 + 14);
        v2 = *((char **)a1 + 13);
      }
      v3 = v1 - 4;
      *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v1 - 4);
      if ( v1 - 4 == v2 )
        break;
      v1 -= 4;
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_821FB0  (binary VA: 0x821fb0)
// Original: sub_821FB0
// ----------------------------------------------------------------------------
uint32_t * sub_821FB0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  char *v11;
  char *v12;
  uint32_t *v13;
  int v17;
  char v18;

  v18 = 1;
  v17 = a2 + 4;
  if ( a3 == 0 && a4 != a2 + 4 )
    v18 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x20u);
  v6 = (uint32_t *)v5;
  if ( v5 != -16 )
  {
    v7 = 0;
    *(uint32_t *)(v5 + 16) = *a5;
    v8 = 0;
    v9 = (a5[2] - a5[1]) >> 2;
    v6[5] = 0;
    v6[6] = 0;
    v6[7] = 0;
    if ( v9 != 0 )
    {
      v7 = 4 * v9;
      v8 = sub_4EB830(4 * v9);
    }
    v6[5] = v8;
    v6[6] = v8;
    v6[7] = v8 + v7;
    v10 = (char *)a5[2];
    v11 = (char *)a5[1];
    if ( v10 != v11 )
    {
      v12 = (char *)a5[1];
      v13 = (uint32_t *)v8;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v12;
        v12 += 4;
        ++v13;
      }
      while ( v10 != v12 );
      v8 += 4 * ((unsigned int)(v10 - (v11 + 4)) >> 2) + 4;
    }
    v6[6] = v8;
  }
  sub_1904970(v18, v6, a4, v17);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_8220F0  (binary VA: 0x8220f0)
// Original: sub_8220F0
// ----------------------------------------------------------------------------
int sub_8220F0(int a1, int a2, unsigned int *a3)
{
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  char v7; // bp
  unsigned int v8;
  int v10;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[8];
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
    sub_821FB0(v13, a2, 0, v12, a3);
LABEL_14:
    v10 = v13[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v10;
    return a1;
  }
LABEL_11:
  if ( *(uint32_t **)(a2 + 12) == v4 )
  {
    sub_821FB0(v13, a2, 0, (int)(uintptr_t)(v4), a3);
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
// Function: sub_8221D0  (binary VA: 0x8221d0)
// Original: sub_8221D0
// ----------------------------------------------------------------------------
void sub_8221D0(int a1)
{
  int *v1;
  int *v2;
  int v3;
  char *v4;
  uint32_t *v5;

  if ( *(int *)(a1 + 104) <= 0 )
  {
    if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
    }
    v2 = nullptr;
    if ( byte_20D34C4 == 0 )
      v2 = (int *)(&dword_20D34C0);
    v3 = sub_5B5830(v2, 8);
    v4 = *(char **)(dword_20D92F0 + 32);
    if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
    {
      sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
      __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D2D64 == 0 )
      v5 = (uint32_t *)(&unk_20D2D60);
    sub_7A08C0(v5, v4, 1, v3, 8, -1);
  }
  else
  {
    if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
    }
    v1 = nullptr;
    if ( byte_20D34C4 == 0 )
      v1 = (int *)(&dword_20D34C0);
    sub_5B5CF0((unsigned int)(uintptr_t)(v1), 8);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8223C0  (binary VA: 0x8223c0)
// Original: sub_8223C0
// ----------------------------------------------------------------------------
unsigned int sub_8223C0(int *a1)
{
  char v1;
  int *v2;
  int v3;
  char v5; // bp
  int *v6;
  bool v7;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v1 = byte_20D3C44;
  v2 = nullptr;
  if ( byte_20D3C44 == 0 )
    v2 = (int *)(&dword_20D3C40);
  v3 = *(uint32_t *)(v2[13] + 36);
  if ( v3 < 0 || v3 >= (unsigned int)dword_20D9980 )
    return sub_7FCBE0(a1);
  v5 = *(uint8_t *)(dword_20D9970 + 164 * v3 + 144);
  if ( byte_20D3C30 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v1 = byte_20D3C44;
  }
  v6 = nullptr;
  if ( v1 == 0 )
    v6 = (int *)(&dword_20D3C40);
  v7 = sub_631070((int)(uintptr_t)(v6));
  if ( v5 != 0 && v7 )
    return sub_7FCC60(a1);
  else
    return sub_7FCBE0(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_822540_ea822540  (binary VA: 0x822540)
// Original: sub_822540
// ----------------------------------------------------------------------------
int * sub_822540_ea822540(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  char v2;
  int *result;
  int *v4;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v2 = byte_20D3C44;
  result = nullptr;
  if ( byte_20D3C44 == 0 )
    result = (int *)(&dword_20D3C40);
  if ( result[14] != 0 )
  {
    if ( byte_20D3C30 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
      {
        sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
        __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
      }
      v2 = byte_20D3C44;
    }
    v4 = nullptr;
    if ( v2 == 0 )
      v4 = (int *)(&dword_20D3C40);
    return (int *)sub_674AB0((uint32_t *)v4[14]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_822670  (binary VA: 0x822670)
// Original: sub_822670
// ----------------------------------------------------------------------------
void sub_822670(int a1)
{
  int *v1;
  int *v2;
  bool v3; // bp
  int *v4;
  int v5;
  int *v6;
  char *v7;
  uint32_t *v8;
  typedef uint8_t _g4_t_v9[5];
  typedef uint8_t _g4_t_v10[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (11u + sizeof(_g4_t_v9)) > _g4_s0 ? (11u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 11u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  if ( *(int *)(a1 + 104) > 0 )
  {
    if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
    }
    v1 = nullptr;
    if ( byte_20D34C4 == 0 )
      v1 = (int *)(&dword_20D34C0);
    sub_5B5CF0((unsigned int)(uintptr_t)(v1), 6);
    return;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[1]), "c1m03_shoptutorial", (int)(uintptr_t)(v9));
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D3C44 == 0 )
    v2 = (int *)(&dword_20D3C40);
  v3 = sub_64F550((int)(uintptr_t)(v2), (char **)&v9[1]);
  g4_std::string::Destroy(&v9[1]);
  if ( v3 )
  {
    if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D34C4 == 0 )
      v4 = (int *)(&dword_20D34C0);
    v5 = sub_5B5830(v4, 6);
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v6 = (int *)(&dword_20D4AC0);
    sub_AC4FE0((vox::EmitterHandle::Self *)v10, (int)(uintptr_t)(v6), (glf::Self *)"menu_pause", 1028443341);
    vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v10);
    if ( (*(uint8_t *)(a1 + 58) & 0x20) != 0 )
    {
      v7 = *(char **)(dword_20D92F0 + 368);
      if ( byte_20D2D50 != 0 )
        goto LABEL_19;
    }
    else
    {
      v7 = *(char **)(dword_20D92F0 + 32);
      if ( byte_20D2D50 != 0 )
      {
LABEL_19:
        v8 = nullptr;
        if ( byte_20D2D64 == 0 )
          v8 = (uint32_t *)(&unk_20D2D60);
        sub_7A08C0(v8, v7, 1, v5, 6, -1);
        return;
      }
    }
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
    {
      sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
      __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
    }
    goto LABEL_19;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8229E0_ea8229e0  (binary VA: 0x8229e0)
// Original: sub_8229E0
// ----------------------------------------------------------------------------
int sub_8229E0_ea8229e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;

  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v3 = (int *)(&dword_20D4AC0);
  sub_AB55E0((int)(uintptr_t)(v3), a2 == 0);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_822AC0  (binary VA: 0x822ac0)
// Original: sub_822AC0
// ----------------------------------------------------------------------------
int sub_822AC0(int *a1)
{
  int *v1;
  bool v2; // si
  int *v3;
  int *v5;
  uint8_t v6[44];

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D3C44 == 0 )
    v1 = (int *)(&dword_20D3C40);
  v2 = sub_631070((int)(uintptr_t)(v1));
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v3 = (int *)(&dword_20D4AC0);
  sub_AC4FE0((vox::EmitterHandle::Self *)v6, (int)(uintptr_t)(v3), (glf::Self *)"sfx_cell_hangup", 1028443341);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v6);
  if ( v2 )
  {
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D3C44 == 0 )
      v5 = (int *)(&dword_20D3C40);
    sub_631310((int)(uintptr_t)(v5), 0, 0);
  }
  return sub_7FCBE0(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_822CB0_ea822cb0  (binary VA: 0x822cb0)
// Original: sub_822CB0
// ----------------------------------------------------------------------------
int sub_822CB0_ea822cb0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v4;
  int *v5;

  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
      }
      v5 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v5 = (int *)(&dword_20D4AC0);
      sub_AB4BF0((int)(uintptr_t)(v5));
    }
  }
  else
  {
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v4 = (int *)(&dword_20D4AC0);
    sub_AB4E60((int)(uintptr_t)(v4));
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_822DF0  (binary VA: 0x822df0)
// Original: sub_822DF0
// ----------------------------------------------------------------------------
void sub_822DF0(int a1)
{
  int v1;
  int v2;
  int *v3;
  int *v4;
  bool v5; // bp
  int *v6;
  int v7;
  int *v8;
  char *v9;
  uint32_t *v10;
  typedef uint8_t _g4_t_v11[5];
  typedef uint8_t _g4_t_v12[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (11u + sizeof(_g4_t_v11)) > _g4_s0 ? (11u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 11u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v2 = *(uint32_t *)(*(uint32_t *)(sub_8F0680(v1) + 1132) + 76);
  if ( *(int *)(a1 + 104) <= 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11[1]), "c1m03_shoptutorial", (int)(uintptr_t)(v11));
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D3C44 == 0 )
      v4 = (int *)(&dword_20D3C40);
    v5 = sub_64F550((int)(uintptr_t)(v4), (char **)&v11[1]);
    g4_std::string::Destroy(&v11[1]);
    if ( v5 )
    {
      if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      }
      v6 = nullptr;
      if ( byte_20D34C4 == 0 )
        v6 = (int *)(&dword_20D34C0);
      v7 = sub_5B5830(v6, v2);
      if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
      }
      v8 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v8 = (int *)(&dword_20D4AC0);
      sub_AC4FE0((vox::EmitterHandle::Self *)v12, (int)(uintptr_t)(v8), (glf::Self *)"menu_pause", 1028443341);
      vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v12);
      v9 = *(char **)(dword_20D92F0 + 32);
      if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
      {
        sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
      }
      v10 = nullptr;
      if ( byte_20D2D64 == 0 )
        v10 = (uint32_t *)(&unk_20D2D60);
      sub_7A08C0(v10, v9, 1, v7, v2, -1);
    }
  }
  else
  {
    if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D34C4 == 0 )
      v3 = (int *)(&dword_20D34C0);
    sub_5B5CF0((unsigned int)(uintptr_t)(v3), v2);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_823150_ea823150  (binary VA: 0x823150)
// Original: sub_823150
// ----------------------------------------------------------------------------
int sub_823150_ea823150(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
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
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v8)) > _g4_s4 ? (24u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v9)) > _g4_s5 ? (24u + sizeof(_g4_t_v9)) : _g4_s5,
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
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Explosion", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Physic", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "In", (int)(uintptr_t)(&v15) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v36, 1, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Out", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 1, v37, 0, -1);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Object where to place the explosion.", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Object", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v16 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v20, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Object", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v7, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Force of the explosion.", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Force", (int)(uintptr_t)(&v12) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v23, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Force", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v4, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Radius of the explosion. Outside is no damage", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Radius", (int)(uintptr_t)(&v13));
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v26, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Radius", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v5, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "VFX to play.", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "VFX", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "VFXInfos.", (int)(uintptr_t)(&v13) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &v29);
  v17 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v30, 11, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "VFX", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v31), v9, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Maximum damage.", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Damage", (int)(uintptr_t)(&v14) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v33, 1, 1000);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Damage", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v34), v10, 1, 0, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  return ((g4_std::string::Destroy(&v35)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8238A0_ea8238a0  (binary VA: 0x8238a0)
// Original: sub_8238A0
// ----------------------------------------------------------------------------
int sub_8238A0_ea8238a0(grapher::ActorBase::Self *a1)
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
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Equip Gear", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Player", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Equip", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Unequip", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 2, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Gear ID from gear_.xml.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "GearID", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Gears.", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v10);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "GearID", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  return ((g4_std::string::Destroy(&v13)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_823BB0_ea823bb0  (binary VA: 0x823bb0)
// Original: sub_823BB0
// ----------------------------------------------------------------------------
int sub_823BB0_ea823bb0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
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
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (33u + sizeof(_g4_t_v6)) > _g4_s3 ? (33u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v7)) > _g4_s4 ? (36u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v9)) > _g4_s6 ? (48u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v10)) > _g4_s7 ? (52u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v11)) > _g4_s8 ? (56u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v12)) > _g4_s9 ? (60u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v13)) > _g4_s10 ? (64u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v14)) > _g4_s11 ? (68u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v15)) > _g4_s12 ? (72u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v16)) > _g4_s13 ? (76u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v17)) > _g4_s14 ? (80u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v18)) > _g4_s15 ? (84u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v19)) > _g4_s16 ? (88u + sizeof(_g4_t_v19)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 33u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
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
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Give Currency", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Player", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Amount of the currency to give or remove.", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Amount", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v11, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Amount", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v3, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Currency from the Currency enum in stock_items_struct.xml", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Currency", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Currency.", (int)(uintptr_t)(&v7) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v14);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 11, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Currency", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_823F60_ea823f60  (binary VA: 0x823f60)
// Original: sub_823F60
// ----------------------------------------------------------------------------
int sub_823F60_ea823f60(grapher::ActorBase::Self *a1)
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Give Item", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Player", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Amount of the currency to give or remove.", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Amount", (int)(uintptr_t)(&v8));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v13, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Amount", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v3, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Stock item ID from the AllStockItems array in stock_items.xml", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Item", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "AllStockItems.", (int)(uintptr_t)(&v8) + 3);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v16);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v17, 11, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Item", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v6, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Give unlimited amount. Only works for parachutes.", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Unlimited", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v20, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Unlimited", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v21), v4, 1, 0, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v20);
  return ((g4_std::string::Destroy(&v22)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_824410  (binary VA: 0x824410)
// Original: sub_824410
// ----------------------------------------------------------------------------
int sub_824410(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Remove Item", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Player", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "By Stock OID", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "By Name", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 2, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Stock item ID from the AllStockItems array in stock_items.xml", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "ItemOID", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "AllStockItems.", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v15);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 11, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Item OID", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Level Object name", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "ItemName", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Item Name", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_824880_ea824880  (binary VA: 0x824880)
// Original: sub_824880
// ----------------------------------------------------------------------------
int sub_824880_ea824880(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Set Throwable", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Player", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Give", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Remove All", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Remove Unlimited", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 3, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v15),
    "Which throwable to give/remove (from stock_items.xml ex.: AllStockItems.FragGrenade).",
    (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Throwable Type", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v12);
  DWORD1(v9) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v13, 11, (char *)&v9 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Throwable Type", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v5, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v9) != 0 )
    G4_VCALL<void>(DWORD1(v9), 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "How many to give, -1 for unlimited.", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Quantity", (int)(uintptr_t)(&v8) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Quantity", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  return ((g4_std::string::Destroy(&v18)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_824CD0_ea824cd0  (binary VA: 0x824cd0)
// Original: sub_824CD0
// ----------------------------------------------------------------------------
int sub_824CD0_ea824cd0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "ScriptExec", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "In", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Out", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 0, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Completed", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Script to execute", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 4, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Script name", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_824FB0_ea824fb0  (binary VA: 0x824fb0)
// Original: sub_824FB0
// ----------------------------------------------------------------------------
int sub_824FB0_ea824fb0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Sound FX", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Sounds", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Play", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Stop", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Name of the SFX to play", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "FX", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 4, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "FX", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_825290_ea825290  (binary VA: 0x825290)
// Original: sub_825290
// ----------------------------------------------------------------------------
int sub_825290_ea825290(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
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
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (33u + sizeof(_g4_t_v6)) > _g4_s3 ? (33u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v7)) > _g4_s4 ? (36u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v9)) > _g4_s6 ? (48u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v10)) > _g4_s7 ? (52u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v11)) > _g4_s8 ? (56u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v12)) > _g4_s9 ? (60u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v13)) > _g4_s10 ? (64u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v14)) > _g4_s11 ? (68u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v15)) > _g4_s12 ? (72u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v16)) > _g4_s13 ? (76u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v17)) > _g4_s14 ? (80u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v18)) > _g4_s15 ? (84u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v19)) > _g4_s16 ? (88u + sizeof(_g4_t_v19)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 33u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
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
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Music", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Sounds", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Play", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Stop", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 2, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Name of the music to play", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Song", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 4, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Song", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Is the music looping or not?", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Loop", (int)(uintptr_t)(&v7) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Loop", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 0, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_825670_ea825670  (binary VA: 0x825670)
// Original: sub_825670
// ----------------------------------------------------------------------------
int sub_825670_ea825670(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
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
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (33u + sizeof(_g4_t_v6)) > _g4_s3 ? (33u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v7)) > _g4_s4 ? (36u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v9)) > _g4_s6 ? (48u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v10)) > _g4_s7 ? (52u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v11)) > _g4_s8 ? (56u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v12)) > _g4_s9 ? (60u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v13)) > _g4_s10 ? (64u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v14)) > _g4_s11 ? (68u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v15)) > _g4_s12 ? (72u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v16)) > _g4_s13 ? (76u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v17)) > _g4_s14 ? (80u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v18)) > _g4_s15 ? (84u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v19)) > _g4_s16 ? (88u + sizeof(_g4_t_v19)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 33u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
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
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Inc StatCounters", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Stats", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Stats to increment (see giv_stat_counters.xml).", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "StatCounter", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "GIV_StatCounters.", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v11);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 11, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "StatCounter", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Increment to give to the stats. ( > 0)", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Amount", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Amount", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_825A20_ea825a20  (binary VA: 0x825a20)
// Original: sub_825A20
// ----------------------------------------------------------------------------
int sub_825A20_ea825a20(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Track Vehicle Sold", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Tracking", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Vehicle that was sold by the player.", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Vehicle", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Vehicle", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 1);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Amount the player got from selling his vehicle.", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Sell Price", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Sell Price", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 1, (int)(uintptr_t)(&v16), 1);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return ((g4_std::string::Destroy(&v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_825DB0_ea825db0  (binary VA: 0x825db0)
// Original: sub_825DB0
// ----------------------------------------------------------------------------
int sub_825DB0_ea825db0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Destroy Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Vehicles", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Vehicle to destroy", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Vehicle", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Vehicle", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Is the destruction play it sound?", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Sound", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Sound", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 0, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Is the destruction play it animation?", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Animation", (int)(uintptr_t)(&v10));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Animation", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Is the destruction damaging surrounding objects?", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Damage", (int)(uintptr_t)(&v10) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_826340_ea826340  (binary VA: 0x826340)
// Original: sub_826340
// ----------------------------------------------------------------------------
int sub_826340_ea826340(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Lock Vehicle Doors", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Vehicles", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Lock", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Unlock", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Vehicle to lock teh doors", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Vehicle", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Vehicle", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_826670_ea826670  (binary VA: 0x826670)
// Original: sub_826670
// ----------------------------------------------------------------------------
int sub_826670_ea826670(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Set Vehicle Speed", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Vehicles", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Vehicle to set the speed", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Vehicle", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Vehicle", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Speed to reach for this vehicle in km/h", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Speed", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Speed", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Does the vehicle starts as close as possible to this speed.", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Is Initial Speed", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Is Initial Speed", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 0, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  return ((g4_std::string::Destroy(&v21)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_826AF0_ea826af0  (binary VA: 0x826af0)
// Original: sub_826AF0
// ----------------------------------------------------------------------------
int sub_826AF0_ea826af0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Toggle Radio", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Vehicles", (int)(uintptr_t)(&v5) + 1);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Radio station if enabled is used.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Station", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "RadioStations", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v10);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Station", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  return ((g4_std::string::Destroy(&v13)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_826E40_ea826e40  (binary VA: 0x826e40)
// Original: sub_826E40
// ----------------------------------------------------------------------------
int sub_826E40_ea826e40(grapher::ActorBase::Self *a1)
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
    _g4_s5 = (4u + sizeof(_g4_t_v8)) > _g4_s4 ? (4u + sizeof(_g4_t_v8)) : _g4_s4,
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
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Place Item", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "World", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Place", (int)(uintptr_t)(&v12[1]));
  grapher::ActorBase::AddPin(a1, 0, &v26, 1, -1);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Remove All", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 1, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 2, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Item to spawn", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Type", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "AllStockItems.", (int)(uintptr_t)(&v9) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v16);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 11, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Type", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Name of the marker where to spawn the item", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v10) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v20, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v21), v7, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "How long before it despawns (in ms). (-1==default)", (int)(uintptr_t)(v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "DespawnDelay", (int)(uintptr_t)(&v11) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v23, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Despawn Delay", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v24), v8, 1, 0, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  return ((g4_std::string::Destroy(&v25)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8273B0_ea8273b0  (binary VA: 0x8273b0)
// Original: sub_8273B0
// ----------------------------------------------------------------------------
int sub_8273B0_ea8273b0(grapher::ActorBase::Self *a1)
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
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Change Location", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "World", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "In", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Completed", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 2, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "OID of the location to switch to.", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Location", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Locations.", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v12);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v13, 11, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Location", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v5, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Enable automatic fades.", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Use Fades", (int)(uintptr_t)(&v7) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Use Fades", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  return ((g4_std::string::Destroy(&v18)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8277B0_ea8277b0  (binary VA: 0x8277b0)
// Original: sub_8277B0
// ----------------------------------------------------------------------------
int sub_8277B0_ea8277b0(grapher::ActorBase::Self *a1)
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
  typedef uint8_t _g4_t_v22[20];
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
  typedef int _g4_t_v52;
  typedef int _g4_t_v53[4];
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
    _g4_s11 = (15u + sizeof(_g4_t_v15)) > _g4_s10 ? (15u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v16)) > _g4_s11 ? (16u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v17)) > _g4_s12 ? (20u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v18)) > _g4_s13 ? (24u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v19)) > _g4_s14 ? (28u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v20)) > _g4_s15 ? (32u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v21)) > _g4_s16 ? (36u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v22)) > _g4_s17 ? (40u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v23)) > _g4_s18 ? (60u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v24)) > _g4_s19 ? (76u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v25)) > _g4_s20 ? (88u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v26)) > _g4_s21 ? (92u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v27)) > _g4_s22 ? (96u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v28)) > _g4_s23 ? (100u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v29)) > _g4_s24 ? (104u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v30)) > _g4_s25 ? (108u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v31)) > _g4_s26 ? (112u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v32)) > _g4_s27 ? (116u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v33)) > _g4_s28 ? (120u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v34)) > _g4_s29 ? (124u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v35)) > _g4_s30 ? (128u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v36)) > _g4_s31 ? (132u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v37)) > _g4_s32 ? (136u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v38)) > _g4_s33 ? (140u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v39)) > _g4_s34 ? (144u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v40)) > _g4_s35 ? (148u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v41)) > _g4_s36 ? (152u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v42)) > _g4_s37 ? (156u + sizeof(_g4_t_v42)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v43)) > _g4_s38 ? (160u + sizeof(_g4_t_v43)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v44)) > _g4_s39 ? (164u + sizeof(_g4_t_v44)) : _g4_s39,
    _g4_s41 = (168u + sizeof(_g4_t_v45)) > _g4_s40 ? (168u + sizeof(_g4_t_v45)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v46)) > _g4_s41 ? (172u + sizeof(_g4_t_v46)) : _g4_s41,
    _g4_s43 = (176u + sizeof(_g4_t_v47)) > _g4_s42 ? (176u + sizeof(_g4_t_v47)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v48)) > _g4_s43 ? (180u + sizeof(_g4_t_v48)) : _g4_s43,
    _g4_s45 = (184u + sizeof(_g4_t_v49)) > _g4_s44 ? (184u + sizeof(_g4_t_v49)) : _g4_s44,
    _g4_s46 = (188u + sizeof(_g4_t_v50)) > _g4_s45 ? (188u + sizeof(_g4_t_v50)) : _g4_s45,
    _g4_s47 = (192u + sizeof(_g4_t_v51)) > _g4_s46 ? (192u + sizeof(_g4_t_v51)) : _g4_s46,
    _g4_s48 = (196u + sizeof(_g4_t_v52)) > _g4_s47 ? (196u + sizeof(_g4_t_v52)) : _g4_s47,
    _g4_s49 = (200u + sizeof(_g4_t_v53)) > _g4_s48 ? (200u + sizeof(_g4_t_v53)) : _g4_s48
  };
  alignas(16) uint8_t _g4_sf[_g4_s49];
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
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 15u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 116u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 120u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 124u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 132u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 136u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 140u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 144u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 148u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 152u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 156u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 160u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 164u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 168u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 176u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 180u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 184u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 188u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 192u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 196u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 200u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 6, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Race Start", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetDisplayName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Missions", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetCategoryName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "In", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v48, 1, -1);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Out", (int)(uintptr_t)(&v21) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v49, 0, -1);
  g4_std::string::Destroy(&v49);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Player Finished", (int)(uintptr_t)(v22));
  grapher::ActorBase::AddPin(a1, 2, &v50, 0, -1);
  g4_std::string::Destroy(&v50);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Opponent Finished", (int)(uintptr_t)(&v22[1]));
  grapher::ActorBase::AddPin(a1, 3, &v51, 0, -1);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Lap completed", (int)(uintptr_t)(&v22[2]));
  grapher::ActorBase::AddPin(a1, 4, &v52, 0, -1);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), "Waypoint Reached", (int)(uintptr_t)(&v22[3]));
  grapher::ActorBase::AddPin(a1, 5, v53, 0, -1);
  g4_std::string::Destroy(v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Type of race from races.xml.", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Race Type", (int)(uintptr_t)(&v16) + 1);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v27, 11, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Race Type", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v28), v11, 1, 1, (int)(uintptr_t)(&v29), 1);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v32),
    "Name of the 3 paths that delimit the race. Must have left, right and center in their name.",
    (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Delimiter paths", (int)(uintptr_t)(&v17));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v22[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v30, 9, &v22[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Delimiter paths", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v6, 1, 1, (int)(uintptr_t)(&v32), 1);
  g4_std::string::Destroy(&v31);
  if ( *(uint32_t *)&v22[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v22[4] + 44))(*(uint32_t *)&v22[4]);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Name of the racer npcs that will race, already placed in their vehicles.", (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Racers", (int)(uintptr_t)(&v17) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v23 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v33, 9, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Racers", (int)(uintptr_t)(&v18));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v34), v8, 1, 1, (int)(uintptr_t)(&v35), 1);
  g4_std::string::Destroy(&v34);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Name of the path that will have the visual cues for the player.", (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Visual Path", (int)(uintptr_t)(&v18) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v24 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v36, 9, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Visual Path", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v37), v10, 1, 1, (int)(uintptr_t)(&v38), 1);
  g4_std::string::Destroy(&v37);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Number of laps to win the race.", (int)(uintptr_t)(&v19) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Laps", (int)(uintptr_t)(&v19) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v39, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Laps", (int)(uintptr_t)(&v19) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v40), v12, 1, 1, (int)(uintptr_t)(&v41), 1);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Snap the waypoints to the floor.", (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Snap Waypoints", (int)(uintptr_t)(&v20));
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v42, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Snap Waypoints", (int)(uintptr_t)(&v20) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v43), v13, 1, 1, (int)(uintptr_t)(&v44), 1);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Position of the player.", (int)(uintptr_t)(&v21) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Player Position", (int)(uintptr_t)(&v20) + 3);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v45, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Player Position", (int)(uintptr_t)(&v21));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v46), v14, 1, 1, (int)(uintptr_t)(&v47), 2);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v45);
  return ((g4_std::string::Destroy(&v47)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_828270_ea828270  (binary VA: 0x828270)
// Original: sub_828270
// ----------------------------------------------------------------------------
int sub_828270_ea828270(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Set Lock", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "World", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Hard", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Soft", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Clear", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Target to set the lock on.", (int)(uintptr_t)(&v6) + 3);
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
// Function: sub_8285A0_ea8285a0  (binary VA: 0x8285a0)
// Original: sub_8285A0
// ----------------------------------------------------------------------------
int sub_8285A0_ea8285a0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Give Respect", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Player", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v9),
    "Amount of the XP to give the player (use -1 to give remaining xp needed for level up)",
    (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Amount", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Amount", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 1, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8287D0_ea8287d0  (binary VA: 0x8287d0)
// Original: sub_8287D0
// ----------------------------------------------------------------------------
int sub_8287D0_ea8287d0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Ambience", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Sounds", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Play", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Stop", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_828950_ea828950  (binary VA: 0x828950)
// Original: sub_828950
// ----------------------------------------------------------------------------
int sub_828950_ea828950(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "One Liners", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Sounds", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Enable", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Disable", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_828AD0_ea828ad0  (binary VA: 0x828ad0)
// Original: sub_828AD0
// ----------------------------------------------------------------------------
int sub_828AD0_ea828ad0(grapher::ActorBase::Self *a1)
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
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v4)) > _g4_s2 ? (20u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v5)) > _g4_s3 ? (24u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v7)) > _g4_s5 ? (32u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v8)) > _g4_s6 ? (36u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v9)) > _g4_s7 ? (40u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v10)) > _g4_s8 ? (44u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v11)) > _g4_s9 ? (48u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v12)) > _g4_s10 ? (52u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v13)) > _g4_s11 ? (56u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v14)) > _g4_s12 ? (60u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v15)) > _g4_s13 ? (64u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v16)) > _g4_s14 ? (68u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v17)) > _g4_s15 ? (72u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v18)) > _g4_s16 ? (76u + sizeof(_g4_t_v18)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Set Cover Eligibility", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "World", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Clear", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Eligible", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Ineligible", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 3, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "List of covers", (int)(uintptr_t)(&v5));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Cover", (int)(uintptr_t)(&v4) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 9, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Cover", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "List of characters", (int)(uintptr_t)(&v5) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Target", (int)(uintptr_t)(&v5) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 9, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Target", (int)(uintptr_t)(&v5) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  return ((g4_std::string::Destroy(&v14)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_828E80_ea828e80  (binary VA: 0x828e80)
// Original: sub_828E80
// ----------------------------------------------------------------------------
int sub_828E80_ea828e80(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef void *_g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[7];
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
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v4)) > _g4_s2 ? (31u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v5)) > _g4_s3 ? (32u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v6)) > _g4_s4 ? (36u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v7)) > _g4_s5 ? (40u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v8)) > _g4_s6 ? (48u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v9)) > _g4_s7 ? (52u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v10)) > _g4_s8 ? (56u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v11)) > _g4_s9 ? (60u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v12)) > _g4_s10 ? (64u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v13)) > _g4_s11 ? (68u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v14)) > _g4_s12 ? (72u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v15)) > _g4_s13 ? (76u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v16)) > _g4_s14 ? (80u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v17)) > _g4_s15 ? (84u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v18)) > _g4_s16 ? (88u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v19)) > _g4_s17 ? (92u + sizeof(_g4_t_v19)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 31u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 32u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7[4]), "World Time", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7[4]);
  g4_std::string::Destroy(&v7[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "World", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Set", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Pause", (int)(uintptr_t)(v7));
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Resume", (int)(uintptr_t)(&v7[1]));
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Toggle Day/Night", (int)(uintptr_t)(&v7[2]));
  grapher::ActorBase::AddPin(a1, 3, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v7[3]));
  grapher::ActorBase::AddPin(a1, 4, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Hour to Set", (int)(uintptr_t)(&v5) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Hour", (int)(uintptr_t)(&v5) + 1);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Hour", (int)(uintptr_t)(&v5) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Minute to set", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Minute", (int)(uintptr_t)(&v6));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Minute", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  return ((g4_std::string::Destroy(&v14)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_829280_ea829280  (binary VA: 0x829280)
// Original: sub_829280
// ----------------------------------------------------------------------------
int sub_829280_ea829280(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
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
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v5)) > _g4_s3 ? (12u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v6)) > _g4_s4 ? (16u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v7)) > _g4_s5 ? (20u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v8)) > _g4_s6 ? (24u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v9)) > _g4_s7 ? (28u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v10)) > _g4_s8 ? (32u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v11)) > _g4_s9 ? (36u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v12)) > _g4_s10 ? (40u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v13)) > _g4_s11 ? (44u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v14)) > _g4_s12 ? (48u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v15)) > _g4_s13 ? (52u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v16)) > _g4_s14 ? (56u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v17)) > _g4_s15 ? (60u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v18)) > _g4_s16 ? (64u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v19)) > _g4_s17 ? (68u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v20)) > _g4_s18 ? (72u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v21)) > _g4_s19 ? (76u + sizeof(_g4_t_v21)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v22)) > _g4_s20 ? (80u + sizeof(_g4_t_v22)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v23)) > _g4_s21 ? (84u + sizeof(_g4_t_v23)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v24)) > _g4_s22 ? (88u + sizeof(_g4_t_v24)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v25)) > _g4_s23 ? (92u + sizeof(_g4_t_v25)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Format Time", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "World", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "In", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v24, 1, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Out", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 1, v25, 0, -1);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Time to convert in milliseconds", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Time in", (int)(uintptr_t)(&v6) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v12, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Time in", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v2, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Minute", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Minutes", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Minutes", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 2);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Seconds", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Seconds", (int)(uintptr_t)(&v8));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v18, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Seconds", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v19), v4, 1, 1, (int)(uintptr_t)(&v20), 2);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Milliseconds", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Milliseconds", (int)(uintptr_t)(&v8) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v21, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Milliseconds", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v22), v5, 1, 1, (int)(uintptr_t)(&v23), 2);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  return ((g4_std::string::Destroy(&v23)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_829770  (binary VA: 0x829770)
// Original: sub_829770
// ----------------------------------------------------------------------------
void sub_829770(uint32_t *a1)
{
  int v1;
  void (***v2)(void *);
  void (**v3)(void *);
  void (***v4)(void *);
  void (**v5)(void *);
  void (***v6)(void *);
  void (***v7)(void *);
  void (***v8)(void *);

  *a1 = (uint32_t)(uintptr_t)(&off_205C0A8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C114);
  v1 = a1[26];
  v8 = (void (***)(void *))a1[27];
  if ( (void (***)(void *))v1 == v8 )
  {
    a1[27] = v1;
  }
  else
  {
    v2 = (void (***)(void *))a1[26];
    do
    {
      v3 = *v2;
      v6 = v2;
      v2 += 6;
      (*v3)(v6);
    }
    while ( v8 != v2 );
    v4 = (void (***)(void *))a1[26];
    a1[27] = v1;
    if ( (void (***)(void *))v1 != v4 )
    {
      do
      {
        v5 = *v4;
        v7 = v4;
        v4 += 6;
        (*v5)(v7);
      }
      while ( (void (***)(void *))v1 != v4 );
      v1 = a1[26];
    }
  }
  if ( v1 != 0 )
    sub_4EB870(v1);
  sub_80D840(a1);
  opDelete(a1);
}



// [Deduplicated: canonical definition in Actors module] (ActorGamePhysicsExplosion::ActorGamePhysicsExplosion(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGamePlayerEquipGear::ActorGamePlayerEquipGear(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGamePlayerGiveCurrency::ActorGamePlayerGiveCurrency(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGamePlayerGiveItem::ActorGamePlayerGiveItem(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGamePlayerGiveRespect::ActorGamePlayerGiveRespect(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGamePlayerSetThrowable::ActorGamePlayerSetThrowable(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameScriptExec::ActorGameScriptExec(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameSoundFX::ActorGameSoundFX(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameSoundAmbience::ActorGameSoundAmbience(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameSoundOneLiners::ActorGameSoundOneLiners(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameSoundMusic::ActorGameSoundMusic(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameStatCounters::ActorGameStatCounters(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameTrackVehicleSold::ActorGameTrackVehicleSold(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameVehicleDestroy::ActorGameVehicleDestroy(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameVehicleLockDoors::ActorGameVehicleLockDoors(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameVehicleSetSpeed::ActorGameVehicleSetSpeed(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameVehicleToggleRadio::ActorGameVehicleToggleRadio(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameWorldCoverEligible::ActorGameWorldCoverEligible(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameWorldItem::ActorGameWorldItem(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameWorldChangeLocation::ActorGameWorldChangeLocation(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameWorldRace::ActorGameWorldRace(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_829DB0  (binary VA: 0x829db0)
// Original: sub_829DB0
// ----------------------------------------------------------------------------
int sub_829DB0(int *a1, int a2)
{
  int result;
  int v3;
  int *v4;
  int v5;
  char *v6;
  int *v7;
  size_t v8;
  unsigned int v9;
  size_t v10;
  int *v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  void *v17;
  char *v18;
  typedef char *_g4_t_lpdso_handle;
  typedef size_t _g4_t_v20;
  typedef size_t _g4_t_v21;
  typedef size_t _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_dest;
  typedef int _g4_t_i;
  typedef float _g4_t_v27[3];
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s0 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v20)) > _g4_s1 ? (20u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v24)) > _g4_s5 ? (24u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_dest)) > _g4_s6 ? (28u + sizeof(_g4_t_dest)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_i)) > _g4_s7 ? (40u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v27)) > _g4_s8 ? (48u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v28)) > _g4_s9 ? (60u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v29)) > _g4_s10 ? (64u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v30)) > _g4_s11 ? (68u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v31)) > _g4_s12 ? (72u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v32)) > _g4_s13 ? (76u + sizeof(_g4_t_v32)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);

  result = a1[13];
  a1[14] = result;
  if ( a2 > 0 )
  {
    for ( i = 0; i != a2; ++i )
    {
      v3 = sub_4EBBF0(0x230u, 1);
      sub_8EFC30(v3, "Path");
      v4 = (int *)a1[14];
      if ( v4 == (int *)a1[15] )
      {
        v8 = 4;
        v9 = ((int)(uintptr_t)(v4) - a1[13]) >> 2;
        if ( v9 != 0 )
        {
          if ( v9 > 2 * v9 || 2 * v9 > 0x3FFFFFFF )
            v8 = 0xFFFFFFFC;
          else
            v8 = 8 * v9;
        }
        v20 = v8;
        v23 = ((int)(uintptr_t)(v4) - a1[13]) >> 2;
        dest = (char *)opNew(v8);
        v10 = v20;
        v11 = (int *)&dest[4 * v23];
        if ( v11 != nullptr )
          *v11 = v3;
        v12 = 0;
        v13 = ((int)(uintptr_t)(v4) - a1[13]) >> 2;
        if ( v13 != 0 )
        {
          v12 = 4 * v13;
          memmove(dest, (const void *)a1[13], 4 * v13);
          v10 = v20;
        }
        v14 = &dest[v12 + 4];
        v15 = 0;
        v16 = (a1[14] - (int)(uintptr_t)(v4)) >> 2;
        if ( v16 != 0 )
        {
          v15 = 4 * v16;
          v21 = v10;
          v24 = v14;
          memmove(v14, v4, 4 * v16);
          v14 = v24;
          v10 = v21;
        }
        v17 = (void *)a1[13];
        v18 = &v14[v15];
        if ( v17 != nullptr )
        {
          v22 = v10;
          opDelete(v17);
          v10 = v22;
        }
        a1[14] = (int)(uintptr_t)(v18);
        a1[13] = (int)(uintptr_t)(dest);
        a1[15] = (int)(uintptr_t)(&dest[v10]);
      }
      else
      {
        v5 = 0;
        if ( v4 != nullptr )
        {
          *v4 = v3;
          v5 = a1[14];
        }
        a1[14] = v5 + 4;
      }
      result = *(uint32_t *)(a1[16] + 532) - *(uint32_t *)(a1[16] + 528);
      if ( result > 19 )
      {
        v6 = nullptr;
        do
        {
          v32 &= 0xF8u;
          v28 = 0.0;
          v29 = 0.0;
          v30 = 0.0;
          v31 = 0;
          if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_19C34)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
            && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
          {
            sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
            __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
          }
          v7 = nullptr;
          if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_19C44)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
            v7 = (int *)(&dword_20D3C40);
          lpdso_handle = v6++;
          sub_66C590(v27, v7[14], (int)(uintptr_t)(lpdso_handle));
          v28 = v27[0];
          v29 = v27[1];
          v30 = v27[2];
          sub_930080(*(uint32_t *)(a1[13] + 4 * i), &v28);
          result = -858993459 * ((*(uint32_t *)(a1[16] + 532) - *(uint32_t *)(a1[16] + 528)) >> 2);
        }
        while ( (int)(uintptr_t)(v6) < result );
      }
    }
  }
  return result;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameWorldSetLock::ActorGameWorldSetLock(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameWorldTime::ActorGameWorldTime(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameWorldTimeFormat::ActorGameWorldTimeFormat(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameWorldTimeScale::ActorGameWorldTimeScale(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_82A1A0  (binary VA: 0x82a1a0)
// Original: sub_82A1A0
// ----------------------------------------------------------------------------
void sub_82A1A0(int a1, int a2)
{
  int i;
  int v3;

  for ( i = 0; i != 184; i += 4 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + i);
    if ( v3 != 0 )
      sub_7FCB30(v3, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82A1F0  (binary VA: 0x82a1f0)
// Original: sub_82A1F0
// ----------------------------------------------------------------------------
uint32_t * sub_82A1F0(int a1, unsigned int a2, char a3, char a4)
{
  uint32_t *result;

  result = (uint32_t *)a2;
  if ( a2 <= 0x2D )
  {
    result = *(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a2);
    if ( result != nullptr )
    {
      if ( a3 != 0 )
      {
        if ( a4 != 0 )
          return (uint32_t *)sub_7FD6C0(result);
        else
          return (uint32_t *)sub_7FD530(result);
      }
      else
      {
        return (uint32_t *)sub_7FD660(result);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A280  (binary VA: 0x82a280)
// Original: sub_82A280
// ----------------------------------------------------------------------------
int sub_82A280(int a1, unsigned int a2, char a3, char a4)
{
  int result;
  int *v5;

  result = a2;
  if ( a2 <= 0x2D )
  {
    v5 = *(int **)(*(uint32_t *)(a1 + 12) + 4 * a2);
    if ( v5 != nullptr )
    {
      result = G4_VCALL<int>(v5, 40);
      if ( (uint8_t)result == 0 )
      {
        if ( a3 != 0 && (a4 != 0 || *(uint8_t *)(a1 + 69) != 0) )
        {
          result = G4_VCALL<int>(v5, 32);
          if ( (uint8_t)result == 0 )
          {
            if ( a4 != 0 )
              return sub_7FCC60(v5);
            result = v5[14];
            if ( (result & *(uint32_t *)(a1 + 48)) != 0 || result == 0 )
              return sub_7FCC60(v5);
          }
        }
        else
        {
          result = G4_VCALL<int>(v5, 32);
          if ( (uint8_t)result != 0 )
            return sub_7FCBE0(v5);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A360  (binary VA: 0x82a360)
// Original: sub_82A360
// ----------------------------------------------------------------------------
void sub_82A360(int a1, int *a2, char a3, char a4)
{
  int v4;

  if ( a2 != nullptr && G4_VCALL<uint8_t>(a2, 40) == 0 )
  {
    if ( a3 != 0 && (a4 != 0 || *(uint8_t *)(a1 + 69) != 0) )
    {
      if ( G4_VCALL<uint8_t>(a2, 32) == 0
        && (a4 != 0 || ((v4 = a2[14]) & *(uint32_t *)(a1 + 48)) != 0 || v4 == 0) )
      {
        sub_7FCC60(a2);
      }
    }
    else if ( G4_VCALL<uint8_t>(a2, 32) != 0 )
    {
      sub_7FCBE0(a2);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82A420  (binary VA: 0x82a420)
// Original: sub_82A420
// ----------------------------------------------------------------------------
int * sub_82A420(int a1, int a2, char a3)
{
  int *result;
  int v4;
  int v5;

  result = (int *)a2;
  v4 = *(uint32_t *)(a1 + 12);
  if ( a2 >= 0 && v4 != 0 && a2 <= 45 )
  {
    result = *(int **)(v4 + 4 * a2);
    if ( result != nullptr )
    {
      v5 = *result;
      if ( a3 != 0 )
        return (int *)(*(int (**)(int *, uint32_t))(v5 + 16))(result, 0);
      else
        return (int *)(*(int (**)(int *, int))(v5 + 16))(result, 1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A480  (binary VA: 0x82a480)
// Original: sub_82A480
// ----------------------------------------------------------------------------
int sub_82A480(int a1, unsigned int a2)
{
  int result;

  result = 0;
  if ( a2 <= 0x2D )
    return (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a2) + 40))(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A4B0  (binary VA: 0x82a4b0)
// Original: sub_82A4B0
// ----------------------------------------------------------------------------
int sub_82A4B0(int a1, unsigned int a2)
{
  int result;

  result = 0;
  if ( a2 <= 0x2D )
    return (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a2) + 32))(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A4E0  (binary VA: 0x82a4e0)
// Original: sub_82A4E0
// ----------------------------------------------------------------------------
int sub_82A4E0(int a1, unsigned int a2)
{
  int v2;
  int v3;

  v2 = 0;
  if ( a2 <= 0x2D )
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * a2);
    if ( v3 != 0 )
    {
      v2 = 1;
      if ( G4_VCALL<uint8_t>(v3, 56, 0) == 0
        && G4_VCALL<uint8_t>(v3, 56, 1) == 0
        && G4_VCALL<uint8_t>(v3, 56, 2) == 0 )
      {
        return G4_VCALL<int>(v3, 56, 3);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_82A560  (binary VA: 0x82a560)
// Original: sub_82A560
// ----------------------------------------------------------------------------
int sub_82A560(int a1, int a2)
{
  int result;
  int v3;

  result = a2;
  v3 = *(uint32_t *)(a1 + 12);
  if ( a2 >= 0 && v3 != 0 && a2 <= 45 )
  {
    result = *(uint32_t *)(v3 + 4 * a2);
    if ( result != 0 )
      return G4_VCALL<int>(result, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A5A0  (binary VA: 0x82a5a0)
// Original: sub_82A5A0
// ----------------------------------------------------------------------------
int sub_82A5A0(int a1, int a2)
{
  int result;
  int v3;

  result = a2;
  v3 = *(uint32_t *)(a1 + 12);
  if ( a2 >= 0 && v3 != 0 && a2 <= 45 )
  {
    result = *(uint32_t *)(v3 + 4 * a2);
    if ( result != 0 )
      return G4_VCALL<int>(result, 24);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A5E0  (binary VA: 0x82a5e0)
// Original: sub_82A5E0
// ----------------------------------------------------------------------------
int sub_82A5E0(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
    return G4_VCALL<int>(a2, 24);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A600  (binary VA: 0x82a600)
// Original: sub_82A600
// ----------------------------------------------------------------------------
unsigned int sub_82A600(int a1, int a2)
{
  bool v2;
  unsigned int **v3;

  v2 = byte_20D2D50 == 0;
  *(uint32_t *)(a1 + 48) = a2;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D2D64 == 0 )
    v3 = (unsigned int **)&unk_20D2D60;
  return sub_795720(v3 + 9, -1);
}

// ----------------------------------------------------------------------------
// Function: sub_82A6B0  (binary VA: 0x82a6b0)
// Original: sub_82A6B0
// ----------------------------------------------------------------------------
int sub_82A6B0(int a1)
{
  *(uint32_t *)(a1 + 48) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_82A6C0  (binary VA: 0x82a6c0)
// Original: sub_82A6C0
// ----------------------------------------------------------------------------
uint32_t * sub_82A6C0(int a1)
{
  uint32_t *result;
  int i;
  int v3;
  char *s;
  size_t v5;

  result = *(uint32_t **)(a1 + 64);
  if ( result != nullptr )
  {
    for ( i = 0; i != 184; i += 4 )
    {
      v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + i);
      if ( v3 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v3 + 68))(*(uint32_t *)(*(uint32_t *)(a1 + 12) + i));
    }
    result = *(uint32_t **)(dword_20DDDC0 + 864);
    if ( result != nullptr )
    {
      s = (char *)sub_AC5E50(result, 12784);
      v5 = strlen(s);
      return (uint32_t *)g4_std_compat::string_assign((int)(uintptr_t)(&dword_20D66B0), s, v5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A750  (binary VA: 0x82a750)
// Original: sub_82A750
// ----------------------------------------------------------------------------
int sub_82A750(int a1, int a2)
{
  int result;
  int *v3;
  int v4;
  char v5;
  char v6;
  int v7;
  int *v8;
  char v9;
  int v10;
  int *v11;
  char v12;

  result = *(uint32_t *)(a1 + 12);
  v3 = *(int **)(result + 8);
  if ( v3 != nullptr )
  {
    if ( a2 < 0 )
    {
      v3[14] &= 0xFFF8FFFF;
      v7 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 176);
      if ( v7 != 0 )
        *(uint32_t *)(v7 + 56) &= 0xFFF9FFFF;
      return G4_VCALL<int>(v3, 12);
    }
    v4 = *(uint32_t *)(a1 + 56);
    switch ( a2 )
    {
      case 5:
        v3[14] &= 0xFFF9FFFF;
        v10 = v4;
        sub_7FCBE0(v3);
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 116), 0, 0);
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 124), 0, 0);
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 128), 0, 0);
        if ( v10 != 0x8000 )
        {
          v3[14] |= 0x10000u;
          return G4_VCALL<int>(v3, 12);
        }
        break;
      case 6:
      case 4:
      case 7:
        break;
      case 12:
        v8 = *(int **)(result + 176);
        if ( v8 != nullptr )
        {
          v11 = v8;
          sub_82A360(a1, v8, 1, 1);
          if ( (*((uint8_t *)v11 + 58) & 2) != 0 )
            goto LABEL_12;
        }
        break;
      case 11:
LABEL_12:
        v12 = 1;
        v3[14] = v3[14] & 0xFFF9FFFF | 0x20000;
        v5 = 1;
LABEL_13:
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 116), v5, 1);
        v6 = 0;
        if ( a2 != 10 )
          v6 = v12 ^ 1;
        v9 = v6;
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 124), v6, 1);
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 128), v9, 1);
        break;
      default:
        v12 = 0;
        v3[14] = v3[14] & 0xFFF9FFFF | 0x40000;
        v5 = 0;
        goto LABEL_13;
    }
    v3[14] &= ~0x10000u;
    return G4_VCALL<int>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82A990  (binary VA: 0x82a990)
// Original: sub_82A990
// ----------------------------------------------------------------------------
unsigned int sub_82A990(int a1, int a2)
{
  unsigned int result;
  int *v3;

  result = *(uint32_t *)(a1 + 12);
  v3 = *(int **)(result + 4 * a2);
  if ( v3 != nullptr )
  {
    result = v3[14];
    if ( (result & *(uint32_t *)(a1 + 48)) != 0 )
    {
      result = G4_VCALL<int>(v3, 32);
      if ( (uint8_t)result == 0 )
      {
        result = G4_VCALL<int>(v3, 40);
        if ( (uint8_t)result == 0 )
        {
          if ( *(uint8_t *)(a1 + 69) != 0 )
          {
            result = G4_VCALL<int>(v3, 32);
            if ( (uint8_t)result == 0 )
            {
              result = v3[14];
              if ( (result & *(uint32_t *)(a1 + 48)) != 0 || result == 0 )
                return sub_7FCC60(v3);
            }
          }
          else
          {
            result = G4_VCALL<int>(v3, 32);
            if ( (uint8_t)result != 0 )
              return sub_7FCBE0(v3);
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82AA40  (binary VA: 0x82aa40)
// Original: sub_82AA40
// ----------------------------------------------------------------------------
int sub_82AA40(int a1, int a2)
{
  int result;
  int *v3;

  result = a1;
  v3 = *(int **)(*(uint32_t *)(a1 + 12) + 4 * a2);
  if ( v3 != nullptr && (v3[14] & *(uint32_t *)(a1 + 48)) != 0 )
  {
    result = G4_VCALL<int>(v3, 32);
    if ( (uint8_t)result != 0 )
    {
      result = G4_VCALL<int>(v3, 40);
      if ( (uint8_t)result == 0 )
      {
        result = G4_VCALL<int>(v3, 32);
        if ( (uint8_t)result != 0 )
          return sub_7FCBE0(v3);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82AAB0  (binary VA: 0x82aab0)
// Original: sub_82AAB0
// ----------------------------------------------------------------------------
int sub_82AAB0(int a1)
{
  *(uint8_t *)(a1 + 70) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_82AAC0  (binary VA: 0x82aac0)
// Original: sub_82AAC0
// ----------------------------------------------------------------------------
int sub_82AAC0(int a1)
{
  *(uint8_t *)(a1 + 70) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_82AAD0  (binary VA: 0x82aad0)
// Original: sub_82AAD0
// ----------------------------------------------------------------------------
int sub_82AAD0(int a1)
{
  return *(uint8_t *)(a1 + 70);
}

// ----------------------------------------------------------------------------
// Function: sub_82AAE0  (binary VA: 0x82aae0)
// Original: sub_82AAE0
// ----------------------------------------------------------------------------
int sub_82AAE0(int a1)
{
  char v1;
  int v2;

  v1 = (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a1 + 12) + 96) + 32))(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 96));
  v2 = 1;
  if ( v1 == 0 )
  {
    sub_7FCC60(*(uint32_t **)(*(uint32_t *)(a1 + 12) + 96));
    return 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_82AB40  (binary VA: 0x82ab40)
// Original: sub_82AB40
// ----------------------------------------------------------------------------
void sub_82AB40()
{
  int *v0;
  int *v1;
  int *v2;
  uint8_t v3[44];

  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v0 = nullptr;
  if ( byte_20D5248 == 0 )
    v0 = (int *)(&dword_20D5240);
  sub_99C9A0(v0);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D5248 == 0 )
    v1 = (int *)(&dword_20D5240);
  *((uint8_t *)v1 + 24) = 0;
  sub_B9D390(dword_20DDDC0, 1);
  byte_20BADDC = 1;
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v2 = (int *)(&dword_20D4AC0);
  sub_AC4FE0((vox::EmitterHandle::Self *)v3, (int)(uintptr_t)(v2), (glf::Self *)"menu_cutscene_skip", 1028443341);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: sub_82AD00  (binary VA: 0x82ad00)
// Original: sub_82AD00
// ----------------------------------------------------------------------------
int sub_82AD00(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 0;
  v2 = dword_20DDDC0;
  do
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + v1);
    v1 += 4;
    result = sub_B9CCE0(v2, v3);
  }
  while ( v1 != 184 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82AD50  (binary VA: 0x82ad50)
// Original: sub_82AD50
// ----------------------------------------------------------------------------
int sub_82AD50(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 0;
  v2 = dword_20DDDC0;
  do
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + v1);
    v1 += 4;
    result = sub_B9CD40(v2, v3);
  }
  while ( v1 != 184 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82ADA0  (binary VA: 0x82ada0)
// Original: sub_82ADA0
// ----------------------------------------------------------------------------
int sub_82ADA0(int a1, int a2, char a3, char a4)
{
  int result;
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t v13[4];

  result = *(uint32_t *)(a1 + 64);
  v5 = a4;
  if ( result != 0 )
  {
    result = *(uint32_t *)(a1 + 12);
    v6 = *(uint32_t *)(result + 100);
    if ( v6 != 0 )
    {
      G4_VCALL<void>(v6, 12);
      result = *(uint32_t *)(a1 + 12);
      v5 = a4;
    }
    v7 = *(uint32_t *)(result + 112);
    if ( v7 != 0 )
    {
      if ( v5 != 0 || (v10 = sub_8F0680(v6), (int)sub_8EDC50(*(uint32_t *)(v10 + 1132)) <= 1) )
      {
        v8 = *(uint32_t *)(*(uint32_t *)(a1 + 64) + 4);
        if ( v8 != 0 )
          G4_VCALL<void>(v8, 40, "lockAtCurrent", 1065353216, v7 + 24, "weapons_list");
      }
      else if ( a2 != 0 )
      {
        v11 = *(uint32_t *)(*(uint32_t *)(a1 + 64) + 4);
        if ( v11 != 0 )
          G4_VCALL<void>(v11, 40, "lockAtCurrent", 0, v7 + 24, "weapons_list");
      }
      result = *(uint32_t *)(a1 + 12);
      v9 = *(uint32_t *)(result + 112);
      if ( v9 != 0 )
      {
        if ( a3 != 0 )
        {
          v12 = *(uint32_t *)(a1 + 64);
          v13[0] = 0;
          sub_801CC0(v12, v9 + 24, (int)(uintptr_t)("refreshCurrent"), (int)(uintptr_t)(v13), (int)(uintptr_t)("weapons_list"), 0);
        }
        return sub_8016C0(v9, a2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82AF20  (binary VA: 0x82af20)
// Original: sub_82AF20
// ----------------------------------------------------------------------------
uint32_t * sub_82AF20(int a1, uint32_t *a2, char a3)
{
  int v3;
  uint32_t *result;
  int v5;
  int v6;

  result = *(uint32_t **)(a1 + 12);
  v5 = result[28];
  if ( v5 != 0 )
  {
    if ( a3 != 0 || (v6 = sub_8F0680(v3), (int)sub_8EDC50(*(uint32_t *)(v6 + 1132)) <= 1) )
    {
      result = *(uint32_t **)(*(uint32_t *)(a1 + 64) + 4);
      if ( result != nullptr )
        return (uint32_t *)G4_VCALL<int>(result, 40, "lockAtCurrent", 1065353216, v5 + 24, "weapons_list");
    }
    else
    {
      result = a2;
      if ( a2 != nullptr )
      {
        result = *(uint32_t **)(*(uint32_t *)(a1 + 64) + 4);
        if ( result != nullptr )
          return (uint32_t *)G4_VCALL<int>(result, 40, "lockAtCurrent", 0, v5 + 24, "weapons_list");
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82AFF0  (binary VA: 0x82aff0)
// Original: sub_82AFF0
// ----------------------------------------------------------------------------
void sub_82AFF0(int a1, int a2)
{
  if ( **(uint32_t **)(a1 + 12) != 0 )
    sub_80D1E0(**(uint32_t **)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_82B030  (binary VA: 0x82b030)
// Original: sub_82B030
// ----------------------------------------------------------------------------
void sub_82B030()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_82B040  (binary VA: 0x82b040)
// Original: sub_82B040
// ----------------------------------------------------------------------------
int sub_82B040(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 0;
  v2 = dword_20DDDC0;
  do
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + v1);
    v1 += 4;
    result = sub_B9CCE0(v2, v3);
  }
  while ( v1 != 184 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82B090  (binary VA: 0x82b090)
// Original: sub_82B090
// ----------------------------------------------------------------------------
void sub_82B090(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = dword_20DDDC0;
  do
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + v1);
    v1 += 4;
    sub_B9CD40(v2, v3);
  }
  while ( v1 != 184 );
  v4 = **(uint32_t **)(a1 + 12);
  if ( v4 != 0 )
    sub_80D1E0(v4, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_82B100  (binary VA: 0x82b100)
// Original: sub_82B100
// ----------------------------------------------------------------------------
int * sub_82B100(int a1, int a2)
{
  uint32_t **v2;
  int *result;

  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D2D64 == 0 )
    v2 = (uint32_t **)&unk_20D2D60;
  sub_7AE080(v2[27], a2);
  result = **(int ***)(a1 + 12);
  if ( result != nullptr )
    return (int *)sub_7FE7F0(result, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82B1D0  (binary VA: 0x82b1d0)
// Original: sub_82B1D0
// ----------------------------------------------------------------------------
unsigned int sub_82B1D0(int a1, int a2)
{
  unsigned int result;

  result = **(uint32_t **)(a1 + 12);
  if ( result != 0 )
    return sub_80E880(**(uint32_t **)(a1 + 12), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82B210  (binary VA: 0x82b210)
// Original: sub_82B210
// ----------------------------------------------------------------------------
int sub_82B210(int a1, int a2)
{
  int *v2;
  uint16_t v4[12];

  v4[0] = 2;
  *(uint64_t *)&v4[2] = 0xBFF0000000000000LL;
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5D7C == 0 )
    v2 = (int *)(&dword_20D5D78);
  sub_7E2EE0(v2, "DefaultDialog", a2, -1, -1, 0, (gameswf::ASValue::Self *)v4);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: sub_82B360  (binary VA: 0x82b360)
// Original: sub_82B360
// ----------------------------------------------------------------------------
int sub_82B360(int a1, int a2)
{
  int *v2;
  uint16_t v4[12];

  v4[0] = 2;
  *(uint64_t *)&v4[2] = 0xBFF0000000000000LL;
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5D7C == 0 )
    v2 = (int *)(&dword_20D5D78);
  sub_7E2EE0(v2, "DefaultDialog", a2, -1, -1, 0, (gameswf::ASValue::Self *)v4);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: sub_82B4B0  (binary VA: 0x82b4b0)
// Original: sub_82B4B0
// ----------------------------------------------------------------------------
int sub_82B4B0(int a1, char *a2)
{
  int *v2;
  int result;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint16_t _g4_t_v14[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (65u + sizeof(_g4_t_v7)) > _g4_s1 ? (65u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v8)) > _g4_s2 ? (68u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v9)) > _g4_s3 ? (72u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v10)) > _g4_s4 ? (76u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v11)) > _g4_s5 ? (80u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v12)) > _g4_s6 ? (84u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v13)) > _g4_s7 ? (88u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v14)) > _g4_s8 ? (100u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 65u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 68u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 72u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 76u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 80u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 84u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 88u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 100u);

  *(uint64_t *)&v14[2] = 0xBFF0000000000000LL;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14[0] = 2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "TitleNeedLocalization", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), a2, (int)(uintptr_t)(&v7));
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5D7C == 0 )
    v2 = (int *)(&dword_20D5D78);
  sub_7E2D40(v2, "DefaultDialog", (int)(uintptr_t)(&v8), (int)(uintptr_t)(&v9), (int)(uintptr_t)(&v10), 0, (gameswf::ASValue::Self *)v14, (int)(uintptr_t)(&v11), 0);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v10);
  result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v4 = v12;
  v5 = v11;
  if ( v12 != v11 )
  {
    do
    {
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v5 + 4));
      v6 = v5;
      v5 += 16;
      g4_std::string::Destroy(v6);
    }
    while ( v4 != v5 );
    v5 = v11;
  }
  if ( v5 != 0 )
    return sub_4EB870(v5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82B680  (binary VA: 0x82b680)
// Original: sub_82B680
// ----------------------------------------------------------------------------
int sub_82B680(int a1, int a2)
{
  int *v2;
  uint16_t v4[12];

  v4[0] = 2;
  *(uint64_t *)&v4[2] = 0xBFF0000000000000LL;
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5D7C == 0 )
    v2 = (int *)(&dword_20D5D78);
  sub_7E2EE0(v2, "DefaultDialog", a2, -1, -1, 0, (gameswf::ASValue::Self *)v4);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: sub_82B7D0  (binary VA: 0x82b7d0)
// Original: sub_82B7D0
// ----------------------------------------------------------------------------
int sub_82B7D0(int a1, int a2)
{
  int result;

  result = a2;
  if ( (int)__builtin_abs(a2) > 1 )
    return 2 * (a2 <= 0) - 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82B810  (binary VA: 0x82b810)
// Original: sub_82B810
// ----------------------------------------------------------------------------
int sub_82B810(int a1)
{
  int v1;

  v1 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 156);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 104);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_82B830  (binary VA: 0x82b830)
// Original: sub_82B830
// ----------------------------------------------------------------------------
void sub_82B830(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 156);
  if ( v3 != 0 )
  {
    v4 = 0;
    if ( a3 >= 0 )
      v4 = a3;
    sub_7FDAD0(v3, a2, v4);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82B880  (binary VA: 0x82b880)
// Original: sub_82B880
// ----------------------------------------------------------------------------
int sub_82B880(int a1)
{
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 12) + 156) != 0 )
    return sub_7FE1A0(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 156));
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_82B8C0  (binary VA: 0x82b8c0)
// Original: sub_82B8C0
// ----------------------------------------------------------------------------
int sub_82B8C0(int a1, int a2, int a3)
{
  int result;

  result = a3;
  if ( a3 >= 0 && *(uint32_t *)(a1 + 64) != 0 && a3 <= 45 )
    return sub_80EDD0(*(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a3), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82B920  (binary VA: 0x82b920)
// Original: sub_82B920
// ----------------------------------------------------------------------------
void sub_82B920(int a1, int a2, int a3)
{
  if ( a3 >= 0 && *(uint32_t *)(a1 + 64) != 0 && a3 <= 45 )
    sub_80D500(*(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a3), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_82B980  (binary VA: 0x82b980)
// Original: sub_82B980
// ----------------------------------------------------------------------------
void sub_82B980(int a1, unsigned int a2, int a3, char a4)
{
  int v4;
  int *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;

  if ( a2 <= 0x2D )
  {
    if ( a3 == 1 )
    {
      v4 = *(uint32_t *)(a1 + 12);
      if ( v4 != 0 )
      {
        v5 = *(int **)(v4 + 4 * a2);
        if ( v5 != nullptr )
        {
          v6 = *v5;
          if ( a4 != 0 )
            (*(void (**)(int *, uint32_t))(v6 + 16))(v5, 0);
          else
            (*(void (**)(int *, int))(v6 + 16))(v5, 1);
        }
      }
    }
    else if ( a3 <= 1 )
    {
      if ( a3 == 0 && a2 != 1 )
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 4 * a2), a4, a2 - 19 <= 1);
    }
    else if ( a3 == 2 )
    {
      v8 = *(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a2);
      if ( v8 != nullptr )
      {
        v9 = *(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a2);
        if ( a4 != 0 )
        {
          sub_7FD530(v8);
          return;
        }
        goto LABEL_20;
      }
    }
    else if ( a3 == 3 )
    {
      v7 = *(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a2);
      if ( v7 != nullptr )
      {
        v9 = *(uint32_t **)(*(uint32_t *)(a1 + 12) + 4 * a2);
        if ( a4 != 0 )
        {
          sub_7FD6C0(v7);
          return;
        }
LABEL_20:
        sub_7FD660(v9);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82BAE0  (binary VA: 0x82bae0)
// Original: sub_82BAE0
// ----------------------------------------------------------------------------
int * sub_82BAE0()
{
  if ( byte_20D66C0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D66C0) != 0 )
  {
    dword_20D66C8 = 0;
    dword_20D66CC = 0;
    dword_20D66D0 = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D66C0);
    __cxa_atexit(
      (void (*)(void *))g4_std::vector_HudElement_GameAllocator_696322::Destroy,
      &dword_20D66C8,
      &unk_20D1280);
  }
  return (int *)(&dword_20D66C8);
}

// ----------------------------------------------------------------------------
// Function: nullsub_290  (binary VA: 0x82bb88)
// Original: nullsub_290
// ----------------------------------------------------------------------------
void nullsub_290()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_291  (binary VA: 0x82bb98)
// Original: nullsub_291
// ----------------------------------------------------------------------------
void nullsub_291()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_292  (binary VA: 0x82bbc8)
// Original: nullsub_292
// ----------------------------------------------------------------------------
void nullsub_292()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_293  (binary VA: 0x82bbd8)
// Original: nullsub_293
// ----------------------------------------------------------------------------
void nullsub_293()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_82BBE0  (binary VA: 0x82bbe0)
// Original: sub_82BBE0
// ----------------------------------------------------------------------------
int sub_82BBE0(int a1, int a2, char *a3, char *a4)
{
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  sub_7FC920(a1, a2, a3, 0, (int)(uintptr_t)(a4), 1, 1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BF28);
  *(uint32_t *)(a1 + 104) = 0;
  *(uint32_t *)(a1 + 4) = ((uint32_t)(uintptr_t)&off_205BF94);
  *(uint32_t *)(a1 + 108) = 0;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint8_t *)(a1 + 112) = 0;
  *(uint8_t *)(a1 + 113) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  g4_std::string::construct_from_cstr(a1 + 124, a4, (int)(uintptr_t)(&v5));
  g4_std::string::construct_from_cstr(a1 + 128, "Stick_mc", (int)(uintptr_t)(&v5) + 1);
  g4_std::string::construct_from_cstr(a1 + 132, "Stick_mc.hl", (int)(uintptr_t)(&v5) + 2);
  g4_std::string::construct_from_cstr(a1 + 136, "Stick_mc.stick", (int)(uintptr_t)(&v5) + 3);
  *(uint16_t *)(a1 + 140) = 0;
  *(uint16_t *)(a1 + 142) = 0;
  *(uint16_t *)(a1 + 144) = 0;
  *(uint16_t *)(a1 + 146) = 0;
  return sub_801C50(*(uint32_t *)(a1 + 12), a1 + 24, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_82BD20  (binary VA: 0x82bd20)
// Original: sub_82BD20
// ----------------------------------------------------------------------------
int sub_82BD20(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;

  result = a1;
  v5 = *(uint32_t *)(a1 + 12);
  if ( v5 != 0 )
    return sub_801E70(v5, COERCE_INT((float)a3), COERCE_INT((float)a4), a1 + 24, *(uint32_t *)(a1 + 128));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82BD80  (binary VA: 0x82bd80)
// Original: sub_82BD80
// ----------------------------------------------------------------------------
int sub_82BD80(int *a1, float a2)
{
  int result;

  result = (int)(float)((float)(a2 * 0.5) * (float)sub_801D60(a1[3], (int)(uintptr_t)("width"), (int)(uintptr_t)(a1 + 6), a1[31], 0));
  a1[26] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82BDF0  (binary VA: 0x82bdf0)
// Original: sub_82BDF0
// ----------------------------------------------------------------------------
int sub_82BDF0(int *a1, int a2, int a3)
{
  sub_801D10(a1[3], a2, 0, (int)(uintptr_t)(a1 + 6), a1[33]);
  sub_801D10(a1[3], a2, 0, (int)(uintptr_t)(a1 + 6), a1[34]);
  a1[30] = a3;
  return a3;
}



// ============================================================================
// Address:   0x82be80 (size: 117 bytes)
// Symbol:    sub_82BE80
// Demangled: sub_82BE80
// ============================================================================
int (**sub_82BE80(uint32_t *a1, int a2, char *a3))(int)
{
  sub_7FC920((int)(uintptr_t)(a1), a2, a3, 1, nullptr, 1, (uint8_t *)&dword_0 + 1);
  *a1 = (uint32_t)(uintptr_t)(&off_205BFA8);
  a1[26] = -1;
  a1[1] = ((uint32_t)(uintptr_t)&off_205C014);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_205C014));
}
// ----------------------------------------------------------------------------
// Function: sub_82BF00  (binary VA: 0x82bf00)
// Original: sub_82BF00
// ----------------------------------------------------------------------------
unsigned int sub_82BF00(uint32_t *a1, int a2, char *a3, int a4, char a5)
{
  int v5;
  unsigned int result;
  int v7;
  int v8;

  sub_7FF910(a1, a2, a3, a4, a5);
  *a1 = (uint32_t)(uintptr_t)(&off_205C028);
  a1[29] = 400;
  a1[1] = ((uint32_t)(uintptr_t)&off_205C094);
  a1[30] = 0;
  result = sub_8F0680(v5);
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 428);
    v7 = result;
    if ( result != a1[30] )
    {
      if ( result != 0 )
      {
        if ( sub_5B1A50(result) )
        {
          result = sub_5B1820(v7);
          if ( (result & 0x80000000) == 0 && result < dword_20D7DA0 )
          {
            v8 = *(uint32_t *)(dword_20D7D90 + (result << 6) + 20);
            result = *(uint32_t *)(a1[3] + 4);
            if ( result != 0 )
            {
              (*(void (**)(uint32_t, void **, int, uint32_t *, const char *))(*(uint32_t *)result + 44))(
                *(uint32_t *)(a1[3] + 4),
                (void **)(&off_1B1FE25),
                v8,
                a1 + 6,
                "weapon_img");
              result = *(uint32_t *)(a1[3] + 4);
              if ( result != 0 )
                result = G4_VCALL<int>(result, 44, "mode", "punch", a1 + 6, 0);
            }
          }
        }
        else
        {
          result = *(uint32_t *)(a1[3] + 4);
          if ( result != 0 )
            result = G4_VCALL<int>(result, 44, "mode", "shoot", a1 + 6, 0);
        }
      }
      a1[30] = v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82C060  (binary VA: 0x82c060)
// Original: sub_82C060
// ----------------------------------------------------------------------------
void sub_82C060(int a1, int a2, int a3)
{
  g4_cxa_guard_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  uint8_t *v10;
  int v11;
  typedef uint8_t _g4_t_v12;
  typedef float _g4_t_v13;
  typedef void *_g4_t_obj;
  typedef g4_cxa_guard_t *_g4_t_v15;
  typedef bool _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19[2];
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef uint8_t _g4_t_v22[4];
  typedef float _g4_t_v23;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_obj)) > _g4_s2 ? (72u + sizeof(_g4_t_obj)) : _g4_s2,
    _g4_s4 = (100u + sizeof(_g4_t_v15)) > _g4_s3 ? (100u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (100u + sizeof(_g4_t_v16)) > _g4_s4 ? (100u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (124u + sizeof(_g4_t_v17)) > _g4_s5 ? (124u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (128u + sizeof(_g4_t_v18)) > _g4_s6 ? (128u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (132u + sizeof(_g4_t_v19)) > _g4_s7 ? (132u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (140u + sizeof(_g4_t_v20)) > _g4_s8 ? (140u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (144u + sizeof(_g4_t_v21)) > _g4_s9 ? (144u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (148u + sizeof(_g4_t_v22)) > _g4_s10 ? (148u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (152u + sizeof(_g4_t_v23)) > _g4_s11 ? (152u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 100u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 100u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 124u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 128u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 132u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 140u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 144u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 148u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 152u);

  if ( *(uint32_t *)(a3 + 8) != 0 )
  {
    v3 = *(g4_cxa_guard_t **)(a3 + 4);
    dword_20D66D4 = 0;
    dword_20D66D8 = 0;
    dword_20D66DC = 0;
    dword_20D66E0 = 0;
    v15 = v3;
    (*(void (**)(float *, uint32_t))(**(uint32_t **)(a3 + 8) + 52))(v19, *(uint32_t *)(a3 + 8));
    v5 = sub_8F0680(v4);
    (*(void (**)(float *))(*(uint32_t *)v5 + 52))(&v17);
    v6 = (int)(float)(fsqrt(
                        (float)((float)((float)(v18 - v20) * (float)(v18 - v20))
                              + (float)((float)(v17 - v19[1]) * (float)(v17 - v19[1])))
                      + (float)((float)(v19[0] - v21) * (float)(v19[0] - v21)))
                    * 0.01f);
    sprintf((char *)&dword_20D66D4, "%i %s", v6, dword_20D66B0);
    v7 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v7 != 0 )
      (*(void (**)(uint32_t, const char *, int *))(*(uint32_t *)v7 + 44))(
        *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4),
        "distance",
        (int *)(&dword_20D66D4));
    (*(void (**)(uint8_t *, uint32_t))(**(uint32_t **)(a3 + 8) + 52))(v22, *(uint32_t *)(a3 + 8));
    v12 = *(uint32_t *)(*(uint32_t *)(a3 + 8) + 204) != 7;
    v8 = *(uint32_t *)(a1 + 12);
    v23 = (float)(*(float *)(a3 + 12) + v23) - (float)(fminf(COERCE_FLOAT(v22), 1.0) * *(float *)(a3 + 16));
    sub_801F90(v8, (int)(uintptr_t)(obj), (int)(uintptr_t)(v15), v12, 0);
    v16 = v13 < *(float *)(a1 + 116);
    if ( v13 >= *(float *)(a1 + 116)
      && sub_801D60(*(uint32_t *)(a1 + 12), (int)(uintptr_t)("arrowDirection"), *(uint32_t *)(a3 + 4), 0, 0) == 4 )
    {
      v11 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
      if ( v11 != 0 )
        G4_VCALL<void>(v11, 40, "arrowDirection", -1082130432, *(uint32_t *)(a3 + 4), 0);
    }
    v9 = byte_20D4D70 == 0;
    *(uint8_t *)(a3 + 20) = v16;
    if ( v9 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
    {
      sub_5BEF40((int)(uintptr_t)(&unk_20D4D80));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
      __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
    }
    v10 = nullptr;
    if ( byte_20D4D84 == 0 )
      v10 = (uint8_t *)(&unk_20D4D80);
    if ( v10[184] != 0 || v6 <= 1000 )
      sub_801C50(*(uint32_t *)(a1 + 12), *(uint32_t *)(a3 + 4), 1u, 0);
    else
      sub_801C50(*(uint32_t *)(a1 + 12), *(uint32_t *)(a3 + 4), 0, 0);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82C3D0  (binary VA: 0x82c3d0)
// Original: sub_82C3D0
// ----------------------------------------------------------------------------
int sub_82C3D0(int a1, int a2, int a3, int a4)
{
  float v5;

  v5 = fmaxf((float)(*(float *)(a2 + 116) - (float)a4) / *(float *)(a2 + 116), 0.0);
  (*(void (**)(int))(**(uint32_t **)(a3 + 8) + 52))(a1);
  *(float *)(a1 + 8) = (float)(*(float *)(a3 + 12) + *(float *)(a1 + 8)) - (float)(fminf(v5, 1.0) * *(float *)(a3 + 16));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_82C470  (binary VA: 0x82c470)
// Original: sub_82C470
// ----------------------------------------------------------------------------
void sub_82C470(int a1, char a2, int a3)
{
  char v3;
  int v4;
  int v5;

  v3 = a2;
  if ( a2 == 0 )
  {
    v4 = sub_801D60(*(uint32_t *)(a1 + 12), (int)(uintptr_t)("arrowDirection"), *(uint32_t *)(a3 + 4), 0, 0);
    v3 = 0;
    if ( v4 == 4 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
      if ( v5 != 0 )
      {
        G4_VCALL<void>(v5, 40, "arrowDirection", -1082130432, *(uint32_t *)(a3 + 4), 0);
        v3 = 0;
      }
    }
  }
  *(uint8_t *)(a3 + 20) = v3;
}

// ----------------------------------------------------------------------------
// Function: sub_82C530  (binary VA: 0x82c530)
// Original: sub_82C530
// ----------------------------------------------------------------------------
int sub_82C530(int a1, int a2, uint8_t a3)
{
  return sub_801C50(*(uint32_t *)(a1 + 12), *(uint32_t *)(a2 + 4), a3, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_82C580  (binary VA: 0x82c580)
// Original: sub_82C580
// ----------------------------------------------------------------------------
int sub_82C580(int a1, int a2, int a3)
{
  int result;

  result = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 40, "mode", (float)a3, a2, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82C5E0  (binary VA: 0x82c5e0)
// Original: sub_82C5E0
// ----------------------------------------------------------------------------
uint32_t * sub_82C5E0()
{
  uint32_t *result;
  char *s;
  size_t v2;

  result = *(uint32_t **)(dword_20DDDC0 + 864);
  if ( result != nullptr )
  {
    s = (char *)sub_AC5E50(result, 12784);
    v2 = strlen(s);
    return (uint32_t *)g4_std_compat::string_assign((int)(uintptr_t)(&dword_20D66B0), s, v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82C650  (binary VA: 0x82c650)
// Original: sub_82C650
// ----------------------------------------------------------------------------
int sub_82C650(int a1, int a2, char *a3, int a4)
{
  sub_7FC920(a1, a2, a3, 1, nullptr, 1, (uint8_t *)&dword_0 + 1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C148);
  *(uint32_t *)(a1 + 4) = ((uint32_t)(uintptr_t)&off_205C1B4);
  *(uint8_t *)(a1 + 101) = a4 != 0;
  *(uint32_t *)(a1 + 104) = *(uint32_t *)"fff?";
  return *(uint32_t *)"fff?";
}



// ============================================================================
// Address:   0x82c6e0 (size: 110 bytes)
// Symbol:    sub_82C6E0
// Demangled: sub_82C6E0
// ============================================================================
int (**sub_82C6E0(uint32_t *a1, int a2, char *a3))(int)
{
  sub_7FC920((int)(uintptr_t)(a1), a2, a3, 1, nullptr, 1, (uint8_t *)&dword_0 + 1);
  *a1 = (uint32_t)(uintptr_t)(&off_205C1C8);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C234);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_205C234));
}
// ----------------------------------------------------------------------------
// Function: sub_82C750  (binary VA: 0x82c750)
// Original: sub_82C750
// ----------------------------------------------------------------------------
int sub_82C750(uint32_t *a1, int a2, char *a3)
{
  sub_7FC920((int)(uintptr_t)(a1), a2, a3, 0, nullptr, 0, (uint8_t *)&dword_0 + 1);
  *a1 = (uint32_t)(uintptr_t)(&off_205C248);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C2B4);
  return sub_801C50(a1[3], (int)(uintptr_t)(a1 + 6), 1u, 0);
}



// ============================================================================
// Address:   0x82c7e0 (size: 117 bytes)
// Symbol:    sub_82C7E0
// Demangled: sub_82C7E0
// ============================================================================
int (**sub_82C7E0(uint32_t *a1, int a2, char *a3))(int)
{
  sub_7FC920((int)(uintptr_t)(a1), a2, a3, 1, nullptr, 1, (uint8_t *)&dword_0 + 1);
  *a1 = (uint32_t)(uintptr_t)(&off_205C2C8);
  a1[26] = -1;
  a1[1] = ((uint32_t)(uintptr_t)&off_205C334);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_205C334));
}


// ============================================================================
// Address:   0x82c860 (size: 117 bytes)
// Symbol:    sub_82C860
// Demangled: sub_82C860
// ============================================================================
int (**sub_82C860(uint32_t *a1, int a2, char *a3))(int)
{
  sub_7FC920((int)(uintptr_t)(a1), a2, a3, 1, nullptr, 1, (uint8_t *)&dword_0 + 1);
  *a1 = (uint32_t)(uintptr_t)(&off_205C348);
  a1[26] = -1;
  a1[1] = ((uint32_t)(uintptr_t)&off_205C3B4);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_205C3B4));
}
// ----------------------------------------------------------------------------
// Function: sub_82C8E0_ea82c8e0  (binary VA: 0x82c8e0)
// Original: sub_82C8E0
// ----------------------------------------------------------------------------
char sub_82C8E0_ea82c8e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint32_t *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  char result;
  int v13;
  void *v14;
  void *v15;

  v4 = (uint32_t *)sub_8F0680(v3);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D3C44 == 0 )
    v5 = (int *)(&dword_20D3C40);
  v6 = v5[14];
  if ( G4_VCALL<int>(v4, 456) != 0 )
  {
    v7 = v4[468];
    v8 = v4[469];
    if ( (v7 & 0x100) != 0 && v7 >= 0 && (v8 & 1) == 0 && (v8 & 4) == 0 )
    {
      v13 = *((uint32_t *)a1 + 19);
      if ( v4[1070] != v13 )
        sub_66CB10(v6, v13, *((uint32_t *)a1 + 20), *((uint32_t *)a1 + 22));
    }
  }
  if ( v4[1075] != *((uint32_t *)a1 + 20) && v4[1070] == *((uint32_t *)a1 + 19) )
  {
    v15 = (void *)v4[1075];
    grapher::ActorBase::FireEvent(a1, 5, a3);
    v14 = v15;
    if ( (int)v4[1072] > 0 && *((uint32_t *)a1 + 20) == 0 )
    {
      grapher::ActorBase::FireEvent(a1, 4, a3);
      v14 = v15;
    }
    *((uint32_t *)a1 + 20) = (uint32_t)(uintptr_t)(v14);
    *((uint32_t *)a1 + 22) = v4[1072];
  }
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v9 = nullptr;
  if ( byte_20D3C44 == 0 )
    v9 = (int *)(&dword_20D3C40);
  v10 = sub_670090((uint32_t *)v9[14]);
  sub_836F40(a1, 6, v10, a3);
  v11 = *((uint32_t *)a1 + 21);
  if ( v11 != sub_66C730(v6) )
  {
    *((uint32_t *)a1 + 21) = sub_66C730(v6);
    if ( !sub_66C6E0(v6) )
      grapher::ActorBase::FireEvent(a1, 3, a3);
  }
  result = sub_66C720(v6);
  if ( result != 0 )
  {
    grapher::ActorBase::FireEvent(a1, 2, a3);
    return G4_VCALL<int>(a1, 28, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82CB90  (binary VA: 0x82cb90)
// Original: sub_82CB90
// ----------------------------------------------------------------------------
int sub_82CB90(int a1, unsigned int a2, int a3, int a4, uint8_t a5)
{
  int result;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int *v11;
  int *v12;
  int v13;
  int *v14;
  int *v15;
  int v16;
  int *v17;
  int *v18;
  int v19;
  int *v20;
  int *v21;
  int v22;
  int *v23;
  int *v24;
  int v25;
  int *v26;
  int *v27;
  int v28;
  int *v29;
  int *v30;
  int v31;
  int *v32;
  int *v33;
  int v34;
  typedef uint8_t _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (15u + sizeof(_g4_t_v35)) > _g4_s0 ? (15u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v36)) > _g4_s1 ? (28u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v37)) > _g4_s2 ? (32u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v38)) > _g4_s3 ? (36u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v39)) > _g4_s4 ? (40u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v40)) > _g4_s5 ? (44u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v41)) > _g4_s6 ? (48u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v42)) > _g4_s7 ? (52u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v43)) > _g4_s8 ? (56u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v44)) > _g4_s9 ? (60u + sizeof(_g4_t_v44)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 15u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);

  result = a5;
  v6 = a4;
  v35 = a5;
  if ( a2 <= 0x2D )
  {
    if ( a4 != 0 )
    {
      if ( (a4 & 1) != 0 )
      {
        v36 = 1;
        v20 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                       (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                       &v36);
        v21 = (int *)v20[1];
        if ( v21 == (int *)v20[2] )
        {
          sub_820050(v20, &a3);
        }
        else
        {
          v22 = 0;
          if ( v21 != nullptr )
          {
            *v21 = a3;
            v22 = v20[1];
          }
          v20[1] = v22 + 4;
        }
      }
      if ( (v6 & 8) != 0 )
      {
        v37 = 8;
        v26 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                       (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                       &v37);
        v27 = (int *)v26[1];
        if ( v27 == (int *)v26[2] )
        {
          sub_820050(v26, &a3);
        }
        else
        {
          v28 = 0;
          if ( v27 != nullptr )
          {
            *v27 = a3;
            v28 = v26[1];
          }
          v26[1] = v28 + 4;
        }
      }
      if ( (v6 & 0x10) != 0 )
      {
        v38 = 16;
        v23 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                       (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                       &v38);
        v24 = (int *)v23[1];
        if ( v24 == (int *)v23[2] )
        {
          sub_820050(v23, &a3);
        }
        else
        {
          v25 = 0;
          if ( v24 != nullptr )
          {
            *v24 = a3;
            v25 = v23[1];
          }
          v23[1] = v25 + 4;
        }
      }
      if ( (v6 & 0x80) != 0 )
      {
        v39 = 128;
        v14 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                       (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                       &v39);
        v15 = (int *)v14[1];
        if ( v15 == (int *)v14[2] )
        {
          sub_820050(v14, &a3);
        }
        else
        {
          v16 = 0;
          if ( v15 != nullptr )
          {
            *v15 = a3;
            v16 = v14[1];
          }
          v14[1] = v16 + 4;
        }
      }
      if ( (v6 & 2) != 0 )
      {
        v40 = 2;
        v11 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                       (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                       &v40);
        v12 = (int *)v11[1];
        if ( v12 == (int *)v11[2] )
        {
          sub_820050(v11, &a3);
        }
        else
        {
          v13 = 0;
          if ( v12 != nullptr )
          {
            *v12 = a3;
            v13 = v11[1];
          }
          v11[1] = v13 + 4;
        }
      }
      if ( (v6 & 0x20) != 0 )
      {
        v41 = 32;
        v17 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                       (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                       &v41);
        v18 = (int *)v17[1];
        if ( v18 == (int *)v17[2] )
        {
          sub_820050(v17, &a3);
        }
        else
        {
          v19 = 0;
          if ( v18 != nullptr )
          {
            *v18 = a3;
            v19 = v17[1];
          }
          v17[1] = v19 + 4;
        }
      }
      if ( (v6 & 4) != 0 )
      {
        if ( (v6 & 0x40000) != 0 )
        {
          v42 = (unsigned int)(uintptr_t)(&stru_40004);
          v32 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                         (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                         &v42);
          v33 = (int *)v32[1];
          if ( v33 == (int *)v32[2] )
          {
            sub_820050(v32, &a3);
          }
          else
          {
            v34 = 0;
            if ( v33 != nullptr )
            {
              *v33 = a3;
              v34 = v32[1];
            }
            v32[1] = v34 + 4;
          }
        }
        if ( (v6 & 0x20000) != 0 )
        {
          v43 = (unsigned int)(uintptr_t)(&stru_20004);
          v29 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                         (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                         &v43);
          v30 = (int *)v29[1];
          if ( v30 == (int *)v29[2] )
          {
            sub_820050(v29, &a3);
          }
          else
          {
            v31 = 0;
            if ( v30 != nullptr )
            {
              *v30 = a3;
              v31 = v29[1];
            }
            v29[1] = v31 + 4;
          }
        }
      }
      if ( (v6 & 0x80000) != 0 )
      {
        v44[0] = 0x80000;
        v8 = (int *)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                      (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                      v44);
        v9 = (int *)v8[1];
        if ( v9 == (int *)v8[2] )
        {
          sub_820050(v8, &a3);
        }
        else
        {
          v10 = 0;
          if ( v9 != nullptr )
          {
            *v9 = a3;
            v10 = v8[1];
          }
          v8[1] = v10 + 4;
        }
      }
    }
    v7 = a3;
    *(uint8_t *)(a3 + 60) = v35;
    *(uint32_t *)(v7 + 56) = v6;
    sub_7FD720(v7, a2);
    result = *(uint32_t *)(a1 + 12);
    *(uint32_t *)(result + 4 * a2) = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82CF90  (binary VA: 0x82cf90)
// Original: sub_82CF90
// ----------------------------------------------------------------------------
int sub_82CF90(int a1, char a2)
{
  int **v3;
  int *v4;
  int **v5;
  int result;
  int *v7;
  int *v8;
  int *v9;

  *(uint8_t *)(a1 + 69) = 0;
  v3 = (int **)g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
                 (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
                 (const unsigned int *)(a1 + 48));
  v4 = *v3;
  v5 = v3;
  result = (int)(uintptr_t)(v3[1]);
  v7 = (int *)result;
  if ( v4 != (int *)result )
  {
    if ( a2 != 0 )
    {
      do
      {
        result = *v4;
        if ( *v4 != 0 )
        {
          result = (*(int (**)(int))(*(uint32_t *)result + 24))(*v4);
          v8 = (int *)*v4;
          if ( *v4 != 0 )
          {
            result = (*(int (**)(int))(*v8 + 40))(*v4);
            if ( (uint8_t)result == 0 )
            {
              result = G4_VCALL<int>(v8, 32);
              if ( (uint8_t)result != 0 )
                result = sub_7FCBE0(v8);
            }
          }
          v7 = v5[1];
        }
        ++v4;
      }
      while ( v4 != v7 );
    }
    else
    {
      do
      {
        v9 = (int *)*v4;
        if ( *v4 != 0 )
        {
          if ( (*(uint8_t (**)(int))(*v9 + 40))(*v4) == 0
            && G4_VCALL<uint8_t>(v9, 32) != 0 )
          {
            sub_7FCBE0(v9);
          }
          result = (int)(uintptr_t)(v5[1]);
        }
        ++v4;
      }
      while ( v4 != (int *)result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82D060  (binary VA: 0x82d060)
// Original: sub_82D060
// ----------------------------------------------------------------------------
int sub_82D060(int a1, char a2)
{
  int result;
  int i;
  int v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;

  result = a1;
  if ( *(uint8_t *)(a1 + 71) != 0 )
  {
    for ( i = 0; i != 184; i += 4 )
    {
      v4 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + i);
      if ( v4 != 0 )
        *(uint32_t *)(v4 + 8) &= ~2u;
    }
    v5 = *(uint32_t **)(a1 + 24);
    if ( v5 != nullptr )
    {
      v6 = *(uint32_t *)(a1 + 48);
      v7 = (uint32_t *)(a1 + 20);
      do
      {
        while ( v5[4] >= v6 )
        {
          v7 = v5;
          v5 = (uint32_t *)v5[2];
          if ( v5 == nullptr )
            goto LABEL_11;
        }
        v5 = (uint32_t *)v5[3];
      }
      while ( v5 != nullptr );
LABEL_11:
      if ( (uint32_t *)(a1 + 20) != v7 && v7[4] <= v6 )
        return sub_82CF90(a1, a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82D0E0  (binary VA: 0x82d0e0)
// Original: sub_82D0E0
// ----------------------------------------------------------------------------
int sub_82D0E0(int a1, char a2)
{
  uint32_t *v3;
  int v4;
  unsigned int v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint8_t v11; // si
  int v12;
  int v13;
  int **v14;
  int *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  void *v21;
  int result;
  int v23;
  typedef bool _g4_t_v24;
  typedef int _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef bool _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v25)) > _g4_s1 ? (28u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (34u + sizeof(_g4_t_v26)) > _g4_s2 ? (34u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v29)) > _g4_s3 ? (40u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v30)) > _g4_s4 ? (44u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v31)) > _g4_s5 ? (48u + sizeof(_g4_t_v31)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 34u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);

  v3 = *(uint32_t **)(a1 + 24);
  if ( v3 != nullptr )
  {
    v4 = a1;
    v5 = *(uint32_t *)(a1 + 48);
    v6 = (uint32_t *)(v4 + 20);
    v7 = v6;
    do
    {
      while ( v3[4] >= v5 )
      {
        v7 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    if ( v6 != v7 && v7[4] <= v5 )
    {
      v26 = (v5 & 0x22) != 0;
      *(uint8_t *)(a1 + 69) = 1;
      v29 = false;
      v24 = false;
      if ( sub_8F0680(v7) != 0 )
      {
        v9 = sub_8F0680(v8);
        v10 = G4_VCALL<int>(v9, 456);
        v29 = v10 != 0;
        v24 = v10 != 0;
      }
      v11 = *(uint8_t *)(sub_5BC940() + 4);
      v12 = (int)(uintptr_t)(g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(
              (std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *)(a1 + 16),
              (const unsigned int *)(a1 + 48)));
      v14 = *(int ***)v12;
      v30 = v12;
      if ( *(uint32_t *)v12 != *(uint32_t *)(v12 + 4) )
      {
        v25 = v11;
        do
        {
          v15 = *v14;
          if ( a2 != 0 )
            G4_VCALL<void>(v15, 16, 0);
          sub_7FD8E0();
          if ( G4_VCALL<uint8_t>(v15, 40, v25, v29) != 0
            || *((uint8_t *)v15 + 60) != 0 )
          {
            if ( (!v26
               || ((v23 = v15[14]) & 0x100000) == 0
               || (v23 & *(uint32_t *)(a1 + 60)) != 0
               || (v23 & *(uint32_t *)(a1 + 56)) != 0)
              && G4_VCALL<uint8_t>(v15, 40) == 0 )
            {
              if ( *(uint8_t *)(a1 + 69) != 0 )
              {
                if ( G4_VCALL<uint8_t>(v15, 32) == 0 )
                {
                  v13 = a1;
                  v16 = v15[14];
                  if ( (v16 & *(uint32_t *)(a1 + 48)) != 0 || v16 == 0 )
                    sub_7FCC60(v15);
                }
              }
              else if ( G4_VCALL<uint8_t>(v15, 32) != 0 )
              {
                sub_7FCBE0(v15);
              }
            }
          }
          else
          {
            G4_VCALL<void>(v15, 44);
          }
          ++v14;
        }
        while ( v14 != *(int ***)(v30 + 4) );
      }
      if ( v24 )
      {
        if ( v26 || ((v17 = *(uint32_t *)(a1 + 48)) & 4) != 0 )
        {
          v18 = sub_8F0680(v13);
          v19 = G4_VCALL<int>(v18, 456);
          sub_82A750(a1, *(uint32_t *)(v19 + 168));
          goto LABEL_28;
        }
      }
      else
      {
        v17 = *(uint32_t *)(a1 + 48);
      }
      if ( (v17 & 1) != 0 )
        sub_82A750(a1, -1);
    }
  }
LABEL_28:
  memset(v31, 0, 12);
  v20 = (gameswf::Self *)off_20BB984[0];
  if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
  {
    sub_793360((int)(uintptr_t)(&unk_20D2B98));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
    __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
  }
  v21 = nullptr;
  if ( byte_20D2B9C == 0 )
    v21 = &unk_20D2B98;
  sub_7B8B70((int)(uintptr_t)(v21), v20, (int)(uintptr_t)(v31), 0);
  result = v31[0];
  if ( v31[0] != 0 )
    return sub_4EB870(v31[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82D430  (binary VA: 0x82d430)
// Original: sub_82D430
// ----------------------------------------------------------------------------
int sub_82D430(int a1, char a2)
{
  int result;

  result = a1;
  if ( *(uint8_t *)(a1 + 68) == 0 )
    return sub_82D0E0(a1, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82D450  (binary VA: 0x82d450)
// Original: sub_82D450
// ----------------------------------------------------------------------------
int sub_82D450(int a1, uint8_t a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int result;

  v2 = *(uint32_t *)(a1 + 64);
  *(uint8_t *)(a1 + 68) = 0;
  if ( v2 != 0 )
    sub_801C50(v2, (int)off_20BCB94, 1u, 0);
  v3 = *(uint32_t *)(a1 + 12);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 96);
    if ( v4 == 0 )
      goto LABEL_10;
    G4_VCALL<void>(v4, 16, 0);
    v5 = *(uint32_t *)(a1 + 12);
  }
  else
  {
    v5 = 0;
  }
  v6 = *(int **)(v5 + 96);
  if ( v6 != nullptr
    && G4_VCALL<uint8_t>(v6, 40) == 0
    && G4_VCALL<uint8_t>(v6, 32) != 0 )
  {
    sub_7FCBE0(v6);
  }
LABEL_10:
  result = a2;
  if ( a2 != 0 )
  {
    if ( *(uint8_t *)(a1 + 68) == 0 )
      sub_82D0E0(a1, 0);
    result = *(uint32_t *)(a1 + 12);
    if ( result != 0 )
    {
      result = *(uint32_t *)(result + 4);
      if ( result != 0 )
        result = G4_VCALL<int>(result, 16, 0);
    }
    *(uint8_t *)(a1 + 70) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82D550  (binary VA: 0x82d550)
// Original: sub_82D550
// ----------------------------------------------------------------------------
int sub_82D550(int a1, int a2, char a3)
{
  int result;

  result = a2;
  *(uint32_t *)(a1 + 60) = a2;
  if ( a3 != 0 && (*(uint8_t *)(a1 + 48) & 0x22) != 0 )
  {
    result = sub_82D060(a1, 0);
    if ( *(uint8_t *)(a1 + 68) == 0 )
      return sub_82D0E0(a1, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82D5A0  (binary VA: 0x82d5a0)
// Original: sub_82D5A0
// ----------------------------------------------------------------------------
int sub_82D5A0(int a1, int a2, char a3)
{
  int result;

  result = a2;
  *(uint32_t *)(a1 + 56) = a2;
  if ( a3 != 0 && (*(uint8_t *)(a1 + 48) & 0x22) != 0 )
  {
    result = sub_82D060(a1, 0);
    if ( *(uint8_t *)(a1 + 68) == 0 )
      return sub_82D0E0(a1, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82D5F0  (binary VA: 0x82d5f0)
// Original: sub_82D5F0
// ----------------------------------------------------------------------------
int sub_82D5F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C128);
  sub_5F76C0(a1 + 2, 0);
  return ((g4_std::string::Destroy(a1 + 1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_82D640  (binary VA: 0x82d640)
// Original: sub_82D640
// ----------------------------------------------------------------------------
int sub_82D640(int a1, char *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C128);
  g4_std::string::construct_from_cstr(a1 + 4, a2, (int)(uintptr_t)(&v3));
  *(uint32_t *)(a1 + 8) = 0;
  sub_5F76C0((uint32_t *)(a1 + 8), 0);
  *(uint8_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 21) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_82D6C0  (binary VA: 0x82d6c0)
// Original: sub_82D6C0
// ----------------------------------------------------------------------------
void sub_82D6C0(int a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef g4_cxa_guard_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  if ( a3 != nullptr )
  {
    sub_5F76C0((uint32_t *)(a2 + 8), (int)(uintptr_t)(a3 + 3));
    *(float *)(a2 + 12) = (float)(int)a3[54];
    v3 = a3[54] - a3[53];
    *(uint8_t *)(a2 + 21) = 0;
    *(float *)(a2 + 16) = (float)v3;
    sub_801C50(*(uint32_t *)(a1 + 12), *(uint32_t *)(a2 + 4), 1u, 0);
    v4 = a3[51];
    v5 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    if ( v5 != 0 )
    {
      G4_VCALL<void>(v5, 40, "mode", (float)v4, *(uint32_t *)(a2 + 4), 0);
      v4 = a3[51];
    }
    if ( v4 == 7 )
    {
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      if ( *(uint32_t *)(a3[102] - 12) != 0
        && (v6 = a3[101]) != 0
        && ((*(int (**)(uint32_t))(*(uint32_t *)v6 + 32))(a3[101]) & 2) != 0 )
      {
        v10 = *(g4_cxa_guard_t **)(a2 + 4);
        g4_std::string::construct_copy(v11, a3 + 719);
        v8 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
        if ( v8 != 0 )
          (*(void (**)(uint32_t, const char *, uint32_t, g4_cxa_guard_t *, uint32_t))(*(uint32_t *)v8 + 44))(
            *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4),
            "targetName",
            v11[0],
            v10,
            0);
        g4_std::string::Destroy(v11);
        v9 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
        if ( v9 != 0 )
          G4_VCALL<void>(v9, 40, "needArrow", 0, *(uint32_t *)(a2 + 4), 0);
      }
      else
      {
        v7 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
        if ( v7 != 0 )
          G4_VCALL<void>(v7, 44, "targetName", &unk_1B15112, *(uint32_t *)(a2 + 4), 0);
      }
    }
    sub_82C060(a1, 0, a2);
  }
  else
  {
    sub_5F76C0((uint32_t *)(a2 + 8), 0);
    if ( *(uint8_t *)(a2 + 21) == 0 )
    {
      *(uint8_t *)(a2 + 21) = 1;
      sub_5F76C0((uint32_t *)(a2 + 8), 0);
      sub_801C50(*(uint32_t *)(a1 + 12), *(uint32_t *)(a2 + 4), 0, 0);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82D9A0  (binary VA: 0x82d9a0)
// Original: sub_82D9A0
// ----------------------------------------------------------------------------
void sub_82D9A0(int a1, uint32_t *a2)
{
  int v2;
  int v3;

  v2 = *(uint32_t *)(a1 + 104);
  v3 = *(uint32_t *)(a1 + 108);
  if ( v2 != v3 )
  {
    while ( *(uint32_t *)(v2 + 8) != 0 )
    {
      v2 += 24;
      if ( v2 == v3 )
        return;
    }
    sub_82D6C0(a1, v2, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82D9E0  (binary VA: 0x82d9e0)
// Original: sub_82D9E0
// ----------------------------------------------------------------------------
void sub_82D9E0(uint32_t *a1, int a2)
{
  int v2;
  int v3;

  v2 = a1[26];
  v3 = a1[27];
  if ( v2 != v3 )
  {
    while ( *(uint32_t *)(v2 + 8) != 0 )
    {
      v2 += 24;
      if ( v2 == v3 )
        return;
    }
    sub_82D6C0((int)(uintptr_t)(a1), v2, *(uint32_t **)(a1[16] + 8 * a2));
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82DA30  (binary VA: 0x82da30)
// Original: sub_82DA30
// ----------------------------------------------------------------------------
void sub_82DA30(int a1, int a2)
{
  int v2;
  char v3;

  if ( a2 == 0 )
  {
    v2 = *(uint32_t *)(a1 + 44);
    if ( v2 != 0 )
    {
      v3 = *(uint8_t *)(v2 + 144);
      if ( v3 >= 0 && v3 < (unsigned int)dword_20D93E0 )
        sub_C1A860(*(uint32_t *)(a1 + 44));
      sub_5F76C0((uint32_t *)(a1 + 44), 0);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82DAB0  (binary VA: 0x82dab0)
// Original: sub_82DAB0
// ----------------------------------------------------------------------------
void sub_82DAB0(int a1)
{
  int v1;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BEE8);
  *(uint32_t *)(a1 + 4) = ((uint32_t)(uintptr_t)&off_205BEFC);
  *(uint8_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 28) = a1 + 20;
  *(uint32_t *)(a1 + 32) = a1 + 20;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  sub_5F76C0((uint32_t *)(a1 + 44), 0);
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint8_t *)(a1 + 68) = 0;
  *(uint8_t *)(a1 + 69) = 0;
  *(uint8_t *)(a1 + 70) = 0;
  *(uint8_t *)(a1 + 71) = 0;
  *(uint8_t *)(a1 + 72) = 0;
  *(uint8_t *)(a1 + 73) = 0;
  *(uint8_t *)(a1 + 74) = 0;
  *(uint8_t *)(a1 + 75) = 0;
  v1 = sub_4EBC30(0xB8u, 1);
  *(uint32_t *)(a1 + 12) = v1;
  v2 = (uint16_t *)v1;
  v3 = 184;
  if ( (v1 & 1) != 0 )
  {
    v2 = (uint16_t *)(v1 + 1);
    *(uint8_t *)v1 = 0;
    LOBYTE(v3) = -73;
    if ( ((v1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v3 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *v4++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  sub_5F76C0((uint32_t *)(a1 + 44), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_82DC00  (binary VA: 0x82dc00)
// Original: sub_82DC00
// ----------------------------------------------------------------------------
void sub_82DC00()
{
  int v0;
  uint16_t *v1;
  unsigned int v2;
  uint16_t *v3;

  dword_20D49A0 = (int)(uintptr_t)(&off_205BEE8);
  dword_20D49A4 = (int)((uint32_t)(uintptr_t)&off_205BEFC);
  dword_20D49BC = (int)(uintptr_t)(&dword_20D49B4);
  dword_20D49C0 = (int)(uintptr_t)(&dword_20D49B4);
  byte_20D49A8 = 0;
  dword_20D49B4 = 0;
  dword_20D49B8 = 0;
  dword_20D49C4 = 0;
  dword_20D49C8 = 0;
  dword_20D49CC = 0;
  sub_5F76C0(&dword_20D49CC, 0);
  dword_20D49D0 = 0;
  dword_20D49D4 = 0;
  dword_20D49D8 = 0;
  dword_20D49DC = 0;
  dword_20D49E0 = 0;
  byte_20D49E4 = 0;
  byte_20D49E5 = 0;
  byte_20D49E6 = 0;
  byte_20D49E7 = 0;
  byte_20D49E8 = 0;
  byte_20D49E9 = 0;
  byte_20D49EA = 0;
  byte_20D49EB = 0;
  v0 = sub_4EBC30(0xB8u, 1);
  dword_20D49AC = v0;
  v1 = (uint16_t *)v0;
  v2 = 184;
  if ( (v0 & 1) != 0 )
  {
    v1 = (uint16_t *)(v0 + 1);
    *(uint8_t *)v0 = 0;
    LOBYTE(v2) = -73;
    if ( ((v0 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v0 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  memset(v1, 0, 4 * (v2 >> 2));
  v3 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v3++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  sub_5F76C0(&dword_20D49CC, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_82DD80  (binary VA: 0x82dd80)
// Original: sub_82DD80
// ----------------------------------------------------------------------------
int sub_82DD80(int a1, char a2)
{
  bool v2;
  char v3;
  int v4;
  int *v5;
  int v6;
  uint8_t v7;
  int v9;
  int v10;
  char v11;
  bool v12;

  v2 = true;
  v3 = a2;
  v4 = *(uint32_t *)(a1 + 48);
  if ( (v4 & 0x22) == 0 )
    v2 = (v4 & 4) != 0;
  if ( byte_20D4980 == 0 )
  {
    v12 = v2;
    v9 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980);
    v2 = v12;
    v3 = a2;
    if ( v9 != 0 )
    {
      sub_82DC00();
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      v3 = a2;
      v2 = v12;
    }
  }
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  v6 = v5[14];
  if ( !v2 || (v6 & 0x8000) == 0 || (v11 = v3, v10 = sub_5BC940(), v7 = 1, v3 = v11, *(uint8_t *)(v10 + 4) != 0) )
    v7 = v3 != 0;
  return sub_5BA7B0(*(uint32_t *)(dword_20DDDC0 + 856), v7);
}

// ----------------------------------------------------------------------------
// Function: sub_82DE90  (binary VA: 0x82de90)
// Original: sub_82DE90
// ----------------------------------------------------------------------------
int sub_82DE90(int a1, int a2)
{
  bool v2;
  int *v3;
  int i;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int result;

  v2 = byte_20D4980 == 0;
  *(uint8_t *)(a1 + 68) = 1;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DC00();
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D49A8 == 0 )
    v3 = (int *)(&dword_20D49A0);
  if ( *((uint8_t *)v3 + 71) == 0 )
    goto LABEL_16;
  for ( i = 0; i != 184; i += 4 )
  {
    v5 = *(uint32_t *)(v3[3] + i);
    if ( v5 != 0 )
      *(uint32_t *)(v5 + 8) &= ~2u;
  }
  v6 = (int *)v3[6];
  if ( v6 == nullptr )
    goto LABEL_16;
  v7 = v3[12];
  v8 = v3 + 5;
  do
  {
    while ( v7 <= v6[4] )
    {
      v8 = v6;
      v6 = (int *)v6[2];
      if ( v6 == nullptr )
        goto LABEL_14;
    }
    v6 = (int *)v6[3];
  }
  while ( v6 != nullptr );
LABEL_14:
  if ( v3 + 5 != v8 && v7 >= v8[4] )
  {
    sub_82CF90((int)(uintptr_t)(v3), (char)(uintptr_t)(v6));
    if ( byte_20D4980 != 0 )
      goto LABEL_17;
  }
  else
  {
LABEL_16:
    if ( byte_20D4980 != 0 )
      goto LABEL_17;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DC00();
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
LABEL_17:
  v9 = nullptr;
  if ( byte_20D49A8 == 0 )
    v9 = (int *)(&dword_20D49A0);
  v10 = v9[3];
  if ( v10 != 0 )
  {
    v11 = *(uint32_t *)(v10 + 4);
    if ( v11 != 0 )
      G4_VCALL<void>(v11, 16, 1);
  }
  v12 = *(uint32_t *)(a1 + 12);
  if ( v12 != 0 )
  {
    v13 = *(int **)(v12 + 96);
    if ( v13 != nullptr )
    {
      v14 = *v13;
      if ( a2 == 2 )
      {
        (*(void (**)(int *, int))(v14 + 16))(v13, 1);
        goto LABEL_29;
      }
      (*(void (**)(int *, uint32_t))(v14 + 16))(v13, 0);
    }
  }
  if ( a2 == 0 )
    sub_7FCC60(*(uint32_t **)(*(uint32_t *)(a1 + 12) + 96));
LABEL_29:
  result = *(uint32_t *)(a1 + 64);
  if ( result != 0 )
    return sub_801C50(result, (int)off_20BCB94, 0, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82E090  (binary VA: 0x82e090)
// Original: sub_82E090
// ----------------------------------------------------------------------------
int sub_82E090(int a1, int a2)
{
  int v2;
  int i;
  int v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  bool v8;
  char *v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19; // si
  bool v20;
  int *v21;
  int v22;
  char v23;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  glf::Self **v34;
  int v35;
  typedef const char *_g4_t_lpdso_handle;
  typedef bool _g4_t_v37;
  typedef glf::Self **_g4_t_v38;
  typedef bool _g4_t_v39;
  typedef int _g4_t_v40;
  typedef bool _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s0 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v37)) > _g4_s1 ? (20u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v38)) > _g4_s2 ? (20u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v39)) > _g4_s3 ? (24u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v40)) > _g4_s4 ? (24u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v41)) > _g4_s5 ? (31u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v42)) > _g4_s6 ? (36u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v43)) > _g4_s7 ? (44u + sizeof(_g4_t_v43)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 31u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);

  v2 = *(uint32_t *)(a1 + 48);
  *(uint32_t *)(a1 + 52) = v2;
  v39 = v2 != a2;
  if ( *(uint8_t *)(a1 + 71) == 0 )
    goto LABEL_13;
  for ( i = 0; i != 184; i += 4 )
  {
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + i);
    if ( v4 != 0 )
      *(uint32_t *)(v4 + 8) &= ~2u;
  }
  v5 = *(uint32_t **)(a1 + 24);
  if ( v5 == nullptr )
    goto LABEL_13;
  v6 = *(uint32_t *)(a1 + 48);
  v7 = (uint32_t *)(a1 + 20);
  do
  {
    while ( v6 <= v5[4] )
    {
      v7 = v5;
      v5 = (uint32_t *)v5[2];
      if ( v5 == nullptr )
        goto LABEL_11;
    }
    v5 = (uint32_t *)v5[3];
  }
  while ( v5 != nullptr );
LABEL_11:
  if ( (uint32_t *)(a1 + 20) != v7 && v6 >= v7[4] )
  {
    sub_82CF90();
    v8 = byte_20D2D50 == 0;
    *(uint32_t *)(a1 + 48) = a2;
    if ( !v8 )
      goto LABEL_14;
  }
  else
  {
LABEL_13:
    v8 = byte_20D2D50 == 0;
    *(uint32_t *)(a1 + 48) = a2;
    if ( !v8 )
      goto LABEL_14;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730(&unk_20D2D60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
LABEL_14:
  v9 = nullptr;
  if ( byte_20D2D64 == 0 )
    v9 = (char *)&unk_20D2D60;
  sub_795720(v9 + 36, -1);
  if ( *(uint8_t *)(a1 + 68) == 0 )
    sub_82D0E0();
  if ( v39 && (*(uint8_t *)(a1 + 52) & 0x18) == 0 && (a2 & 0x18) == 0 )
  {
    v25 = **(uint32_t **)(a1 + 12);
    if ( v25 != 0 )
      G4_VCALL<void>(v25, 28, a2);
  }
  if ( (Elf32_Sym *)(*(uint32_t *)(a1 + 48) & 0x20004) == (Elf32_Sym *)(uintptr_t)(&stru_20004
)    && (v11 = (uint32_t *)sub_8F0680(v10), G4_VCALL<int>(v11, 456) != 0)
    && (v13 = v11[468], v14 = v11[469], (v13 & 0x100) != 0)
    && v13 >= 0
    && (v14 & 1) == 0
    && (v14 & 4) == 0
    && (v28 = sub_8F0680(v12), (v29 = G4_VCALL<int>(v28, 456)) != 0)
    && *(uint32_t *)(*(uint32_t *)(v29 + 408) - 12) != 0
    && (v30 = *(uint32_t *)(v29 + 404)) != 0
    && G4_VCALL<int>(v30, 28) == 12
    && *(uint32_t *)(*(uint32_t *)(a1 + 12) + 116) != 0 )
  {
    sub_800CB0(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 116), 1056964608);
    v16 = sub_5BC940();
    if ( v16 == 0 )
      goto LABEL_62;
  }
  else
  {
    v16 = sub_5BC940();
    if ( v16 == 0 )
    {
LABEL_62:
      v17 = *(uint32_t *)(a1 + 48);
      v18 = v17 & 0x22;
      goto LABEL_29;
    }
  }
  v40 = dword_20DDDC0;
  v17 = *(uint32_t *)(a1 + 48);
  if ( (v17 & 1) != 0 )
  {
    G4_VCALL<void>(v16, 4, 0);
    *(uint32_t *)(v40 + 804) = 0;
    v17 = *(uint32_t *)(a1 + 48);
    v18 = v17 & 0x22;
  }
  else if ( (v17 & 0x10) != 0 )
  {
    G4_VCALL<void>(v16, 4, 1);
    *(uint32_t *)(v40 + 804) = 1;
    v17 = *(uint32_t *)(a1 + 48);
    v18 = v17 & 0x22;
  }
  else if ( (v17 & 8) != 0 )
  {
    G4_VCALL<void>(v16, 4, 7);
    *(uint32_t *)(v40 + 804) = 7;
    v17 = *(uint32_t *)(a1 + 48);
    v18 = v17 & 0x22;
  }
  else if ( (v17 & 0x22) != 0 )
  {
    v32 = sub_8F0680(v15);
    v33 = G4_VCALL<int>(v32, 456);
    v34 = (glf::Self **)v33;
    if ( v33 != 0
      && *(uint32_t *)(*(uint32_t *)(v33 + 408) - 12) != 0
      && (v35 = *(uint32_t *)(v33 + 404)) != 0
      && ((v38 = v34, (*(int (**)(glf::Self *))(*(uint32_t *)v35 + 28))(v34[101]) == 5)
       || (sub_AB7AC0((int)(uintptr_t)(&v42), (glf::Self *)"ATV"),
           v41 = glf::Stricmp(v38[102], v43, lpdso_handle) == 0,
           g4_std::string::Destroy(&v43),
           v41)) )
    {
      G4_VCALL<void>(v16, 4, 4);
      *(uint32_t *)(v40 + 804) = 4;
      v17 = *(uint32_t *)(a1 + 48);
      v18 = v17 & 0x22;
    }
    else
    {
      G4_VCALL<void>(v16, 4, 3);
      *(uint32_t *)(v40 + 804) = 3;
      v17 = *(uint32_t *)(a1 + 48);
      v18 = v17 & 0x22;
    }
  }
  else
  {
    v18 = 0;
    if ( (v17 & 4) != 0 )
    {
      v8 = (v17 & 0x20000) == 0;
      v27 = *(uint32_t *)v16;
      if ( v8 )
      {
        (*(void (**)(int, int))(v27 + 4))(v16, 5);
        *(uint32_t *)(v40 + 804) = 5;
      }
      else
      {
        (*(void (**)(int, int))(v27 + 4))(v16, 6);
        *(uint32_t *)(v40 + 804) = 6;
      }
      v17 = *(uint32_t *)(a1 + 48);
      v18 = v17 & 0x22;
    }
  }
LABEL_29:
  v19 = 1;
  if ( byte_20D186E == 0 )
    v19 = byte_20D186A;
  v20 = true;
  if ( v18 == 0 )
    v20 = (v17 & 4) != 0;
  if ( byte_20D4980 == 0 )
  {
    v37 = v20;
    v26 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980);
    v20 = v37;
    if ( v26 != 0 )
    {
      sub_82DC00();
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      v20 = v37;
    }
  }
  v21 = nullptr;
  if ( byte_20D49A8 == 0 )
    v21 = (int *)(&dword_20D49A0);
  v22 = v21[14];
  if ( !v20 || (v22 & 0x8000) == 0 || (v31 = sub_5BC940(), v23 = 1, *(uint8_t *)(v31 + 4) != 0) )
    v23 = v19 != 0;
  return sub_5BA7B0(*(uint32_t *)(dword_20DDDC0 + 856), v23);
}

// ----------------------------------------------------------------------------
// Function: sub_82E600  (binary VA: 0x82e600)
// Original: sub_82E600
// ----------------------------------------------------------------------------
int sub_82E600(uint32_t *a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int *v10;
  int v11;
  int i;
  int result;
  int *v14;
  int v15;
  int v16;
  int v17;
  Elf32_Sym *v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  bool v31;

  v2 = sub_8F0680(v1);
  v3 = (uint32_t *)G4_VCALL<int>(v2, 456);
  v5 = (uint32_t *)sub_8F0680(v4);
  if ( (G4_VCALL<int>(v5, 456) == 0
     || (v7 = v5[468], v8 = v5[469], (v7 & 0x100) == 0)
     || v7 < 0
     || (v8 & 1) != 0
     || (v8 & 4) != 0)
    && ((v9 = (uint8_t *)sub_8F0680(v6), G4_VCALL<int>(v9, 456) == 0)
     || (v9[1873] & 8) == 0)
    || v3 == nullptr
    || (uint8_t)sub_C170A0(v3) == 0 )
  {
    sub_82E090((int)(uintptr_t)(a1), 1);
    goto LABEL_6;
  }
  if ( *(uint32_t *)(v3[102] - 12) != 0 )
  {
    v15 = v3[101];
    if ( v15 != 0 )
    {
      v30 = v3 + 100;
      if ( G4_VCALL<int>(v15, 28) == 11
        || G4_VCALL<int>(v3[101], 28) == 8
        || G4_VCALL<int>(v3[101], 28) == 12
        || (uint8_t)sub_836EA0(v30) != 0 )
      {
        v16 = *(uint32_t *)(v3[102] - 12);
        if ( v16 == 0 )
        {
LABEL_36:
          v18 = (Elf32_Sym *)&loc_4;
          if ( (uint8_t)sub_836F00(v3) != 0 )
          {
            v18 = (Elf32_Sym *)&loc_4;
            v19 = *(uint32_t *)(a1[3] + 176);
            if ( v19 != 0 )
            {
              v28 = v19 + 24;
              v29 = *(uint32_t *)(a1[3] + 176);
              v20 = sub_801D60(a1[16], (int)(uintptr_t)("value"), v19 + 24, 0, 0);
              v31 = v20 > 0;
              v18 = (Elf32_Sym *)(v20 <= 0 ? 262148 : 131076);
              v21 = -(v20 <= 0);
              v22 = sub_5EE750();
              v23 = (v21 & 0x20000) + 0x20000;
              v24 = v29;
              v25 = *(uint32_t *)(v22[16] + 4);
              if ( v25 != 0 )
              {
                G4_VCALL<void>(v25, 40, "value", (float)((float)0 * 65536.0) + (float)v31, v28, 0);
                v24 = v29;
              }
              *(uint32_t *)(v24 + 56) |= v23;
            }
          }
          goto LABEL_41;
        }
        v17 = v3[101];
        if ( v17 != 0 )
        {
          v18 = (Elf32_Sym *)(&stru_20004);
          if ( (*(int (**)(uint32_t))(*(uint32_t *)v17 + 28))(v3[101]) == 11 )
            goto LABEL_41;
          v16 = *(uint32_t *)(v3[102] - 12);
          if ( v16 == 0 )
            goto LABEL_36;
          v26 = v3[101];
          if ( v26 != 0 )
          {
            v18 = (Elf32_Sym *)(&stru_80004);
            if ( (*(int (**)(uint32_t))(*(uint32_t *)v26 + 28))(v3[101]) != 10 )
            {
              v16 = *(uint32_t *)(v3[102] - 12);
              goto LABEL_46;
            }
LABEL_41:
            sub_82E090((int)(uintptr_t)(a1), (int)(uintptr_t)(v18));
            goto LABEL_6;
          }
        }
LABEL_46:
        if ( v16 == 0 )
          goto LABEL_36;
        v27 = v3[101];
        if ( v27 != 0 )
        {
          if ( (*(int (**)(uint32_t))(*(uint32_t *)v27 + 28))(v3[101]) == 8 )
          {
LABEL_51:
            v18 = (Elf32_Sym *)(&stru_40004);
            goto LABEL_41;
          }
          if ( *(uint32_t *)(v3[102] - 12) == 0 )
            goto LABEL_36;
        }
        if ( (uint8_t)sub_836EA0(v30) == 0 )
          goto LABEL_36;
        goto LABEL_51;
      }
    }
  }
  v14 = (int *)G4_VCALL<int>(v3, 16);
  if ( v14 != nullptr )
  {
    if ( v14 == (int *)(uintptr_t)(&dword_20D6920) )
    {
LABEL_42:
      sub_82E090((int)(uintptr_t)(a1), 32);
      goto LABEL_6;
    }
    while ( 1 )
    {
      v14 = (int *)v14[1];
      if ( v14 == nullptr )
        break;
      if ( v14 == (int *)(uintptr_t)(&dword_20D6920) )
        goto LABEL_42;
    }
  }
  sub_82E090((int)(uintptr_t)(a1), 2);
LABEL_6:
  v10 = *(int **)(a1[3] + 96);
  if ( v10 != nullptr
    && G4_VCALL<uint8_t>(v10, 40) == 0
    && G4_VCALL<uint8_t>(v10, 32) != 0 )
  {
    sub_7FCBE0(v10);
  }
  v11 = a1[10];
  if ( v11 != 0 )
    G4_VCALL<void>(v11, 16, 0, 1);
  for ( i = 0; i != 184; i += 4 )
  {
    result = *(uint32_t *)(a1[3] + i);
    if ( result != 0 )
      result = G4_VCALL<int>(result, 16, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82E9F0  (binary VA: 0x82e9f0)
// Original: sub_82E9F0
// ----------------------------------------------------------------------------
void sub_82E9F0(int a1)
{
  char v1; // di
  int i;
  int v3;
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  char v7; // bp
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  char v19;
  char v20;
  int v21;
  bool v22;
  int v23;
  int *v24;
  int *v25;
  int v26;
  bool v27;
  int *v28;
  int v29;

  if ( (uint8_t)sub_62F450(0) != 0 && *(uint8_t *)(a1 + 71) != 0 && *(uint8_t *)(a1 + 69) != 0 )
  {
    v1 = *(uint8_t *)(sub_5BC940() + 4);
    if ( v1 != *(uint8_t *)(a1 + 73) )
    {
      if ( *(uint8_t *)(a1 + 71) != 0 )
      {
        for ( i = 0; i != 184; i += 4 )
        {
          v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + i);
          if ( v3 != 0 )
            *(uint32_t *)(v3 + 8) &= ~2u;
        }
        v4 = *(uint32_t **)(a1 + 24);
        if ( v4 != nullptr )
        {
          v5 = *(uint32_t *)(a1 + 48);
          v6 = (uint32_t *)(a1 + 20);
          do
          {
            while ( v5 <= v4[4] )
            {
              v6 = v4;
              v4 = (uint32_t *)v4[2];
              if ( v4 == nullptr )
                goto LABEL_16;
            }
            v4 = (uint32_t *)v4[3];
          }
          while ( v4 != nullptr );
LABEL_16:
          if ( (uint32_t *)(a1 + 20) != v6 && v5 >= v6[4] )
            sub_82CF90(a1, 0);
        }
      }
      if ( *(uint8_t *)(a1 + 68) == 0 )
        sub_82D0E0(a1, 0);
      *(uint8_t *)(a1 + 73) = v1;
    }
    v7 = sub_978260(*(uint32_t *)(dword_20DDDC0 + 868));
    v9 = sub_8F0680(v8);
    if ( v9 != 0 && v7 == 0 )
    {
      v10 = *(uint32_t *)(a1 + 48);
      if ( (v10 & 1) != 0 )
      {
        v13 = G4_VCALL<int>(v9, 428);
        if ( (uint8_t)sub_9873E0(v9) != 0
          && ((uint8_t)sub_97EBD0(v9) != 0 || *(uint8_t *)(v9 + 3201) != 0 || *(uint8_t *)(v9 + 3202) != 0)
          || (v14 = *(uint32_t *)(v9 + 1876), *(int *)(v9 + 1872) < 0)
          || (v14 & 1) != 0
          || (v14 & 4) != 0 )
        {
          if ( *(uint8_t *)(v9 + 3904) != 0 )
          {
            sub_981EE0(v9, 0);
            *(uint8_t *)(v9 + 3904) = 0;
          }
          sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 100), 0, 0);
        }
        else
        {
          if ( v13 != 0 && (sub_5B3050(v13), sub_5B1A50(v13)) && (uint8_t)sub_9878E0(v9) != 0
            || (uint8_t)sub_97EBD0(v9) != 0
            || *(uint8_t *)(v9 + 3201) != 0
            || *(uint8_t *)(v9 + 3202) != 0 )
          {
            sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 100), 0, 0);
          }
          else
          {
            sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 100), 1, 0);
          }
          if ( (uint8_t)sub_97EBD0(v9) == 0
            && (uint8_t)sub_97EBD0(v9) == 0
            && *(uint8_t *)(v9 + 3201) == 0
            && *(uint8_t *)(v9 + 3202) == 0 )
          {
            (*(void (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a1 + 12) + 24) + 44))(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 24));
            return;
          }
        }
        sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 24), 0, 0);
        return;
      }
      if ( (v10 & 4) != 0 )
      {
        v16 = G4_VCALL<int>(v9, 456);
        v29 = v16;
        if ( v16 != 0 )
        {
          v17 = *(uint32_t *)(a1 + 76)
              + ((*(uint8_t (**)(uint32_t))(**(uint32_t **)(v16 + 780) + 80))(*(uint32_t *)(v16 + 780)) == 0
               ? -1
               : 1);
          if ( v17 < 0 )
            v17 = 0;
          if ( v17 > *(uint32_t *)(a1 + 80) )
            v17 = *(uint32_t *)(a1 + 80);
          *(uint32_t *)(a1 + 76) = v17;
          v18 = *(int **)(*(uint32_t *)(a1 + 12) + 52);
          if ( v18 != nullptr )
          {
            v19 = sub_5B5430(v29);
            v20 = 0;
            if ( v19 != 0 && *(uint32_t *)(v29 + 780) != 0 )
            {
              v20 = 1;
              if ( *(uint32_t *)(a1 + 76) <= *(uint32_t *)(a1 + 80) / 2 )
              {
                v20 = 0;
                if ( *(uint8_t *)(v29 + 1135) != 0 )
                  v20 = G4_VCALL<uint8_t>(v29, 432) != 0;
              }
            }
            sub_82A360(a1, v18, v20, 0);
          }
          v21 = G4_VCALL<int>(v9, 428);
          v22 = sub_5B1A50(v21);
          v23 = *(uint32_t *)(a1 + 12);
          v24 = *(int **)(v23 + 104);
          if ( v24 != nullptr )
          {
            sub_82A360(a1, v24, !v22, 0);
            v23 = *(uint32_t *)(a1 + 12);
          }
          v25 = *(int **)(v23 + 36);
          if ( v25 != nullptr )
            sub_82A360(a1, v25, *(uint8_t *)(v29 + 190) ^ 1, 0);
        }
      }
      else if ( (v10 & 0x22) != 0 )
      {
        if ( G4_VCALL<int>(v9, 456) != 0 )
        {
          v26 = G4_VCALL<int>(v9, 428);
          v27 = sub_5B1A50(v26);
          v28 = *(int **)(*(uint32_t *)(a1 + 12) + 104);
          if ( v28 != nullptr )
            sub_82A360(a1, v28, !v27, 0);
        }
      }
      else if ( (v10 & 8) != 0 )
      {
        v15 = *(uint32_t *)(v9 + 3668);
        if ( v15 != 3 && v15 != 4 && v15 != 5 )
          sub_82E090(a1, 1);
      }
      else if ( (v10 & 0xE0004) != 0 )
      {
        v11 = G4_VCALL<int>(v9, 456);
        if ( v11 != 0 && *(uint32_t *)(*(uint32_t *)(v11 + 408) - 12) != 0 )
        {
          v12 = *(uint32_t *)(v11 + 404);
          if ( v12 != 0 && G4_VCALL<int>(v12, 28) == 10 )
            sub_82A360(a1, *(int **)(*(uint32_t *)(a1 + 12) + 52), 0, 0);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82EF10  (binary VA: 0x82ef10)
// Original: sub_82EF10
// ----------------------------------------------------------------------------
int sub_82EF10(int *a1, int a2)
{
  int v2;
  int result;
  int i;
  int v5;
  int v6;
  int v7;

  v2 = a1[26];
  v7 = a1[27];
  result = -1431655765 * ((v7 - v2) >> 3);
  if ( result != 0 )
  {
    if ( v2 != v7 )
    {
      for ( i = a1[26]; v7 != i; i += 24 )
      {
        while ( 1 )
        {
          v5 = *(uint32_t *)(i + 8);
          if ( v5 == 0 || (int)sub_BDEDA0(v5 + 288) <= 0 )
            break;
          sub_82C060((int)(uintptr_t)(a1), a2, i);
LABEL_5:
          i += 24;
          if ( v7 == i )
            goto LABEL_10;
        }
        if ( *(uint8_t *)(i + 21) != 0 )
          goto LABEL_5;
        *(uint8_t *)(i + 21) = 1;
        sub_5F76C0((uint32_t *)(i + 8), 0);
        v6 = *(uint32_t *)(i + 4);
        sub_801C50(a1[3], v6, 0, 0);
      }
    }
LABEL_10:
    result = 0;
    if ( a1[30] + a2 < 101 )
      result = a1[30] + a2;
    a1[30] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82F020  (binary VA: 0x82f020)
// Original: sub_82F020
// ----------------------------------------------------------------------------
void sub_82F020(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C128);
  sub_5F76C0(a1 + 2, 0);
  g4_std::string::Destroy(a1 + 1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_82F080  (binary VA: 0x82f080)
// Original: sub_82F080
// ----------------------------------------------------------------------------
int sub_82F080(int a1, int a2)
{
  int result;

  if ( *(uint8_t *)(a2 + 21) == 0 )
  {
    *(uint8_t *)(a2 + 21) = 1;
    sub_5F76C0((uint32_t *)(a2 + 8), 0);
    return sub_801C50(*(uint32_t *)(a1 + 12), *(uint32_t *)(a2 + 4), 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82F0F0  (binary VA: 0x82f0f0)
// Original: sub_82F0F0
// ----------------------------------------------------------------------------
int sub_82F0F0(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  int v14;
  uint32_t *v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  void (****v25)(size_t);
  int v26;
  int v27;
  int v28;
  int v29;
  void (***v30)(size_t);
  int v31;
  int v32;
  int v33;
  int v34;
  void (***v35)(size_t);
  void (**v36)(size_t);
  unsigned int v37;
  typedef size_t _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46[4];
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v39)) > _g4_s1 ? (20u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v41)) > _g4_s2 ? (24u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v42)) > _g4_s3 ? (32u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v44)) > _g4_s4 ? (40u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v45)) > _g4_s5 ? (44u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v46)) > _g4_s6 ? (60u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v47)) > _g4_s7 ? (64u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v48)) > _g4_s8 ? (68u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v49)) > _g4_s9 ? (72u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v50)) > _g4_s10 ? (76u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (77u + sizeof(_g4_t_v51)) > _g4_s11 ? (77u + sizeof(_g4_t_v51)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 77u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = (uint32_t)(uintptr_t)(&off_205C128);
      g4_std::string::construct_copy(v3 + 4, v3 - 20);
      v5 = *(uint32_t *)(v3 - 16);
      *(uint32_t *)(v3 + 8) = 0;
      if ( v5 != 0 )
        v4 = v5 + 12;
      sub_5F76C0((uint32_t *)(v3 + 8), v4);
      *(uint32_t *)(v3 + 12) = *(uint32_t *)(v3 - 12);
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 - 8);
      *(uint8_t *)(v3 + 20) = *(uint8_t *)(v3 - 4);
      *(uint8_t *)(v3 + 21) = *(uint8_t *)(v3 - 3);
      v4 = a1[1];
    }
    a1[1] = v4 + 24;
    g4_std::string::construct_copy(v46, a3 + 4);
    v6 = *(uint32_t *)(a3 + 8);
    v7 = 0;
    v47 = 0;
    if ( v6 != 0 )
      v7 = v6 + 12;
    sub_5F76C0(&v47, v7);
    v48 = *(uint32_t *)(a3 + 12);
    v49 = *(uint32_t *)(a3 + 16);
    v50 = *(uint8_t *)(a3 + 20);
    v51 = *(uint8_t *)(a3 + 21);
    v42 = a1[1];
    v41 = -1431655765 * ((v42 - 48 - a2) >> 3);
    if ( v41 > 0 )
    {
      v8 = v42 - 24;
      v9 = v42 - 56;
      v10 = v42 - 32;
      while ( 1 )
      {
        g4_std::string::assign_str(v8 - 20, v8 - 44);
        v11 = *(uint32_t *)(v8 - 88 + 48);
        v12 = v11 + 12;
        if ( v11 == 0 )
          v12 = 0;
        sub_5F76C0((uint32_t *)(v8 - 16), v12);
        *(uint32_t *)(v10 - 4) = *(uint32_t *)(v9 - 4);
        *(uint32_t *)v10 = *(uint32_t *)v9;
        *(uint8_t *)(v10 + 4) = *(uint8_t *)(v9 + 4);
        v13 = *(uint8_t *)(v9 + 5);
        v9 -= 24;
        *(uint8_t *)(v10 + 5) = v13;
        v10 -= 24;
        if ( --v41 == 0 )
          break;
        v8 -= 24;
      }
    }
    g4_std::string::assign_str(a2 + 4, v46);
    v14 = 0;
    if ( v47 != 0 )
      v14 = v47 + 12;
    sub_5F76C0((uint32_t *)(a2 + 8), v14);
    *(uint32_t *)(a2 + 12) = v48;
    *(uint32_t *)(a2 + 16) = v49;
    *(uint8_t *)(a2 + 20) = v50;
    *(uint8_t *)(a2 + 21) = v51;
    sub_5F76C0(&v47, 0);
    return ((g4_std::string::Destroy(v46)), (int)0);
  }
  v16 = (uint32_t *)*a1;
  v17 = -1431655765 * ((v3 - (int)(uintptr_t)(v16)) >> 3);
  if ( v17 != 0 )
  {
    v37 = 2 * v17;
    if ( v17 > 2 * v17 || v37 > 0xAAAAAAA )
    {
      v45 = -16;
      v18 = -1431655765 * ((a2 - (int)(uintptr_t)(v16)) >> 3);
      v19 = sub_4EB830(0xFFFFFFF0);
      goto LABEL_20;
    }
    v45 = 48 * v17;
    v18 = -1431655765 * ((a2 - (int)(uintptr_t)(v16)) >> 3);
    if ( v37 == 0 )
    {
      v44 = 0;
      v20 = 24;
      v21 = 0;
      goto LABEL_21;
    }
  }
  else
  {
    v45 = 24;
    v18 = -1431655765 * ((a2 - (int)(uintptr_t)(v16)) >> 3);
  }
  v19 = sub_4EB830(v45);
LABEL_20:
  v44 = v19;
  v20 = v19 + 24;
  v21 = v19;
LABEL_21:
  v22 = v21 + 24 * v18;
  if ( v22 != 0 )
  {
    *(uint32_t *)v22 = (uint32_t)(uintptr_t)(&off_205C128);
    v39 = v20;
    g4_std::string::construct_copy(v22 + 4, a3 + 4);
    *(uint32_t *)(v22 + 8) = 0;
    v23 = *(uint32_t *)(a3 + 8);
    v24 = 0;
    if ( v23 != 0 )
      v24 = v23 + 12;
    sub_5F76C0((uint32_t *)(v22 + 8), v24);
    *(uint32_t *)(v22 + 12) = *(uint32_t *)(a3 + 12);
    *(uint32_t *)(v22 + 16) = *(uint32_t *)(a3 + 16);
    *(uint8_t *)(v22 + 20) = *(uint8_t *)(a3 + 20);
    *(uint8_t *)(v22 + 21) = *(uint8_t *)(a3 + 21);
    v20 = v39;
  }
  v25 = (void (****)(size_t))a1;
  v26 = *a1;
  if ( a2 != *a1 )
  {
    v27 = v44;
    do
    {
      if ( v27 != 0 )
      {
        *(uint32_t *)v27 = (uint32_t)(uintptr_t)(&off_205C128);
        g4_std::string::construct_copy(v27 + 4, v26 + 4);
        *(uint32_t *)(v27 + 8) = 0;
        v28 = *(uint32_t *)(v26 + 8);
        v29 = 0;
        if ( v28 != 0 )
          v29 = v28 + 12;
        sub_5F76C0((uint32_t *)(v27 + 8), v29);
        *(uint32_t *)(v27 + 12) = *(uint32_t *)(v26 + 12);
        *(uint32_t *)(v27 + 16) = *(uint32_t *)(v26 + 16);
        *(uint8_t *)(v27 + 20) = *(uint8_t *)(v26 + 20);
        *(uint8_t *)(v27 + 21) = *(uint8_t *)(v26 + 21);
      }
      v26 += 24;
      v27 += 24;
    }
    while ( a2 != v26 );
    v20 = v27 + 24;
    v25 = (void (****)(size_t))a1;
  }
  v30 = v25[1];
  v31 = v20;
  if ( (void (***)(size_t))a2 != v30 )
  {
    v32 = a2;
    do
    {
      if ( v31 != 0 )
      {
        *(uint32_t *)v31 = (uint32_t)(uintptr_t)(&off_205C128);
        g4_std::string::construct_copy(v31 + 4, v32 + 4);
        *(uint32_t *)(v31 + 8) = 0;
        v33 = *(uint32_t *)(v32 + 8);
        v34 = 0;
        if ( v33 != 0 )
          v34 = v33 + 12;
        sub_5F76C0((uint32_t *)(v31 + 8), v34);
        *(uint32_t *)(v31 + 12) = *(uint32_t *)(v32 + 12);
        *(uint32_t *)(v31 + 16) = *(uint32_t *)(v32 + 16);
        *(uint8_t *)(v31 + 20) = *(uint8_t *)(v32 + 20);
        *(uint8_t *)(v31 + 21) = *(uint8_t *)(v32 + 21);
      }
      v32 += 24;
      v31 += 24;
    }
    while ( v30 != (void (***)(size_t))v32 );
    v25 = (void (****)(size_t))a1;
    v30 = (void (***)(size_t))a1[1];
  }
  v35 = *v25;
  if ( v30 != *v25 )
  {
    do
    {
      v36 = *v35;
      v38 = (size_t)v35;
      v35 += 6;
      (*v36)(v38);
    }
    while ( v30 != v35 );
    v35 = (void (***)(size_t))*a1;
  }
  if ( v35 != nullptr )
    sub_4EB870((int)(uintptr_t)(v35));
  *a1 = v44;
  a1[1] = v31;
  a1[2] = v44 + v45;
  return v44 + v45;
}

// ----------------------------------------------------------------------------
// Function: sub_82F5C0  (binary VA: 0x82f5c0)
// Original: sub_82F5C0
// ----------------------------------------------------------------------------
int sub_82F5C0(uint32_t *a1, char *a2)
{
  uint32_t *v2;
  bool v3;
  int v4;
  int v5;
  int result;
  typedef uint32_t *_g4_t_v7;
  typedef uint8_t _g4_t_v8[5];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v8)) > _g4_s1 ? (23u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v11)) > _g4_s4 ? (36u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (45u + sizeof(_g4_t_v14)) > _g4_s7 ? (45u + sizeof(_g4_t_v14)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 23u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 45u);

  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&off_205C128);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), a2, (int)(uintptr_t)(v8));
  v10 = 0;
  sub_5F76C0(&v10, 0);
  v2 = (uint32_t *)a1[27];
  v3 = v2 == (uint32_t *)a1[28];
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 1;
  if ( v3 )
  {
    sub_82F0F0(a1 + 26, (int)(uintptr_t)(v2), (int)(uintptr_t)(&v8[1]));
  }
  else
  {
    v4 = 0;
    if ( v2 != nullptr )
    {
      *v2 = (uint32_t)(uintptr_t)(&off_205C128);
      v7 = v2;
      g4_std::string::construct_copy(v2 + 1, &v9);
      v7[2] = 0;
      v5 = 0;
      if ( v10 != 0 )
        v5 = v10 + 12;
      sub_5F76C0(v7 + 2, v5);
      v7[3] = v11;
      v7[4] = v12;
      *((uint8_t *)v7 + 20) = v13;
      *((uint8_t *)v7 + 21) = v14;
      v4 = a1[27];
    }
    a1[27] = v4 + 24;
  }
  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&off_205C128);
  sub_5F76C0(&v10, 0);
  g4_std::string::Destroy(&v9);
  result = *(uint32_t *)(a1[3] + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 40, "distanceDisplayed", 1065353216, a2, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82F740  (binary VA: 0x82f740)
// Original: sub_82F740
// ----------------------------------------------------------------------------
void sub_82F740(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  char v6;

  if ( a2 == 0 )
  {
    v4 = (uint32_t *)(a1 + 44);
    v5 = *(uint32_t *)(a1 + 44);
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 144);
      if ( v6 >= 0 && v6 < (unsigned int)dword_20D93E0 )
        sub_C1A860(v5);
      sub_5F76C0(v4, 0);
    }
    if ( a3 != 0 )
    {
      G4_VCALL<void>(a3, 288, a4, 1, 1);
      sub_5F76C0(v4, a3 + 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_82F810  (binary VA: 0x82f810)
// Original: sub_82F810
// ----------------------------------------------------------------------------
int sub_82F810(int *a1, int a2)
{
  int v2;
  int result;

  v2 = a1[26];
  result = a1[27];
  if ( v2 != result )
  {
    while ( a2 != *(uint32_t *)(v2 + 8) )
    {
      v2 += 24;
      if ( v2 == result )
        return result;
    }
    if ( *(uint8_t *)(v2 + 21) == 0 )
    {
      *(uint8_t *)(v2 + 21) = 1;
      sub_5F76C0((uint32_t *)(v2 + 8), 0);
      return sub_801C50(a1[3], *(uint32_t *)(v2 + 4), 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82F8A0  (binary VA: 0x82f8a0)
// Original: sub_82F8A0
// ----------------------------------------------------------------------------
uint32_t * sub_82F8A0(uint32_t *a1, int a2, char *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  bool v8;
  uint32_t *result;
  char *v10;
  size_t v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint8_t _g4_t_v13[5];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_s[60];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (39u + sizeof(_g4_t_v13)) > _g4_s1 ? (39u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v14)) > _g4_s2 ? (44u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v15)) > _g4_s3 ? (48u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v16)) > _g4_s4 ? (52u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v17)) > _g4_s5 ? (56u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v18)) > _g4_s6 ? (60u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (61u + sizeof(_g4_t_v19)) > _g4_s7 ? (61u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_s)) > _g4_s8 ? (64u + sizeof(_g4_t_s)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 39u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 61u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 64u);

  sub_7FC920((int)(uintptr_t)(a1), a2, a3, 0, nullptr, 0, (uint8_t *)&dword_0 + 1);
  *a1 = (uint32_t)(uintptr_t)(&off_205C0A8);
  a1[26] = 0;
  a1[1] = ((uint32_t)(uintptr_t)&off_205C114);
  a1[27] = 0;
  a1[28] = 0;
  a1[29] = 1120403456;
  a1[30] = 0;
  v3 = 0;
  sub_801C50(a1[3], (int)(uintptr_t)(a3), 1u, 0);
  sprintf(s, "mc_objective_direction_%i", 0);
  while ( 1 )
  {
    *(uint32_t *)&v13[1] = (uint32_t)(uintptr_t)(&off_205C128);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), s, (int)(uintptr_t)(v13));
    v15 = 0;
    sub_5F76C0(&v15, 0);
    v7 = (uint32_t *)a1[27];
    v8 = v7 == (uint32_t *)a1[28];
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 1;
    if ( v8 )
    {
      sub_82F0F0(a1 + 26, (int)(uintptr_t)(v7), (int)(uintptr_t)(&v13[1]));
    }
    else
    {
      v4 = 0;
      if ( v7 != nullptr )
      {
        *v7 = (uint32_t)(uintptr_t)(&off_205C128);
        v12 = v7;
        g4_std::string::construct_copy(v7 + 1, &v14);
        v12[2] = 0;
        v5 = 0;
        if ( v15 != 0 )
          v5 = v15 + 12;
        sub_5F76C0(v12 + 2, v5);
        v12[3] = v16;
        v12[4] = v17;
        *((uint8_t *)v12 + 20) = v18;
        *((uint8_t *)v12 + 21) = v19;
        v4 = a1[27];
      }
      a1[27] = v4 + 24;
    }
    *(uint32_t *)&v13[1] = (uint32_t)(uintptr_t)(&off_205C128);
    sub_5F76C0(&v15, 0);
    g4_std::string::Destroy(&v14);
    v6 = *(uint32_t *)(a1[3] + 4);
    if ( v6 != 0 )
      G4_VCALL<void>(v6, 40, "distanceDisplayed", 1065353216, s, 0);
    if ( ++v3 == 20 )
      break;
    sprintf(s, "mc_objective_direction_%i", v3);
  }
  result = *(uint32_t **)(dword_20DDDC0 + 864);
  if ( result != nullptr )
  {
    v10 = (char *)sub_AC5E50(result, 12784);
    v11 = strlen(v10);
    return (uint32_t *)g4_std_compat::string_assign((int)(uintptr_t)(&dword_20D66B0), v10, v11);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82FB50  (binary VA: 0x82fb50)
// Original: sub_82FB50
// ----------------------------------------------------------------------------
void sub_82FB50(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
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
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char v30;
  int v31;
  uint32_t *v32;
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
  uint32_t *v48;
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
  uint32_t *v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  typedef void *_g4_t_lpdso_handle;
  typedef int _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s0 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v72)) > _g4_s1 ? (44u + sizeof(_g4_t_v72)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v73)) > _g4_s2 ? (48u + sizeof(_g4_t_v73)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v74)) > _g4_s3 ? (48u + sizeof(_g4_t_v74)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v75)) > _g4_s4 ? (52u + sizeof(_g4_t_v75)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v76)) > _g4_s5 ? (56u + sizeof(_g4_t_v76)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v77)) > _g4_s6 ? (72u + sizeof(_g4_t_v77)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v78)) > _g4_s7 ? (76u + sizeof(_g4_t_v78)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 52u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);

  if ( *(uint8_t *)(a1 + 71) == 0 && *(uint32_t *)(a1 + 64) != 0 )
  {
    *(uint8_t *)(a1 + 71) = 1;
    v1 = sub_4EBBF0(0xE8u, 1);
    sub_812E70(v1, *(uint32_t *)(a1 + 64), "MiniMap_mc", (int)(uintptr_t)("Angle_mc.Position_mc.image_container"));
    sub_82CB90(a1, 0, v1, 917695, 1);
    if ( *(uint8_t *)(dword_20D9B70 + 8) != 0 )
    {
      v2 = sub_4EBBF0(0x94u, 1);
      sub_7FC920(v2, *(uint32_t *)(a1 + 64), "AnalogStick_mc", 0, (int)(uintptr_t)("HitArea_mc"), 1, 1);
      *(uint32_t *)v2 = (uint32_t)(uintptr_t)(&off_205BF28);
      *(uint32_t *)(v2 + 104) = 0;
      *(uint32_t *)(v2 + 4) = ((uint32_t)(uintptr_t)&off_205BF94);
      *(uint32_t *)(v2 + 108) = 0;
      *(uint8_t *)(v2 + 112) = 0;
      *(uint8_t *)(v2 + 113) = 0;
      *(uint32_t *)(v2 + 116) = 0;
      *(uint32_t *)(v2 + 120) = 0;
      g4_std::string::construct_from_cstr(v2 + 124, "HitArea_mc", (int)(uintptr_t)(&v77));
      g4_std::string::construct_from_cstr(v2 + 128, "Stick_mc", (int)(uintptr_t)(&v77) + 1);
      g4_std::string::construct_from_cstr(v2 + 132, "Stick_mc.hl", (int)(uintptr_t)(&v77) + 2);
      g4_std::string::construct_from_cstr(v2 + 136, "Stick_mc.stick", (int)(uintptr_t)(&v77) + 3);
      *(uint16_t *)(v2 + 140) = 0;
      *(uint16_t *)(v2 + 142) = 0;
      *(uint16_t *)(v2 + 144) = 0;
      *(uint16_t *)(v2 + 146) = 0;
      sub_801C50(*(uint32_t *)(v2 + 12), v2 + 24, 0, 0);
      sub_82CB90(a1, 2, v2, 1966125, 1);
    }
    else
    {
      v64 = sub_4EBBF0(0x94u, 1);
      sub_7FC920(v64, *(uint32_t *)(a1 + 64), "AnalogStick_mc", 0, (int)(uintptr_t)("HitArea_mc"), 1, 1);
      *(uint32_t *)v64 = (uint32_t)(uintptr_t)(&off_205BF28);
      *(uint32_t *)(v64 + 104) = 0;
      *(uint32_t *)(v64 + 4) = ((uint32_t)(uintptr_t)&off_205BF94);
      *(uint32_t *)(v64 + 108) = 0;
      *(uint8_t *)(v64 + 112) = 0;
      *(uint8_t *)(v64 + 113) = 0;
      *(uint32_t *)(v64 + 116) = 0;
      *(uint32_t *)(v64 + 120) = 0;
      g4_std::string::construct_from_cstr(v64 + 124, "HitArea_mc", (int)(uintptr_t)(&v78));
      g4_std::string::construct_from_cstr(v64 + 128, "Stick_mc", (int)(uintptr_t)(&v78) + 1);
      g4_std::string::construct_from_cstr(v64 + 132, "Stick_mc.hl", (int)(uintptr_t)(&v78) + 2);
      g4_std::string::construct_from_cstr(v64 + 136, "Stick_mc.stick", (int)(uintptr_t)(&v78) + 3);
      *(uint16_t *)(v64 + 140) = 0;
      *(uint16_t *)(v64 + 142) = 0;
      *(uint16_t *)(v64 + 144) = 0;
      *(uint16_t *)(v64 + 146) = 0;
      sub_801C50(*(uint32_t *)(v64 + 12), v64 + 24, 0, 0);
      sub_82CB90(a1, 2, v64, 1966125, 0);
    }
    v3 = sub_4EBBF0(0x9Cu, 1);
    sub_7FFAE0(v3, *(uint32_t *)(a1 + 64), "stage", *(uint32_t *)(*(uint32_t *)(a1 + 12) + 8));
    sub_82CB90(a1, 1, v3, 0, 1);
    *(uint32_t *)(a1 + 40) = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4);
    v4 = sub_4EBBF0(0x74u, 1);
    sub_7FC7A0(v4, *(uint32_t *)(a1 + 64), "Health_mc");
    sub_82CB90(a1, 3, v4, 917695, 1);
    v5 = sub_4EBBF0(0x74u, 1);
    sub_7FC820(v5, *(uint32_t *)(a1 + 64), "Armor_mc");
    sub_82CB90(a1, 4, v5, 917695, 1);
    v6 = sub_4EBBF0(0x74u, 1);
    sub_7FC8A0(v6, *(uint32_t *)(a1 + 64), "Respect_mc");
    sub_82CB90(a1, 5, v6, 917695, 1);
    v7 = (uint32_t *)sub_4EBBF0(0x6Cu, 1);
    sub_7FC920((int)(uintptr_t)(v7), *(uint32_t *)(a1 + 64), "ArmorButton_mc", 1, 0, 1, 1);
    *v7 = (uint32_t)(uintptr_t)(&off_205BFA8);
    v7[26] = -1;
    v7[1] = ((uint32_t)(uintptr_t)&off_205C014);
    sub_82CB90(a1, 7, v7, 917543, 1);
    v8 = (uint32_t *)sub_4EBBF0(0x6Cu, 1);
    sub_7FC920((int)(uintptr_t)(v8), *(uint32_t *)(a1 + 64), "FirstAidButton_mc", 1, 0, 1, 1);
    *v8 = (uint32_t)(uintptr_t)(&off_205C2C8);
    v8[26] = -1;
    v8[1] = ((uint32_t)(uintptr_t)&off_205C334);
    sub_82CB90(a1, 8, v8, 917543, 1);
    v9 = (uint32_t *)sub_4EBBF0(0x68u, 1);
    sub_7FC920((int)(uintptr_t)(v9), *(uint32_t *)(a1 + 64), "btn_endcall", 1, 0, 1, 1);
    *v9 = (uint32_t)(uintptr_t)(&off_205C1C8);
    v9[1] = ((uint32_t)(uintptr_t)&off_205C234);
    sub_82CB90(a1, 45, v9, 917543, 1);
    v10 = (uint32_t *)sub_4EBBF0(0x6Cu, 1);
    sub_7FC920((int)(uintptr_t)(v10), *(uint32_t *)(a1 + 64), "RepairKitButton_mc", 1, 0, 1, 1);
    *v10 = (uint32_t)(uintptr_t)(&off_205C348);
    v10[26] = -1;
    v10[1] = ((uint32_t)(uintptr_t)&off_205C3B4);
    sub_82CB90(a1, 9, v10, 917542, 1);
    v11 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v11, *(uint32_t *)(a1 + 64), "Accel_mc", 5, 1, 1);
    sub_82CB90(a1, 10, v11, 1052706, 1);
    v12 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v12, *(uint32_t *)(a1 + 64), "Brake_mc", 6, 1, 1);
    sub_82CB90(a1, 11, v12, 1049122, 1);
    v13 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v13, *(uint32_t *)(a1 + 64), "Brake_gyro_mc", 6, 1, 1);
    sub_82CB90(a1, 12, v13, 1049634, 1);
    v14 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v14, *(uint32_t *)(a1 + 64), "BrakeSmall_mc", 6, 1, 1);
    sub_82CB90(a1, 13, v14, 1968166, 1);
    v15 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v15, *(uint32_t *)(a1 + 64), "ExitCar_mc", 3, 1, 1);
    sub_82CB90(a1, 14, v15, 917542, 1);
    v16 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v16, *(uint32_t *)(a1 + 64), "Cover_mc", 9, 1, 0);
    sub_82CB90(a1, 15, v16, 1, 0);
    v17 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v17, *(uint32_t *)(a1 + 64), "EnterCar_mc", 3, 1, 0);
    sub_82CB90(a1, 16, v17, 1, 0);
    v18 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v18, *(uint32_t *)(a1 + 64), "HitArea_IGM", 7, 0, 1);
    sub_82CB90(a1, 21, v18, 917695, 1);
    v19 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v19, *(uint32_t *)(a1 + 64), "btn_pause", 13, 0, 1);
    sub_82CB90(a1, 22, v19, 917695, 1);
    v20 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v20, *(uint32_t *)(a1 + 64), "btn_drive_arrow_up", 14, 1, 1);
    sub_82CB90(a1, 31, v20, &stru_40004, 0);
    v21 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v21, *(uint32_t *)(a1 + 64), "btn_drive_arrow_down", 15, 1, 1);
    sub_82CB90(a1, 32, v21, &stru_40004, 0);
    v22 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v22, *(uint32_t *)(a1 + 64), "CloseSniper_mc", 8, 1, 1);
    sub_82CB90(a1, 17, v22, 16, 1);
    v23 = sub_4EBBF0(0x74u, 1);
    sub_8014A0(v23, *(uint32_t *)(a1 + 64), "btn_skip", 17, 0, 1);
    sub_82CB90(a1, 24, v23, 0, 0);
    v24 = sub_4EBBF0(0x94u, 1);
    sub_80D0D0(v24, *(uint32_t *)(a1 + 64), "StepSlider_mc", 1, 1);
    sub_82CB90(a1, 23, v24, 1048866, 1);
    v25 = (uint32_t *)sub_4EBBF0(0x7Cu, 1);
    sub_7FF910((int)(uintptr_t)(v25), *(uint32_t *)(a1 + 64), "ActionButton_mc", 0, 1);
    *v25 = (uint32_t)(uintptr_t)(&off_205C028);
    v25[1] = ((uint32_t)(uintptr_t)&off_205C094);
    v25[29] = 400;
    v25[30] = 0;
    v27 = sub_8F0680(v26);
    if ( v27 != 0 )
    {
      v28 = G4_VCALL<int>(v27, 428);
      v29 = v28;
      if ( v28 != v25[30] )
      {
        if ( v28 != 0 )
        {
          v72 = v28;
          v30 = sub_5B1A50(v28);
          v29 = v72;
          if ( v30 != 0 )
          {
            v68 = sub_5B1820(v72);
            v29 = v72;
            if ( v68 >= 0 && v68 < (unsigned int)dword_20D7DA0 )
            {
              v76 = *(uint32_t *)(dword_20D7D90 + (v68 << 6) + 20);
              v69 = *(uint32_t *)(v25[3] + 4);
              if ( v69 != 0 )
              {
                G4_VCALL<void>(v69, 44, &off_1B1FE25, v76, v25 + 6, "weapon_img");
                v29 = v72;
                v70 = *(uint32_t *)(v25[3] + 4);
                if ( v70 != 0 )
                {
                  (*(void (**)(uint32_t, const char *, const char *, uint32_t *, uint32_t))(*(uint32_t *)v70 + 44))(
                    *(uint32_t *)(v25[3] + 4),
                    "mode",
                    "punch",
                    v25 + 6,
                    0);
                  v29 = v72;
                }
              }
            }
          }
          else
          {
            v31 = *(uint32_t *)(v25[3] + 4);
            if ( v31 != 0 )
            {
              (*(void (**)(uint32_t, const char *, const char *, uint32_t *, uint32_t))(*(uint32_t *)v31 + 44))(
                *(uint32_t *)(v25[3] + 4),
                "mode",
                "shoot",
                v25 + 6,
                0);
              v29 = v72;
            }
          }
        }
        v25[30] = v29;
      }
    }
    sub_82CB90(a1, 25, v25, 524433, 1);
    v32 = (uint32_t *)sub_4EBBF0(0x7Cu, 1);
    sub_7FF910((int)(uintptr_t)(v32), *(uint32_t *)(a1 + 64), "ShootSmallButton_mc", 0, 1);
    *v32 = (uint32_t)(uintptr_t)(&off_205C028);
    v32[1] = ((uint32_t)(uintptr_t)&off_205C094);
    v32[29] = 400;
    v32[30] = 0;
    v34 = sub_8F0680(v33);
    if ( v34 != 0 )
    {
      v35 = G4_VCALL<int>(v34, 428);
      v36 = v35;
      if ( v35 != v32[30] )
      {
        if ( v35 != 0 )
        {
          if ( (uint8_t)sub_5B1A50(v35) != 0 )
          {
            v65 = sub_5B1820(v36);
            if ( v65 >= 0 && v65 < (unsigned int)dword_20D7DA0 )
            {
              v75 = *(uint32_t *)(dword_20D7D90 + (v65 << 6) + 20);
              v66 = *(uint32_t *)(v32[3] + 4);
              if ( v66 != 0 )
              {
                (*(void (**)(uint32_t, void **, int, uint32_t *, const char *))(*(uint32_t *)v66 + 44))(
                  *(uint32_t *)(v32[3] + 4),
                  (void **)(&off_1B1FE25),
                  v75,
                  v32 + 6,
                  "weapon_img");
                v67 = *(uint32_t *)(v32[3] + 4);
                if ( v67 != 0 )
                  G4_VCALL<void>(v67, 44, "mode", "punch", v32 + 6, 0);
              }
            }
          }
          else
          {
            v37 = *(uint32_t *)(v32[3] + 4);
            if ( v37 != 0 )
              G4_VCALL<void>(v37, 44, "mode", "shoot", v32 + 6, 0);
          }
        }
        v32[30] = v36;
      }
    }
    sub_82CB90(a1, 26, v32, 393254, 1);
    v38 = sub_4EBBF0(0x78u, 1);
    sub_800FA0(v38, *(uint32_t *)(a1 + 64), "RunButton_mc", 10, 1);
    sub_82CB90(a1, 27, v38, 1, 1);
    v39 = sub_4EBBF0(0x80u, 1);
    sub_801330(v39, *(uint32_t *)(a1 + 64), "ThrowButton_mc", 11, 1);
    sub_82CB90(a1, 6, v39, 1, 0);
    v40 = sub_4EBBF0(0x78u, 1);
    sub_801620(v40, *(uint32_t *)(a1 + 64), "WeaponSel_mc");
    sub_82CB90(a1, 28, v40, 917559, 0);
    v41 = sub_4EBBF0(0xB0u, 1);
    sub_800AD0(v41, *(uint32_t *)(a1 + 64), "VerticalSlide_mc", 1);
    sub_82CB90(a1, 29, v41, &stru_20004, 0);
    v42 = sub_4EBBF0(0xB0u, 1);
    sub_800AD0(v42, *(uint32_t *)(a1 + 64), "HorizontalSlide_mc", 0);
    sub_82CB90(a1, 30, v42, 1056770, 1);
    v73 = (uint32_t *)sub_4EBBF0(0x6Cu, 1);
    sub_7FC920((int)(uintptr_t)(v73), *(uint32_t *)(a1 + 64), "btn_drive_arrow_left", 1, 0, 1, 1);
    v73[1] = ((uint32_t)(uintptr_t)&off_205C1B4);
    *v73 = (uint32_t)(uintptr_t)(&off_205C148);
    v73[26] = *(uint32_t *)"fff?";
    *((uint8_t *)v73 + 101) = 0;
    sub_82CB90(a1, 35, v73, "_ZN3glf7Console28FileLoggerSetManualTimestampEb", 1);
    v74 = (uint32_t *)sub_4EBBF0(0x6Cu, 1);
    sub_7FC920((int)(uintptr_t)(v74), *(uint32_t *)(a1 + 64), "btn_drive_arrow_right", 1, 0, 1, 1);
    *v74 = (uint32_t)(uintptr_t)(&off_205C148);
    v74[1] = ((uint32_t)(uintptr_t)&off_205C1B4);
    v74[26] = *(uint32_t *)"fff?";
    *((uint8_t *)v74 + 101) = 1;
    sub_82CB90(a1, 36, v74, "_ZN3glf7Console28FileLoggerSetManualTimestampEb", 1);
    v43 = sub_4EBBF0(0x70u, 1);
    sub_801520(v43, *(uint32_t *)(a1 + 64), "WantedLevel_mc");
    sub_82CB90(a1, 37, v43, 917551, 0);
    v44 = sub_4EBBF0(0x6Cu, 1);
    sub_7FFA70(v44, *(uint32_t *)(a1 + 64), "RadioAnimated_mc");
    sub_82CB90(a1, 38, v44, 917542, 0);
    v45 = sub_4EBBF0(0xA0u, 1);
    sub_7FDA10(v45, *(uint32_t *)(a1 + 64), "mc_crosshair");
    sub_82CB90(a1, 39, v45, 917543, 0);
    v46 = sub_4EBBF0(0x7Cu, 1);
    sub_82F8A0(v46, *(uint32_t *)(a1 + 64), off_20BCB94);
    sub_82CB90(a1, 40, v46, 917543, 0);
    v47 = sub_4EBBF0(0x74u, 1);
    sub_800F00(v47, *(uint32_t *)(a1 + 64), "MailButton_mc", 18);
    sub_82CB90(a1, 41, v47, 0, 1);
    v48 = (uint32_t *)sub_4EBBF0(0x68u, 1);
    sub_7FC920((int)(uintptr_t)(v48), *(uint32_t *)(a1 + 64), "Followers_mc", 0, 0, 0, 1);
    *v48 = (uint32_t)(uintptr_t)(&off_205C248);
    v48[1] = ((uint32_t)(uintptr_t)&off_205C2B4);
    sub_801C50(v48[3], v48 + 6, 1, 0);
    sub_82CB90(a1, 42, v48, 0, 1);
    v49 = sub_4EBBF0(0x78u, 1);
    sub_7FF7F0(v49, *(uint32_t *)(a1 + 64), "Parachute_mc", 16);
    sub_82CB90(a1, 33, v49, 8, 0);
    v50 = sub_4EBBF0(0x78u, 1);
    sub_7FD910(v50, *(uint32_t *)(a1 + 64), "LevelUpButton_mc", 19);
    sub_82CB90(a1, 34, v50, 917695, 1);
    v51 = sub_4EBBF0(0x68u, 1);
    sub_7FC920(v51, *(uint32_t *)(a1 + 64), "VTOL_mc", 0, 0, 1, 1);
    sub_82CB90(a1, 44, v51, &stru_60004, 0);
    v52 = sub_4EBBF0(0x68u, 1);
    sub_800E30(v52, *(uint32_t *)(a1 + 64), "ZoomSniper_mc");
    sub_82CB90(a1, 18, v52, 16, 1);
    v53 = sub_4EBBF0(0x68u, 1);
    sub_800E90(v53, *(uint32_t *)(a1 + 64), "Sniper_mc");
    sub_82CB90(a1, 20, v53, 16, 1);
    v54 = sub_4EBBF0(0x68u, 1);
    sub_800DC0(v54, *(uint32_t *)(a1 + 64), "Circle_mc", 0, 0, 0);
    lpdso_handle = (void *)v54;
    v55 = 0;
    sub_82CB90(a1, 19, lpdso_handle, 16, 1);
    *(uint32_t *)(a1 + 48) = 1;
    v56 = dword_20DDDC0;
    do
    {
      v57 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + v55);
      v55 += 4;
      sub_B9CCE0(v56, v57);
    }
    while ( v55 != 184 );
    v58 = *(uint32_t *)(dword_20D9390 + 3496);
    if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
    {
      sub_7D7730(&unk_20D2D60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
      __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
    }
    v59 = nullptr;
    if ( byte_20D2D64 == 0 )
      v59 = (uint32_t *)(&unk_20D2D60);
    sub_7AE080(v59[27], v58);
    v61 = **(uint32_t **)(a1 + 12);
    if ( v61 != 0 )
      sub_7FE7F0(v61, v58);
    v62 = sub_8F0680(v60);
    v63 = **(uint32_t **)(a1 + 12);
    if ( v63 != 0 )
      sub_80D1E0(v63, v62);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8313C0  (binary VA: 0x8313c0)
// Original: sub_8313C0
// ----------------------------------------------------------------------------
void sub_8313C0(int a1, int a2)
{
  int v2;
  uint32_t *v3;

  v2 = *(uint32_t *)(a1 + 64);
  if ( v2 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(*(uint32_t *)(a1 + 64));
    *(uint32_t *)(a1 + 64) = 0;
  }
  if ( a2 != 0 )
  {
    v3 = (uint32_t *)sub_4EBBF0(8u, 1);
    sub_801BA0(v3, a2);
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v3);
    sub_801BE0((int)(uintptr_t)(v3));
    sub_82FB50(a1);
  }
  *(uint32_t *)(a1 + 80) = 30;
  *(uint8_t *)(a1 + 74) = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_831460  (binary VA: 0x831460)
// Original: sub_831460
// ----------------------------------------------------------------------------
int sub_831460(int *a1, int a2)
{
  int v2;
  int result;

  v2 = a1[26];
  result = a1[27];
  if ( v2 != result )
  {
    while ( *(uint32_t *)(a1[16] + 8 * a2) != *(uint32_t *)(v2 + 8) )
    {
      v2 += 24;
      if ( v2 == result )
        return result;
    }
    if ( *(uint8_t *)(v2 + 21) == 0 )
    {
      *(uint8_t *)(v2 + 21) = 1;
      sub_5F76C0((uint32_t *)(v2 + 8), 0);
      return sub_801C50(a1[3], *(uint32_t *)(v2 + 4), 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_831500_ea831500  (binary VA: 0x831500)
// Original: sub_831500
// ----------------------------------------------------------------------------
int sub_831500_ea831500(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  bool v6;
  int *v8;
  uint32_t *v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v10 = (void *)sub_857260(a1, 1, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v11 = (int)(uintptr_t)(sub_837200(a1, v5, a3));
  v6 = false;
  if ( v4 >= 0 )
    v6 = v4 < (unsigned int)dword_20D7EA0;
  if ( v10 != nullptr && v6 )
  {
    (*(void (**)(uint32_t *))(*(uint32_t *)v10 + 52))(v12);
    if ( byte_20D2430 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2430) != 0 )
    {
      sub_7D1280(&dword_20D2438);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2430);
      __cxa_atexit((void (*)(void *))sub_789DF0, &dword_20D2438, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D243C == 0 )
      v8 = (int *)(&dword_20D2438);
    v9 = sub_78A970((int)(uintptr_t)(v8), v4, v12, 1, 1u);
    if ( v9 != nullptr && v11 >= 0 )
      v9[31] = v11;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_8316B0_ea8316b0  (binary VA: 0x8316b0)
// Original: sub_8316B0
// ----------------------------------------------------------------------------
int sub_8316B0_ea8316b0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  int v6;
  int v7;
  int v9;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v9 = (int)(uintptr_t)(sub_837200(a1, v5, a3));
  v7 = sub_8F0680(v6);
  if ( v7 != 0 )
    sub_8F3C20(v7, v4, v9);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_831770_ea831770  (binary VA: 0x831770)
// Original: sub_831770
// ----------------------------------------------------------------------------
int * sub_831770_ea831770(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  int *result;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef int *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef void (*_g4_t_v16)(int, int, uint8_t *);
  typedef int _g4_t_v17[2];
  typedef uint8_t _g4_t_v18[4];
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v18)) > _g4_s4 ? (32u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v19)) > _g4_s5 ? (36u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v20)) > _g4_s6 ? (40u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  result = (int *)sub_837200(a1, v5, a3);
  v8 = result;
  if ( v4 >= 0 )
  {
    result = (int *)(&dword_20D7EA0);
    if ( v4 < (unsigned int)dword_20D7EA0 )
    {
      if ( a2 != 0 )
      {
        if ( a2 == 1 )
        {
          v12 = sub_8F0680(v7);
          (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(v12 + 1132) + 40))(*(uint32_t *)(v12 + 1132), v4, 0);
        }
        else if ( a2 == 2 )
        {
          v13 = sub_8F0680(v7);
          sub_9227C0(*(uint32_t *)(v13 + 1132), v4, 0);
        }
      }
      else
      {
        v14 = v8;
        sub_AB7AC0((int)(uintptr_t)(v17), *(glf::Self **)(dword_20D7E90 + 276 * v4 + 104));
        v15 = *(uint32_t *)(sub_8F0680(v9) + 1132);
        v16 = *(void (**)(int, int, uint8_t *))(*(uint32_t *)v15 + 44);
        v20 = v17[1];
        g4_std::string::construct_copy(v21, v18);
        v16(v15, v4, v19);
        g4_std::string::Destroy(v21);
        v11 = sub_8F0680(v10);
        if ( v14 == (int *)-1 )
          sub_9227C0(*(uint32_t *)(v11 + 1132), v4, 1);
        else
          (*(void (**)(uint32_t, int, int *))(**(uint32_t **)(v11 + 1132) + 40))(*(uint32_t *)(v11 + 1132), v4, v14);
        g4_std::string::Destroy(v18);
      }
      return (int *)grapher::ActorBase::FireEvent(a1, 3, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_831970_ea831970  (binary VA: 0x831970)
// Original: sub_831970
// ----------------------------------------------------------------------------
int sub_831970_ea831970(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  int v5;
  int v6;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v6 = sub_8F0680(v5);
  if ( v6 != 0 )
  {
    if ( v4 == -1 )
    {
      if ( *(uint32_t *)(v6 + 3388) == 0 )
        sub_91E860(v6, 1);
    }
    else if ( v4 > 0 )
    {
      sub_91EF20(v6, v4);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_831A20_ea831a20  (binary VA: 0x831a20)
// Original: sub_831A20
// ----------------------------------------------------------------------------
int sub_831A20_ea831a20(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  int v6;
  int v7;
  int *v8;
  int v10;
  int v11;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v6 = (int)(uintptr_t)(sub_837200(a1, v5, a3));
  v7 = v6;
  if ( byte_20D34B0 == 0 )
  {
    v11 = v6;
    v10 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0);
    v7 = v11;
    if ( v10 != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      v7 = v11;
    }
  }
  v8 = nullptr;
  if ( byte_20D34C4 == 0 )
    v8 = (int *)(&dword_20D34C0);
  sub_5B80A0((int)(uintptr_t)(v8), v4, v7);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_831B50_ea831b50  (binary VA: 0x831b50)
// Original: sub_831B50
// ----------------------------------------------------------------------------
int sub_831B50_ea831b50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v5;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v5 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  sub_836F40(a1, 1, v5 / 1000 / 60, a3);
  sub_836F40(a1, 2, v5 / 1000 % 60, a3);
  sub_836F40(a1, 3, v5 % 1000, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_831C50_ea831c50  (binary VA: 0x831c50)
// Original: sub_831C50
// ----------------------------------------------------------------------------
int sub_831C50_ea831c50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  grapher::ActorVariable::Self *Variable;
  int v9;
  int *v10;
  uint32_t *v11;
  bool v12;
  int v13;
  uint32_t *v14;
  bool v15;
  int v16;
  int v18;
  uint32_t *v19;
  int v20;
  g4_cxa_guard_t *v21;
  int v22;

  if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
  {
    sub_557B70((int)(uintptr_t)(&unk_20D2460));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
    __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D2464 == 0 )
    v3 = (uint32_t *)(&unk_20D2460);
  if ( sub_557AC0(1) && v3[42] != 0 )
  {
    v4 = sub_857260(a1, 0, a3);
    v5 = v4;
    if ( v4 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v4, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(uintptr_t)(&dword_20D68D0) )
          goto LABEL_13;
        v7 = (int *)v6[1];
        if ( v7 != nullptr )
        {
          while ( v7 != (int *)(uintptr_t)(&dword_20D68D0) )
          {
            v7 = (int *)v7[1];
            if ( v7 == nullptr )
              goto LABEL_12;
          }
          goto LABEL_13;
        }
      }
    }
LABEL_12:
    v5 = 0;
LABEL_13:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    v22 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
    v9 = *(uint32_t *)(v5 + 1320);
    if ( byte_20D34B0 == 0 )
    {
      v20 = *(uint32_t *)(v5 + 1320);
      v18 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0);
      v9 = v20;
      if ( v18 != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
        v9 = v20;
      }
    }
    v10 = nullptr;
    if ( byte_20D34C4 == 0 )
      v10 = (int *)(&dword_20D34C0);
    sub_5B8890((int)(uintptr_t)(v10), v9);
    if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
    {
      sub_557B70((int)(uintptr_t)(&unk_20D2460));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
      __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
    }
    v11 = nullptr;
    if ( byte_20D2464 == 0 )
      v11 = (uint32_t *)(&unk_20D2460);
    v19 = v11;
    v12 = sub_557AC0(1);
    v13 = 0;
    if ( v12 )
      v13 = v19[42];
    sub_5157B0(v13, v22);
    v21 = *(g4_cxa_guard_t **)(v5 + 1320);
    if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
    {
      sub_557B70((int)(uintptr_t)(&unk_20D2460));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
      __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
    }
    v14 = nullptr;
    if ( byte_20D2464 == 0 )
      v14 = (uint32_t *)(&unk_20D2460);
    v15 = sub_557AC0(1);
    v16 = 0;
    if ( v15 )
      v16 = v14[42];
    sub_513F00(v16, (int)(uintptr_t)(v21), v22);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_831FA0_ea831fa0  (binary VA: 0x831fa0)
// Original: sub_831FA0
// ----------------------------------------------------------------------------
int sub_831FA0_ea831fa0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  int v8;
  int v9;
  grapher::ActorVariable::Self *v10;
  int v11;
  uint32_t *v12;
  volatile int32_t *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  int v16;
  float v17; // xmm0_4
  void *v18;
  int v20;
  void *v21;
  typedef int _g4_t_v22;
  typedef volatile int32_t *_g4_t_obj;
  typedef int _g4_t_v24;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef float _g4_t_v30[2];
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef char _g4_t_v39;
  typedef grapher::ActorBase::Self **_g4_t_v40;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_obj)) > _g4_s1 ? (4u + sizeof(_g4_t_obj)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v26)) > _g4_s4 ? (36u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v27)) > _g4_s5 ? (36u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v28)) > _g4_s6 ? (40u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v29)) > _g4_s7 ? (56u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v30)) > _g4_s8 ? (60u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v31)) > _g4_s9 ? (68u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v32)) > _g4_s10 ? (72u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v33)) > _g4_s11 ? (76u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v34)) > _g4_s12 ? (80u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v35)) > _g4_s13 ? (84u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v36)) > _g4_s14 ? (88u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v37)) > _g4_s15 ? (92u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v38)) > _g4_s16 ? (96u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v39)) > _g4_s17 ? (100u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v40)) > _g4_s18 ? (112u + sizeof(_g4_t_v40)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);

  v40 = &a1;
  v3 = a1;
  v4 = a3;
  v5 = sub_857260(a1, 0, a3);
  if ( v5 != 0 )
  {
    v22 = v5;
    (*(void (**)(float *, int))(*(uint32_t *)v5 + 52))(v30, v5);
    v31 = v31 + 10.0;
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v24 = (int)(uintptr_t)(sub_837200(v3, Variable, v4));
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    v8 = (int)(uintptr_t)(sub_837200(v3, v7, v4));
    v32 = v30[0];
    v36 = 1181376512;
    v37 = 1120403456;
    v33 = v30[1];
    v39 = 1;
    v34 = v31;
    v35 = (float)v8;
    v38 = (float)v24;
    v9 = sub_6645E0();
    G4_VCALL<void>(v9, 88);
    v28 = nullptr;
    v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    v26 = (int)(uintptr_t)(sub_837200(v3, v10, v4));
    v11 = v22;
    if ( byte_20D4B60 == 0 )
    {
      v20 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60);
      v11 = v22;
      if ( v20 != 0 )
      {
        sub_7B3590(v21, &dword_20D4B80);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
        __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
        v11 = v22;
      }
    }
    v12 = nullptr;
    if ( byte_20D4B84 == 0 )
      v12 = &dword_20D4B80;
    sub_7B30D0(&v29, (int)(uintptr_t)(v12), v26, v30, v11, &v28, 0);
    if ( v29 != 0 )
      sub_5459F0((int)(uintptr_t)(&v29), v29 + 4);
    v29 = 0;
    if ( v28 != nullptr )
    {
      v13 = (volatile int32_t *)((uint32_t *)((char *)v28 + *(uint32_t *)(*v28 - 16)));
      if ( __sync_fetch_and_add(v13 + 1, 0xFFFFFFFF) == 1 )
      {
        obj = v13;
        G4_VCALL<void>(v13, 8);
        G4_VCALL<void>(obj, 4);
      }
    }
    v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
    v27 = (float)(int)(uintptr_t)(sub_837200(v3, v14, v4));
    v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v16 = (int)(uintptr_t)(sub_837200(v3, v15, v4));
    v17 = (float)v16;
    if ( byte_20D4D58 == 0 )
    {
      v25 = (float)v16;
      v17 = (float)v16;
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D58) != 0 )
      {
        sub_8082D0((int)(uintptr_t)(&unk_20D4D60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D58);
        __cxa_atexit((void (*)(void *))sub_7F4170, &unk_20D4D60, &unk_20D1280);
        v17 = v25;
      }
    }
    v18 = nullptr;
    if ( byte_20D4D64 == 0 )
      v18 = &unk_20D4D60;
    sub_808430((int)(uintptr_t)(v18), v30, v27, 0.0, v17, nullptr, 360, 0, 0, nullptr);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
}

// ----------------------------------------------------------------------------
// Function: sub_832340_ea832340  (binary VA: 0x832340)
// Original: sub_832340
// ----------------------------------------------------------------------------
int sub_832340_ea832340(long double a1, grapher::ActorBase::Self *a2, unsigned int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  bool v21;
  int *v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  int *v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int *v33;
  int *v34;
  void *lpdso_handle;
  uint32_t *v36;

  if ( a3 <= 2 && byte_1C83210[a3] != 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
    v6 = (int)(uintptr_t)(sub_837200(a2, Variable, a4));
    if ( v6 == 0 )
      v6 = -1;
    byte_20C15B0 = 1;
    v36 = (uint32_t *)sub_8F0680(v5);
    if ( G4_VCALL<int>(v36, 456) != 0 )
    {
      v8 = v36[468];
      v9 = v36[469];
      if ( (v8 & 0x100) != 0 && v8 >= 0 && (v9 & 1) == 0 && (v9 & 4) == 0 )
      {
        v26 = sub_8F0680(v7);
        if ( *(uint8_t *)((*(int (**)(int))(*(uint32_t *)v26 + 456))(v26) + 2073) != 0 )
        {
          if ( v6 < 0 )
          {
            if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
            {
              sub_ADB4E0(&dword_20D4AC0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
              __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
            }
            v34 = nullptr;
            lpdso_handle = nullptr;
            if ( byte_20D4AC4 == 0 )
              v34 = (int *)(&dword_20D4AC0);
            sub_AC41A0(a1, (int)(uintptr_t)(v34), -1);
          }
          else
          {
            if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
            {
              sub_ADB4E0(&dword_20D4AC0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
              __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
            }
            v27 = nullptr;
            lpdso_handle = nullptr;
            if ( byte_20D4AC4 == 0 )
              v27 = (int *)(&dword_20D4AC0);
            sub_AC41A0(a1, (int)(uintptr_t)(v27), v6);
            if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
            {
              sub_82DC00();
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
              __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
            }
            v28 = nullptr;
            if ( byte_20D49A8 == 0 )
              v28 = (int *)(&dword_20D49A0);
            v29 = *(uint32_t *)(v28[16] + 4);
            if ( v29 != 0 )
              G4_VCALL<void>(v29, 40, "dataIndex", (float)v6, "RadioAnimated_mc.Radio_mc", 0);
          }
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DC00();
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v30 = nullptr;
          if ( byte_20D49A8 == 0 )
            v30 = (int *)(&dword_20D49A0);
          v31 = v30[3];
          if ( v31 != 0 )
          {
            v32 = *(uint32_t *)(v31 + 152);
            if ( v32 != 0 )
              G4_VCALL<void>(v32, 16, 0, lpdso_handle);
          }
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DC00();
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v33 = nullptr;
          if ( byte_20D49A8 == 0 )
            v33 = (int *)(&dword_20D49A0);
          sub_82A360(v33, *(uint32_t *)(v33[3] + 152), 1, 0);
        }
      }
    }
  }
  else
  {
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v11 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v11 = (int *)(&dword_20D4AC0);
    sub_AB5090(a1, (int)(uintptr_t)(v11));
    byte_20C15B0 = 0;
    v13 = (uint32_t *)sub_8F0680(v12);
    if ( G4_VCALL<int>(v13, 456) != 0 )
    {
      v14 = v13[468];
      v15 = v13[469];
      if ( (v14 & 0x100) != 0 && v14 >= 0 && (v15 & 1) == 0 && (v15 & 4) == 0 )
      {
        if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
        {
          sub_ADB4E0(&dword_20D4AC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
          __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
        }
        v16 = nullptr;
        if ( byte_20D4AC4 == 0 )
          v16 = (int *)(&dword_20D4AC0);
        v17 = sub_AB5060((int)(uintptr_t)(v16));
        v19 = sub_8F0680(v18);
        v20 = G4_VCALL<int>(v19, 456);
        v21 = byte_20D4980 == 0;
        *(uint32_t *)(v20 + 2064) = v17;
        if ( v21 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DC00();
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v22 = nullptr;
        if ( byte_20D49A8 == 0 )
          v22 = (int *)(&dword_20D49A0);
        sub_82A360(v22, *(uint32_t *)(v22[3] + 152), 0, 0);
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DC00();
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v23 = nullptr;
        if ( byte_20D49A8 == 0 )
          v23 = (int *)(&dword_20D49A0);
        v24 = v23[3];
        if ( v24 != 0 )
        {
          v25 = *(uint32_t *)(v24 + 152);
          if ( v25 != 0 )
            G4_VCALL<void>(v25, 16, 1);
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_8329E0_ea8329e0  (binary VA: 0x8329e0)
// Original: sub_8329E0
// ----------------------------------------------------------------------------
int sub_8329E0_ea8329e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  int v5;
  int v6;

  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
    v6 = sub_8F0680(v5);
    sub_90AA60(v6, v4);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_832A70  (binary VA: 0x832a70)
// Original: sub_832A70
// ----------------------------------------------------------------------------
int sub_832A70(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  int *v5;
  int v6;
  int v7;
  uint8_t *v8;
  int *v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int v18;
  void (*v19)(uint8_t *, int);

  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
    goto LABEL_3;
  }
  if ( a2 != 1 )
  {
LABEL_23:
    v4 = -1;
    if ( byte_20D34B0 != 0 )
      goto LABEL_4;
    goto LABEL_24;
  }
  v13 = sub_857260(a1, 1, a3);
  v14 = v13;
  v4 = -1;
  if ( v13 != 0 )
  {
    v15 = (int *)G4_VCALL<int>(v13, 16);
    if ( v15 == nullptr )
      goto LABEL_23;
    while ( v15 != (int *)(uintptr_t)(&dword_20D68D0) )
    {
      v15 = (int *)v15[1];
      if ( v15 == nullptr )
        goto LABEL_23;
    }
    if ( v14 != *(uint32_t *)(sub_8F0680(v16) + 5004) )
      goto LABEL_23;
    v4 = *(uint32_t *)(v14 + 1320);
  }
LABEL_3:
  if ( byte_20D34B0 == 0 )
  {
LABEL_24:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
    }
  }
LABEL_4:
  v5 = nullptr;
  if ( byte_20D34C4 == 0 )
    v5 = (int *)(&dword_20D34C0);
  v6 = sub_5B5800((int)(uintptr_t)(v5), v4);
  v8 = (uint8_t *)v6;
  if ( v6 != 0 )
  {
    if ( *(uint8_t *)(v6 + 64) != 0 )
    {
      v9 = (int *)(**(int (***)(int))v6)(v6);
      if ( v9 != nullptr )
      {
        if ( v9 == (int *)(uintptr_t)(&dword_20D6F78) )
        {
LABEL_16:
          if ( v8[62] != 0 )
            sub_8F7750(v8);
          goto LABEL_18;
        }
        while ( 1 )
        {
          v9 = (int *)v9[1];
          if ( v9 == nullptr )
            break;
          if ( v9 == (int *)(uintptr_t)(&dword_20D6F78) )
            goto LABEL_16;
        }
      }
    }
    v19 = *(void (**)(uint8_t *, int))(*(uint32_t *)v8 + 48);
    v10 = G4_VCALL<int>(v8, 44) - 1;
    if ( v10 < 0 )
      v10 = 0;
    v19(v8, v10);
    goto LABEL_16;
  }
LABEL_18:
  if ( v4 != -1 && v4 == *(uint32_t *)(sub_8F0680(v7) + 5000) )
  {
    v17 = sub_8F0680(v11);
    sub_5F76C0((uint32_t *)(v17 + 5004), 0);
    *(uint32_t *)(sub_8F0680(v18) + 5000) = -1;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_832CA0_ea832ca0  (binary VA: 0x832ca0)
// Original: sub_832CA0
// ----------------------------------------------------------------------------
int sub_832CA0_ea832ca0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v5;
  void *v6;
  int v7;
  void *v8;
  g4_cxa_guard_t *v9;

  if ( a2 == 1 )
  {
    if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    byte_20D5570 = 1;
  }
  else if ( a2 <= 1 )
  {
    if ( a2 == 0 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      v9 = (g4_cxa_guard_t *)sub_837200(a1, Variable, a3);
      v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
      v6 = (void *)sub_837200(a1, v5, a3);
      if ( byte_20D5530 == 0 )
      {
        v8 = v6;
        v7 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530);
        v6 = v8;
        if ( v7 != 0 )
        {
          sub_902F90(&dword_20D5540);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
          __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
          v6 = v8;
        }
      }
      sub_8EB600(&dword_20D5540, v6, v9);
    }
  }
  else if ( a2 == 2 )
  {
    if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    byte_20D5570 = 0;
  }
  else if ( a2 == 3 )
  {
    if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    sub_9044C0(&dword_20D5540);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_832F30_ea832f30  (binary VA: 0x832f30)
// Original: sub_832F30
// ----------------------------------------------------------------------------
void sub_832F30_ea832f30(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  void **v4;
  void *v5;
  int *v6;
  int v7;
  void **v8;
  void **v9;
  void **i;
  uint32_t *v11;
  grapher::ActorVariable::Self *v12;
  uint32_t *v13;
  void **v14;
  void **v15;
  typedef void *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef void (*_g4_t_v19)(char *);
  typedef grapher::ActorBase::Self *_g4_t_v20;
  typedef grapher::ActorContext::Self *_g4_t_v21;
  typedef float _g4_t_v22;
  typedef void *_g4_t_v23[4];
  typedef void *_g4_t_v24[2];
  typedef float _g4_t_v25[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v18)) > _g4_s2 ? (0u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v19)) > _g4_s3 ? (4u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v20)) > _g4_s4 ? (8u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v21)) > _g4_s5 ? (12u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v23)) > _g4_s7 ? (28u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v24)) > _g4_s8 ? (44u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v25)) > _g4_s9 ? (52u + sizeof(_g4_t_v25)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);

  LODWORD(v25[8]) = (uint32_t)(uintptr_t)(&a1);
  v20 = a1;
  v21 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v23[0] = v23;
  v23[1] = v23;
  v24[0] = v24;
  v24[1] = v24;
  v22 = (float)(int)(uintptr_t)(sub_837200(v20, Variable, v21)) * 0.2777778f;
  sub_8560A0(v20, 0, (int)(uintptr_t)(v24), (int)(uintptr_t)(v21), 0x7FFFFFFF);
  v4 = (void **)v24[0];
  if ( v24[0] != v24 )
  {
    do
    {
      v5 = v4[2];
      if ( v5 != nullptr )
      {
        v16 = v4[2];
        v6 = (int *)(*(int (**)(void *))(*(uint32_t *)v5 + 16))(v16);
        if ( v6 != nullptr )
        {
          while ( v6 != (int *)(uintptr_t)(&dword_20D68D0) )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              goto LABEL_10;
          }
          v7 = opNew(0xCu);
          if ( v7 != -8 )
            *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v16);
          sub_1901920(v7, v23);
        }
      }
LABEL_10:
      v4 = (void **)*v4;
    }
    while ( v4 != v24 );
    v8 = (void **)v24[0];
    if ( v24[0] != v24 )
    {
      while ( 1 )
      {
        v9 = (void **)*v8;
        opDelete(v8);
        if ( v9 == v24 )
          break;
        v8 = v9;
      }
    }
  }
  for ( i = (void **)v23[0]; i != v23; i = (void **)*i )
  {
    v11 = (uint32_t *)(i[2]);
    if ( v11 != nullptr )
    {
      v11[254] &= ~0x20000000u;
      v17 = v11;
      sub_86F550(v11, LODWORD(v22), 0);
      v17[254] |= 0x20000000u;
      if ( *((uint32_t *)i[2] + 195) != 0 )
      {
        v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v20, 2);
        if ( (uint8_t)sub_837730(v20, v12, v21) != 0 )
        {
          v13 = (uint32_t *)(i[2]);
          v19 = *(void (**)(char *))(*(uint32_t *)(v13[195] + *(uint32_t *)(*(uint32_t *)v13[195] - 12)) + 96);
          v18 = (char *)v13[195];
          (*(void (**)(float *, uint32_t *))(*v13 + 296))(v25, v13);
          v25[4] = (float)(v25[1] * 27.777779f) * v22;
          v25[5] = (float)(v25[2] * 27.777779f) * v22;
          v25[3] = (float)(27.777779f * v25[0]) * v22;
          v19(&v18[*(uint32_t *)(*(uint32_t *)v18 - 12)]);
        }
      }
    }
  }
  grapher::ActorBase::FireEvent(v20, 1, v21);
  v14 = (void **)v23[0];
  if ( v23[0] != v23 )
  {
    while ( 1 )
    {
      v15 = (void **)*v14;
      opDelete(v14);
      if ( v15 == v23 )
        break;
      v14 = v15;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8331C0_ea8331c0  (binary VA: 0x8331c0)
// Original: sub_8331C0
// ----------------------------------------------------------------------------
int sub_8331C0_ea8331c0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  int v5;
  grapher::ActorVariable::Self *v6;
  int v7;
  uint8_t v8; // si
  int i;
  int *v10;
  int *v11;
  int v13;
  int v14;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v14 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v5 = (int)(uintptr_t)(sub_837200(a1, v4, a3));
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v8 = sub_837730(a1, v6, a3);
  if ( v5 == 7 )
  {
    v13 = sub_8F0680(v7);
    G4_VCALL<void>(v13, 744, v8);
  }
  if ( v8 == 0 && v14 > 0 )
  {
    for ( i = 0; i != v14; ++i )
    {
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_194B4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      }
      v10 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_194C4)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v10 = (int *)(&dword_20D34C0);
      sub_5B6AA0(v10, v5);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_194B4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      }
      v11 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_194C4)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v11 = (int *)(&dword_20D34C0);
      sub_5B6F90(v11, v5);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_833400_ea833400  (binary VA: 0x833400)
// Original: sub_833400
// ----------------------------------------------------------------------------
void sub_833400_ea833400(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  uint32_t *v6;
  int v7;
  int *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *i;
  uint8_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17;
  typedef uint8_t _g4_t_v18;
  typedef uint8_t _g4_t_v19;
  typedef uint32_t _g4_t_v20[4];
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (5u + sizeof(_g4_t_v17)) > _g4_s1 ? (5u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (6u + sizeof(_g4_t_v18)) > _g4_s2 ? (6u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (7u + sizeof(_g4_t_v19)) > _g4_s3 ? (7u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 5u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 6u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 7u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v19 = sub_837730(a1, Variable, a3);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v18 = sub_837730(a1, v4, a3);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v20[0] = (uint32_t)(uintptr_t)(v20);
  v20[1] = (uint32_t)(uintptr_t)(v20);
  v21[0] = (uint32_t)(uintptr_t)(v21);
  v21[1] = (uint32_t)(uintptr_t)(v21);
  v17 = sub_837730(a1, v5, a3);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v21), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v6 = (uint32_t *)v21[0];
  if ( (uint32_t *)v21[0] != v21 )
  {
    do
    {
      v7 = v6[2];
      if ( v7 != 0 )
      {
        v16 = v6[2];
        v8 = (int *)(*(int (**)(int))(*(uint32_t *)v7 + 16))(v16);
        if ( v8 != nullptr )
        {
          while ( v8 != (int *)(uintptr_t)(&dword_20D68D0) )
          {
            v8 = (int *)v8[1];
            if ( v8 == nullptr )
              goto LABEL_10;
          }
          v9 = opNew(0xCu);
          if ( v9 != -8 )
            *(uint32_t *)(v9 + 8) = v16;
          sub_1901920(v9, v20);
        }
      }
LABEL_10:
      v6 = (uint32_t *)*v6;
    }
    while ( v6 != v21 );
    v10 = (uint32_t *)v21[0];
    if ( (uint32_t *)v21[0] != v21 )
    {
      while ( 1 )
      {
        v11 = (uint32_t *)*v10;
        opDelete(v10);
        if ( v11 == v21 )
          break;
        v10 = v11;
      }
    }
  }
  for ( i = (uint32_t *)v20[0]; i != v20; i = (uint32_t *)*i )
  {
    if ( i[2] != 0 && (uint8_t)sub_C170A0(i[2]) != 0 )
    {
      v13 = (uint8_t *)i[2];
      if ( v13[1006] == 0 )
        G4_VCALL<void>(v13, 640, v19, v18, v17);
    }
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v14 = (uint32_t *)v20[0];
  if ( (uint32_t *)v20[0] != v20 )
  {
    while ( 1 )
    {
      v15 = (uint32_t *)*v14;
      opDelete(v14);
      if ( v15 == v20 )
        break;
      v14 = v15;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_833630_ea833630  (binary VA: 0x833630)
// Original: sub_833630
// ----------------------------------------------------------------------------
int sub_833630_ea833630(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int i;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  grapher::ActorVariable::Self *Variable;
  int v10;
  int v11;
  int *v13;
  int v14;
  uint16_t *v15;
  unsigned int v16;
  uint16_t *v17;

  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    dword_20D49A0 = (int)(uintptr_t)(&off_205BEE8);
    byte_20D49A8 = 0;
    dword_20D49A4 = (int)((uint32_t)(uintptr_t)&off_205BEFC);
    dword_20D49BC = (int)(uintptr_t)(&dword_20D49B4);
    dword_20D49C0 = (int)(uintptr_t)(&dword_20D49B4);
    dword_20D49B4 = 0;
    dword_20D49B8 = 0;
    dword_20D49C4 = 0;
    dword_20D49C8 = 0;
    dword_20D49CC = 0;
    sub_5F76C0(&dword_20D49CC, 0);
    dword_20D49D0 = 0;
    dword_20D49D4 = 0;
    dword_20D49D8 = 0;
    dword_20D49DC = 0;
    dword_20D49E0 = 0;
    byte_20D49E4 = 0;
    byte_20D49E5 = 0;
    byte_20D49E6 = 0;
    byte_20D49E7 = 0;
    byte_20D49E8 = 0;
    byte_20D49E9 = 0;
    byte_20D49EA = 0;
    byte_20D49EB = 0;
    v14 = sub_4EBC30(0xB8u, 1);
    dword_20D49AC = v14;
    v15 = (uint16_t *)v14;
    v16 = 184;
    if ( (v14 & 1) != 0 )
    {
      *(uint8_t *)v14 = 0;
      v15 = (uint16_t *)(v14 + 1);
      LOBYTE(v16) = -73;
    }
    if ( ((uint8_t)(uintptr_t)(v15) & 2) != 0 )
    {
      *v15 = 0;
      v16 -= 2;
      ++v15;
    }
    memset(v15, 0, 4 * (v16 >> 2));
    v17 = &v15[2 * (v16 >> 2)];
    if ( (v16 & 2) != 0 )
      *v17++ = 0;
    if ( (v16 & 1) != 0 )
      *(uint8_t *)v17 = 0;
    sub_5F76C0(&dword_20D49CC, 0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49CC - 11, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D49A8 == 0 )
    v3 = (int *)(&dword_20D49A0);
  if ( *((uint8_t *)v3 + 71) != 0 )
  {
    for ( i = 0; i != 184; i += 4 )
    {
      v5 = *(uint32_t *)(v3[3] + i);
      if ( v5 != 0 )
        *(uint32_t *)(v5 + 8) &= ~2u;
    }
    v6 = (int *)v3[6];
    if ( v6 != nullptr )
    {
      v7 = v3[12];
      v8 = v3 + 5;
      do
      {
        while ( v6[4] >= v7 )
        {
          v8 = v6;
          v6 = (int *)v6[2];
          if ( v6 == nullptr )
            goto LABEL_15;
        }
        v6 = (int *)v6[3];
      }
      while ( v6 != nullptr );
LABEL_15:
      if ( v8 != v3 + 5 && v7 >= v8[4] )
        sub_82CF90((int)(uintptr_t)(v3), (char)(uintptr_t)(v6));
    }
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( (uint8_t)sub_837730(a1, Variable, a3) != 0 )
  {
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v13 = nullptr;
    if ( byte_20D5DAC == 0 )
      v13 = (int *)(&dword_20D5DA8);
    *((uint32_t *)a1 + 13) = sub_99C000(v13, 4);
  }
  v11 = sub_8F0680(v10);
  G4_VCALL<void>(v11, 76);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_8339E0_ea8339e0  (binary VA: 0x8339e0)
// Original: sub_8339E0
// ----------------------------------------------------------------------------
char sub_8339E0_ea8339e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int *v4;
  unsigned int v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  int *v9;
  int *v10;
  int v12;
  char v13;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int *)sub_837200(a1, Variable, a3);
  v5 = (unsigned int)(uintptr_t)(v4);
  if ( (int)(uintptr_t)(v4) < 0 )
    return (char)(uintptr_t)(v4);
  v4 = (int *)(&dword_20D93A0);
  if ( v5 >= dword_20D93A0 )
    return (char)(uintptr_t)(v4);
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v13 = sub_837730(a1, v6, a3);
  v12 = sub_62EDB0();
  LOBYTE(v4) = sub_62ED90();
  if ( (uint8_t)(uintptr_t)(v4) != 0 )
    return (char)(uintptr_t)(v4);
  if ( v13 != 0 && *((uint32_t *)a1 + 13) != 0 && (uint8_t)sub_977A40(*((uint32_t *)a1 + 13)) == 0 || v12 == v5 )
  {
    if ( *((uint32_t *)a1 + 13) != 0 )
    {
      LOBYTE(v4) = sub_977A60(*((uint32_t *)a1 + 13));
      if ( (uint8_t)(uintptr_t)(v4) == 0 )
        return (char)(uintptr_t)(v4);
    }
    LOBYTE(v4) = sub_62F450(1);
    if ( (uint8_t)(uintptr_t)(v4) == 0 || v12 != v5 )
      return (char)(uintptr_t)(v4);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    if ( (uint8_t)sub_837730(a1, v8, a3) != 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DC00();
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v10 = nullptr;
      if ( byte_20D49A8 == 0 )
        v10 = (int *)(&dword_20D49A0);
      if ( *((uint8_t *)v10 + 68) == 0 )
        sub_82D0E0((int)(uintptr_t)(v10), 0);
    }
    grapher::ActorBase::FireEvent(a1, 2, a3);
LABEL_17:
    LOBYTE(v4) = G4_VCALL<int>(a1, 28, a3);
    return (char)(uintptr_t)(v4);
  }
  sub_64CAC0(v5);
  sub_64C700();
  if ( **(uint8_t **)(dword_20D9390 + 96 * v5 + 20) != 0 )
    goto LABEL_17;
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  LOBYTE(v4) = sub_837730(a1, v7, a3);
  if ( (uint8_t)(uintptr_t)(v4) != 0 )
  {
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v9 = nullptr;
    if ( byte_20D5DAC == 0 )
      v9 = (int *)(&dword_20D5DA8);
    LOBYTE(v4) = sub_99C110(v9, 4);
  }
  return (char)(uintptr_t)(v4);
}

// ----------------------------------------------------------------------------
// Function: sub_833C80_ea833c80  (binary VA: 0x833c80)
// Original: sub_833C80
// ----------------------------------------------------------------------------
int sub_833C80_ea833c80(grapher::ActorBase::Self *a1)
{
  char *v1;
  int *v2;
  int v4;
  char v5;
  typedef char *_g4_t_obj;
  typedef uint32_t _g4_t_v7[4];
  typedef uint32_t _g4_t_v8[6];
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef grapher::ActorBase::Self **_g4_t_v14;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_obj)) > _g4_s0 ? (8u + sizeof(_g4_t_obj)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v9)) > _g4_s3 ? (56u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (57u + sizeof(_g4_t_v10)) > _g4_s4 ? (57u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v11)) > _g4_s5 ? (60u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v12)) > _g4_s6 ? (64u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v13)) > _g4_s7 ? (68u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v14)) > _g4_s8 ? (88u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 56u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 57u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 88u);

  v14 = &a1;
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v7);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  if ( byte_20D4AC4 == 0 )
  {
    memset(v8, 0, 12);
    v8[3] = 1028443341;
    v8[4] = 1065353216;
    v8[5] = 1065353216;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v1 = (char *)v7[0];
    v2 = (int *)(&dword_20D4AC0);
    if ( byte_20D4AB0 == 0 )
    {
      obj = (char *)v7[0];
      v4 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
      v1 = obj;
      v5 = byte_20D4AC4;
      if ( v4 != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
        v5 = byte_20D4AC4;
        v1 = obj;
      }
      v2 = nullptr;
      if ( v5 == 0 )
        v2 = (int *)(&dword_20D4AC0);
    }
    sub_AC2DB0((int)(uintptr_t)(v2), 2, v1, (int)(uintptr_t)(v8));
  }
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_833E50_ea833e50  (binary VA: 0x833e50)
// Original: sub_833E50
// ----------------------------------------------------------------------------
int sub_833E50_ea833e50(grapher::ActorBase::Self *a1, char *a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  glf::Self *v5;
  int *v6;
  int v7;
  char *v8;
  int *v9;
  int v10;
  typedef glf::Self *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_obj;
  typedef grapher::ActorContext::Self *_g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef uint8_t _g4_t_v16[40];
  typedef grapher::ActorBase::Self **_g4_t_v17;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v12)) > _g4_s1 ? (0u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_obj)) > _g4_s2 ? (4u + sizeof(_g4_t_obj)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v17)) > _g4_s6 ? (72u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);

  v17 = &a1;
  v3 = a1;
  obj = a2;
  v14 = a3;
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v15);
  if ( obj != nullptr )
  {
    if ( obj == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
    {
      v8 = (char *)v15[0];
      if ( byte_20D4AB0 == 0 )
      {
        v12 = (char *)v15[0];
        v10 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
        v8 = v12;
        if ( v10 != 0 )
        {
          sub_ADB4E0(&dword_20D4AC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
          __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
          v8 = v12;
        }
      }
      v9 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v9 = (int *)(&dword_20D4AC0);
      sub_AC3280((int)(uintptr_t)(v9), 2, v8, 1056964608);
    }
  }
  else
  {
    v5 = (glf::Self *)v15[0];
    if ( byte_20D4AB0 == 0 )
    {
      v11 = (glf::Self *)v15[0];
      v7 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
      v5 = v11;
      if ( v7 != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
        v5 = v11;
      }
    }
    v6 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v6 = (int *)(&dword_20D4AC0);
    sub_AC4FE0((vox::EmitterHandle::Self *)v16, (int)(uintptr_t)(v6), v5, 1028443341);
    vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v16);
  }
  grapher::ActorBase::FireEvent(v3, 2, v14);
  return ((g4_std::string::Destroy(v15)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_834050_ea834050  (binary VA: 0x834050)
// Original: sub_834050
// ----------------------------------------------------------------------------
int sub_834050_ea834050(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorBase::Self *v4;
  grapher::ActorContext::Self *v5;
  const char *v6;
  int v7;
  int *v8;
  size_t v9;
  typedef const char *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[4];
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v12)) > _g4_s2 ? (4u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v13)) > _g4_s3 ? (30u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v15)) > _g4_s5 ? (48u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v16)) > _g4_s6 ? (52u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v17)) > _g4_s7 ? (56u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v18)) > _g4_s8 ? (60u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  v18[3] = (int)(uintptr_t)(&a1);
  result = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 != 0 )
  {
    if ( a2 == 2 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  else
  {
    grapher::ActorBase::GetVariable(a1, 0);
    sub_837C70(v16);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "END_", (int)(uintptr_t)(&v13));
    g4_std::string::construct_copy(v15, &v17);
    g4_std::string::append_str(v15, v16);
    g4_std::string::Destroy(&v17);
    g4_std::string::Destroy(v16);
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    if ( (uint8_t)grapher::ActorManager::IsActorRegisteredForManualEvent(&unk_20D5B60, v15, v4, 2) == 0 )
    {
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, v15, v4, 2);
    }
    grapher::ActorBase::GetVariable(v4, 0);
    sub_837C70(v14);
    if ( g4_std::string::compare((int)(uintptr_t)(v14), "ScriptedBehaviorScript") == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Subject", (int)(uintptr_t)(&v13) + 1);
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v8 = nullptr;
      if ( byte_20D4A64 == 0 )
        v8 = (int *)(&dword_20D4A60);
      v11 = (void *)sub_5B44E0((int)(uintptr_t)(v8), (int)(uintptr_t)(v18), (unsigned int)(uintptr_t)(v5));
      g4_std::string::Destroy(v18);
      v12 = *((char **)v11 + 792);
      v9 = strlen(v12);
      g4_std_compat::string_assign((int)(uintptr_t)(v14), v12, v9);
    }
    v6 = (const char *)v14[0];
    if ( byte_20D5B50 == 0 )
    {
      v10 = (const char *)v14[0];
      v7 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
      v6 = v10;
      if ( v7 != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        v6 = v10;
      }
    }
    grapher::ActorManager::FireManualEvent((grapher::ActorManager::Self *)&unk_20D5B60, v6, v5);
    grapher::ActorBase::FireEvent(v4, 1, v5);
    g4_std::string::Destroy(v14);
    return ((g4_std::string::Destroy(v15)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_834450_ea834450  (binary VA: 0x834450)
// Original: sub_834450
// ----------------------------------------------------------------------------
int sub_834450_ea834450(grapher::ActorBase::Self *a1)
{
  typedef uint16_t _g4_t_v2[3];
  typedef int _g4_t_v3;
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (6u + sizeof(_g4_t_v2)) > _g4_s0 ? (6u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 6u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "END_", (int)(uintptr_t)(v2));
  g4_std::string::construct_copy(&v2[1], &v3);
  g4_std::string::append_str(&v2[1], v4);
  g4_std::string::Destroy(&v3);
  g4_std::string::Destroy(v4);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  if ( (uint8_t)grapher::ActorManager::IsActorRegisteredForManualEvent(&unk_20D5B60, &v2[1], a1, 2) != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::DeregisterActorForManualEvent(&unk_20D5B60, &v2[1]);
  }
  if ( dword_20DA2A0 == 0 )
  {
    grapher::ActorBase::GetVariable(a1, 0);
    sub_837C70(&v5);
    v6 = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(&v6, *(uint32_t *)(v5 - 12) + 10);
    g4_std::string::append((int)(uintptr_t)(&v6), "COMPLETED_", 0xAu);
    g4_std::string::append_str(&v6, &v5);
    g4_std::string::assign_str(&v2[1], &v6);
    g4_std::string::Destroy(&v6);
    g4_std::string::Destroy(&v5);
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    if ( (uint8_t)grapher::ActorManager::IsActorRegisteredForManualEvent(&unk_20D5B60, &v2[1], a1, 2) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), *(char **)&v2[1], (int)(uintptr_t)(v2) + 1);
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::DeregisterActorForManualEvent(&unk_20D5B60, v7);
      g4_std::string::Destroy(v7);
    }
  }
  return ((g4_std::string::Destroy(&v2[1])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8347D0_ea8347d0  (binary VA: 0x8347d0)
// Original: sub_8347D0
// ----------------------------------------------------------------------------
int sub_8347D0_ea8347d0(grapher::ActorBase::Self *a1)
{
  typedef uint8_t _g4_t_v2[7];
  typedef int _g4_t_v3;
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (1u + sizeof(_g4_t_v2)) > _g4_s0 ? (1u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v5)) > _g4_s3 ? (16u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v6)) > _g4_s4 ? (20u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v7)) > _g4_s5 ? (24u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v8)) > _g4_s6 ? (28u + sizeof(_g4_t_v8)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 1u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "EXEC_", (int)(uintptr_t)(v2));
  g4_std::string::construct_copy(&v2[3], &v3);
  g4_std::string::append_str(&v2[3], v4);
  g4_std::string::Destroy(&v3);
  g4_std::string::Destroy(v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), *(char **)&v2[3], (int)(uintptr_t)(&v2[1]));
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, &v5, a1, 0);
  g4_std::string::Destroy(&v5);
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(&v6);
  v7 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(&v7, *(uint32_t *)(v6 - 12) + 10);
  g4_std::string::append((int)(uintptr_t)(&v7), "COMPLETED_", 0xAu);
  g4_std::string::append_str(&v7, &v6);
  g4_std::string::assign_str(&v2[3], &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), *(char **)&v2[3], (int)(uintptr_t)(&v2[2]));
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, v8, a1, 2);
  g4_std::string::Destroy(v8);
  return ((g4_std::string::Destroy(&v2[3])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_834A80_ea834a80  (binary VA: 0x834a80)
// Original: sub_834A80
// ----------------------------------------------------------------------------
int sub_834A80_ea834a80(grapher::ActorBase::Self *a1, char *a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  char v7;
  int *v8;
  char *v9;
  int *v10;
  int v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_obj;
  typedef g4_cxa_guard_t *_g4_t_v14;
  typedef uint32_t _g4_t_v15[2];
  typedef uint8_t _g4_t_v16[32];
  typedef int _g4_t_v17[6];
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef grapher::ActorBase::Self **_g4_t_v23;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_obj)) > _g4_s1 ? (4u + sizeof(_g4_t_obj)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v17)) > _g4_s5 ? (56u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v18)) > _g4_s6 ? (80u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (81u + sizeof(_g4_t_v19)) > _g4_s7 ? (81u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v20)) > _g4_s8 ? (84u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v21)) > _g4_s9 ? (88u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v22)) > _g4_s10 ? (92u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v23)) > _g4_s11 ? (104u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 81u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);

  v23 = &a1;
  v3 = a1;
  v4 = a3;
  obj = a2;
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v15);
  if ( obj != nullptr )
  {
    if ( obj == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
    {
      v9 = (char *)v15[0];
      if ( byte_20D4AB0 == 0 )
      {
        v12 = (char *)v15[0];
        v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
        v9 = v12;
        if ( v11 != 0 )
        {
          sub_ADB4E0(&dword_20D4AC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
          __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
          v9 = v12;
        }
      }
      v10 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v10 = (int *)(&dword_20D4AC0);
      sub_AC3280((int)(uintptr_t)(v10), 2, v9, 1065353216);
    }
  }
  else
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    v7 = sub_837730(v3, Variable, v4);
    memset(v17, 0, 12);
    v17[3] = 1028443341;
    v17[4] = 1065353216;
    v17[5] = 1065353216;
    v18 = v7;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v14 = (g4_cxa_guard_t *)v15[0];
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v8 = (int *)(&dword_20D4AC0);
    sub_AC3450((vox::EmitterHandle::Self *)v16, (int)(uintptr_t)(v8), 2, (glf::Self *)v14, v17);
    vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v16);
  }
  grapher::ActorBase::FireEvent(v3, 2, v4);
  return ((g4_std::string::Destroy(v15)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_834CE0_ea834ce0  (binary VA: 0x834ce0)
// Original: sub_834CE0
// ----------------------------------------------------------------------------
void sub_834CE0_ea834ce0(g4_cxa_guard_t *a1, int a2, grapher::ActorContext::Self *a3)
{
  g4_cxa_guard_t *v3;
  int *v4;
  grapher::ActorVariable::Self *Variable;
  void **i;
  int *v7;
  const char *v8;
  int v9;
  char *v10;
  int *v11;
  char *v12;
  char *v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  void **v18;
  int j;
  grapher::ActorVariable::Self *v20;
  char *v21;
  void **v22;
  int v23;
  void **v24;
  char *v25;
  int *v26;
  grapher::ActorVariable::Self *v27;
  int v28;
  void **v29;
  void **v30;
  void **v31;
  void **v32;
  void *v33;
  int v34;
  typedef float _g4_t_v35;
  typedef grapher::ActorManager::Self *_g4_t_v36;
  typedef grapher::ActorManager::Self *_g4_t_v37;
  typedef grapher::ActorManager::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef grapher::ActorContext::Self *_g4_t_v40;
  typedef g4_cxa_guard_t *_g4_t_v41;
  typedef char *_g4_t_needle;
  typedef g4_cxa_guard_t *_g4_t_v43;
  typedef uint8_t _g4_t_v44[5];
  typedef char *_g4_t_v45;
  typedef void *_g4_t_v46[2];
  typedef void *_g4_t_v47[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v36)) > _g4_s1 ? (4u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v37)) > _g4_s2 ? (4u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v38)) > _g4_s3 ? (4u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v39)) > _g4_s4 ? (12u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v40)) > _g4_s5 ? (16u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v41)) > _g4_s6 ? (20u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_needle)) > _g4_s7 ? (24u + sizeof(_g4_t_needle)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v43)) > _g4_s8 ? (28u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (47u + sizeof(_g4_t_v44)) > _g4_s9 ? (47u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v45)) > _g4_s10 ? (52u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v46)) > _g4_s11 ? (56u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v47)) > _g4_s12 ? (64u + sizeof(_g4_t_v47)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_needle &needle = *reinterpret_cast<_g4_t_needle *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 47u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);

  v47[4] = &a1;
  v3 = a1;
  v40 = a3;
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0(&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v39 = v4[14];
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 5);
  *(uint8_t *)(v39 + 48) = sub_837730(v3, Variable, v40);
  v46[0] = v46;
  v46[1] = v46;
  sub_820400(v46, v40);
  v47[0] = v47;
  v47[1] = v47;
  sub_8560A0(v3, 1, v47, v40, 0x7FFFFFFF);
  for ( i = (void **)v47[0]; i != v47; i = (void **)*i )
  {
    v12 = (char *)G4_VCALL<int>(i[2], 44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44[1]), v12, (int)(uintptr_t)(v44));
    GLFUtils::ToLowerCase(&v44[1], 0, -1);
    v36 = *(grapher::ActorManager::Self **)&v44[1];
    v13 = (char *)(strstr(*(const char **)&v44[1], "left"));
    v8 = (const char *)v36;
    if ( v13 != nullptr )
    {
      v14 = G4_VCALL<int>(i[2], 44);
      v15 = (char *)v14;
      if ( byte_20D4A50 == 0 )
      {
        v37 = (grapher::ActorManager::Self *)v14;
        v16 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
        v15 = (char *)v37;
        if ( v16 != 0 )
        {
          sub_5B3AF0(&dword_20D4A60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          v15 = (char *)v37;
        }
      }
      v7 = nullptr;
      if ( byte_20D4A64 == 0 )
        v7 = (int *)(&dword_20D4A60);
      v3[16] = sub_5C8D90((int)(uintptr_t)(v7), v15, 0);
      v8 = *(const char **)&v44[1];
    }
    if ( strstr(v8, "right") != nullptr )
    {
      v9 = G4_VCALL<int>(i[2], 44);
      v10 = (char *)v9;
      if ( byte_20D4A50 == 0 )
      {
        v38 = (grapher::ActorManager::Self *)v9;
        v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
        v10 = (char *)v38;
        if ( v17 != 0 )
        {
          sub_5B3AF0(&dword_20D4A60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          v10 = (char *)v38;
        }
      }
      v11 = nullptr;
      if ( byte_20D4A64 == 0 )
        v11 = (int *)(&dword_20D4A60);
      v3[17] = sub_5C8D90((int)(uintptr_t)(v11), v10, 0);
    }
    g4_std::string::Destroy(&v44[1]);
  }
  sub_66C570(v39, v3[16], v3[17]);
  v18 = (void **)v46[0];
  for ( j = 0; v18 != v46; ++j )
    v18 = (void **)*v18;
  sub_829DB0(v3, j);
  v20 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 4);
  v21 = (char *)sub_837200(v3, v20, v40);
  v22 = (void **)v46[0];
  v23 = 0;
  needle = v21;
  if ( v46[0] != v46 )
  {
    v24 = (void **)v46[0];
    do
    {
      v24 = (void **)*v24;
      ++v23;
    }
    while ( v24 != v46 );
  }
  if ( (v3[14] - v3[13]) >> 2 == v23 && v46[0] != v46 )
  {
    v43 = nullptr;
    v41 = v3;
    do
    {
      v33 = v22[2];
      if ( v33 != nullptr )
      {
        v34 = (*(int (**)(void *))(*(uint32_t *)v33 + 456))(v22[2]);
        if ( v34 != 0 )
        {
          v35 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v34 + 668))(v34);
          sub_67A3E0(v39, v33, *(g4_cxa_guard_t *)((char *)v43 + v41[13]), v35 * 0.2777778f, needle);
        }
      }
      v22 = (void **)*v22;
      ++v43;
    }
    while ( v22 != v46 );
    v3 = v41;
  }
  grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 3);
  sub_837C70(&v45);
  v25 = v45;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0(&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v26 = nullptr;
  if ( byte_20D4A64 == 0 )
    v26 = (int *)(&dword_20D4A60);
  v3[19] = sub_5C8D90((int)(uintptr_t)(v26), v25, 0);
  v27 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 0);
  v28 = dword_20D9030 + 20 * (uintptr_t)sub_837200(v3, v27, v40);
  sub_678930(v39, v3[19], (int)(uintptr_t)(needle), *(char **)(v28 + 8), *(uint32_t *)(v28 + 12), *(char **)(v28 + 16));
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, (grapher::ActorBase::Self *)v3, v40);
  v3[20] = 0;
  v3[21] = 0;
  v3[22] = 0;
  grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)v3, 1, v40);
  g4_std::string::Destroy(&v45);
  v29 = (void **)v47[0];
  if ( v47[0] != v47 )
  {
    while ( 1 )
    {
      v30 = (void **)*v29;
      opDelete(v29);
      if ( v30 == v47 )
        break;
      v29 = v30;
    }
  }
  v31 = (void **)v46[0];
  if ( v46[0] != v46 )
  {
    while ( 1 )
    {
      v32 = (void **)*v31;
      opDelete(v31);
      if ( v32 == v46 )
        break;
      v31 = v32;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_835340_ea835340  (binary VA: 0x835340)
// Original: sub_835340
// ----------------------------------------------------------------------------
int sub_835340_ea835340(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  float v5;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v5 = sub_838060(a1, Variable, a3);
  sub_B9BCD0(dword_20DDDC0, LODWORD(v5));
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_8353C0  (binary VA: 0x8353c0)
// Original: sub_8353C0
// ----------------------------------------------------------------------------
int sub_8353C0(int a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int result;

  v1 = 0;
  v2 = dword_20DDDC0;
  do
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + v1);
    v1 += 4;
    sub_B9CD40(v2, v3);
  }
  while ( v1 != 184 );
  LOWORD(v1) = 0;
  g4_std::Rb_tree_unsigned_int_pair_unsign_f731e4::M_erase(
    a1 + 16,
    *(void **)(a1 + 24));
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = a1 + 20;
  *(uint32_t *)(a1 + 32) = a1 + 20;
  *(uint32_t *)(a1 + 36) = 0;
  do
  {
    v4 = (int *)(*(uint32_t *)(a1 + 12) + v1);
    result = *v4;
    if ( *v4 != 0 )
      result = (*(int (**)(int))(*(uint32_t *)result + 4))(*v4);
    v1 += 4;
    *v4 = 0;
  }
  while ( v1 != 184 );
  *(uint32_t *)(a1 + 40) = 0;
  *(uint8_t *)(a1 + 71) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_835480  (binary VA: 0x835480)
// Original: sub_835480
// ----------------------------------------------------------------------------
int sub_835480(int a1)
{
  return sub_835490(a1 - 4);
}



// ============================================================================
// Address:   0x835490 (size: 119 bytes)
// Symbol:    sub_835490
// Demangled: sub_835490
// ============================================================================
int (**sub_835490(int a1))(int)
{
  uint32_t *v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BEE8);
  *(uint32_t *)(a1 + 4) = ((uint32_t)(uintptr_t)&off_205BEFC);
  v1 = (uint32_t *)(a1 + 48);
  do
    sub_5F76C0(--v1, 0);
  while ( (uint32_t *)(a1 + 44) != v1 );
  g4_std::Rb_tree_unsigned_int_pair_unsign_f731e4::M_erase(
    a1 + 16,
    *(void **)(a1 + 24));
  *(uint8_t *)(a1 + 8) = 1;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_2048CA0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048D88);
  return (int (**)(int))(uintptr_t)(&off_2048D88);
}
// ----------------------------------------------------------------------------
// Function: sub_835510  (binary VA: 0x835510)
// Original: sub_835510
// ----------------------------------------------------------------------------
int sub_835510(int a1)
{
  return ((sub_835520((void *)(a1 - 4))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_835520  (binary VA: 0x835520)
// Original: sub_835520
// ----------------------------------------------------------------------------
void sub_835520(char *a1)
{
  char *v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BEE8);
  *((uint32_t *)a1 + 1) = ((uint32_t)(uintptr_t)&off_205BEFC);
  v1 = a1 + 48;
  do
  {
    v1 -= 4;
    sub_5F76C0(v1, 0);
  }
  while ( a1 + 44 != v1 );
  g4_std::Rb_tree_unsigned_int_pair_unsign_f731e4::M_erase(
    (int)(uintptr_t)(a1 + 16),
    *((void **)a1 + 6));
  a1[8] = 1;
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_2048CA0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048D88);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8355A0  (binary VA: 0x8355a0)
// Original: sub_8355A0
// ----------------------------------------------------------------------------
int sub_8355A0(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  uint32_t *v5;

  result = *(uint32_t *)(a1 + 64);
  if ( result != 0 )
  {
    v2 = 0;
    v3 = dword_20DDDC0;
    do
    {
      v4 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + v2);
      v2 += 4;
      sub_B9CD40(v3, v4);
    }
    while ( v2 != 184 );
    LOWORD(v2) = 0;
    g4_std::Rb_tree_unsigned_int_pair_unsign_f731e4::M_erase(
      a1 + 16,
      *(void **)(a1 + 24));
    *(uint32_t *)(a1 + 24) = 0;
    *(uint32_t *)(a1 + 28) = a1 + 20;
    *(uint32_t *)(a1 + 32) = a1 + 20;
    *(uint32_t *)(a1 + 36) = 0;
    do
    {
      v5 = (uint32_t *)(*(uint32_t *)(a1 + 12) + v2);
      if ( *v5 != 0 )
        G4_VCALL<void>(*v5, 4);
      v2 += 4;
      *v5 = 0;
    }
    while ( v2 != 184 );
    result = *(uint32_t *)(a1 + 64);
    *(uint32_t *)(a1 + 40) = 0;
    *(uint8_t *)(a1 + 71) = 0;
    if ( result != 0 )
      result = G4_VCALL<int>(result, 4);
    *(uint32_t *)(a1 + 64) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_835670  (binary VA: 0x835670)
// Original: sub_835670
// ----------------------------------------------------------------------------
uint32_t * sub_835670(uint32_t *a1, int a2, int *a3, int *a4)
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
// Function: sub_835790  (binary VA: 0x835790)
// Original: sub_835790
// ----------------------------------------------------------------------------
int sub_835790(int a1, int *a2)
{
  int *v3;
  unsigned int v4;
  int *v5;
  char v6; // bp
  unsigned int v7;
  char v9; // bp
  int v10;
  uint32_t *v11;
  int v12;
  int *v13;
  uint32_t *v14;
  uint32_t *i;
  int v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);

  v3 = (int *)dword_20D7CE0;
  if ( dword_20D7CE0 == 0 )
  {
    v3 = (int *)(&dword_20D7CDC);
    goto LABEL_11;
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
  v19 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v7 )
      goto LABEL_9;
LABEL_13:
    v9 = 1;
    if ( v19 != (int *)(uintptr_t)(&dword_20D7CDC) )
      v9 = v19[4] > v4;
    v10 = opNew(0x2Cu);
    v11 = (uint32_t *)v10;
    if ( v10 != -16 )
    {
      v17 = v10 + 20;
      v12 = *a2;
      v11[6] = 0;
      v11[4] = v12;
      v11[7] = 0;
      v11[10] = 0;
      v11[8] = (uint32_t)(uintptr_t)(v11 + 6);
      v11[9] = (uint32_t)(uintptr_t)(v11 + 6);
      v13 = (int *)a2[3];
      if ( v13 != nullptr )
      {
        v14 = g4_std::Rb_tree_unsigned_int_pair_unsign_cdf969::M_copy(
                v17,
                v13,
                (int)(uintptr_t)(v11 + 6));
        v11[7] = (uint32_t)(uintptr_t)(v14);
        for ( i = v14; i[2] != 0; i = (uint32_t *)i[2] )
          ;
        v11[8] = (uint32_t)(uintptr_t)(i);
        while ( v14[3] != 0 )
          v14 = (uint32_t *)v14[3];
        v11[9] = (uint32_t)(uintptr_t)(v14);
        v11[10] = a2[6];
      }
    }
    sub_1904970(v9, v11, v19, &dword_20D7CDC);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v11);
    *(uint8_t *)(a1 + 4) = 1;
    ++dword_20D7CEC;
    return a1;
  }
LABEL_11:
  if ( (int *)dword_20D7CE4 == v3 )
  {
    sub_835670(v20, 0, v3, a2);
    v16 = v20[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v16;
  }
  else
  {
    v19 = v3;
    v3 = (int *)sub_19048F0(v3);
    v4 = *a2;
    if ( *a2 > (unsigned int)v3[4] )
      goto LABEL_13;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835950  (binary VA: 0x835950)
// Original: sub_835950
// ----------------------------------------------------------------------------
void sub_835950(int a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  char *v21;
  int v22;
  char *s;
  char *sa;
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

  v34 = dword_20D92A0;
  v33 = sub_5A5890("All", 0x4651FFB5u);
  v31 = sub_5A5890("None", 0x4651FFB5u);
  v4 = sub_5A5890("Current", 0x4651FFB5u);
  if ( v31 == a2 )
    return;
  if ( v4 == a2 )
  {
    if ( a3 != 0 )
    {
      if ( a3 == 1 )
      {
        v12 = *(uint32_t *)(a1 + 12);
        if ( a4 != 0 )
        {
          if ( v12 != 0 )
          {
            v13 = *(uint32_t *)(v12 + 4);
            if ( v13 != 0 )
              G4_VCALL<void>(v13, 16, 0);
          }
          *(uint8_t *)(a1 + 70) = 0;
        }
        else
        {
          if ( v12 != 0 )
          {
            v22 = *(uint32_t *)(v12 + 4);
            if ( v22 != 0 )
              G4_VCALL<void>(v22, 16, 1);
          }
          *(uint8_t *)(a1 + 70) = 1;
        }
      }
    }
    else if ( a4 != 0 )
    {
      sub_82D060(a1, 0);
      if ( *(uint8_t *)(a1 + 68) == 0 )
        sub_82D0E0(a1, 0);
    }
    else
    {
      sub_82D060(a1, 0);
    }
    return;
  }
  if ( v33 == a2 )
  {
    v15 = 0;
    v16 = 1;
    v17 = a1;
    while ( 1 )
    {
      if ( a3 == 1 )
      {
        v18 = *(uint32_t *)(v17 + 12);
        if ( v18 != 0 )
        {
          v19 = *(int **)(v18 + v15);
          if ( v19 != nullptr )
          {
            v20 = *v19;
            v28 = v17;
            if ( a4 != 0 )
              (*(void (**)(int *, uint32_t))(v20 + 16))(v19, 0);
            else
              (*(void (**)(int *, int))(v20 + 16))(v19, 1);
            v17 = v28;
          }
        }
      }
      else if ( a3 <= 1 )
      {
        if ( a3 == 0 )
        {
          if ( v16 == 2 )
            goto LABEL_39;
          v29 = v17;
          sub_82A360(v17, *(int **)(*(uint32_t *)(v17 + 12) + v15), a4, (unsigned int)(v16 - 20) <= 1);
          v17 = v29;
        }
      }
      else
      {
        if ( a3 == 2 )
        {
          if ( *(uint32_t *)(*(uint32_t *)(v17 + 12) + v15) == 0 )
            goto LABEL_38;
          sa = *(char **)(*(uint32_t *)(v17 + 12) + v15);
          v30 = v17;
          if ( a4 != 0 )
          {
            sub_7FD530(sa);
            v17 = v30;
            goto LABEL_38;
          }
          goto LABEL_59;
        }
        if ( a3 == 3 && *(uint32_t *)(*(uint32_t *)(v17 + 12) + v15) != 0 )
        {
          sa = *(char **)(*(uint32_t *)(v17 + 12) + v15);
          v30 = v17;
          if ( a4 != 0 )
          {
            sub_7FD6C0(sa);
            v17 = v30;
            goto LABEL_38;
          }
LABEL_59:
          sub_7FD660(sa);
          v17 = v30;
        }
      }
LABEL_38:
      if ( v16 == 46 )
        return;
LABEL_39:
      ++v16;
      v15 += 4;
    }
  }
  if ( a2 < v34 && a2 >= 0 )
  {
    v5 = dword_20D9290;
    v32 = *(uint32_t *)(dword_20D9290 + 16 * a2 + 12);
    if ( v32 > 0 )
    {
      v6 = 0;
      v7 = a1;
      while ( 1 )
      {
        v8 = *(uint32_t *)(*(uint32_t *)(v5 + 16 * a2 + 8) + 4 * v6);
        if ( v8 > 0x2D )
          goto LABEL_11;
        if ( a3 == 1 )
        {
          v9 = *(uint32_t *)(v7 + 12);
          if ( v9 != 0 )
          {
            v10 = *(int **)(v9 + 4 * v8);
            if ( v10 != nullptr )
            {
              v11 = *v10;
              v25 = v7;
              if ( a4 != 0 )
                (*(void (**)(int *, uint32_t))(v11 + 16))(v10, 0);
              else
                (*(void (**)(int *, int))(v11 + 16))(v10, 1);
              v7 = v25;
            }
          }
        }
        else if ( a3 <= 1 )
        {
          if ( a3 == 0 && v8 != 1 )
          {
            v27 = v7;
            sub_82A360(v7, *(int **)(*(uint32_t *)(v7 + 12) + 4 * v8), a4, v8 - 19 <= 1);
            v7 = v27;
          }
        }
        else if ( a3 == 2 )
        {
          v21 = *(char **)(*(uint32_t *)(v7 + 12) + 4 * v8);
          if ( v21 != nullptr )
          {
            s = v21;
            v26 = v7;
            if ( a4 == 0 )
              goto LABEL_49;
            sub_7FD530(v21);
            v7 = v26;
          }
        }
        else if ( a3 == 3 )
        {
          v14 = *(char **)(*(uint32_t *)(v7 + 12) + 4 * v8);
          if ( v14 != nullptr )
          {
            s = v14;
            v26 = v7;
            if ( a4 != 0 )
            {
              sub_7FD6C0(v14);
              v7 = v26;
              goto LABEL_11;
            }
LABEL_49:
            sub_7FD660(s);
            v7 = v26;
          }
        }
LABEL_11:
        if ( v32 == ++v6 )
          return;
        v5 = dword_20D9290;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_835D90  (binary VA: 0x835d90)
// Original: sub_835D90
// ----------------------------------------------------------------------------
uint32_t * sub_835D90(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835DB0  (binary VA: 0x835db0)
// Original: sub_835DB0
// ----------------------------------------------------------------------------
void sub_835DB0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_835DC0  (binary VA: 0x835dc0)
// Original: sub_835DC0
// ----------------------------------------------------------------------------
void sub_835DC0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_835DD0  (binary VA: 0x835dd0)
// Original: sub_835DD0
// ----------------------------------------------------------------------------
int sub_835DD0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_835DE0  (binary VA: 0x835de0)
// Original: sub_835DE0
// ----------------------------------------------------------------------------
int sub_835DE0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: nullsub_294  (binary VA: 0x835df8)
// Original: nullsub_294
// ----------------------------------------------------------------------------
void nullsub_294()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_835E00  (binary VA: 0x835e00)
// Original: sub_835E00
// ----------------------------------------------------------------------------
int sub_835E00(int a1)
{
  *(uint8_t *)(a1 + 4) = 1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048CA0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835E20  (binary VA: 0x835e20)
// Original: sub_835E20
// ----------------------------------------------------------------------------
uint32_t * sub_835E20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835E40  (binary VA: 0x835e40)
// Original: sub_835E40
// ----------------------------------------------------------------------------
uint32_t * sub_835E40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835E60  (binary VA: 0x835e60)
// Original: sub_835E60
// ----------------------------------------------------------------------------
uint32_t * sub_835E60(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835E80  (binary VA: 0x835e80)
// Original: sub_835E80
// ----------------------------------------------------------------------------
uint32_t * sub_835E80(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  return a1;
}



// ============================================================================
// Address:   0x835ea0 (size: 67 bytes)
// Symbol:    sub_835EA0
// Demangled: sub_835EA0
// ============================================================================
void ( **sub_835EA0(uint32_t *a1))()
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C408);
  g4_std::string::Destroy(a1 + 1);
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  return (void (**)())(uintptr_t)(((uint32_t)(uintptr_t)&off_205C3C8));
}
// ----------------------------------------------------------------------------
// Function: sub_835EF0  (binary VA: 0x835ef0)
// Original: sub_835EF0
// ----------------------------------------------------------------------------
uint32_t * sub_835EF0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835F10  (binary VA: 0x835f10)
// Original: sub_835F10
// ----------------------------------------------------------------------------
uint32_t * sub_835F10(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835F30  (binary VA: 0x835f30)
// Original: sub_835F30
// ----------------------------------------------------------------------------
uint32_t * sub_835F30(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835F50  (binary VA: 0x835f50)
// Original: sub_835F50
// ----------------------------------------------------------------------------
uint32_t * sub_835F50(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_835F70  (binary VA: 0x835f70)
// Original: sub_835F70
// ----------------------------------------------------------------------------
void sub_835F70(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_835FA0  (binary VA: 0x835fa0)
// Original: sub_835FA0
// ----------------------------------------------------------------------------
void sub_835FA0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_835FD0  (binary VA: 0x835fd0)
// Original: sub_835FD0
// ----------------------------------------------------------------------------
void sub_835FD0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836000  (binary VA: 0x836000)
// Original: sub_836000
// ----------------------------------------------------------------------------
void sub_836000(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836030  (binary VA: 0x836030)
// Original: sub_836030
// ----------------------------------------------------------------------------
void sub_836030(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836060  (binary VA: 0x836060)
// Original: sub_836060
// ----------------------------------------------------------------------------
void sub_836060(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836090  (binary VA: 0x836090)
// Original: sub_836090
// ----------------------------------------------------------------------------
void sub_836090(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8360C0  (binary VA: 0x8360c0)
// Original: sub_8360C0
// ----------------------------------------------------------------------------
void sub_8360C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204B178);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8360F0  (binary VA: 0x8360f0)
// Original: sub_8360F0
// ----------------------------------------------------------------------------
void sub_8360F0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836120  (binary VA: 0x836120)
// Original: sub_836120
// ----------------------------------------------------------------------------
void sub_836120(uint8_t *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2048CA0);
  a1[4] = 1;
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836150  (binary VA: 0x836150)
// Original: sub_836150
// ----------------------------------------------------------------------------
int sub_836150(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B968);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}



// ============================================================================
// Address:   0x836180 (size: 48 bytes)
// Symbol:    sub_836180
// Demangled: sub_836180
// ============================================================================
int (**sub_836180(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C148);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C1B4);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}


// ============================================================================
// Address:   0x8361b0 (size: 115 bytes)
// Symbol:    sub_8361B0
// Demangled: sub_8361B0
// ============================================================================
int (**sub_8361B0(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205BF28);
  a1[1] = ((uint32_t)(uintptr_t)&off_205BF94);
  g4_std::string::Destroy(a1 + 34);
  g4_std::string::Destroy(a1 + 33);
  g4_std::string::Destroy(a1 + 32);
  g4_std::string::Destroy(a1 + 31);
  return (int (**)(int))(uintptr_t)(sub_80D840(a1));
}
// ----------------------------------------------------------------------------
// Function: sub_836230  (binary VA: 0x836230)
// Original: sub_836230
// ----------------------------------------------------------------------------
grapher::HolderT<float> * sub_836230(int a1)
{
  grapher::HolderT<float> *v1;

  v1 = (grapher::HolderT<float> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 55);
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_205C4C8);
  grapher::HolderT_float_id_458ea9::From(v1, (const float *)(a1 + 4));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_8362A0  (binary VA: 0x8362a0)
// Original: sub_8362A0
// ----------------------------------------------------------------------------
uint32_t * sub_8362A0(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C4C8);
  grapher::HolderT_float_id_458ea9::From((grapher::HolderT<float> *)v3, (const float *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8362F0  (binary VA: 0x8362f0)
// Original: sub_8362F0
// ----------------------------------------------------------------------------
uint32_t * sub_8362F0(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C4C8);
  grapher::HolderT_float_id_458ea9::From((grapher::HolderT<float> *)v3, (const int *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836340  (binary VA: 0x836340)
// Original: sub_836340
// ----------------------------------------------------------------------------
uint32_t * sub_836340(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C4C8);
  grapher::HolderT_float_id_458ea9::From((grapher::HolderT<float> *)v3, (const double *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836390  (binary VA: 0x836390)
// Original: sub_836390
// ----------------------------------------------------------------------------
uint32_t * sub_836390(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C4C8);
  grapher::HolderT_float_id_458ea9::From((grapher::HolderT<float> *)v3, (const bool *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8363E0  (binary VA: 0x8363e0)
// Original: sub_8363E0
// ----------------------------------------------------------------------------
uint32_t * sub_8363E0(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C4C8);
  grapher::HolderT_float_id_458ea9::From(v3, a1 + 4);
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836430  (binary VA: 0x836430)
// Original: sub_836430
// ----------------------------------------------------------------------------
uint32_t * sub_836430(int a1)
{
  uint32_t *v1;

  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 55);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  grapher::HolderT_string_e830be::From(v1, a1 + 4);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_8364A0  (binary VA: 0x8364a0)
// Original: sub_8364A0
// ----------------------------------------------------------------------------
uint8_t * sub_8364A0(int a1, uint8_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef char _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C448);
  grapher::HolderT_bool_id_87484c::From((grapher::HolderT<bool> *)&v3, (const float *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8364F0  (binary VA: 0x8364f0)
// Original: sub_8364F0
// ----------------------------------------------------------------------------
uint8_t * sub_8364F0(int a1, uint8_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef char _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C448);
  grapher::HolderT_bool_id_87484c::From((grapher::HolderT<bool> *)&v3, (const int *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836540  (binary VA: 0x836540)
// Original: sub_836540
// ----------------------------------------------------------------------------
uint8_t * sub_836540(int a1, uint8_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef char _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C448);
  grapher::HolderT_bool_id_87484c::From((grapher::HolderT<bool> *)&v3, (const double *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836590  (binary VA: 0x836590)
// Original: sub_836590
// ----------------------------------------------------------------------------
grapher::HolderT<bool> * sub_836590(int a1)
{
  grapher::HolderT<bool> *v1;

  v1 = (grapher::HolderT<bool> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 55);
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_205C448);
  grapher::HolderT_bool_id_87484c::From(v1, (const bool *)(a1 + 4));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_836600  (binary VA: 0x836600)
// Original: sub_836600
// ----------------------------------------------------------------------------
uint8_t * sub_836600(int a1, uint8_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef char _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C448);
  grapher::HolderT_bool_id_87484c::From((grapher::HolderT<bool> *)&v3, (const bool *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836650  (binary VA: 0x836650)
// Original: sub_836650
// ----------------------------------------------------------------------------
uint8_t * sub_836650(int a1, uint8_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef char _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C448);
  grapher::HolderT_bool_id_87484c::From(&v3, a1 + 4);
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8366A0  (binary VA: 0x8366a0)
// Original: sub_8366A0
// ----------------------------------------------------------------------------
uint64_t * sub_8366A0(int a1, uint64_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef int64_t _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C488);
  grapher::HolderT_double_id_90764b::From((grapher::HolderT<double> *)&v3, (const float *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8366F0  (binary VA: 0x8366f0)
// Original: sub_8366F0
// ----------------------------------------------------------------------------
uint64_t * sub_8366F0(int a1, uint64_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef int64_t _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C488);
  grapher::HolderT_double_id_90764b::From((grapher::HolderT<double> *)&v3, (const int *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836740  (binary VA: 0x836740)
// Original: sub_836740
// ----------------------------------------------------------------------------
grapher::HolderT<double> * sub_836740(int a1)
{
  grapher::HolderT<double> *v1;

  v1 = (grapher::HolderT<double> *)gll_operator_new(0xCu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 55);
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_205C488);
  grapher::HolderT_double_id_90764b::From(v1, (const double *)(a1 + 4));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_8367B0  (binary VA: 0x8367b0)
// Original: sub_8367B0
// ----------------------------------------------------------------------------
uint64_t * sub_8367B0(int a1, uint64_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef int64_t _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C488);
  grapher::HolderT_double_id_90764b::From((grapher::HolderT<double> *)&v3, (const double *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836800  (binary VA: 0x836800)
// Original: sub_836800
// ----------------------------------------------------------------------------
uint64_t * sub_836800(int a1, uint64_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef int64_t _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C488);
  grapher::HolderT_double_id_90764b::From((grapher::HolderT<double> *)&v3, (const bool *)(a1 + 4));
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836850  (binary VA: 0x836850)
// Original: sub_836850
// ----------------------------------------------------------------------------
uint64_t * sub_836850(int a1, uint64_t *a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef int64_t _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  v3 = (int (**)(int, int))(uintptr_t)(&off_205C488);
  grapher::HolderT_double_id_90764b::From(&v3, a1 + 4);
  *a2 = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8368A0  (binary VA: 0x8368a0)
// Original: sub_8368A0
// ----------------------------------------------------------------------------
uint32_t * sub_8368A0(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C508);
  grapher::HolderT_int_id_fe4c74::From((grapher::HolderT<int> *)v3, (const float *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8368F0  (binary VA: 0x8368f0)
// Original: sub_8368F0
// ----------------------------------------------------------------------------
grapher::HolderT<int> * sub_8368F0(int a1)
{
  grapher::HolderT<int> *v1;

  v1 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 55);
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&off_205C508);
  grapher::HolderT_int_id_fe4c74::From(v1, (const int *)(a1 + 4));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_836960  (binary VA: 0x836960)
// Original: sub_836960
// ----------------------------------------------------------------------------
uint32_t * sub_836960(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C508);
  grapher::HolderT_int_id_fe4c74::From((grapher::HolderT<int> *)v3, (const int *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_8369B0  (binary VA: 0x8369b0)
// Original: sub_8369B0
// ----------------------------------------------------------------------------
uint32_t * sub_8369B0(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C508);
  grapher::HolderT_int_id_fe4c74::From((grapher::HolderT<int> *)v3, (const double *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836A00  (binary VA: 0x836a00)
// Original: sub_836A00
// ----------------------------------------------------------------------------
uint32_t * sub_836A00(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C508);
  grapher::HolderT_int_id_fe4c74::From((grapher::HolderT<int> *)v3, (const bool *)(a1 + 4));
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_836A50  (binary VA: 0x836a50)
// Original: sub_836A50
// ----------------------------------------------------------------------------
uint32_t * sub_836A50(int a1, uint32_t *a2)
{
  uint32_t v3[5];

  v3[0] = (uint32_t)(uintptr_t)(&off_205C508);
  grapher::HolderT_int_id_fe4c74::From(v3, a1 + 4);
  *a2 = v3[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_HudElement_GameAllocator_696322::Destroy  (binary VA: 0x836aa0)
// Original: std::vector<HudElement *,GameAllocator<HudElement *>>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_HudElement_GameAllocator_696322::Destroy(std::vector<HudElement *, GameAllocator<HudElement *>> *self)
{
  if ( *(uint32_t *)self != 0 )
    sub_4EB870(*(uint32_t *)self);
}

// ----------------------------------------------------------------------------
// Function: sub_836AD0  (binary VA: 0x836ad0)
// Original: sub_836AD0
// ----------------------------------------------------------------------------
void sub_836AD0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205C148);
  a1[1] = ((uint32_t)(uintptr_t)&off_205C1B4);
  sub_80D840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836B20  (binary VA: 0x836b20)
// Original: sub_836B20
// ----------------------------------------------------------------------------
void sub_836B20(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B968);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836B60  (binary VA: 0x836b60)
// Original: sub_836B60
// ----------------------------------------------------------------------------
void sub_836B60(char *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C408);
  g4_std::string::Destroy(a1 + 4);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205C3C8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836BB0  (binary VA: 0x836bb0)
// Original: sub_836BB0
// ----------------------------------------------------------------------------
int sub_836BB0(int a1, int a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef uint32_t _g4_t_v4[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  v4[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  grapher::HolderT_string_e830be::From(&v3, a1 + 4);
  g4_std::string::assign_str(a2, v4);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  return ((g4_std::string::Destroy(v4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_836C30  (binary VA: 0x836c30)
// Original: sub_836C30
// ----------------------------------------------------------------------------
int sub_836C30(int a1, int a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef uint32_t _g4_t_v4[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  v4[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  grapher::HolderT_string_e830be::From((grapher::HolderT<std::string> *)&v3, (const int *)(a1 + 4));
  g4_std::string::assign_str(a2, v4);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  return ((g4_std::string::Destroy(v4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_836CB0  (binary VA: 0x836cb0)
// Original: sub_836CB0
// ----------------------------------------------------------------------------
int sub_836CB0(int a1, int a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef uint32_t _g4_t_v4[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  v4[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  grapher::HolderT_string_e830be::From((grapher::HolderT<std::string> *)&v3, (const bool *)(a1 + 4));
  g4_std::string::assign_str(a2, v4);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  return ((g4_std::string::Destroy(v4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_836D30  (binary VA: 0x836d30)
// Original: sub_836D30
// ----------------------------------------------------------------------------
int sub_836D30(int a1, int a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef uint32_t _g4_t_v4[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  v4[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  grapher::HolderT_string_e830be::From((grapher::HolderT<std::string> *)&v3, (const double *)(a1 + 4));
  g4_std::string::assign_str(a2, v4);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  return ((g4_std::string::Destroy(v4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_836DB0  (binary VA: 0x836db0)
// Original: sub_836DB0
// ----------------------------------------------------------------------------
int sub_836DB0(int a1, int a2)
{
  typedef int (**_g4_t_v3)(int, int);
  typedef uint32_t _g4_t_v4[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  v4[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  grapher::HolderT_string_e830be::From((grapher::HolderT<std::string> *)&v3, (const float *)(a1 + 4));
  g4_std::string::assign_str(a2, v4);
  v3 = (int (**)(int, int))(uintptr_t)(&off_205C408);
  return ((g4_std::string::Destroy(v4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_836E30  (binary VA: 0x836e30)
// Original: sub_836E30
// ----------------------------------------------------------------------------
void sub_836E30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205BF28);
  a1[1] = ((uint32_t)(uintptr_t)&off_205BF94);
  g4_std::string::Destroy(a1 + 34);
  g4_std::string::Destroy(a1 + 33);
  g4_std::string::Destroy(a1 + 32);
  g4_std::string::Destroy(a1 + 31);
  sub_80D840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_836EA0  (binary VA: 0x836ea0)
// Original: sub_836EA0
// ----------------------------------------------------------------------------
bool sub_836EA0(int a1)
{
  bool result;
  int v2;
  int v3;
  int v4;

  result = false;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 8) - 12) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 4);
    if ( v2 != 0 )
    {
      v3 = (*(int (**)(uint32_t))(*(uint32_t *)v2 + 28))(*(uint32_t *)(a1 + 4));
      result = true;
      if ( v3 != 9 )
      {
        result = false;
        if ( *(uint32_t *)(*(uint32_t *)(a1 + 8) - 12) != 0 )
        {
          v4 = *(uint32_t *)(a1 + 4);
          if ( v4 != 0 )
            return (*(int (**)(uint32_t))(*(uint32_t *)v4 + 28))(*(uint32_t *)(a1 + 4)) == 10;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_836F00  (binary VA: 0x836f00)
// Original: sub_836F00
// ----------------------------------------------------------------------------
bool sub_836F00(int a1)
{
  bool result;
  int v2;

  result = false;
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 404);
    if ( v2 != 0 )
      return G4_VCALL<int>(v2, 28) == 12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_836F40  (binary VA: 0x836f40)
// Original: sub_836F40
// ----------------------------------------------------------------------------
void sub_836F40(grapher::ActorBase::Self *a1, int a2, int a3, grapher::ActorContext::Self *obj)
{
  uint32_t *v4;
  int i;
  grapher::ActorVariable::Self *v6;
  grapher::HolderT<int> *v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v12)) > _g4_s1 ? (20u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v13)) > _g4_s2 ? (24u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  if ( obj == nullptr )
  {
    obj = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct(obj, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, obj, &unk_20D1280);
    }
  }
  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  grapher::ActorBase::GetVariables(a1, a2, (int)(uintptr_t)(&v12));
  v4 = (uint32_t *)(v12);
  v11 = (v13 - (int)(uintptr_t)(v12)) >> 2;
  if ( v11 != 0 )
  {
    for ( i = 0; i != v11; ++i )
    {
      v6 = (grapher::ActorVariable::Self *)v4[i];
      if ( v6 != nullptr )
      {
        v7 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v7 = (uint32_t)(uintptr_t)(&off_205C508);
        grapher::HolderT_int_id_fe4c74::From(v7, &a3);
        v8 = *((uint32_t *)v6 + 3);
        if ( v8 != 0 )
          *(uint8_t *)(v8 + 20) = 0;
        v9 = G4_VCALL<int>(v7, 48);
        v10 = *((uint32_t *)v6 + 1);
        *((uint32_t *)v6 + 1) = v9;
        if ( v10 != 0 )
          G4_VCALL<void>(v10, 44);
        G4_VCALL<void>(v7, 44);
        grapher::ActorContext::SaveAVar(obj, v6);
        v4 = (uint32_t *)(v12);
      }
    }
  }
  if ( v4 != nullptr )
    opDelete(v4);
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_unsigned_int_vector_HudE_f18177::opIndex  (binary VA: 0x8370d0)
// Original: std::map<unsigned int,std::vector<HudElement *,GameAllocator<HudElement *>>>::operator[]
// ----------------------------------------------------------------------------
uint32_t * g4_std::map_unsigned_int_vector_HudE_f18177::opIndex(std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *self, unsigned int *a2)
{
  uint32_t *v2;
  unsigned int v3;
  uint32_t *v4;
  bool v5;
  int v6;
  int v7;
  int v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v2 = *((uint32_t **)self + 2);
  if ( v2 == nullptr )
  {
    v3 = *a2;
    goto LABEL_17;
  }
  v3 = *a2;
  v4 = (uint32_t *)((char *)self + 4);
  do
  {
    while ( v2[4] >= v3 )
    {
      v4 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( (uint32_t *)((char *)self + 4) == v4 )
  {
LABEL_17:
    v9 = *((uint32_t *)self + 5);
    v12 = v3;
    v13 = 0;
    v15 = 0;
    v14 = 0;
    if ( v9 != 0 )
    {
      v6 = *((uint32_t *)self + 4);
      if ( *(uint32_t *)(v6 + 16) < v3 )
        goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( v4[4] <= v3 )
    return v4 + 5;
  v5 = v4 == *((uint32_t **)self + 3);
  v12 = *a2;
  v13 = 0;
  v15 = 0;
  v14 = 0;
  if ( v5 )
    goto LABEL_11;
  v6 = sub_1904940(v4);
  if ( *(uint32_t *)(v6 + 16) < v3 )
  {
    if ( *(uint32_t *)(v6 + 12) != 0 )
    {
LABEL_11:
      sub_821FB0(&v11, (int)(uintptr_t)(self), (int)(uintptr_t)(v4), (int)(uintptr_t)(v4), &v12);
LABEL_12:
      v4 = v11;
      v7 = v13;
      goto LABEL_13;
    }
LABEL_20:
    sub_821FB0(&v11, (int)(uintptr_t)(self), 0, v6, &v12);
    goto LABEL_12;
  }
LABEL_19:
  sub_8220F0((int)(uintptr_t)(&v10), (int)(uintptr_t)(self), &v12);
  v4 = v10;
  v7 = v13;
LABEL_13:
  if ( v7 != 0 )
    sub_4EB870(v7);
  return v4 + 5;
}

// ----------------------------------------------------------------------------
// Function: sub_837200  (binary VA: 0x837200)
// Original: sub_837200
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * sub_837200(int a1, grapher::ActorVariable::Self *a2, grapher::ActorContext::Self *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, grapher::ActorContext::Self *a12)
{
  grapher::ActorContext::Self *v12;
  int v13;
  void (***v14)(uint32_t, uint32_t *);
  void (***v15)(uint32_t, uint32_t *);
  int v17;
  int v18;
  int v19;
  int v20;
  grapher::HolderT<int> *v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  grapher::HolderT<int> *v28;
  grapher::HolderT<int> *v29;
  grapher::HolderT<int> *v30;
  grapher::ActorContext::Self *v56;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef const char *_g4_t_v46;
  typedef const char *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t _g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef int _g4_t_Constant;
  typedef int _g4_t_v54;
  typedef uint8_t _g4_t_v55[16];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v34)) > _g4_s3 ? (12u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v37)) > _g4_s6 ? (20u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v38)) > _g4_s7 ? (20u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v39)) > _g4_s8 ? (24u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v40)) > _g4_s9 ? (28u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v41)) > _g4_s10 ? (28u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v42)) > _g4_s11 ? (28u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v43)) > _g4_s12 ? (32u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v44)) > _g4_s13 ? (36u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v45)) > _g4_s14 ? (40u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v46)) > _g4_s15 ? (44u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v47)) > _g4_s16 ? (48u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v48)) > _g4_s17 ? (52u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v49)) > _g4_s18 ? (56u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v50)) > _g4_s19 ? (60u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v51)) > _g4_s20 ? (64u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v52)) > _g4_s21 ? (80u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_Constant)) > _g4_s22 ? (84u + sizeof(_g4_t_Constant)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v54)) > _g4_s23 ? (88u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v55)) > _g4_s24 ? (92u + sizeof(_g4_t_v55)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_Constant &Constant = *reinterpret_cast<_g4_t_Constant *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);

  v12 = a3;
  if ( a3 == nullptr )
  {
    v12 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 )
    {
      v40 = (char *)(&byte_20D6700);
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
  }
  grapher::ActorContext::LoadAVar(v12, a2);
  if ( *((uint32_t *)a2 + 2) == 12 )
  {
    v43 = (int)(uintptr_t)(&dword_213B814);
    v22 = *((uint32_t *)a2 + 1);
    if ( v22 != 0 )
      G4_VCALL<void>(v22, 32, &v43);
    v23 = sub_1938090((int)(uintptr_t)(&v43), "..", 0, 2u);
    if ( v23 == -1 )
    {
      v45 = 0;
      v29 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v29 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v29, &v45);
      (**(void (***)(grapher::HolderT<int> *, uint32_t *, int, int, int, int, int, char *, int, int, int, const char *, const char *, int, int, int))v29)(
        v29,
        v51,
        v33,
        v34,
        v36,
        v37,
        v39,
        v40,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v56 = a12;
      G4_VCALL<void>(v29, 44);
    }
    else
    {
      v24 = v23 + 2;
      sub_193A6F0(&v46, &v43, 0, v23);
      if ( v24 > *(uint32_t *)(v43 - 12) )
        goto LABEL_32;
      sub_193A6F0(&v47, &v43, v24, -1);
      v25 = atoi(v46);
      v26 = atoi(v47);
      v27 = v26;
      if ( v25 > v26 )
      {
        v27 = v25;
        v25 = v26;
      }
      v38 = v27;
      v50 = lrand48() % (v27 - v25 + 1) + v25;
      v28 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v28 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v28, &v50);
      (**(void (***)(grapher::HolderT<int> *, uint32_t *, int, int, int, int, const char **, char *, int, int, int, const char *, const char *, int, int, int))v28)(
        v28,
        v51,
        v32,
        v35,
        v36,
        v38,
        &v47,
        v40,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v56 = a12;
      G4_VCALL<void>(v28, 44);
      g4_std::string::Destroy(a2);
      g4_std::string::Destroy(&a7);
    }
    g4_std::string::Destroy(&v43);
    return v56;
  }
  else
  {
    if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v31) == 0
      && *((uint32_t *)a2 + 2) == 11 )
    {
      v17 = *((uint32_t *)a2 + 1);
      v18 = 0;
      if ( v17 != 0 )
        v18 = G4_VCALL<int>(v17, 48);
      v47 = (const char *)&dword_213B814;
      if ( v18 != 0 )
      {
        G4_VCALL<void>(v18, 32, &v47);
        G4_VCALL<void>(v18, 44);
      }
      v19 = sub_1938090((int)(uintptr_t)(&v47), ".", 0, 1u);
      v20 = v19;
      if ( v19 == -1 )
      {
        v52 = -1;
        v30 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v30 = (uint32_t)(uintptr_t)(&off_205C508);
        grapher::HolderT_int_id_fe4c74::From(v30, &v52);
        (**(void (***)(grapher::HolderT<int> *, uint32_t *))v30)(v30, v51);
        v42 = v51[0];
        G4_VCALL<void>(v30, 44);
LABEL_16:
        g4_std::string::Destroy(&v47);
        return (grapher::ActorContext::Self *)v42;
      }
      if ( *((uint32_t *)v47 - 3) >= (unsigned int)(v19 + 1) )
      {
        sub_193A6F0(&v54, &v47, v19 + 1, *((uint32_t *)v47 - 3));
        sub_193A6F0(v55, &v47, 0, v20);
        if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
        {
          grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
          __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
        }
        Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v55, &v54);
        v21 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v21 = (uint32_t)(uintptr_t)(&off_205C508);
        grapher::HolderT_int_id_fe4c74::From(v21, &Constant);
        (**(void (***)(grapher::HolderT<int> *, uint32_t *))v21)(v21, v51);
        v42 = v51[0];
        G4_VCALL<void>(v21, 44);
        g4_std::string::Destroy(v55);
        g4_std::string::Destroy(&v54);
        goto LABEL_16;
      }
LABEL_32:
      sub_1900210("basic_string::substr");
    }
    v13 = *((uint32_t *)a2 + 1);
    if ( v13 != 0
      && (v14 = (void (***)(uint32_t, uint32_t *))(*(int (**)(uint32_t))(*(uint32_t *)v13 + 48))(*((uint32_t *)a2 + 1)),
          v15 = v14,
          v14 != nullptr) )
    {
      (**v14)((uint32_t)(uintptr_t)(v14), v51);
      v41 = v51[0];
      ((void (*)(void (***)(uint32_t, uint32_t *)))(*v15)[11])(v15);
      return (grapher::ActorContext::Self *)v41;
    }
    else
    {
      return (grapher::ActorContext::Self *)v51[0];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_837730  (binary VA: 0x837730)
// Original: sub_837730
// ----------------------------------------------------------------------------
int sub_837730(int a1, grapher::ActorVariable::Self *a2, grapher::ActorContext::Self *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, ...)
{
  grapher::ActorContext::Self *v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  grapher::HolderT<int> *v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  grapher::HolderT<int> *v26;
  grapher::HolderT<int> *v27;
  grapher::HolderT<int> *v28;
  uint8_t v54;
  va_list va;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef uint8_t _g4_t_v39;
  typedef uint8_t _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45[2];
  typedef int _g4_t_v46;
  typedef const char *_g4_t_v47;
  typedef const char *_g4_t_v48[3];
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_Constant;
  typedef int _g4_t_v52;
  typedef uint8_t _g4_t_v53[16];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v30)) > _g4_s1 ? (8u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v31)) > _g4_s2 ? (8u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v32)) > _g4_s3 ? (12u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v33)) > _g4_s4 ? (12u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v34)) > _g4_s5 ? (16u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v35)) > _g4_s6 ? (20u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v36)) > _g4_s7 ? (20u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v37)) > _g4_s8 ? (24u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v38)) > _g4_s9 ? (28u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v39)) > _g4_s10 ? (28u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v40)) > _g4_s11 ? (28u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v41)) > _g4_s12 ? (32u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v42)) > _g4_s13 ? (36u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v43)) > _g4_s14 ? (40u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v44)) > _g4_s15 ? (44u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v45)) > _g4_s16 ? (48u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v46)) > _g4_s17 ? (56u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v47)) > _g4_s18 ? (60u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v48)) > _g4_s19 ? (64u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v49)) > _g4_s20 ? (76u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v50)) > _g4_s21 ? (80u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_Constant)) > _g4_s22 ? (84u + sizeof(_g4_t_Constant)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v52)) > _g4_s23 ? (88u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v53)) > _g4_s24 ? (92u + sizeof(_g4_t_v53)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_Constant &Constant = *reinterpret_cast<_g4_t_Constant *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 88u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 92u);

  va_start(va, a10);
  v10 = a3;
  if ( a3 == nullptr )
  {
    v10 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 )
    {
      v38 = (char *)(&byte_20D6700);
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
  }
  grapher::ActorContext::LoadAVar(v10, a2);
  if ( *((uint32_t *)a2 + 2) == 12 )
  {
    v45[0] = (int)(uintptr_t)(&dword_213B814);
    v20 = *((uint32_t *)a2 + 1);
    if ( v20 != 0 )
      G4_VCALL<void>(v20, 32, v45);
    v21 = sub_1938090((int)(uintptr_t)(v45), "..", 0, 2u);
    if ( v21 == -1 )
    {
      v46 = 0;
      v27 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v27 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v27, &v46);
      G4_VCALL<void>(v27, 24, (char *)&v44 + 3, v31, v32, v34, v35, v37, v38, v41, v42, v43, v44);
      v54 = HIBYTE(a7);
      G4_VCALL<void>(v27, 44);
    }
    else
    {
      v22 = v21 + 2;
      sub_193A6F0(&v47, v45, 0, v21);
      if ( v22 > *(uint32_t *)(v45[0] - 12) )
        goto LABEL_32;
      sub_193A6F0(v48, v45, v22, -1);
      v23 = atoi(v47);
      v24 = atoi(v48[0]);
      v25 = v24;
      if ( v23 > v24 )
      {
        v25 = v23;
        v23 = v24;
      }
      v36 = v25;
      v49 = lrand48() % (v25 - v23 + 1) + v23;
      v26 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v26 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v26, &v49);
      G4_VCALL<void>(v26, 24, (char *)&v44 + 3, v30, v33, v34, v36, v48, v38, v41, v42, v43, v44);
      v54 = HIBYTE(a7);
      G4_VCALL<void>(v26, 44);
      g4_std::string::Destroy(a2);
      g4_std::string::Destroy(g4_va_cast<int *>(va));
    }
    g4_std::string::Destroy(v45);
    return v54;
  }
  else
  {
    if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v29) == 0
      && *((uint32_t *)a2 + 2) == 11 )
    {
      v15 = *((uint32_t *)a2 + 1);
      v16 = 0;
      if ( v15 != 0 )
        v16 = G4_VCALL<int>(v15, 48);
      v48[0] = (const char *)&dword_213B814;
      if ( v16 != 0 )
      {
        G4_VCALL<void>(v16, 32, v48);
        G4_VCALL<void>(v16, 44);
      }
      v17 = sub_1938090((int)(uintptr_t)(v48), ".", 0, 1u);
      v18 = v17;
      if ( v17 == -1 )
      {
        v50 = -1;
        v28 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v28 = (uint32_t)(uintptr_t)(&off_205C508);
        grapher::HolderT_int_id_fe4c74::From(v28, &v50);
        G4_VCALL<void>(v28, 24, (char *)&v44 + 3);
        v40 = HIBYTE(v44);
        G4_VCALL<void>(v28, 44);
LABEL_16:
        g4_std::string::Destroy(v48);
        return v40;
      }
      if ( *((uint32_t *)v48[0] - 3) >= (unsigned int)(v17 + 1) )
      {
        sub_193A6F0(&v52, v48, v17 + 1, *((uint32_t *)v48[0] - 3));
        sub_193A6F0(v53, v48, 0, v18);
        if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
        {
          grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
          __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
        }
        Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v53, &v52);
        v19 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v19 = (uint32_t)(uintptr_t)(&off_205C508);
        grapher::HolderT_int_id_fe4c74::From(v19, &Constant);
        G4_VCALL<void>(v19, 24, (char *)&v44 + 3);
        v40 = HIBYTE(v44);
        G4_VCALL<void>(v19, 44);
        g4_std::string::Destroy(v53);
        g4_std::string::Destroy(&v52);
        goto LABEL_16;
      }
LABEL_32:
      sub_1900210("basic_string::substr");
    }
    v11 = *((uint32_t *)a2 + 1);
    if ( v11 != 0
      && (v12 = (*(int (**)(uint32_t))(*(uint32_t *)v11 + 48))(*((uint32_t *)a2 + 1)), v13 = v12, v12 != 0) )
    {
      G4_VCALL<void>(v12, 24, (char *)&v44 + 3);
      v39 = HIBYTE(v44);
      G4_VCALL<void>(v13, 44);
      return v39;
    }
    else
    {
      return HIBYTE(v44);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_837C70  (binary VA: 0x837c70)
// Original: sub_837C70
// ----------------------------------------------------------------------------
uint32_t * sub_837C70(uint32_t *a1, int a2, grapher::ActorVariable::Self *a3, grapher::ActorContext::Self *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  grapher::ActorContext::Self *v11;
  int v12;
  int v13;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  grapher::HolderT<int> *v23;
  grapher::HolderT<int> *v24;
  int v25;
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
  typedef grapher::HolderT<int> *_g4_t_v38;
  typedef grapher::HolderT<int> *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef const char *_g4_t_v46;
  typedef const char *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v30)) > _g4_s4 ? (12u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v34)) > _g4_s8 ? (28u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v36)) > _g4_s10 ? (28u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v37)) > _g4_s11 ? (32u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v38)) > _g4_s12 ? (32u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v39)) > _g4_s13 ? (32u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v40)) > _g4_s14 ? (36u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v41)) > _g4_s15 ? (36u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v42)) > _g4_s16 ? (40u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v43)) > _g4_s17 ? (48u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v44)) > _g4_s18 ? (52u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v45)) > _g4_s19 ? (56u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v46)) > _g4_s20 ? (60u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v47)) > _g4_s21 ? (64u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v48)) > _g4_s22 ? (68u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v49)) > _g4_s23 ? (72u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v50)) > _g4_s24 ? (76u + sizeof(_g4_t_v50)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);

  v11 = a4;
  if ( a4 == nullptr )
  {
    v11 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 )
    {
      v25 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v11 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( v25 != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v11 = (grapher::ActorContext::Self *)&unk_20D6720;
      }
    }
  }
  grapher::ActorContext::LoadAVar(v11, a3);
  if ( *((uint32_t *)a3 + 2) == 12 )
  {
    v43 = (int)(uintptr_t)(&dword_213B814);
    v18 = *((uint32_t *)a3 + 1);
    if ( v18 != 0 )
      G4_VCALL<void>(v18, 32, &v43);
    v19 = sub_1938090((int)(uintptr_t)(&v43), "..", 0, 2u);
    if ( v19 == -1 )
    {
      v45 = 0;
      v24 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v24 = (uint32_t)(uintptr_t)(&off_205C508);
      v39 = v24;
      grapher::HolderT_int_id_fe4c74::From(v24, &v45);
      *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v39, 32, a1, v28, v29, v31, v32, v33, v34, v39, v40, v42, dword_213B808, v43, v44, v45, v46, v47, v48, v49, v50[0]);
      G4_VCALL<void>(a4, 44);
    }
    else
    {
      v37 = v19;
      sub_193A6F0(&v46, &v43, 0, v19);
      if ( (unsigned int)(v37 + 2) > *(uint32_t *)(v43 - 12) )
        sub_1900210("basic_string::substr");
      sub_193A6F0(&v47, &v43, v37 + 2, -1);
      v35 = atoi(v46);
      v20 = atoi(v47);
      v21 = v35;
      v22 = v20;
      if ( v35 > v20 )
      {
        v22 = v35;
        v21 = v20;
      }
      v36 = v21;
      v41 = v22 - v21 + 1;
      v50[0] = lrand48() % v41 + v21;
      v23 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v23 = (uint32_t)(uintptr_t)(&off_205C508);
      v38 = v23;
      grapher::HolderT_int_id_fe4c74::From(v23, v50);
      *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v38, 32, a1, v27, v30, v31, v32, v33, v36, v38, v41, &v47, dword_213B808, v43, v44, v45, v46, v47, v48, v49, v50[0]);
      G4_VCALL<void>(a4, 44);
      g4_std::string::Destroy(a6);
      g4_std::string::Destroy(&a11);
    }
    g4_std::string::Destroy(&v43);
    return a1;
  }
  else
  {
    if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v26) != 0
      || *((uint32_t *)a3 + 2) != 11 )
    {
      v12 = *((uint32_t *)a3 + 1);
      v13 = 0;
      if ( v12 != 0 )
        v13 = G4_VCALL<int>(v12, 48);
      *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
      if ( v13 != 0 )
      {
        G4_VCALL<void>(v13, 32, a1);
        G4_VCALL<void>(v13, 44);
      }
    }
    else
    {
      v15 = *((uint32_t *)a3 + 1);
      v16 = 0;
      if ( v15 != 0 )
        v16 = G4_VCALL<int>(v15, 48);
      v47 = (const char *)&dword_213B814;
      if ( v16 != 0 )
      {
        G4_VCALL<void>(v16, 32, &v47);
        G4_VCALL<void>(v16, 44);
      }
      v17 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
      *v17 = (uint32_t)(uintptr_t)(&off_205C408);
      v17[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      grapher::HolderT_string_e830be::From(v17, &v47);
      *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v17, 32, a1);
      G4_VCALL<void>(v17, 44);
      g4_std::string::Destroy(&v47);
    }
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_838060  (binary VA: 0x838060)
// Original: sub_838060
// ----------------------------------------------------------------------------
long double sub_838060(int a1, grapher::ActorVariable::Self *a2, grapher::ActorContext::Self *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, grapher::ActorContext::Self *a12)
{
  grapher::ActorContext::Self *v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  grapher::HolderT<int> *v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  grapher::HolderT<int> *v29;
  grapher::HolderT<int> *v30;
  grapher::HolderT<int> *v31;
  grapher::ActorContext::Self *v56;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef float _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef const char *_g4_t_v46;
  typedef const char *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t _g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef int _g4_t_Constant;
  typedef int _g4_t_v54;
  typedef uint8_t _g4_t_v55[16];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v34)) > _g4_s2 ? (8u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v36)) > _g4_s4 ? (12u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v37)) > _g4_s5 ? (16u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v38)) > _g4_s6 ? (20u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v39)) > _g4_s7 ? (20u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v40)) > _g4_s8 ? (24u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v41)) > _g4_s9 ? (28u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v42)) > _g4_s10 ? (28u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v43)) > _g4_s11 ? (32u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v44)) > _g4_s12 ? (36u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v45)) > _g4_s13 ? (40u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v46)) > _g4_s14 ? (44u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v47)) > _g4_s15 ? (48u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v48)) > _g4_s16 ? (52u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v49)) > _g4_s17 ? (56u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v50)) > _g4_s18 ? (60u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v51)) > _g4_s19 ? (64u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v52)) > _g4_s20 ? (80u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_Constant)) > _g4_s21 ? (84u + sizeof(_g4_t_Constant)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v54)) > _g4_s22 ? (88u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v55)) > _g4_s23 ? (92u + sizeof(_g4_t_v55)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_Constant &Constant = *reinterpret_cast<_g4_t_Constant *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);

  v12 = a3;
  if ( a3 == nullptr )
  {
    v12 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 )
    {
      v41 = (char *)(&byte_20D6700);
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
  }
  grapher::ActorContext::LoadAVar(v12, a2);
  if ( *((uint32_t *)a2 + 2) != 12 )
  {
    if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v32) != 0
      || *((uint32_t *)a2 + 2) != 11 )
    {
      v13 = *((uint32_t *)a2 + 1);
      if ( v13 != 0
        && (v14 = (*(int (**)(uint32_t))(*(uint32_t *)v13 + 48))(*((uint32_t *)a2 + 1)), v15 = v14, v14 != 0) )
      {
        G4_VCALL<void>(v14, 8, v51);
        v42 = *(float *)v51;
        G4_VCALL<void>(v15, 44);
      }
      else
      {
        return *(float *)v51;
      }
      return v42;
    }
    v17 = *((uint32_t *)a2 + 1);
    v18 = 0;
    if ( v17 != 0 )
      v18 = G4_VCALL<int>(v17, 48);
    v47 = (const char *)&dword_213B814;
    if ( v18 != 0 )
    {
      G4_VCALL<void>(v18, 32, &v47);
      G4_VCALL<void>(v18, 44);
    }
    v19 = sub_1938090((int)(uintptr_t)(&v47), ".", 0, 1u);
    v20 = v19;
    if ( v19 == -1 )
    {
      v52 = -1;
      v31 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v31 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v31, &v52);
      G4_VCALL<void>(v31, 8, v51);
      v42 = *(float *)v51;
      G4_VCALL<void>(v31, 44);
LABEL_17:
      g4_std::string::Destroy(&v47);
      return v42;
    }
    v21 = *((uint32_t *)v47 - 3);
    if ( v21 >= v19 + 1 )
    {
      sub_193A6F0(&v54, &v47, v19 + 1, v21);
      sub_193A6F0(v55, &v47, 0, v20);
      if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
      {
        grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
        __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
      }
      Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v55, &v54);
      v22 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v22 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v22, &Constant);
      G4_VCALL<void>(v22, 8, v51);
      v42 = *(float *)v51;
      G4_VCALL<void>(v22, 44);
      g4_std::string::Destroy(v55);
      g4_std::string::Destroy(&v54);
      goto LABEL_17;
    }
LABEL_33:
    sub_1900210("basic_string::substr");
  }
  v43 = (int)(uintptr_t)(&dword_213B814);
  v23 = *((uint32_t *)a2 + 1);
  if ( v23 != 0 )
    G4_VCALL<void>(v23, 32, &v43);
  v24 = sub_1938090((int)(uintptr_t)(&v43), "..", 0, 2u);
  if ( v24 == -1 )
  {
    v45 = 0;
    v30 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
    *(uint32_t *)v30 = (uint32_t)(uintptr_t)(&off_205C508);
    grapher::HolderT_int_id_fe4c74::From(v30, &v45);
    G4_VCALL<void>(v30, 8, v51, v34, v35, v37, v38, v40, v41, v43, v44, v45, v46, v47, v48, v49, v50);
    v56 = a12;
    G4_VCALL<void>(v30, 44);
  }
  else
  {
    v25 = v24 + 2;
    sub_193A6F0(&v46, &v43, 0, v24);
    if ( v25 > *(uint32_t *)(v43 - 12) )
      goto LABEL_33;
    sub_193A6F0(&v47, &v43, v25, -1);
    v26 = atoi(v46);
    v27 = atoi(v47);
    v28 = v27;
    if ( v26 > v27 )
    {
      v28 = v26;
      v26 = v27;
    }
    v39 = v28;
    v50 = lrand48() % (v28 - v26 + 1) + v26;
    v29 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
    *(uint32_t *)v29 = (uint32_t)(uintptr_t)(&off_205C508);
    grapher::HolderT_int_id_fe4c74::From(v29, &v50);
    G4_VCALL<void>(v29, 8, v51, v33, v36, v37, v39, &v47, v41, v43, v44, v45, v46, v47, v48, v49, v50);
    v56 = a12;
    G4_VCALL<void>(v29, 44);
    g4_std::string::Destroy(a2);
    g4_std::string::Destroy(&a7);
  }
  g4_std::string::Destroy(&v43);
  return *(float *)&v56;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_f731e4::M_erase  (binary VA: 0x8385b0)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>,std::_Select1st<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_unsigned_int_pair_unsign_f731e4::M_erase(int a1, uint32_t *a2)
{
  int v2;
  int v3;
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

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v14 = (uint32_t *)a2[3];
      if ( v14 != nullptr )
      {
        while ( 1 )
        {
          v15 = (uint32_t *)v14[3];
          if ( v15 != nullptr )
          {
            while ( 1 )
            {
              v16 = (uint32_t *)v15[3];
              if ( v16 != nullptr )
              {
                while ( 1 )
                {
                  v17 = (uint32_t *)v16[3];
                  if ( v17 != nullptr )
                  {
                    while ( 1 )
                    {
                      v18 = (uint32_t *)v17[3];
                      if ( v18 != nullptr )
                      {
                        while ( 1 )
                        {
                          v13 = (uint32_t *)v18[3];
                          if ( v13 != nullptr )
                          {
                            while ( 1 )
                            {
                              v12 = (uint32_t *)v13[3];
                              if ( v12 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v2 = v12[3];
                                  if ( v2 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_unsigned_int_pair_unsign_f731e4::M_erase(
                                        a1,
                                        (uint32_t *)(*(void **)(v2 + 12)));
                                      v3 = *(uint32_t *)(v2 + 8);
                                      if ( *(uint32_t *)(v2 + 20) != 0 )
                                        sub_4EB870(*(uint32_t *)(v2 + 20));
                                      opDelete((void *)v2);
                                      if ( v3 == 0 )
                                        break;
                                      v2 = v3;
                                    }
                                  }
                                  v4 = (uint32_t *)v12[2];
                                  if ( v12[5] != 0 )
                                    sub_4EB870(v12[5]);
                                  opDelete(v12);
                                  if ( v4 == nullptr )
                                    break;
                                  v12 = v4;
                                }
                              }
                              v5 = (uint32_t *)v13[2];
                              if ( v13[5] != 0 )
                                sub_4EB870(v13[5]);
                              opDelete(v13);
                              if ( v5 == nullptr )
                                break;
                              v13 = v5;
                            }
                          }
                          v6 = (uint32_t *)v18[2];
                          if ( v18[5] != 0 )
                            sub_4EB870(v18[5]);
                          opDelete(v18);
                          if ( v6 == nullptr )
                            break;
                          v18 = v6;
                        }
                      }
                      v7 = (uint32_t *)v17[2];
                      if ( v17[5] != 0 )
                        sub_4EB870(v17[5]);
                      opDelete(v17);
                      if ( v7 == nullptr )
                        break;
                      v17 = v7;
                    }
                  }
                  v8 = (uint32_t *)v16[2];
                  if ( v16[5] != 0 )
                    sub_4EB870(v16[5]);
                  opDelete(v16);
                  if ( v8 == nullptr )
                    break;
                  v16 = v8;
                }
              }
              v9 = (uint32_t *)v15[2];
              if ( v15[5] != 0 )
                sub_4EB870(v15[5]);
              opDelete(v15);
              if ( v9 == nullptr )
                break;
              v15 = v9;
            }
          }
          v10 = (uint32_t *)v14[2];
          if ( v14[5] != 0 )
            sub_4EB870(v14[5]);
          opDelete(v14);
          if ( v10 == nullptr )
            break;
          v14 = v10;
        }
      }
      v11 = (uint32_t *)a2[2];
      if ( a2[5] != 0 )
        sub_4EB870(a2[5]);
      opDelete(a2);
      if ( v11 == nullptr )
        break;
      a2 = v11;
    }
  }
}


