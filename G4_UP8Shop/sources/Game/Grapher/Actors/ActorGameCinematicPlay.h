#pragma once
// Grapher Actor: ActorGameCinematicPlay
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicPlay
{
    constexpr const char* kActorName = "GameCinematicPlay";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8fd0 | Ctor: 0x845520 | Dtor: 0x838ad0 | Vtable: 0x205cb48 (11 slots)
    // Vtable (0x205cb48 / off_205CB48) Slot Table (11 virtual methods):
    //   [+00] 0x838ad0 : ActorGameCinematicPlay::~ActorGameCinematicPlay
    //   [+04] 0x8399f0 : sub_8399F0
    //   [+08] 0x841590 : sub_841590
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x8470d0 : sub_8470D0
    //   [+28] 0x843f10 : sub_843F10
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x847f40 : sub_847F40
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicPlay
