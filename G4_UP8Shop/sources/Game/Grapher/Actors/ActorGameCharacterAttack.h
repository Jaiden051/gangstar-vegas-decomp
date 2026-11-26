#pragma once
// Grapher Actor: ActorGameCharacterAttack
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterAttack
{
    constexpr const char* kActorName = "GameCharacterAttack";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5100 | Ctor: 0x854dd0 | Dtor: 0x84d090 | Vtable: 0x205d9e8 (11 slots)
    // Vtable (0x205d9e8 / off_205D9E8) Slot Table (11 virtual methods):
    //   [+00] 0x84d090 : ActorGameCharacterAttack::~ActorGameCharacterAttack
    //   [+04] 0x84d7d0 : sub_84D7D0
    //   [+08] 0x84e480 : sub_84E480
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x859e00 : sub_859E00
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterAttack
