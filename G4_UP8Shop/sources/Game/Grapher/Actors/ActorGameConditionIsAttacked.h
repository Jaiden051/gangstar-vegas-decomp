#pragma once
// Grapher Actor: ActorGameConditionIsAttacked
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionIsAttacked
{
    constexpr const char* kActorName = "GameConditionIsAttacked";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9a20 | Ctor: 0xc4eff0 | Dtor: 0xc3f5c0 | Vtable: 0x206c448 (11 slots)
    // Vtable (0x206c448 / off_206C448) Slot Table (11 virtual methods):
    //   [+00] 0xc3f5c0 : ActorGameConditionIsAttacked::~ActorGameConditionIsAttacked
    //   [+04] 0xc3ff50 : sub_C3FF50
    //   [+08] 0xc439e0 : sub_C439E0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc53110 : sub_C53110
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc418f0 : sub_C418F0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionIsAttacked
