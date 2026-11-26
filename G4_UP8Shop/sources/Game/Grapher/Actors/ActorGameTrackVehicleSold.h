#pragma once
// Grapher Actor: ActorGameTrackVehicleSold
#include "Core/Utils/DecompTypes.h"

namespace ActorGameTrackVehicleSold
{
    constexpr const char* kActorName = "GameTrackVehicleSold";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcdbc0 | Ctor: 0x829b10 | Dtor: 0x81ebb0 | Vtable: 0x205bba8 (11 slots)
    // Vtable (0x205bba8 / off_205BBA8) Slot Table (11 virtual methods):
    //   [+00] 0x81ebb0 : ActorGameTrackVehicleSold::~ActorGameTrackVehicleSold
    //   [+04] 0x820770 : sub_820770
    //   [+08] 0x825a20 : sub_825A20
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x831c50 : sub_831C50
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameTrackVehicleSold
