#pragma once
// Grapher Actor: ActorGamePlayerGiveCurrency
#include "Core/Utils/DecompTypes.h"

namespace ActorGamePlayerGiveCurrency
{
    constexpr const char* kActorName = "GamePlayerGiveCurrency";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd260 | Ctor: 0x829890 | Dtor: 0x81ed90 | Vtable: 0x205b8e8 (11 slots)
    // Vtable (0x205b8e8 / off_205B8E8) Slot Table (11 virtual methods):
    //   [+00] 0x81ed90 : ActorGamePlayerGiveCurrency::~ActorGamePlayerGiveCurrency
    //   [+04] 0x8204f0 : sub_8204F0
    //   [+08] 0x823bb0 : sub_823BB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x831a20 : sub_831A20
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGamePlayerGiveCurrency
