#pragma once
// Grapher Actor: ActorGameConditionLanded
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionLanded
{
    constexpr const char* kActorName = "GameConditionLanded";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9c00 | Ctor: 0xc4f080 | Dtor: 0xc3f560 | Vtable: 0x206c4c8 (11 slots)
    // Vtable (0x206c4c8 / off_206C4C8) Slot Table (11 virtual methods):
    //   [+00] 0xc3f560 : ActorGameConditionLanded::~ActorGameConditionLanded
    //   [+04] 0xc3ff10 : sub_C3FF10
    //   [+08] 0xc44340 : sub_C44340
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc419c0 : sub_C419C0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc41820 : sub_C41820
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionLanded
