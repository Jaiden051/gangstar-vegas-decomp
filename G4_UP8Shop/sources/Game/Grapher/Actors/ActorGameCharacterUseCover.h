#pragma once
// Grapher Actor: ActorGameCharacterUseCover
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterUseCover
{
    constexpr const char* kActorName = "GameCharacterUseCover";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8850 | Ctor: 0x845340 | Dtor: 0x838c20 | Vtable: 0x205c988 (11 slots)
    // Vtable (0x205c988 / off_205C988) Slot Table (11 virtual methods):
    //   [+00] 0x838c20 : ActorGameCharacterUseCover::~ActorGameCharacterUseCover
    //   [+04] 0x839830 : sub_839830
    //   [+08] 0x83f8f0 : sub_83F8F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x84b2e0 : sub_84B2E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterUseCover
