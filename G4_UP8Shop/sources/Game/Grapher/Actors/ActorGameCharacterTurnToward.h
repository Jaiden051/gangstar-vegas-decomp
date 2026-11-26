#pragma once
// Grapher Actor: ActorGameCharacterTurnToward
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterTurnToward
{
    constexpr const char* kActorName = "GameCharacterTurnToward";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8760 | Ctor: 0x845300 | Dtor: 0x838c50 | Vtable: 0x205c948 (11 slots)
    // Vtable (0x205c948 / off_205C948) Slot Table (11 virtual methods):
    //   [+00] 0x838c50 : ActorGameCharacterTurnToward::~ActorGameCharacterTurnToward
    //   [+04] 0x8397f0 : sub_8397F0
    //   [+08] 0x83f3f0 : sub_83F3F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x846f00 : sub_846F00
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterTurnToward
