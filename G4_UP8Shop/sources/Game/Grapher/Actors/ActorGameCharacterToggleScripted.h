#pragma once
// Grapher Actor: ActorGameCharacterToggleScripted
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterToggleScripted
{
    constexpr const char* kActorName = "GameCharacterToggleScripted";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8580 | Ctor: 0x845280 | Dtor: 0x838cb0 | Vtable: 0x205c8c8 (11 slots)
    // Vtable (0x205c8c8 / off_205C8C8) Slot Table (11 virtual methods):
    //   [+00] 0x838cb0 : ActorGameCharacterToggleScripted::~ActorGameCharacterToggleScripted
    //   [+04] 0x839770 : sub_839770
    //   [+08] 0x83ec20 : sub_83EC20
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8479e0 : sub_8479E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterToggleScripted
