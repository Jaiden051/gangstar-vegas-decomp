#pragma once
// Grapher Actor: ActorGameConditionStolen
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionStolen
{
    constexpr const char* kActorName = "GameConditionStolen";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9cf0 | Ctor: 0xc50400 | Dtor: 0xc50450 | Vtable: 0x206c508 (11 slots)
    // Vtable (0x206c508 / off_206C508) Slot Table (11 virtual methods):
    //   [+00] 0xc50450 : ActorGameConditionStolen::~ActorGameConditionStolen
    //   [+04] 0xc503a0 : sub_C503A0
    //   [+08] 0xc44620 : sub_C44620
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc543e0 : sub_C543E0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc543f0 : sub_C543F0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionStolen
