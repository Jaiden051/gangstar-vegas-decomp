#pragma once
// Grapher Actor: ActorGameCharacterMeleeAttack
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterMeleeAttack
{
    constexpr const char* kActorName = "GameCharacterMeleeAttack";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6690 | Ctor: 0xc66560 | Dtor: 0xc5ae50 | Vtable: 0x206cea8 (11 slots)
    // Vtable (0x206cea8 / off_206CEA8) Slot Table (11 virtual methods):
    //   [+00] 0xc5ae50 : ActorGameCharacterMeleeAttack::~ActorGameCharacterMeleeAttack
    //   [+04] 0xc5b390 : sub_C5B390
    //   [+08] 0xc5c120 : sub_C5C120
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc6baa0 : sub_C6BAA0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterMeleeAttack
