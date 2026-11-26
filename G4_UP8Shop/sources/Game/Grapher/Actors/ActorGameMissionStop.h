#pragma once
// Grapher Actor: ActorGameMissionStop
#include "Core/Utils/DecompTypes.h"

namespace ActorGameMissionStop
{
    constexpr const char* kActorName = "GameMissionStop";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb640 | Ctor: 0xc38160 | Dtor: 0xc2b1d0 | Vtable: 0x206bb48 (11 slots)
    // Vtable (0x206bb48 / off_206BB48) Slot Table (11 virtual methods):
    //   [+00] 0xc2b1d0 : ActorGameMissionStop::~ActorGameMissionStop
    //   [+04] 0xc2b630 : sub_C2B630
    //   [+08] 0xc2eee0 : sub_C2EEE0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3d040 : sub_C3D040
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameMissionStop
