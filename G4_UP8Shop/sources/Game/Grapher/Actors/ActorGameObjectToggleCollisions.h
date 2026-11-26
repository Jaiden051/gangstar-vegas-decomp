#pragma once
// Grapher Actor: ActorGameObjectToggleCollisions
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectToggleCollisions
{
    constexpr const char* kActorName = "GameObjectToggleCollisions";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc9f0 | Ctor: 0xc38bf0 | Dtor: 0xc2ae10 | Vtable: 0x206c188 (11 slots)
    // Vtable (0x206c188 / off_206C188) Slot Table (11 virtual methods):
    //   [+00] 0xc2ae10 : ActorGameObjectToggleCollisions::~ActorGameObjectToggleCollisions
    //   [+04] 0xc2bb30 : sub_C2BB30
    //   [+08] 0xc36440 : sub_C36440
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2c170 : sub_C2C170
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectToggleCollisions
