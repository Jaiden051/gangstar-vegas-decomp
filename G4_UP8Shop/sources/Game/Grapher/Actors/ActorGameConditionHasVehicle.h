#pragma once
// Grapher Actor: ActorGameConditionHasVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionHasVehicle
{
    constexpr const char* kActorName = "GameConditionHasVehicle";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc9750 | Ctor: 0xc4fe50 | Dtor: 0xc3f5f0 | Vtable: 0x206c388 (11 slots)
    // Vtable (0x206c388 / off_206C388) Slot Table (11 virtual methods):
    //   [+00] 0xc3f5f0 : ActorGameConditionHasVehicle::~ActorGameConditionHasVehicle
    //   [+04] 0xc3fe50 : sub_C3FE50
    //   [+08] 0xc42af0 : sub_C42AF0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc54850 : sub_C54850
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc548a0 : sub_C548A0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameConditionHasVehicle
