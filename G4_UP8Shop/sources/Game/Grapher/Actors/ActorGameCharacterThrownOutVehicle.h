#pragma once
// Grapher Actor: ActorGameCharacterThrownOutVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterThrownOutVehicle
{
    constexpr const char* kActorName = "GameCharacterThrownOutVehicle";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7fe0 | Ctor: 0x8450c0 | Dtor: 0x838dd0 | Vtable: 0x205c748 (11 slots)
    // Vtable (0x205c748 / off_205C748) Slot Table (11 virtual methods):
    //   [+00] 0x838dd0 : ActorGameCharacterThrownOutVehicle::~ActorGameCharacterThrownOutVehicle
    //   [+04] 0x8395f0 : sub_8395F0
    //   [+08] 0x83cd50 : sub_83CD50
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83a510 : sub_83A510
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterThrownOutVehicle
