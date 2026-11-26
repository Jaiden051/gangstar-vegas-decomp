#pragma once
// Grapher Actor: ActorGameHUDTutorial
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDTutorial
{
    constexpr const char* kActorName = "GameHUDTutorial";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb190 | Ctor: 0xc4fc30 | Dtor: 0xc3f230 | Vtable: 0x206cb08 (11 slots)
    // Vtable (0x206cb08 / off_206CB08) Slot Table (11 virtual methods):
    //   [+00] 0xc3f230 : ActorGameHUDTutorial::~ActorGameHUDTutorial
    //   [+04] 0xc3fd90 : sub_C3FD90
    //   [+08] 0xc42000 : sub_C42000
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc4d8d0 : sub_C4D8D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDTutorial
