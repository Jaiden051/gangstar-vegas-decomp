#pragma once
// Grapher Actor: ActorGameCharacterSetPathDestination
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetPathDestination
{
    constexpr const char* kActorName = "GameCharacterSetPathDestination";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7680 | Ctor: 0xc668e0 | Dtor: 0xc5abb0 | Vtable: 0x206d268 (11 slots)
    // Vtable (0x206d268 / off_206D268) Slot Table (11 virtual methods):
    //   [+00] 0xc5abb0 : ActorGameCharacterSetPathDestination::~ActorGameCharacterSetPathDestination
    //   [+04] 0xc5b710 : sub_C5B710
    //   [+08] 0xc64080 : sub_C64080
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc67ba0 : sub_C67BA0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetPathDestination
