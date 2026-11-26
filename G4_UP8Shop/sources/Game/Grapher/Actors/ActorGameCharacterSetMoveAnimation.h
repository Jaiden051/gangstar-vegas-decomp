#pragma once
// Grapher Actor: ActorGameCharacterSetMoveAnimation
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetMoveAnimation
{
    constexpr const char* kActorName = "GameCharacterSetMoveAnimation";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc74a0 | Ctor: 0xc668a0 | Dtor: 0xc5abe0 | Vtable: 0x206d1e8 (11 slots)
    // Vtable (0x206d1e8 / off_206D1E8) Slot Table (11 virtual methods):
    //   [+00] 0xc5abe0 : ActorGameCharacterSetMoveAnimation::~ActorGameCharacterSetMoveAnimation
    //   [+04] 0xc5b6d0 : sub_C5B6D0
    //   [+08] 0xc62cc0 : sub_C62CC0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc68750 : sub_C68750
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetMoveAnimation
