#pragma once
// Grapher Actor: ActorGameCharacterFlinch
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterFlinch
{
    constexpr const char* kActorName = "GameCharacterFlinch";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5d30 | Ctor: 0xc66310 | Dtor: 0xc5b000 | Vtable: 0x206cc28 (11 slots)
    // Vtable (0x206cc28 / off_206CC28) Slot Table (11 virtual methods):
    //   [+00] 0xc5b000 : ActorGameCharacterFlinch::~ActorGameCharacterFlinch
    //   [+04] 0xc5b7d0 : sub_C5B7D0
    //   [+08] 0xc5c9f0 : sub_C5C9F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc65a00 : sub_C65A00
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterFlinch
