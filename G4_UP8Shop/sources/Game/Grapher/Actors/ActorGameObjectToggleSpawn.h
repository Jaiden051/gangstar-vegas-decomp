#pragma once
// Grapher Actor: ActorGameObjectToggleSpawn
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectToggleSpawn
{
    constexpr const char* kActorName = "GameObjectToggleSpawn";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbccdb0 | Ctor: 0xc38cf0 | Dtor: 0xc2ad50 | Vtable: 0x206c288 (11 slots)
    // Vtable (0x206c288 / off_206C288) Slot Table (11 virtual methods):
    //   [+00] 0xc2ad50 : ActorGameObjectToggleSpawn::~ActorGameObjectToggleSpawn
    //   [+04] 0xc2bc30 : sub_C2BC30
    //   [+08] 0xc37250 : sub_C37250
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc39290 : sub_C39290
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectToggleSpawn
