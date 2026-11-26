#pragma once
// Grapher Actor: ActorGameCinematicStop
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicStop
{
    constexpr const char* kActorName = "GameCinematicStop";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9570 | Ctor: 0x845b90 | Dtor: 0x8389b0 | Vtable: 0x205ccc8 (11 slots)
    // Vtable (0x205ccc8 / off_205CCC8) Slot Table (11 virtual methods):
    //   [+00] 0x8389b0 : ActorGameCinematicStop::~ActorGameCinematicStop
    //   [+04] 0x839b70 : sub_839B70
    //   [+08] 0x839180 : sub_839180
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x8438b0 : sub_8438B0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x843810 : sub_843810
    //   [+36] 0x8440d0 : sub_8440D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicStop
