#pragma once
// Grapher Actor: ActorGameCharacterCorrectCrash
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterCorrectCrash
{
    constexpr const char* kActorName = "GameCharacterCorrectCrash";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc54c0 | Ctor: 0x854ed0 | Dtor: 0x84cfd0 | Vtable: 0x205dae8 (11 slots)
    // Vtable (0x205dae8 / off_205DAE8) Slot Table (11 virtual methods):
    //   [+00] 0x84cfd0 : ActorGameCharacterCorrectCrash::~ActorGameCharacterCorrectCrash
    //   [+04] 0x84d790 : sub_84D790
    //   [+08] 0x851450 : sub_851450
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8572d0 : sub_8572D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterCorrectCrash
