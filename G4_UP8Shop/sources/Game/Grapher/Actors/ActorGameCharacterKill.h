#pragma once
// Grapher Actor: ActorGameCharacterKill
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterKill
{
    constexpr const char* kActorName = "GameCharacterKill";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc62d0 | Ctor: 0xc664a0 | Dtor: 0xc5aee0 | Vtable: 0x206cde8 (11 slots)
    // Vtable (0x206cde8 / off_206CDE8) Slot Table (11 virtual methods):
    //   [+00] 0xc5aee0 : ActorGameCharacterKill::~ActorGameCharacterKill
    //   [+04] 0xc5b2d0 : sub_C5B2D0
    //   [+08] 0xc5f9a0 : sub_C5F9A0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc6a620 : sub_C6A620
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterKill
