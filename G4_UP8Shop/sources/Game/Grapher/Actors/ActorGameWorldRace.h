#pragma once
// Grapher Actor: ActorGameWorldRace
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldRace
{
    constexpr const char* kActorName = "GameWorldRace";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbce340 | Ctor: 0x829d20 | Dtor: 0x81ee20 | Vtable: 0x205bda8 (11 slots)
    // Vtable (0x205bda8 / off_205BDA8) Slot Table (11 virtual methods):
    //   [+00] 0x81ee20 : ActorGameWorldRace::~ActorGameWorldRace
    //   [+04] 0x821f30 : sub_821F30
    //   [+08] 0x8277b0 : sub_8277B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x81fa90 : sub_81FA90
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x82c8e0 : sub_82C8E0
    //   [+28] 0x822540 : sub_822540
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x834ce0 : sub_834CE0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldRace
