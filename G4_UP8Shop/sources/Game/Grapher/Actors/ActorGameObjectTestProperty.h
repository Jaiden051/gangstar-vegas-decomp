#pragma once
// Grapher Actor: ActorGameObjectTestProperty
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectTestProperty
{
    constexpr const char* kActorName = "GameObjectTestProperty";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc900 | Ctor: 0xc38bb0 | Dtor: 0xc2ae40 | Vtable: 0x206c148 (11 slots)
    // Vtable (0x206c148 / off_206C148) Slot Table (11 virtual methods):
    //   [+00] 0xc2ae40 : ActorGameObjectTestProperty::~ActorGameObjectTestProperty
    //   [+04] 0xc2baf0 : sub_C2BAF0
    //   [+08] 0xc35e10 : sub_C35E10
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc39800 : sub_C39800
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectTestProperty
