#pragma once
// Grapher Actor: ActorGameCharacterDrive
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterDrive
{
    constexpr const char* kActorName = "GameCharacterDrive";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5790 | Ctor: 0x854f50 | Dtor: 0x84cf70 | Vtable: 0x205db68 (11 slots)
    // Vtable (0x205db68 / off_205DB68) Slot Table (11 virtual methods):
    //   [+00] 0x84cf70 : ActorGameCharacterDrive::~ActorGameCharacterDrive
    //   [+04] 0x84d710 : sub_84D710
    //   [+08] 0x8510b0 : sub_8510B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8576f0 : sub_8576F0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterDrive
