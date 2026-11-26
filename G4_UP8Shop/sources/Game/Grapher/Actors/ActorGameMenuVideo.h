#pragma once
// Grapher Actor: ActorGameMenuVideo
#include "Core/Utils/DecompTypes.h"

namespace ActorGameMenuVideo
{
    constexpr const char* kActorName = "GameMenuVideo";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb460 | Ctor: 0xc380d0 | Dtor: 0xc2b230 | Vtable: 0x206bac8 (11 slots)
    // Vtable (0x206bac8 / off_206BAC8) Slot Table (11 virtual methods):
    //   [+00] 0xc2b230 : ActorGameMenuVideo::~ActorGameMenuVideo
    //   [+04] 0xc2b5b0 : sub_C2B5B0
    //   [+08] 0xc2e5f0 : sub_C2E5F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc2b430 : sub_C2B430
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3d290 : sub_C3D290
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameMenuVideo
