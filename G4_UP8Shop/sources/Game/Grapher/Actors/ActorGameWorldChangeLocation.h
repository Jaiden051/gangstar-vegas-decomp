#pragma once
// Grapher Actor: ActorGameWorldChangeLocation
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldChangeLocation
{
    constexpr const char* kActorName = "GameWorldChangeLocation";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbce250 | Ctor: 0x829cd0 | Dtor: 0x81ea60 | Vtable: 0x205bd68 (11 slots)
    // Vtable (0x205bd68 / off_205BD68) Slot Table (11 virtual methods):
    //   [+00] 0x81ea60 : ActorGameWorldChangeLocation::~ActorGameWorldChangeLocation
    //   [+04] 0x820930 : sub_820930
    //   [+08] 0x8273b0 : sub_8273B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x8339e0 : sub_8339E0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x833630 : sub_833630
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldChangeLocation
