#pragma once
// Grapher Actor: ActorGameObjectEnable
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectEnable
{
    constexpr const char* kActorName = "GameObjectEnable";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcbdc0 | Ctor: 0xc38510 | Dtor: 0xc2b050 | Vtable: 0x206bd48 (11 slots)
    // Vtable (0x206bd48 / off_206BD48) Slot Table (11 virtual methods):
    //   [+00] 0xc2b050 : ActorGameObjectEnable::~ActorGameObjectEnable
    //   [+04] 0xc2b830 : sub_C2B830
    //   [+08] 0xc30fc0 : sub_C30FC0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc2cd40 : sub_C2CD40
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2cf50 : sub_C2CF50
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectEnable
