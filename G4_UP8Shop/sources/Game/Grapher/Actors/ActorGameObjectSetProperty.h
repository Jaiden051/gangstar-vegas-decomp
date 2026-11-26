#pragma once
// Grapher Actor: ActorGameObjectSetProperty
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectSetProperty
{
    constexpr const char* kActorName = "GameObjectSetProperty";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc720 | Ctor: 0xc38b30 | Dtor: 0xc2aea0 | Vtable: 0x206c048 (11 slots)
    // Vtable (0x206c048 / off_206C048) Slot Table (11 virtual methods):
    //   [+00] 0xc2aea0 : ActorGameObjectSetProperty::~ActorGameObjectSetProperty
    //   [+04] 0xc2ba70 : sub_C2BA70
    //   [+08] 0xc34ff0 : sub_C34FF0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc399a0 : sub_C399A0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectSetProperty
