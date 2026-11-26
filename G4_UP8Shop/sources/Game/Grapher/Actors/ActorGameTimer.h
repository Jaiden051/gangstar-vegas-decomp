#pragma once
// Grapher Actor: ActorGameTimer
#include "Core/Utils/DecompTypes.h"

namespace ActorGameTimer
{
    constexpr const char* kActorName = "GameTimer";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(int a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb280 | Ctor: 0xc4feb0 | Dtor: 0xc3f200 | Vtable: 0x206cb48 (11 slots)
    // Vtable (0x206cb48 / off_206CB48) Slot Table (11 virtual methods):
    //   [+00] 0xc3f200 : ActorGameTimer::~ActorGameTimer
    //   [+04] 0xc3fdd0 : sub_C3FDD0
    //   [+08] 0xc4cc70 : sub_C4CC70
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0xc3f670 : sub_C3F670
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc54cd0 : sub_C54CD0
    //   [+28] 0xc54a30 : sub_C54A30
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc55460 : sub_C55460
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameTimer
