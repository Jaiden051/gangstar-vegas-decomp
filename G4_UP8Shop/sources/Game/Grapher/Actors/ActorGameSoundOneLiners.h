#pragma once
// Grapher Actor: ActorGameSoundOneLiners
#include "Core/Utils/DecompTypes.h"

namespace ActorGameSoundOneLiners
{
    constexpr const char* kActorName = "GameSoundOneLiners";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd8f0 | Ctor: 0x829a50 | Dtor: 0x81ec40 | Vtable: 0x205bae8 (11 slots)
    // Vtable (0x205bae8 / off_205BAE8) Slot Table (11 virtual methods):
    //   [+00] 0x81ec40 : ActorGameSoundOneLiners::~ActorGameSoundOneLiners
    //   [+04] 0x8206b0 : sub_8206B0
    //   [+08] 0x828950 : sub_828950
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8229e0 : sub_8229E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameSoundOneLiners
