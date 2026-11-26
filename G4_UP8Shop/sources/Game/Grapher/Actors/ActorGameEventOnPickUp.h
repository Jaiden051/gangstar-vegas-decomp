#pragma once
// Grapher Actor: ActorGameEventOnPickUp
#include "Core/Utils/DecompTypes.h"

namespace ActorGameEventOnPickUp
{
    constexpr const char* kActorName = "GameEventOnPickUp";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);

    // Factory: 0xbca1a0 | Ctor: 0xc4fd70 | Dtor: 0xc40cf0 | Vtable: 0x206c6c0 (3 slots)
    // Vtable (0x206c6c0 / off_206C6C0) Slot Table (3 virtual methods):
    //   [+00] 0xc40ce0 : sub_C40CE0
    //   [+04] 0xc40bd0 : sub_C40BD0
    //   [+08] 0xc524f0 : sub_C524F0
} // namespace ActorGameEventOnPickUp
