#pragma once
// Grapher Actor: ActorGamePlayerEquipGear
#include "Core/Utils/DecompTypes.h"

namespace ActorGamePlayerEquipGear
{
    constexpr const char* kActorName = "GamePlayerEquipGear";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd170 | Ctor: 0x829850 | Dtor: 0x81edc0 | Vtable: 0x205b8a8 (11 slots)
    // Vtable (0x205b8a8 / off_205B8A8) Slot Table (11 virtual methods):
    //   [+00] 0x81edc0 : ActorGamePlayerEquipGear::~ActorGamePlayerEquipGear
    //   [+04] 0x820a70 : sub_820A70
    //   [+08] 0x8238a0 : sub_8238A0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8329e0 : sub_8329E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGamePlayerEquipGear
