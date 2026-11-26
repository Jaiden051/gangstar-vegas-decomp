#pragma once
// Grapher Actor: ActorGameCharacterSetMonitoredAnim
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSetMonitoredAnim
{
    constexpr const char* kActorName = "GameCharacterSetMonitoredAnim";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc72c0 | Ctor: 0xc66820 | Dtor: 0xc5ac40 | Vtable: 0x206d168 (11 slots)
    // Vtable (0x206d168 / off_206D168) Slot Table (11 virtual methods):
    //   [+00] 0xc5ac40 : ActorGameCharacterSetMonitoredAnim::~ActorGameCharacterSetMonitoredAnim
    //   [+04] 0xc5b650 : sub_C5B650
    //   [+08] 0xc623c0 : sub_C623C0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc6a4a0 : sub_C6A4A0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSetMonitoredAnim
