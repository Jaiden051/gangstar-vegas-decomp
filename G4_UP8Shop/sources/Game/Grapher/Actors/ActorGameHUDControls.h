#pragma once
// Grapher Actor: ActorGameHUDControls
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDControls
{
    constexpr const char* kActorName = "GameHUDControls";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcaa10 | Ctor: 0xc4f9c0 | Dtor: 0xc3f380 | Vtable: 0x206c8e8 (11 slots)
    // Vtable (0x206c8e8 / off_206C8E8) Slot Table (11 virtual methods):
    //   [+00] 0xc3f380 : ActorGameHUDControls::~ActorGameHUDControls
    //   [+04] 0xc401e0 : sub_C401E0
    //   [+08] 0xc423b0 : sub_C423B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc4d590 : sub_C4D590
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDControls
