#pragma once
// Grapher Actor: ActorGameEventLockLootDrop
#include "Core/Utils/DecompTypes.h"

namespace ActorGameEventLockLootDrop
{
    constexpr const char* kActorName = "GameEventLockLootDrop";
    int CreateInstance(int a1, int a2, int a3);
    uint32_t * Construct(grapher::ActorBase::Self *a1, unsigned int a2);

    // Factory: 0xbc9fc0 | Ctor: 0xc4f580 | Dtor: 0xc40ef0 | Vtable: 0x206c600 (3 slots)
    // Vtable (0x206c600 / off_206C600) Slot Table (3 virtual methods):
    //   [+00] 0xc40ee0 : sub_C40EE0
    //   [+04] 0xc41350 : sub_C41350
    //   [+08] 0xc3f180 : sub_C3F180
} // namespace ActorGameEventLockLootDrop
