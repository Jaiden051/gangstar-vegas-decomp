#pragma once
// Grapher Actor: ActorGameSetActionZone
#include "Core/Utils/DecompTypes.h"

namespace ActorGameSetActionZone
{
    constexpr const char* kActorName = "GameSetActionZone";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8b20 | Ctor: 0x845400 | Dtor: 0x838b90 | Vtable: 0x205ca48 (11 slots)
    // Vtable (0x205ca48 / off_205CA48) Slot Table (11 virtual methods):
    //   [+00] 0x838b90 : ActorGameSetActionZone::~ActorGameSetActionZone
    //   [+04] 0x8398f0 : sub_8398F0
    //   [+08] 0x8431b0 : sub_8431B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x845ea0 : sub_845EA0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameSetActionZone
