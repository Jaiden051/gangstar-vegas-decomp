#pragma once
// Grapher Actor: ActorGameObjectToggleImmobilized
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectToggleImmobilized
{
    constexpr const char* kActorName = "GameObjectToggleImmobilized";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbccbd0 | Ctor: 0xc38c70 | Dtor: 0xc2adb0 | Vtable: 0x206c208 (11 slots)
    // Vtable (0x206c208 / off_206C208) Slot Table (11 virtual methods):
    //   [+00] 0xc2adb0 : ActorGameObjectToggleImmobilized::~ActorGameObjectToggleImmobilized
    //   [+04] 0xc2bbb0 : sub_C2BBB0
    //   [+08] 0xc36bf0 : sub_C36BF0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2bff0 : sub_C2BFF0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectToggleImmobilized
