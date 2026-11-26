#pragma once
// Grapher Actor: ActorGameObjectHide
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectHide
{
    constexpr const char* kActorName = "GameObjectHide";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcbeb0 | Ctor: 0xc385e0 | Dtor: 0xc2b020 | Vtable: 0x206bd88 (11 slots)
    // Vtable (0x206bd88 / off_206BD88) Slot Table (11 virtual methods):
    //   [+00] 0xc2b020 : ActorGameObjectHide::~ActorGameObjectHide
    //   [+04] 0xc2b870 : sub_C2B870
    //   [+08] 0xc31330 : sub_C31330
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2c300 : sub_C2C300
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectHide
