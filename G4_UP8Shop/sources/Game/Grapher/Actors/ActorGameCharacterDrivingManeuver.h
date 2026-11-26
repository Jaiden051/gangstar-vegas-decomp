#pragma once
// Grapher Actor: ActorGameCharacterDrivingManeuver
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterDrivingManeuver
{
    constexpr const char* kActorName = "GameCharacterDrivingManeuver";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5880 | Ctor: 0x854f90 | Dtor: 0x84cf40 | Vtable: 0x205dba8 (11 slots)
    // Vtable (0x205dba8 / off_205DBA8) Slot Table (11 virtual methods):
    //   [+00] 0x84cf40 : ActorGameCharacterDrivingManeuver::~ActorGameCharacterDrivingManeuver
    //   [+04] 0x84d650 : sub_84D650
    //   [+08] 0x850c80 : sub_850C80
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8575e0 : sub_8575E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterDrivingManeuver
