#pragma once
// Grapher Actor: ActorGameConditionIsIdle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionIsIdle
{
    constexpr const char* kActorName = "GameConditionIsIdle";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9b10 | Ctor: 0xc4f040 | Dtor: 0xc3f590 | Vtable: 0x206c488 (11 slots)
    // Vtable (0x206c488 / off_206C488) Slot Table (11 virtual methods):
    //   [+00] 0xc3f590 : ActorGameConditionIsIdle::~ActorGameConditionIsIdle
    //   [+04] 0xc3ff90 : sub_C3FF90
    //   [+08] 0xc44010 : sub_C44010
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3f7f0 : sub_C3F7F0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionIsIdle
