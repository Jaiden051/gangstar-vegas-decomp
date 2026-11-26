#pragma once
// Grapher Actor: ActorBehaviorChild
#include "Core/Utils/DecompTypes.h"

namespace ActorBehaviorChild
{
    constexpr const char* kActorName = "BehaviorChild";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc4c50 | Ctor: 0x854b70 | Dtor: 0x84d270 | Vtable: 0x205d768 (11 slots)
    // Vtable (0x205d768 / off_205D768) Slot Table (11 virtual methods):
    //   [+00] 0x84d270 : ActorBehaviorChild::~ActorBehaviorChild
    //   [+04] 0x84d890 : sub_84D890
    //   [+08] 0x84ec10 : sub_84EC10
    //   [+12] 0x855f30 : sub_855F30
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x84d900 : sub_84D900
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x84c6e0 : byte_84C6E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorBehaviorChild
