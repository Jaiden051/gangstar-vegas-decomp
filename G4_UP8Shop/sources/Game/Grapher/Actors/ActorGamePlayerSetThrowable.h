#pragma once
// Grapher Actor: ActorGamePlayerSetThrowable
#include "Core/Utils/DecompTypes.h"

namespace ActorGamePlayerSetThrowable
{
    constexpr const char* kActorName = "GamePlayerSetThrowable";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd530 | Ctor: 0x829950 | Dtor: 0x81ed00 | Vtable: 0x205b9e8 (11 slots)
    // Vtable (0x205b9e8 / off_205B9E8) Slot Table (11 virtual methods):
    //   [+00] 0x81ed00 : ActorGamePlayerSetThrowable::~ActorGamePlayerSetThrowable
    //   [+04] 0x8205b0 : sub_8205B0
    //   [+08] 0x824880 : sub_824880
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x831770 : sub_831770
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGamePlayerSetThrowable
