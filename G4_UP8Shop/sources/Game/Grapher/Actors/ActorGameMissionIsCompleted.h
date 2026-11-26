#pragma once
// Grapher Actor: ActorGameMissionIsCompleted
#include "Core/Utils/DecompTypes.h"

namespace ActorGameMissionIsCompleted
{
    constexpr const char* kActorName = "GameMissionIsCompleted";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb820 | Ctor: 0xc381e0 | Dtor: 0xc2b170 | Vtable: 0x206bbc8 (11 slots)
    // Vtable (0x206bbc8 / off_206BBC8) Slot Table (11 virtual methods):
    //   [+00] 0xc2b170 : ActorGameMissionIsCompleted::~ActorGameMissionIsCompleted
    //   [+04] 0xc2b6b0 : sub_C2B6B0
    //   [+08] 0xc2d8f0 : sub_C2D8F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc395a0 : sub_C395A0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameMissionIsCompleted
