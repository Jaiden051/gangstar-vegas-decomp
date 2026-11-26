#pragma once
// Grapher Actor: ActorGameObjectSetMovability
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectSetMovability
{
    constexpr const char* kActorName = "GameObjectSetMovability";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbccae0 | Ctor: 0xc38c30 | Dtor: 0xc2ade0 | Vtable: 0x206c1c8 (11 slots)
    // Vtable (0x206c1c8 / off_206C1C8) Slot Table (11 virtual methods):
    //   [+00] 0xc2ade0 : ActorGameObjectSetMovability::~ActorGameObjectSetMovability
    //   [+04] 0xc2bb70 : sub_C2BB70
    //   [+08] 0xc36770 : sub_C36770
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3ba80 : sub_C3BA80
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectSetMovability
