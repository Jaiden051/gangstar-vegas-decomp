#pragma once
// Grapher Actor: ActorGamePhysicsExplosion
#include "Core/Utils/DecompTypes.h"

namespace ActorGamePhysicsExplosion
{
    constexpr const char* kActorName = "GamePhysicsExplosion";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd080 | Ctor: 0x829810 | Dtor: 0x81edf0 | Vtable: 0x205b868 (11 slots)
    // Vtable (0x205b868 / off_205B868) Slot Table (11 virtual methods):
    //   [+00] 0x81edf0 : ActorGamePhysicsExplosion::~ActorGamePhysicsExplosion
    //   [+04] 0x820ab0 : sub_820AB0
    //   [+08] 0x823150 : sub_823150
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x831fa0 : sub_831FA0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGamePhysicsExplosion
