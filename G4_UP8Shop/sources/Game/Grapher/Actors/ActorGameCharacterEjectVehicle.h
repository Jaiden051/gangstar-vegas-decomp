#pragma once
// Grapher Actor: ActorGameCharacterEjectVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterEjectVehicle
{
    constexpr const char* kActorName = "GameCharacterEjectVehicle";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5970 | Ctor: 0x854fd0 | Dtor: 0x84cf10 | Vtable: 0x205dbe8 (11 slots)
    // Vtable (0x205dbe8 / off_205DBE8) Slot Table (11 virtual methods):
    //   [+00] 0x84cf10 : ActorGameCharacterEjectVehicle::~ActorGameCharacterEjectVehicle
    //   [+04] 0x84d810 : sub_84D810
    //   [+08] 0x8507b0 : sub_8507B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8574c0 : sub_8574C0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterEjectVehicle
