#pragma once
// Grapher Actor: ActorGameObjectToggleIndestructible
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectToggleIndestructible
{
    constexpr const char* kActorName = "GameObjectToggleIndestructible";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcccc0 | Ctor: 0xc38cb0 | Dtor: 0xc2ad80 | Vtable: 0x206c248 (11 slots)
    // Vtable (0x206c248 / off_206C248) Slot Table (11 virtual methods):
    //   [+00] 0xc2ad80 : ActorGameObjectToggleIndestructible::~ActorGameObjectToggleIndestructible
    //   [+04] 0xc2bbf0 : sub_C2BBF0
    //   [+08] 0xc36f20 : sub_C36F20
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2bea0 : sub_C2BEA0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectToggleIndestructible
