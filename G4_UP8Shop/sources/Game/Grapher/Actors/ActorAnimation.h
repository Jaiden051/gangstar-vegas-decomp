#pragma once
// Grapher Actor: ActorAnimation
#include "Core/Utils/DecompTypes.h"

namespace ActorAnimation
{
    constexpr const char* kActorName = "Animation";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc4a70 | Ctor: 0x8558b0 | Dtor: 0x84d2a0 | Vtable: 0x205d6e8 (11 slots)
    // Vtable (0x205d6e8 / off_205D6E8) Slot Table (11 virtual methods):
    //   [+00] 0x84d2a0 : ActorAnimation::~ActorAnimation
    //   [+04] 0x84d310 : sub_84D310
    //   [+08] 0x84cb30 : sub_84CB30
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x858760 : sub_858760
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorAnimation
