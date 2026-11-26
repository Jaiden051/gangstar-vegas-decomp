#pragma once
// Grapher Actor: ActorGameHUDSetText
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDSetText
{
    constexpr const char* kActorName = "GameHUDSetText";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcadd0 | Ctor: 0xc4fb00 | Dtor: 0xc3f2c0 | Vtable: 0x206ca08 (11 slots)
    // Vtable (0x206ca08 / off_206CA08) Slot Table (11 virtual methods):
    //   [+00] 0xc3f2c0 : ActorGameHUDSetText::~ActorGameHUDSetText
    //   [+04] 0xc3fcd0 : sub_C3FCD0
    //   [+08] 0xc49bd0 : sub_C49BD0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc57e40 : sub_C57E40
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDSetText
