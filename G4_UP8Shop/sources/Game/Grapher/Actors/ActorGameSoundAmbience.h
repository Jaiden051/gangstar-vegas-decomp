#pragma once
// Grapher Actor: ActorGameSoundAmbience
#include "Core/Utils/DecompTypes.h"

namespace ActorGameSoundAmbience
{
    constexpr const char* kActorName = "GameSoundAmbience";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd800 | Ctor: 0x829a10 | Dtor: 0x81ec70 | Vtable: 0x205baa8 (11 slots)
    // Vtable (0x205baa8 / off_205BAA8) Slot Table (11 virtual methods):
    //   [+00] 0x81ec70 : ActorGameSoundAmbience::~ActorGameSoundAmbience
    //   [+04] 0x820670 : sub_820670
    //   [+08] 0x8287d0 : sub_8287D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x822cb0 : sub_822CB0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameSoundAmbience
