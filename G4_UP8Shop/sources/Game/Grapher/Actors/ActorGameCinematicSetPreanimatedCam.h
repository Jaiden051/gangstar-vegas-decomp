#pragma once
// Grapher Actor: ActorGameCinematicSetPreanimatedCam
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicSetPreanimatedCam
{
    constexpr const char* kActorName = "GameCinematicSetPreanimatedCam";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc92a0 | Ctor: 0x845680 | Dtor: 0x838a40 | Vtable: 0x205cc08 (11 slots)
    // Vtable (0x205cc08 / off_205CC08) Slot Table (11 virtual methods):
    //   [+00] 0x838a40 : ActorGameCinematicSetPreanimatedCam::~ActorGameCinematicSetPreanimatedCam
    //   [+04] 0x839ab0 : sub_839AB0
    //   [+08] 0x842bb0 : sub_842BB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x8390f0 : sub_8390F0
    //   [+28] 0x844690 : sub_844690
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x848a00 : sub_848A00
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicSetPreanimatedCam
