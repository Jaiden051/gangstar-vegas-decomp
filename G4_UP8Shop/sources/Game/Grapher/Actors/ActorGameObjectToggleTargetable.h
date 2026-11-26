#pragma once
// Grapher Actor: ActorGameObjectToggleTargetable
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectToggleTargetable
{
    constexpr const char* kActorName = "GameObjectToggleTargetable";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbccea0 | Ctor: 0xc38d30 | Dtor: 0xc2ad20 | Vtable: 0x206c2c8 (11 slots)
    // Vtable (0x206c2c8 / off_206C2C8) Slot Table (11 virtual methods):
    //   [+00] 0xc2ad20 : ActorGameObjectToggleTargetable::~ActorGameObjectToggleTargetable
    //   [+04] 0xc2bc70 : sub_C2BC70
    //   [+08] 0xc375a0 : sub_C375A0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2bd50 : sub_C2BD50
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectToggleTargetable
