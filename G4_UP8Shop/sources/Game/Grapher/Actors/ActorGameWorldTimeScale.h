#pragma once
// Grapher Actor: ActorGameWorldTimeScale
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldTimeScale
{
    constexpr const char* kActorName = "GameWorldTimeScale";
    int CreateInstance(int a1, int a2, int a3);

    // Factory: 0xbce700 | Ctor: 0x82a160 | Dtor: None | Vtable: 0x205bea8 (11 slots)
    // Vtable (0x205bea8 / off_205BEA8) Slot Table (11 virtual methods):
    //   [+00] 0x81e9a0 : sub_81E9A0
    //   [+04] 0x820a30 : sub_820A30
    //   [+08] 0x8201d0 : sub_8201D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x835340 : sub_835340
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldTimeScale
