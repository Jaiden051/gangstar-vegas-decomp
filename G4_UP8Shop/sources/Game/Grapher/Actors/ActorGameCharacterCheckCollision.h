#pragma once
// Grapher Actor: ActorGameCharacterCheckCollision
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterCheckCollision
{
    constexpr const char* kActorName = "GameCharacterCheckCollision";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc52e0 | Ctor: 0x854e50 | Dtor: 0x84d030 | Vtable: 0x205da68 (11 slots)
    // Vtable (0x205da68 / off_205DA68) Slot Table (11 virtual methods):
    //   [+00] 0x84d030 : ActorGameCharacterCheckCollision::~ActorGameCharacterCheckCollision
    //   [+04] 0x84d690 : sub_84D690
    //   [+08] 0x851ab0 : sub_851AB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x857980 : sub_857980
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterCheckCollision
