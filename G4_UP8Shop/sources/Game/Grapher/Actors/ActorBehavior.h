#pragma once
// Grapher Actor: ActorBehavior
#include "Core/Utils/DecompTypes.h"

namespace ActorBehavior
{
    constexpr const char* kActorName = "Behavior";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc4b60 | Ctor: 0x854b20 | Dtor: 0x84d8d0 | Vtable: 0x205d728 (11 slots)
    // Vtable (0x205d728 / off_205D728) Slot Table (11 virtual methods):
    //   [+00] 0x84d8d0 : ActorBehavior::~ActorBehavior
    //   [+04] 0x84d850 : sub_84D850
    //   [+08] 0x84f1e0 : sub_84F1E0
    //   [+12] 0x8583a0 : sub_8583A0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x84d9a0 : sub_84D9A0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x84c6d0 : byte_84C6D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorBehavior
