#pragma once
// Grapher Actor: ActorGameCinematicFadeIn
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicFadeIn
{
    constexpr const char* kActorName = "GameCinematicFadeIn";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8df0 | Ctor: 0x845480 | Dtor: 0x838b30 | Vtable: 0x205cac8 (11 slots)
    // Vtable (0x205cac8 / off_205CAC8) Slot Table (11 virtual methods):
    //   [+00] 0x838b30 : ActorGameCinematicFadeIn::~ActorGameCinematicFadeIn
    //   [+04] 0x839970 : sub_839970
    //   [+08] 0x840d90 : sub_840D90
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x843a60 : sub_843A60
    //   [+28] 0x83a430 : sub_83A430
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x846830 : sub_846830
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicFadeIn
