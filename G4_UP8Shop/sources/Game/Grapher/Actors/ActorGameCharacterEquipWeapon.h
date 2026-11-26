#pragma once
// Grapher Actor: ActorGameCharacterEquipWeapon
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterEquipWeapon
{
    constexpr const char* kActorName = "GameCharacterEquipWeapon";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5b50 | Ctor: 0x855050 | Dtor: 0x84cee0 | Vtable: 0x205dc68 (11 slots)
    // Vtable (0x205dc68 / off_205DC68) Slot Table (11 virtual methods):
    //   [+00] 0x84cee0 : ActorGameCharacterEquipWeapon::~ActorGameCharacterEquipWeapon
    //   [+04] 0x84d450 : sub_84D450
    //   [+08] 0x84ff40 : sub_84FF40
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x856fe0 : sub_856FE0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterEquipWeapon
