#pragma once
// Grapher Actor: ActorGameCharacterGoTo
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterGoTo
{
    constexpr const char* kActorName = "GameCharacterGoTo";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc61e0 | Ctor: 0xc66b80 | Dtor: 0xc66c80 | Vtable: 0x206cda8 (11 slots)
    // Vtable (0x206cda8 / off_206CDA8) Slot Table (11 virtual methods):
    //   [+00] 0xc66c80 : ActorGameCharacterGoTo::~ActorGameCharacterGoTo
    //   [+04] 0xc66d50 : sub_C66D50
    //   [+08] 0xc5f1a0 : sub_C5F1A0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc5b120 : sub_C5B120
    //   [+28] 0xc67f20 : sub_C67F20
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc66dd0 : sub_C66DD0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterGoTo
