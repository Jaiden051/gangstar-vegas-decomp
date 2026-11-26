#pragma once
// Grapher Actor: ActorGameCharacterPushOutOfVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterPushOutOfVehicle
{
    constexpr const char* kActorName = "GameCharacterPushOutOfVehicle";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6c30 | Ctor: 0xc66660 | Dtor: 0xc5ad90 | Vtable: 0x206cfa8 (11 slots)
    // Vtable (0x206cfa8 / off_206CFA8) Slot Table (11 virtual methods):
    //   [+00] 0xc5ad90 : ActorGameCharacterPushOutOfVehicle::~ActorGameCharacterPushOutOfVehicle
    //   [+04] 0xc5b490 : sub_C5B490
    //   [+08] 0xc60bb0 : sub_C60BB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc65b60 : sub_C65B60
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterPushOutOfVehicle
