#pragma once
// Grapher Actor: ActorGameObjectCount
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectCount
{
    constexpr const char* kActorName = "GameObjectCount";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcbcd0 | Ctor: 0xc384d0 | Dtor: 0xc2b080 | Vtable: 0x206bd08 (11 slots)
    // Vtable (0x206bd08 / off_206BD08) Slot Table (11 virtual methods):
    //   [+00] 0xc2b080 : ActorGameObjectCount::~ActorGameObjectCount
    //   [+04] 0xc2b7f0 : sub_C2B7F0
    //   [+08] 0xc30c30 : sub_C30C30
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc38f30 : sub_C38F30
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectCount
