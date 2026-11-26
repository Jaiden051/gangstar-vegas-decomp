#pragma once
// Grapher Actor: ActorGameWorldSetLock
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldSetLock
{
    constexpr const char* kActorName = "GameWorldSetLock";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbce430 | Ctor: 0x82a0a0 | Dtor: 0x81ea30 | Vtable: 0x205bde8 (11 slots)
    // Vtable (0x205bde8 / off_205BDE8) Slot Table (11 virtual methods):
    //   [+00] 0x81ea30 : ActorGameWorldSetLock::~ActorGameWorldSetLock
    //   [+04] 0x820970 : sub_820970
    //   [+08] 0x828270 : sub_828270
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x81f960 : sub_81F960
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldSetLock
