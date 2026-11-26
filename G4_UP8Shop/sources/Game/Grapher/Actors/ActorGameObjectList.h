#pragma once
// Grapher Actor: ActorGameObjectList
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectList
{
    constexpr const char* kActorName = "GameObjectList";
    int CreateInstance(int a1, int a2, int a3);
    uint32_t * Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcc360 | Ctor: 0xc38720 | Dtor: 0xc2c2a0 | Vtable: 0x206bf48 (11 slots)
    // Vtable (0x206bf48 / off_206BF48) Slot Table (11 virtual methods):
    //   [+00] 0xc2c2a0 : ActorGameObjectList::~ActorGameObjectList
    //   [+04] 0xc2bcf0 : sub_C2BCF0
    //   [+08] 0xc33620 : sub_C33620
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc2de30 : sub_C2DE30
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameObjectList
