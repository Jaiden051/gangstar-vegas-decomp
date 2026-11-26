#pragma once
// Grapher Actor: ActorGameCharacterExitVehicle
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterExitVehicle
{
    constexpr const char* kActorName = "GameCharacterExitVehicle";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5c40 | Ctor: 0x855090 | Dtor: 0x84ceb0 | Vtable: 0x205dca8 (11 slots)
    // Vtable (0x205dca8 / off_205DCA8) Slot Table (11 virtual methods):
    //   [+00] 0x84ceb0 : ActorGameCharacterExitVehicle::~ActorGameCharacterExitVehicle
    //   [+04] 0x84d3d0 : sub_84D3D0
    //   [+08] 0x84fa70 : sub_84FA70
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8573a0 : sub_8573A0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterExitVehicle
