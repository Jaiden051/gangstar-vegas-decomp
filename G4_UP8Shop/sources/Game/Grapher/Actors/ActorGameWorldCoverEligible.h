#pragma once
// Grapher Actor: ActorGameWorldCoverEligible
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldCoverEligible
{
    constexpr const char* kActorName = "GameWorldCoverEligible";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbce070 | Ctor: 0x829c50 | Dtor: 0x81eac0 | Vtable: 0x205bce8 (11 slots)
    // Vtable (0x205bce8 / off_205BCE8) Slot Table (11 virtual methods):
    //   [+00] 0x81eac0 : ActorGameWorldCoverEligible::~ActorGameWorldCoverEligible
    //   [+04] 0x8208b0 : sub_8208B0
    //   [+08] 0x828ad0 : sub_828AD0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x821180 : sub_821180
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldCoverEligible
