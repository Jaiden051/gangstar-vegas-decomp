#pragma once
// Grapher Actor: ActorGameCharacterSetPath
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetPath
{
    constexpr const char* kActorName = "GameCharacterSetPath";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7590 | Ctor: 0xc66c30 | Dtor: 0xc66bd0 | Vtable: 0x206d228 (11 slots)
    // Vtable (0x206d228 / off_206D228) Slot Table (11 virtual methods):
    //   [+00] 0xc66bd0 : ActorGameCharacterSetPath::~ActorGameCharacterSetPath
    //   [+04] 0xc66cf0 : sub_C66CF0
    //   [+08] 0xc63140 : sub_C63140
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc5b030 : sub_C5B030
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc692b0 : sub_C692B0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetPath
