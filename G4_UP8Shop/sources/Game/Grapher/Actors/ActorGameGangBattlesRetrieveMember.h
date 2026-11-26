#pragma once
// Grapher Actor: ActorGameGangBattlesRetrieveMember
#include "Core/Utils/DecompTypes.h"

namespace ActorGameGangBattlesRetrieveMember
{
    constexpr const char* kActorName = "GameGangBattlesRetrieveMember";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca650 | Ctor: 0xc4f8c0 | Dtor: 0xc3f440 | Vtable: 0x206c7e8 (11 slots)
    // Vtable (0x206c7e8 / off_206C7E8) Slot Table (11 virtual methods):
    //   [+00] 0xc3f440 : ActorGameGangBattlesRetrieveMember::~ActorGameGangBattlesRetrieveMember
    //   [+04] 0xc40220 : sub_C40220
    //   [+08] 0xc46d30 : sub_C46D30
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc532e0 : sub_C532E0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameGangBattlesRetrieveMember
