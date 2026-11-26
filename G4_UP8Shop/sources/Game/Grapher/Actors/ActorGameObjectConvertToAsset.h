#pragma once
// Grapher Actor: ActorGameObjectConvertToAsset
#include "Core/Utils/DecompTypes.h"

namespace ActorGameObjectConvertToAsset
{
    constexpr const char* kActorName = "GameObjectConvertToAsset";
    int CreateInstance(int a1, int a2, int a3);
    uint32_t * Construct(grapher::ActorBase::Self *a1, unsigned int a2);

    // Factory: 0xbcbbe0 | Ctor: 0xc382e0 | Dtor: 0xc2b0b0 | Vtable: 0x205cd10 (2 slots)
    // Vtable (0x205cd10 / off_205CD10) Slot Table (2 virtual methods):
    //   [+00] 0x84b640 : sub_84B640
    //   [+04] 0x84b660 : sub_84B660
} // namespace ActorGameObjectConvertToAsset
