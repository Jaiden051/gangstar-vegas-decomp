#pragma once
// Grapher Actor: ActorGameWorldTime
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldTime
{
    constexpr const char* kActorName = "GameWorldTime";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbce520 | Ctor: 0x82a0e0 | Dtor: 0x81ea00 | Vtable: 0x205be28 (11 slots)
    // Vtable (0x205be28 / off_205BE28) Slot Table (11 virtual methods):
    //   [+00] 0x81ea00 : ActorGameWorldTime::~ActorGameWorldTime
    //   [+04] 0x8209b0 : sub_8209B0
    //   [+08] 0x828e80 : sub_828E80
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x832ca0 : sub_832CA0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldTime
