#pragma once
// Grapher Actor: ActorGameEventOnKill
#include "Core/Utils/DecompTypes.h"

namespace ActorGameEventOnKill
{
    constexpr const char* kActorName = "GameEventOnKill";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);

    // Factory: 0xbca0b0 | Ctor: 0xc4fde0 | Dtor: 0xc40df0 | Vtable: 0x206c660 (3 slots)
    // Vtable (0x206c660 / off_206C660) Slot Table (3 virtual methods):
    //   [+00] 0xc40de0 : sub_C40DE0
    //   [+04] 0xc41240 : sub_C41240
    //   [+08] 0xc527e0 : sub_C527E0
} // namespace ActorGameEventOnKill
