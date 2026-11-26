#pragma once
// Grapher Actor: ActorGameCharacterMove
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterMove
{
    constexpr const char* kActorName = "GameCharacterMove";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6780 | Ctor: 0xc665a0 | Dtor: 0xc5ae20 | Vtable: 0x206cee8 (11 slots)
    // Vtable (0x206cee8 / off_206CEE8) Slot Table (11 virtual methods):
    //   [+00] 0xc5ae20 : ActorGameCharacterMove::~ActorGameCharacterMove
    //   [+04] 0xc5b3d0 : sub_C5B3D0
    //   [+08] 0xc5ffa0 : sub_C5FFA0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc65850 : sub_C65850
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterMove
