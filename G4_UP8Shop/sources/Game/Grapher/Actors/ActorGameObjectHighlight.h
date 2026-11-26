#pragma once
// Grapher Actor: ActorGameObjectHighlight
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectHighlight
{
    constexpr const char* kActorName = "GameObjectHighlight";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc270 | Ctor: 0xc386e0 | Dtor: 0xc2af60 | Vtable: 0x206bf08 (11 slots)
    // Vtable (0x206bf08 / off_206BF08) Slot Table (11 virtual methods):
    //   [+00] 0xc2af60 : ActorGameObjectHighlight::~ActorGameObjectHighlight
    //   [+04] 0xc2b970 : sub_C2B970
    //   [+08] 0xc32f90 : sub_C32F90
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3c8e0 : sub_C3C8E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectHighlight
