#pragma once
// Grapher Actor: ActorGameCharacterCover
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterCover
{
    constexpr const char* kActorName = "GameCharacterCover";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc55b0 | Ctor: 0x854f10 | Dtor: 0x84cfa0 | Vtable: 0x205db28 (11 slots)
    // Vtable (0x205db28 / off_205DB28) Slot Table (11 virtual methods):
    //   [+00] 0x84cfa0 : ActorGameCharacterCover::~ActorGameCharacterCover
    //   [+04] 0x84d550 : sub_84D550
    //   [+08] 0x84f7e0 : sub_84F7E0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x84db80 : sub_84DB80
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterCover
