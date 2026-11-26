#pragma once
// Grapher Actor: ActorGameObjectGetProperty
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectGetProperty
{
    constexpr const char* kActorName = "GameObjectGetProperty";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc180 | Ctor: 0xc386a0 | Dtor: 0xc2af90 | Vtable: 0x206be48 (11 slots)
    // Vtable (0x206be48 / off_206BE48) Slot Table (11 virtual methods):
    //   [+00] 0xc2af90 : ActorGameObjectGetProperty::~ActorGameObjectGetProperty
    //   [+04] 0xc2b930 : sub_C2B930
    //   [+08] 0xc31e30 : sub_C31E30
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3a070 : sub_C3A070
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectGetProperty
