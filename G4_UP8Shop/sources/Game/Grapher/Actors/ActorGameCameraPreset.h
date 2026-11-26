#pragma once
// Grapher Actor: ActorGameCameraPreset
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCameraPreset
{
    constexpr const char* kActorName = "GameCameraPreset";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc4e30 | Ctor: 0x854bc0 | Dtor: 0x84d210 | Vtable: 0x205d7e8 (11 slots)
    // Vtable (0x205d7e8 / off_205D7E8) Slot Table (11 virtual methods):
    //   [+00] 0x84d210 : ActorGameCameraPreset::~ActorGameCameraPreset
    //   [+04] 0x84d4d0 : sub_84D4D0
    //   [+08] 0x84e170 : sub_84E170
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x855b10 : sub_855B10
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCameraPreset
