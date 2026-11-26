#pragma once
// Grapher Actor: ActorGameCharacterToggleFlee
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterToggleFlee
{
    constexpr const char* kActorName = "GameCharacterToggleFlee";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc83a0 | Ctor: 0x845200 | Dtor: 0x838d10 | Vtable: 0x205c848 (11 slots)
    // Vtable (0x205c848 / off_205C848) Slot Table (11 virtual methods):
    //   [+00] 0x838d10 : ActorGameCharacterToggleFlee::~ActorGameCharacterToggleFlee
    //   [+04] 0x8396f0 : sub_8396F0
    //   [+08] 0x83e190 : sub_83E190
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83aa60 : sub_83AA60
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterToggleFlee
