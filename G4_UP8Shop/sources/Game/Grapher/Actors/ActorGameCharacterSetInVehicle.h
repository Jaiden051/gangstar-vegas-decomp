#pragma once
// Grapher Actor: ActorGameCharacterSetInVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetInVehicle
{
    constexpr const char* kActorName = "GameCharacterSetInVehicle";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc71d0 | Ctor: 0xc667e0 | Dtor: 0xc5ac70 | Vtable: 0x206d128 (11 slots)
    // Vtable (0x206d128 / off_206D128) Slot Table (11 virtual methods):
    //   [+00] 0xc5ac70 : ActorGameCharacterSetInVehicle::~ActorGameCharacterSetInVehicle
    //   [+04] 0xc5b610 : sub_C5B610
    //   [+08] 0xc62130 : sub_C62130
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc65520 : sub_C65520
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetInVehicle
