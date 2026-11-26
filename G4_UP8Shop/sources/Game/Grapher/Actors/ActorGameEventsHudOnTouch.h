#pragma once
// Grapher Actor: ActorGameEventsHudOnTouch
#include "Core/Utils/DecompTypes.h"

namespace ActorGameEventsHudOnTouch
{
    constexpr const char* kActorName = "GameEventsHudOnTouch";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(int a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca290 | Ctor: 0xc4fd10 | Dtor: 0xc3f500 | Vtable: 0x206c6e8 (11 slots)
    // Vtable (0x206c6e8 / off_206C6E8) Slot Table (11 virtual methods):
    //   [+00] 0xc3f500 : ActorGameEventsHudOnTouch::~ActorGameEventsHudOnTouch
    //   [+04] 0xc40050 : sub_C40050
    //   [+08] 0xc45b70 : sub_C45B70
    //   [+12] 0xc55350 : sub_C55350
    //   [+16] 0xc3f730 : sub_C3F730
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc52bd0 : sub_C52BD0
    //   [+28] 0xc53940 : sub_C53940
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc52d50 : sub_C52D50
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameEventsHudOnTouch
