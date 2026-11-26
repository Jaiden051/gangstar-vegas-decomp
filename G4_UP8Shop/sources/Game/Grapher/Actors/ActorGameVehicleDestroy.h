#pragma once
// Grapher Actor: ActorGameVehicleDestroy
#include "Core/Utils/DecompTypes.h"

namespace ActorGameVehicleDestroy
{
    constexpr const char* kActorName = "GameVehicleDestroy";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcdcb0 | Ctor: 0x829b50 | Dtor: 0x81eb80 | Vtable: 0x205bbe8 (11 slots)
    // Vtable (0x205bbe8 / off_205BBE8) Slot Table (11 virtual methods):
    //   [+00] 0x81eb80 : ActorGameVehicleDestroy::~ActorGameVehicleDestroy
    //   [+04] 0x8207b0 : sub_8207B0
    //   [+08] 0x825db0 : sub_825DB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x833400 : sub_833400
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameVehicleDestroy
