#pragma once
// Grapher Actor: ActorGameCharacterThrowOutOfVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterThrowOutOfVehicle
{
    constexpr const char* kActorName = "GameCharacterThrowOutOfVehicle";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc80d0 | Ctor: 0x845100 | Dtor: 0x838da0 | Vtable: 0x205c788 (11 slots)
    // Vtable (0x205c788 / off_205C788) Slot Table (11 virtual methods):
    //   [+00] 0x838da0 : ActorGameCharacterThrowOutOfVehicle::~ActorGameCharacterThrowOutOfVehicle
    //   [+04] 0x839630 : sub_839630
    //   [+08] 0x83d190 : sub_83D190
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83a5e0 : sub_83A5E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterThrowOutOfVehicle
