#pragma once
// Grapher Actor: ActorSoundAction
#include "Core/Utils/DecompTypes.h"

namespace ActorSoundAction
{
    constexpr const char* kActorName = "SoundAction";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8c10 | Ctor: 0x854d10 | Dtor: 0x84d120 | Vtable: 0x205d928 (11 slots)
    // Vtable (0x205d928 / off_205D928) Slot Table (11 virtual methods):
    //   [+00] 0x84d120 : ActorSoundAction::~ActorSoundAction
    //   [+04] 0x84d510 : sub_84D510
    //   [+08] 0x852ab0 : sub_852AB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8590c0 : sub_8590C0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorSoundAction
