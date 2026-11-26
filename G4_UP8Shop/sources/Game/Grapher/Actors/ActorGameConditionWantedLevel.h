#pragma once
// Grapher Actor: ActorGameConditionWantedLevel
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionWantedLevel
{
    constexpr const char* kActorName = "GameConditionWantedLevel";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9de0 | Ctor: 0xc4f0c0 | Dtor: 0xc3f530 | Vtable: 0x206c548 (11 slots)
    // Vtable (0x206c548 / off_206C548) Slot Table (11 virtual methods):
    //   [+00] 0xc3f530 : ActorGameConditionWantedLevel::~ActorGameConditionWantedLevel
    //   [+04] 0xc3fe90 : sub_C3FE90
    //   [+08] 0xc426b0 : sub_C426B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc4e300 : sub_C4E300
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc52e40 : sub_C52E40
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionWantedLevel
