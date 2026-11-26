#pragma once
// Grapher Actor: ActorGameCharacterSetInteractionPreset
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetInteractionPreset
{
    constexpr const char* kActorName = "GameCharacterSetInteractionPreset";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc70e0 | Ctor: 0xc667a0 | Dtor: 0xc5aca0 | Vtable: 0x206d0e8 (11 slots)
    // Vtable (0x206d0e8 / off_206D0E8) Slot Table (11 virtual methods):
    //   [+00] 0xc5aca0 : ActorGameCharacterSetInteractionPreset::~ActorGameCharacterSetInteractionPreset
    //   [+04] 0xc5b5d0 : sub_C5B5D0
    //   [+08] 0xc61d00 : sub_C61D00
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc65c50 : sub_C65C50
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetInteractionPreset
