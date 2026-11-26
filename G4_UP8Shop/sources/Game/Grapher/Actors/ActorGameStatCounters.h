#pragma once
// Grapher Actor: ActorGameStatCounters
#include "Core/Utils/DecompTypes.h"

namespace ActorGameStatCounters
{
    constexpr const char* kActorName = "GameStatCounters";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcdad0 | Ctor: 0x829ad0 | Dtor: 0x81ebe0 | Vtable: 0x205bb68 (11 slots)
    // Vtable (0x205bb68 / off_205BB68) Slot Table (11 virtual methods):
    //   [+00] 0x81ebe0 : ActorGameStatCounters::~ActorGameStatCounters
    //   [+04] 0x820730 : sub_820730
    //   [+08] 0x825670 : sub_825670
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8316b0 : sub_8316B0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameStatCounters
