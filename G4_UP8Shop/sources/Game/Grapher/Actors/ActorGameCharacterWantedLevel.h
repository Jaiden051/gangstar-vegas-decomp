#pragma once
// Grapher Actor: ActorGameCharacterWantedLevel
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterWantedLevel
{
    constexpr const char* kActorName = "GameCharacterWantedLevel";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8a30 | Ctor: 0x8453c0 | Dtor: 0x838bc0 | Vtable: 0x205ca08 (11 slots)
    // Vtable (0x205ca08 / off_205CA08) Slot Table (11 virtual methods):
    //   [+00] 0x838bc0 : ActorGameCharacterWantedLevel::~ActorGameCharacterWantedLevel
    //   [+04] 0x8398b0 : sub_8398B0
    //   [+08] 0x83ae90 : sub_83AE90
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x846140 : sub_846140
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterWantedLevel
