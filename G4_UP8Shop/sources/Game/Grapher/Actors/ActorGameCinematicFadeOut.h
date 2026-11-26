#pragma once
// Grapher Actor: ActorGameCinematicFadeOut
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicFadeOut
{
    constexpr const char* kActorName = "GameCinematicFadeOut";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8ee0 | Ctor: 0x8454d0 | Dtor: 0x838b00 | Vtable: 0x205cb08 (11 slots)
    // Vtable (0x205cb08 / off_205CB08) Slot Table (11 virtual methods):
    //   [+00] 0x838b00 : ActorGameCinematicFadeOut::~ActorGameCinematicFadeOut
    //   [+04] 0x8399b0 : sub_8399B0
    //   [+08] 0x841190 : sub_841190
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x838f60 : sub_838F60
    //   [+28] 0x83a350 : sub_83A350
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8464a0 : sub_8464A0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicFadeOut
