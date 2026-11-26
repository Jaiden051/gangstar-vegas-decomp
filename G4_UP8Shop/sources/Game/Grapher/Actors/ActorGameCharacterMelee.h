#pragma once
// Grapher Actor: ActorGameCharacterMelee
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterMelee
{
    constexpr const char* kActorName = "GameCharacterMelee";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc65a0 | Ctor: 0xc66520 | Dtor: 0xc5ae80 | Vtable: 0x206ce68 (11 slots)
    // Vtable (0x206ce68 / off_206CE68) Slot Table (11 virtual methods):
    //   [+00] 0xc5ae80 : ActorGameCharacterMelee::~ActorGameCharacterMelee
    //   [+04] 0xc5b350 : sub_C5B350
    //   [+08] 0xc652f0 : sub_C652F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc67dd0 : sub_C67DD0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterMelee
