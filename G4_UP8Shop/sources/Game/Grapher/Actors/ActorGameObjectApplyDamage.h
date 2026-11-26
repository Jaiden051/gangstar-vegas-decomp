#pragma once
// Grapher Actor: ActorGameObjectApplyDamage
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectApplyDamage
{
    constexpr const char* kActorName = "GameObjectApplyDamage";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcba00 | Ctor: 0xc38260 | Dtor: 0xc2b110 | Vtable: 0x206bc48 (11 slots)
    // Vtable (0x206bc48 / off_206BC48) Slot Table (11 virtual methods):
    //   [+00] 0xc2b110 : ActorGameObjectApplyDamage::~ActorGameObjectApplyDamage
    //   [+04] 0xc2b730 : sub_C2B730
    //   [+08] 0xc2fcd0 : sub_C2FCD0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc39ad0 : sub_C39AD0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectApplyDamage
