#pragma once
// Grapher Actor: ActorGameVehicleSetSpeed
#include "Core/Utils/DecompTypes.h"

namespace ActorGameVehicleSetSpeed
{
    constexpr const char* kActorName = "GameVehicleSetSpeed";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcde90 | Ctor: 0x829bd0 | Dtor: 0x81eb20 | Vtable: 0x205bc68 (11 slots)
    // Vtable (0x205bc68 / off_205BC68) Slot Table (11 virtual methods):
    //   [+00] 0x81eb20 : ActorGameVehicleSetSpeed::~ActorGameVehicleSetSpeed
    //   [+04] 0x820830 : sub_820830
    //   [+08] 0x826670 : sub_826670
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x832f30 : sub_832F30
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameVehicleSetSpeed
