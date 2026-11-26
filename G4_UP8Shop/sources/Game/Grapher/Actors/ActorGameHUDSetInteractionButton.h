#pragma once
// Grapher Actor: ActorGameHUDSetInteractionButton
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDSetInteractionButton
{
    constexpr const char* kActorName = "GameHUDSetInteractionButton";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);

    // Factory: 0xbcace0 | Ctor: 0xc4fcb0 | Dtor: 0xc3f2f0 | Vtable: 0x206c9e0 (2 slots)
    // Vtable (0x206c9e0 / off_206C9E0) Slot Table (2 virtual methods):
    //   [+00] 0xc57da0 : sub_C57DA0
    //   [+04] 0x653120 : sub_653120
} // namespace ActorGameHUDSetInteractionButton
