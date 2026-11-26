#pragma once
// Grapher Actor: ActorGameWorldItem
#include "Core/Utils/DecompTypes.h"

namespace ActorGameWorldItem
{
    constexpr const char* kActorName = "GameWorldItem";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbce160 | Ctor: 0x829c90 | Dtor: 0x81ea90 | Vtable: 0x205bd28 (11 slots)
    // Vtable (0x205bd28 / off_205BD28) Slot Table (11 virtual methods):
    //   [+00] 0x81ea90 : ActorGameWorldItem::~ActorGameWorldItem
    //   [+04] 0x8208f0 : sub_8208F0
    //   [+08] 0x826e40 : sub_826E40
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x831500 : sub_831500
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameWorldItem
