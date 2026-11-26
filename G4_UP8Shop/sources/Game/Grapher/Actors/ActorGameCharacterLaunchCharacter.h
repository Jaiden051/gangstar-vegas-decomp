#pragma once
// Grapher Actor: ActorGameCharacterLaunchCharacter
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterLaunchCharacter
{
    constexpr const char* kActorName = "GameCharacterLaunchCharacter";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc63c0 | Ctor: 0x854c00 | Dtor: 0x84d1e0 | Vtable: 0x205d828 (11 slots)
    // Vtable (0x205d828 / off_205D828) Slot Table (11 virtual methods):
    //   [+00] 0x84d1e0 : ActorGameCharacterLaunchCharacter::~ActorGameCharacterLaunchCharacter
    //   [+04] 0x84d390 : sub_84D390
    //   [+08] 0x853b20 : sub_853B20
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8581c0 : sub_8581C0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterLaunchCharacter
