#pragma once
// Grapher Actor: ActorGameObjectReplacement
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectReplacement
{
    constexpr const char* kActorName = "GameObjectReplacement";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);

    // Factory: 0xbcc540 | Ctor: 0xc38870 | Dtor: 0xc2af00 | Vtable: 0x205cd10 (2 slots)
    // Vtable (0x205cd10 / off_205CD10) Slot Table (2 virtual methods):
    //   [+00] 0x84b640 : sub_84B640
    //   [+04] 0x84b660 : sub_84B660
} // namespace ActorGameObjectReplacement
