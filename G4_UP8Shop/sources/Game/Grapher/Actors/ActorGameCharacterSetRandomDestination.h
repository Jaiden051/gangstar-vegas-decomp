#pragma once
// Grapher Actor: ActorGameCharacterSetRandomDestination
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetRandomDestination
{
    constexpr const char* kActorName = "GameCharacterSetRandomDestination";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7770 | Ctor: 0xc66920 | Dtor: 0xc5ab80 | Vtable: 0x206d2a8 (11 slots)
    // Vtable (0x206d2a8 / off_206D2A8) Slot Table (11 virtual methods):
    //   [+00] 0xc5ab80 : ActorGameCharacterSetRandomDestination::~ActorGameCharacterSetRandomDestination
    //   [+04] 0xc5b750 : sub_C5B750
    //   [+08] 0xc64410 : sub_C64410
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc67340 : sub_C67340
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetRandomDestination
