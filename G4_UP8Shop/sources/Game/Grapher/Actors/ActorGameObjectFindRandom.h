#pragma once
// Grapher Actor: ActorGameObjectFindRandom
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectFindRandom
{
    constexpr const char* kActorName = "GameObjectFindRandom";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc090 | Ctor: 0xc38660 | Dtor: 0xc2afc0 | Vtable: 0x206be08 (11 slots)
    // Vtable (0x206be08 / off_206BE08) Slot Table (11 virtual methods):
    //   [+00] 0xc2afc0 : ActorGameObjectFindRandom::~ActorGameObjectFindRandom
    //   [+04] 0xc2b8f0 : sub_C2B8F0
    //   [+08] 0xc31a30 : sub_C31A30
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2dd10 : sub_C2DD10
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectFindRandom
