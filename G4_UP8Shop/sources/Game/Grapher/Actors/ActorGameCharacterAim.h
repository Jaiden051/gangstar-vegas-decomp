#pragma once
// Grapher Actor: ActorGameCharacterAim
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterAim
{
    constexpr const char* kActorName = "GameCharacterAim";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc4f20 | Ctor: 0x854d50 | Dtor: 0x84d0f0 | Vtable: 0x205d968 (11 slots)
    // Vtable (0x205d968 / off_205D968) Slot Table (11 virtual methods):
    //   [+00] 0x84d0f0 : ActorGameCharacterAim::~ActorGameCharacterAim
    //   [+04] 0x84d6d0 : sub_84D6D0
    //   [+08] 0x8527a0 : sub_8527A0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x857ba0 : sub_857BA0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterAim
