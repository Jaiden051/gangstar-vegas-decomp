#pragma once
// Grapher Actor: ActorGameCharacterToggleAggro
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterToggleAggro
{
    constexpr const char* kActorName = "GameCharacterToggleAggro";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc81c0 | Ctor: 0x845140 | Dtor: 0x838d70 | Vtable: 0x205c7c8 (11 slots)
    // Vtable (0x205c7c8 / off_205C7C8) Slot Table (11 virtual methods):
    //   [+00] 0x838d70 : ActorGameCharacterToggleAggro::~ActorGameCharacterToggleAggro
    //   [+04] 0x839670 : sub_839670
    //   [+08] 0x83d5d0 : sub_83D5D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x84abd0 : sub_84ABD0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterToggleAggro
