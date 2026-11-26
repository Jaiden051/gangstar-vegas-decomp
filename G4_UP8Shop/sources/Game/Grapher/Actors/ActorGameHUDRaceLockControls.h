#pragma once
// Grapher Actor: ActorGameHUDRaceLockControls
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDRaceLockControls
{
    constexpr const char* kActorName = "GameHUDRaceLockControls";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca920 | Ctor: 0xc4f980 | Dtor: 0xc3f3b0 | Vtable: 0x206c8a8 (11 slots)
    // Vtable (0x206c8a8 / off_206C8A8) Slot Table (11 virtual methods):
    //   [+00] 0xc3f3b0 : ActorGameHUDRaceLockControls::~ActorGameHUDRaceLockControls
    //   [+04] 0xc401a0 : sub_C401A0
    //   [+08] 0xc42530 : sub_C42530
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0xc3f6f0 : sub_C3F6F0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0xc4d420 : sub_C4D420
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc4d4d0 : sub_C4D4D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDRaceLockControls
