#pragma once
// Grapher Actor: ActorGameWorldTimeFormat
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldTimeFormat
{
    constexpr const char* kActorName = "GameWorldTimeFormat";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbce610 | Ctor: 0x82a120 | Dtor: 0x81e9d0 | Vtable: 0x205be68 (11 slots)
    // Vtable (0x205be68 / off_205BE68) Slot Table (11 virtual methods):
    //   [+00] 0x81e9d0 : ActorGameWorldTimeFormat::~ActorGameWorldTimeFormat
    //   [+04] 0x8209f0 : sub_8209F0
    //   [+08] 0x829280 : sub_829280
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x831b50 : sub_831B50
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldTimeFormat
