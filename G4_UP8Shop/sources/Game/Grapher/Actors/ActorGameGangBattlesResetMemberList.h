#pragma once
// Grapher Actor: ActorGameGangBattlesResetMemberList
#include "Core/Utils/DecompTypes.h"

namespace ActorGameGangBattlesResetMemberList
{
    constexpr const char* kActorName = "GameGangBattlesResetMemberList";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca560 | Ctor: 0xc4f880 | Dtor: 0xc3f470 | Vtable: 0x206c7a8 (11 slots)
    // Vtable (0x206c7a8 / off_206C7A8) Slot Table (11 virtual methods):
    //   [+00] 0xc3f470 : ActorGameGangBattlesResetMemberList::~ActorGameGangBattlesResetMemberList
    //   [+04] 0xc3fed0 : sub_C3FED0
    //   [+08] 0xc46aa0 : sub_C46AA0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc52a00 : sub_C52A00
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameGangBattlesResetMemberList
