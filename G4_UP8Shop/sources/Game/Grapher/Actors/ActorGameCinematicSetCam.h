#pragma once
// Grapher Actor: ActorGameCinematicSetCam
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicSetCam
{
    constexpr const char* kActorName = "GameCinematicSetCam";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc91b0 | Ctor: 0x845640 | Dtor: 0x838a70 | Vtable: 0x205cbc8 (11 slots)
    // Vtable (0x205cbc8 / off_205CBC8) Slot Table (11 virtual methods):
    //   [+00] 0x838a70 : ActorGameCinematicSetCam::~ActorGameCinematicSetCam
    //   [+04] 0x839a70 : sub_839A70
    //   [+08] 0x842450 : sub_842450
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x83a200 : sub_83A200
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x84a690 : sub_84A690
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicSetCam
