#pragma once
// Grapher Actor: ActorGameStartModule
#include "Core/Utils/DecompTypes.h"

namespace ActorGameStartModule
{
    constexpr const char* kActorName = "GameStartModule";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb910 | Ctor: 0xc38220 | Dtor: 0xc2b140 | Vtable: 0x206bc08 (11 slots)
    // Vtable (0x206bc08 / off_206BC08) Slot Table (11 virtual methods):
    //   [+00] 0xc2b140 : ActorGameStartModule::~ActorGameStartModule
    //   [+04] 0xc2b6f0 : sub_C2B6F0
    //   [+08] 0xc2f920 : sub_C2F920
    //   [+12] 0xc3b1c0 : sub_C3B1C0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3cdc0 : sub_C3CDC0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameStartModule
