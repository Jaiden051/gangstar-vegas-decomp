#pragma once
// Grapher Actor: ActorGameCharacterCoverObject
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterCoverObject
{
    constexpr const char* kActorName = "GameCharacterCoverObject";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc56a0 | Ctor: 0xc66390 | Dtor: 0xc5afa0 | Vtable: 0x206cca8 (11 slots)
    // Vtable (0x206cca8 / off_206CCA8) Slot Table (11 virtual methods):
    //   [+00] 0xc5afa0 : ActorGameCharacterCoverObject::~ActorGameCharacterCoverObject
    //   [+04] 0xc5b1d0 : sub_C5B1D0
    //   [+08] 0xc5d330 : sub_C5D330
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc681f0 : sub_C681F0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterCoverObject
