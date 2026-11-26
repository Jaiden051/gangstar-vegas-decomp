#pragma once
// Grapher Actor: ActorGameObjectAttach
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectAttach
{
    constexpr const char* kActorName = "GameObjectAttach";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcbaf0 | Ctor: 0xc382a0 | Dtor: 0xc2b0e0 | Vtable: 0x206bc88 (11 slots)
    // Vtable (0x206bc88 / off_206BC88) Slot Table (11 virtual methods):
    //   [+00] 0xc2b0e0 : ActorGameObjectAttach::~ActorGameObjectAttach
    //   [+04] 0xc2b770 : sub_C2B770
    //   [+08] 0xc303e0 : sub_C303E0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2b300 : sub_C2B300
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectAttach
