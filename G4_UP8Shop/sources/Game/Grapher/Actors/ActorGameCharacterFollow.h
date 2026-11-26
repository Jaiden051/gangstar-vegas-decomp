#pragma once
// Grapher Actor: ActorGameCharacterFollow
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterFollow
{
    constexpr const char* kActorName = "GameCharacterFollow";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5e20 | Ctor: 0xc66350 | Dtor: 0xc5afd0 | Vtable: 0x206cc68 (11 slots)
    // Vtable (0x206cc68 / off_206CC68) Slot Table (11 virtual methods):
    //   [+00] 0xc5afd0 : ActorGameCharacterFollow::~ActorGameCharacterFollow
    //   [+04] 0xc5b190 : sub_C5B190
    //   [+08] 0xc5ce30 : sub_C5CE30
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0xc5bad0 : sub_C5BAD0
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc68010 : sub_C68010
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterFollow
