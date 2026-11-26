#pragma once
// Grapher Actor: ActorGameConditionInRange
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionInRange
{
    constexpr const char* kActorName = "GameConditionInRange";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9840 | Ctor: 0xc50b50 | Dtor: 0xc50af0 | Vtable: 0x206c3c8 (11 slots)
    // Vtable (0x206c3c8 / off_206C3C8) Slot Table (11 virtual methods):
    //   [+00] 0xc50af0 : ActorGameConditionInRange::~ActorGameConditionInRange
    //   [+04] 0xc50340 : sub_C50340
    //   [+08] 0xc43290 : sub_C43290
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc4ea40 : sub_C4EA40
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc57050 : sub_C57050
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionInRange
