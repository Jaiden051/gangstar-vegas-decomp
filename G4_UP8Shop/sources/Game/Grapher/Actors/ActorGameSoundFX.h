#pragma once
// Grapher Actor: ActorGameSoundFX
#include "Core/Utils/DecompTypes.h"

namespace ActorGameSoundFX
{
    constexpr const char* kActorName = "GameSoundFX";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd710 | Ctor: 0x8299d0 | Dtor: 0x81eca0 | Vtable: 0x205ba68 (11 slots)
    // Vtable (0x205ba68 / off_205BA68) Slot Table (11 virtual methods):
    //   [+00] 0x81eca0 : ActorGameSoundFX::~ActorGameSoundFX
    //   [+04] 0x820630 : sub_820630
    //   [+08] 0x824fb0 : sub_824FB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x833e50 : sub_833E50
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameSoundFX
