#pragma once
// Grapher Actor: ActorGameHudSetObjective
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHudSetObjective
{
    constexpr const char* kActorName = "GameHudSetObjective";
    int CreateInstance(int a1, int a2, int a3);
    void * Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcaec0 | Ctor: 0xc4fb40 | Dtor: 0xc3f620 | Vtable: 0x206ca48 (11 slots)
    // Vtable (0x206ca48 / off_206CA48) Slot Table (11 virtual methods):
    //   [+00] 0xc3f620 : ActorGameHudSetObjective::~ActorGameHudSetObjective
    //   [+04] 0xc402a0 : sub_C402A0
    //   [+08] 0xc49ff0 : sub_C49FF0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc55fb0 : sub_C55FB0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHudSetObjective
