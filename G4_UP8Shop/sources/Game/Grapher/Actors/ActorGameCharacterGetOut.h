#pragma once
// Grapher Actor: ActorGameCharacterGetOut
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterGetOut
{
    constexpr const char* kActorName = "GameCharacterGetOut";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6000 | Ctor: 0xc66420 | Dtor: 0xc5af40 | Vtable: 0x206cd28 (11 slots)
    // Vtable (0x206cd28 / off_206CD28) Slot Table (11 virtual methods):
    //   [+00] 0xc5af40 : ActorGameCharacterGetOut::~ActorGameCharacterGetOut
    //   [+04] 0xc5b250 : sub_C5B250
    //   [+08] 0xc5e5f0 : sub_C5E5F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc65910 : sub_C65910
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc688d0 : sub_C688D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterGetOut
