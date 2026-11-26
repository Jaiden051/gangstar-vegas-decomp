#pragma once
// Grapher Actor: ActorGamePlayerGiveItem
#include "Core/Utils/DecompTypes.h"

namespace ActorGamePlayerGiveItem
{
    constexpr const char* kActorName = "GamePlayerGiveItem";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd350 | Ctor: 0x8298d0 | Dtor: 0x81ed60 | Vtable: 0x205b928 (11 slots)
    // Vtable (0x205b928 / off_205B928) Slot Table (11 virtual methods):
    //   [+00] 0x81ed60 : ActorGamePlayerGiveItem::~ActorGamePlayerGiveItem
    //   [+04] 0x820530 : sub_820530
    //   [+08] 0x823f60 : sub_823F60
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x8331c0 : sub_8331C0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGamePlayerGiveItem
