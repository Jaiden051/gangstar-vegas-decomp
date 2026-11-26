#pragma once
// Grapher Actor: ActorGameCharacterGetIn
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterGetIn
{
    constexpr const char* kActorName = "GameCharacterGetIn";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5f10 | Ctor: 0xc663d0 | Dtor: 0xc5af70 | Vtable: 0x206cce8 (11 slots)
    // Vtable (0x206cce8 / off_206CCE8) Slot Table (11 virtual methods):
    //   [+00] 0xc5af70 : ActorGameCharacterGetIn::~ActorGameCharacterGetIn
    //   [+04] 0xc5b210 : sub_C5B210
    //   [+08] 0xc5dba0 : sub_C5DBA0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc66180 : sub_C66180
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc69970 : sub_C69970
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterGetIn
