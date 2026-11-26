#pragma once
// Grapher Actor: ActorGameConditionAnimEnded
#include "Core/Utils/DecompTypes.h"

namespace ActorGameConditionAnimEnded
{
    constexpr const char* kActorName = "GameConditionAnimEnded";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(int a1, unsigned int a2);

    // Factory: 0xbc9660 | Ctor: 0xc50c10 | Dtor: 0xc50bb0 | Vtable: 0x206cc00 (2 slots)
    // Vtable (0x206cc00 / off_206CC00) Slot Table (2 virtual methods):
    //   [+00] 0xc5a610 : sub_C5A610
    //   [+04] 0xc5a670 : sub_C5A670
} // namespace ActorGameConditionAnimEnded
