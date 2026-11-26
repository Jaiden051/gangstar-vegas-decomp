#pragma once
// Grapher Actor: ActorGameCharacterVehicleDoor
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterVehicleDoor
{
    constexpr const char* kActorName = "GameCharacterVehicleDoor";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8940 | Ctor: 0x845380 | Dtor: 0x838bf0 | Vtable: 0x205c9c8 (11 slots)
    // Vtable (0x205c9c8 / off_205C9C8) Slot Table (11 virtual methods):
    //   [+00] 0x838bf0 : ActorGameCharacterVehicleDoor::~ActorGameCharacterVehicleDoor
    //   [+04] 0x839870 : sub_839870
    //   [+08] 0x83fc20 : sub_83FC20
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83a6d0 : sub_83A6D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterVehicleDoor
