#pragma once
// Grapher Actor: ActorGameConditionIsAlive
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionIsAlive
{
    constexpr const char* kActorName = "GameConditionIsAlive";
    int CreateInstance(int a1, int a2, int a3);
    uint32_t * Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    void Destroy(int a1);

    // Factory: 0xbc9930 | Ctor: 0xc4ebf0 | Dtor: 0xc57320 | Vtable: 0x206c408 (11 slots)
    // Vtable (0x206c408 / off_206C408) Slot Table (11 virtual methods):
    //   [+00] 0xc57320 : ActorGameConditionIsAlive::~ActorGameConditionIsAlive
    //   [+04] 0xc573a0 : sub_C573A0
    //   [+08] 0xc4c0e0 : sub_C4C0E0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc4dd40 : sub_C4DD40
    //   [+28] 0xc57240 : sub_C57240
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc514c0 : sub_C514C0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionIsAlive
