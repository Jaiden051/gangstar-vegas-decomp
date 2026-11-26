#pragma once
// Grapher Actor: ActorGameMissionStart
#include "Core/Utils/DecompTypes.h"

namespace ActorGameMissionStart
{
    constexpr const char* kActorName = "GameMissionStart";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb550 | Ctor: 0xc38110 | Dtor: 0xc2b200 | Vtable: 0x206bb08 (11 slots)
    // Vtable (0x206bb08 / off_206BB08) Slot Table (11 virtual methods):
    //   [+00] 0xc2b200 : ActorGameMissionStart::~ActorGameMissionStart
    //   [+04] 0xc2b5f0 : sub_C2B5F0
    //   [+08] 0xc2ea10 : sub_C2EA10
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc3b760 : sub_C3B760
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2c730 : sub_C2C730
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameMissionStart
