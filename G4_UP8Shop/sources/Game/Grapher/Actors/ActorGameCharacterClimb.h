#pragma once
// Grapher Actor: ActorGameCharacterClimb
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterClimb
{
    constexpr const char* kActorName = "GameCharacterClimb";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc53d0 | Ctor: 0x854e90 | Dtor: 0x84d000 | Vtable: 0x205daa8 (11 slots)
    // Vtable (0x205daa8 / off_205DAA8) Slot Table (11 virtual methods):
    //   [+00] 0x84d000 : ActorGameCharacterClimb::~ActorGameCharacterClimb
    //   [+04] 0x84d5d0 : sub_84D5D0
    //   [+08] 0x851760 : sub_851760
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x857870 : sub_857870
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterClimb
