#pragma once
// Grapher Actor: ActorGameVehicleToggleRadio
#include "Core/Utils/DecompTypes.h"

namespace ActorGameVehicleToggleRadio
{
    constexpr const char* kActorName = "GameVehicleToggleRadio";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcdf80 | Ctor: 0x829c10 | Dtor: 0x81eaf0 | Vtable: 0x205bca8 (11 slots)
    // Vtable (0x205bca8 / off_205BCA8) Slot Table (11 virtual methods):
    //   [+00] 0x81eaf0 : ActorGameVehicleToggleRadio::~ActorGameVehicleToggleRadio
    //   [+04] 0x820870 : sub_820870
    //   [+08] 0x826af0 : sub_826AF0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x832340 : sub_832340
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameVehicleToggleRadio
