#pragma once
// Grapher Actor: ActorGameObjectExists
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectExists
{
    constexpr const char* kActorName = "GameObjectExists";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcbfa0 | Ctor: 0xc38620 | Dtor: 0xc2aff0 | Vtable: 0x206bdc8 (11 slots)
    // Vtable (0x206bdc8 / off_206BDC8) Slot Table (11 virtual methods):
    //   [+00] 0xc2aff0 : ActorGameObjectExists::~ActorGameObjectExists
    //   [+04] 0xc2b8b0 : sub_C2B8B0
    //   [+08] 0xc31610 : sub_C31610
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc3b400 : sub_C3B400
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectExists
