#pragma once
// Grapher Actor: ActorGameCharacterBurst
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterBurst
{
    constexpr const char* kActorName = "GameCharacterBurst";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc51f0 | Ctor: 0x854e10 | Dtor: 0x84d060 | Vtable: 0x205da28 (11 slots)
    // Vtable (0x205da28 / off_205DA28) Slot Table (11 virtual methods):
    //   [+00] 0x84d060 : ActorGameCharacterBurst::~ActorGameCharacterBurst
    //   [+04] 0x84d490 : sub_84D490
    //   [+08] 0x851e00 : sub_851E00
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x857ad0 : sub_857AD0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterBurst
