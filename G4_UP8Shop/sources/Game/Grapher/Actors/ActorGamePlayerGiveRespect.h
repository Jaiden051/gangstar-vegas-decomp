#pragma once
// Grapher Actor: ActorGamePlayerGiveRespect
#include "Core/Utils/DecompTypes.h"

namespace ActorGamePlayerGiveRespect
{
    constexpr const char* kActorName = "GamePlayerGiveRespect";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd440 | Ctor: 0x829910 | Dtor: 0x81ed30 | Vtable: 0x205b9a8 (11 slots)
    // Vtable (0x205b9a8 / off_205B9A8) Slot Table (11 virtual methods):
    //   [+00] 0x81ed30 : ActorGamePlayerGiveRespect::~ActorGamePlayerGiveRespect
    //   [+04] 0x820570 : sub_820570
    //   [+08] 0x8285a0 : sub_8285A0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x831970 : sub_831970
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGamePlayerGiveRespect
