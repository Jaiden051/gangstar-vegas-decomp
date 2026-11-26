#pragma once
// Grapher Actor: ActorGameConditionWithin
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionWithin
{
    constexpr const char* kActorName = "GameConditionWithin";
    int CreateInstance(int a1, int a2, int a3);
    uint32_t * Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    void Destroy(uint32_t *a1);

    // Factory: 0xbc9ed0 | Ctor: 0xc4f480 | Dtor: 0xc57430 | Vtable: 0x206c588 (11 slots)
    // Vtable (0x206c588 / off_206C588) Slot Table (11 virtual methods):
    //   [+00] 0xc57430 : ActorGameConditionWithin::~ActorGameConditionWithin
    //   [+04] 0xc57960 : sub_C57960
    //   [+08] 0xc4c550 : sub_C4C550
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc50a20 : sub_C50A20
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc574b0 : sub_C574B0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionWithin
