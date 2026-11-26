#pragma once
// Grapher Actor: ActorGameCharacterSetMood
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetMood
{
    constexpr const char* kActorName = "GameCharacterSetMood";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc73b0 | Ctor: 0xc66860 | Dtor: 0xc5ac10 | Vtable: 0x206d1a8 (11 slots)
    // Vtable (0x206d1a8 / off_206D1A8) Slot Table (11 virtual methods):
    //   [+00] 0xc5ac10 : ActorGameCharacterSetMood::~ActorGameCharacterSetMood
    //   [+04] 0xc5b690 : sub_C5B690
    //   [+08] 0xc628c0 : sub_C628C0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc6b8b0 : sub_C6B8B0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetMood
