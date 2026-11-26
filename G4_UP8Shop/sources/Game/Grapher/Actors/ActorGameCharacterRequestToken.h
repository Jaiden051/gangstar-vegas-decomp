#pragma once
// Grapher Actor: ActorGameCharacterRequestToken
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterRequestToken
{
    constexpr const char* kActorName = "GameCharacterRequestToken";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6f00 | Ctor: 0xc66720 | Dtor: 0xc5ad00 | Vtable: 0x206d068 (11 slots)
    // Vtable (0x206d068 / off_206D068) Slot Table (11 virtual methods):
    //   [+00] 0xc5ad00 : ActorGameCharacterRequestToken::~ActorGameCharacterRequestToken
    //   [+04] 0xc5b550 : sub_C5B550
    //   [+08] 0xc615b0 : sub_C615B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc67c80 : sub_C67C80
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterRequestToken
