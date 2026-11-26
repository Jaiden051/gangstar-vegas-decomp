#pragma once
// Grapher Actor: ActorGameCinematicStart
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicStart
{
    constexpr const char* kActorName = "GameCinematicStart";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9480 | Ctor: 0x845b40 | Dtor: 0x8389e0 | Vtable: 0x205cc88 (11 slots)
    // Vtable (0x205cc88 / off_205CC88) Slot Table (11 virtual methods):
    //   [+00] 0x8389e0 : ActorGameCinematicStart::~ActorGameCinematicStart
    //   [+04] 0x839b30 : sub_839B30
    //   [+08] 0x83b290 : sub_83B290
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x847700 : sub_847700
    //   [+28] 0x843990 : sub_843990
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83a080 : sub_83A080
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicStart
