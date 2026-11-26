#pragma once
// Grapher Actor: ActorGameGangBattlesApplyProfile
#include "Core/Utils/DecompTypes.h"

namespace ActorGameGangBattlesApplyProfile
{
    constexpr const char* kActorName = "GameGangBattlesApplyProfile";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca470 | Ctor: 0xc4f610 | Dtor: 0xc3f4a0 | Vtable: 0x206c768 (11 slots)
    // Vtable (0x206c768 / off_206C768) Slot Table (11 virtual methods):
    //   [+00] 0xc3f4a0 : ActorGameGangBattlesApplyProfile::~ActorGameGangBattlesApplyProfile
    //   [+04] 0xc3ffd0 : sub_C3FFD0
    //   [+08] 0xc46510 : sub_C46510
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc53a80 : sub_C53A80
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameGangBattlesApplyProfile
