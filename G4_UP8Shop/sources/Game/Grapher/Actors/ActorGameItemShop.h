#pragma once
// Grapher Actor: ActorGameItemShop
#include "Core/Utils/DecompTypes.h"

namespace ActorGameItemShop
{
    constexpr const char* kActorName = "GameItemShop";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb370 | Ctor: 0xc4fc70 | Dtor: 0xc3f1d0 | Vtable: 0x206cb88 (11 slots)
    // Vtable (0x206cb88 / off_206CB88) Slot Table (11 virtual methods):
    //   [+00] 0xc3f1d0 : ActorGameItemShop::~ActorGameItemShop
    //   [+04] 0xc3fe10 : sub_C3FE10
    //   [+08] 0xc41e80 : sub_C41E80
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc40920 : sub_C40920
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameItemShop
