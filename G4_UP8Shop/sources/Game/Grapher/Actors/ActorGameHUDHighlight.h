#pragma once
// Grapher Actor: ActorGameHUDHighlight
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDHighlight
{
    constexpr const char* kActorName = "GameHUDHighlight";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcabf0 | Ctor: 0xc4fac0 | Dtor: 0xc3f320 | Vtable: 0x206c968 (11 slots)
    // Vtable (0x206c968 / off_206C968) Slot Table (11 virtual methods):
    //   [+00] 0xc3f320 : ActorGameHUDHighlight::~ActorGameHUDHighlight
    //   [+04] 0xc400d0 : sub_C400D0
    //   [+08] 0xc42180 : sub_C42180
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc54000 : sub_C54000
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDHighlight
