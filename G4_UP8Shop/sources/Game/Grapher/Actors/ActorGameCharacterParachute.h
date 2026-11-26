#pragma once
// Grapher Actor: ActorGameCharacterParachute
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterParachute
{
    constexpr const char* kActorName = "GameCharacterParachute";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6870 | Ctor: 0x854c40 | Dtor: 0x84d1b0 | Vtable: 0x205d868 (11 slots)
    // Vtable (0x205d868 / off_205D868) Slot Table (11 virtual methods):
    //   [+00] 0x84d1b0 : ActorGameCharacterParachute::~ActorGameCharacterParachute
    //   [+04] 0x84ce70 : sub_84CE70
    //   [+08] 0x8537d0 : sub_8537D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x857dc0 : sub_857DC0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterParachute
