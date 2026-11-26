#pragma once
// Grapher Actor: ActorGameObjectValue
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectValue
{
    constexpr const char* kActorName = "GameObjectValue";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbccf90 | Ctor: 0xc38d70 | Dtor: 0xc2acf0 | Vtable: 0x206c308 (11 slots)
    // Vtable (0x206c308 / off_206C308) Slot Table (11 virtual methods):
    //   [+00] 0xc2acf0 : ActorGameObjectValue::~ActorGameObjectValue
    //   [+04] 0xc2bcb0 : sub_C2BCB0
    //   [+08] 0xc378d0 : sub_C378D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc38db0 : sub_C38DB0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectValue
