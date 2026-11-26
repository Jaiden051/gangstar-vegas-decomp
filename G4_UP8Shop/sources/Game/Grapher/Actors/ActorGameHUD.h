#pragma once
// Grapher Actor: ActorGameHUD
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUD
{
    constexpr const char* kActorName = "GameHUD";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca740 | Ctor: 0xc4f900 | Dtor: 0xc3f410 | Vtable: 0x206c828 (11 slots)
    // Vtable (0x206c828 / off_206C828) Slot Table (11 virtual methods):
    //   [+00] 0xc3f410 : ActorGameHUD::~ActorGameHUD
    //   [+04] 0xc40260 : sub_C40260
    //   [+08] 0xc470c0 : sub_C470C0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc533f0 : sub_C533F0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUD
