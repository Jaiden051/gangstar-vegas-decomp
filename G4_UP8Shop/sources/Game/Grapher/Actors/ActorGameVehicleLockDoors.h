#pragma once
// Grapher Actor: ActorGameVehicleLockDoors
#include "Core/Utils/DecompTypes.h"

namespace ActorGameVehicleLockDoors
{
    constexpr const char* kActorName = "GameVehicleLockDoors";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcdda0 | Ctor: 0x829b90 | Dtor: 0x81eb50 | Vtable: 0x205bc28 (11 slots)
    // Vtable (0x205bc28 / off_205BC28) Slot Table (11 virtual methods):
    //   [+00] 0x81eb50 : ActorGameVehicleLockDoors::~ActorGameVehicleLockDoors
    //   [+04] 0x8207f0 : sub_8207F0
    //   [+08] 0x826340 : sub_826340
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x821440 : sub_821440
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameVehicleLockDoors
