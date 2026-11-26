#pragma once
// Grapher Actor: ActorGameScriptLODFilter
#include "Core/Utils/DecompTypes.h"

namespace ActorGameScriptLODFilter
{
    constexpr const char* kActorName = "GameScriptLODFilter";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbca380 | Ctor: 0xc4f5d0 | Dtor: 0xc3f4d0 | Vtable: 0x206c728 (11 slots)
    // Vtable (0x206c728 / off_206C728) Slot Table (11 virtual methods):
    //   [+00] 0xc3f4d0 : ActorGameScriptLODFilter::~ActorGameScriptLODFilter
    //   [+04] 0xc40010 : sub_C40010
    //   [+08] 0xc461c0 : sub_C461C0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc52b00 : sub_C52B00
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameScriptLODFilter
