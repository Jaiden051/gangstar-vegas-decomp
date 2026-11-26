#pragma once
// Grapher Actor: ActorGameObjectMoveTo
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectMoveTo
{
    constexpr const char* kActorName = "GameObjectMoveTo";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(int a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc450 | Ctor: 0xc387d0 | Dtor: 0xc2af30 | Vtable: 0x206bf88 (11 slots)
    // Vtable (0x206bf88 / off_206BF88) Slot Table (11 virtual methods):
    //   [+00] 0xc2af30 : ActorGameObjectMoveTo::~ActorGameObjectMoveTo
    //   [+04] 0xc2b9b0 : sub_C2B9B0
    //   [+08] 0xc33ac0 : sub_C33AC0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc3a130 : sub_C3A130
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3a700 : sub_C3A700
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectMoveTo
