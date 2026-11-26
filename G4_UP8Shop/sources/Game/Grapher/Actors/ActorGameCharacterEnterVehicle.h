#pragma once
// Grapher Actor: ActorGameCharacterEnterVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterEnterVehicle
{
    constexpr const char* kActorName = "GameCharacterEnterVehicle";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5a60 | Ctor: 0x855010 | Dtor: 0x84ce40 | Vtable: 0x205dc28 (11 slots)
    // Vtable (0x205dc28 / off_205DC28) Slot Table (11 virtual methods):
    //   [+00] 0x84ce40 : ActorGameCharacterEnterVehicle::~ActorGameCharacterEnterVehicle
    //   [+04] 0x84d350 : sub_84D350
    //   [+08] 0x8502e0 : sub_8502E0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x857ec0 : sub_857EC0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterEnterVehicle
