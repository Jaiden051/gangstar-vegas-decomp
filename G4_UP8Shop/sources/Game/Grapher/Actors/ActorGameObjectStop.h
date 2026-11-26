#pragma once
// Grapher Actor: ActorGameObjectStop
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectStop
{
    constexpr const char* kActorName = "GameObjectStop";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc810 | Ctor: 0xc38b70 | Dtor: 0xc2ae70 | Vtable: 0x206c088 (11 slots)
    // Vtable (0x206c088 / off_206C088) Slot Table (11 virtual methods):
    //   [+00] 0xc2ae70 : ActorGameObjectStop::~ActorGameObjectStop
    //   [+04] 0xc2bab0 : sub_C2BAB0
    //   [+08] 0xc35470 : sub_C35470
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3c640 : sub_C3C640
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectStop
