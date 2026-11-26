#pragma once
// Grapher Actor: ActorGameCharacterGetWeaponDamage
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterGetWeaponDamage
{
    constexpr const char* kActorName = "GameCharacterGetWeaponDamage";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc60f0 | Ctor: 0xc66460 | Dtor: 0xc5af10 | Vtable: 0x206cd68 (11 slots)
    // Vtable (0x206cd68 / off_206CD68) Slot Table (11 virtual methods):
    //   [+00] 0xc5af10 : ActorGameCharacterGetWeaponDamage::~ActorGameCharacterGetWeaponDamage
    //   [+04] 0xc5b290 : sub_C5B290
    //   [+08] 0xc5ebc0 : sub_C5EBC0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc669a0 : sub_C669A0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterGetWeaponDamage
