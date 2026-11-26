#pragma once
// Grapher Actor: ActorTimer
#include "Core/Utils/DecompTypes.h"

namespace ActorTimer
{
    constexpr const char* kActorName = "Timer";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);

    // Factory: 0xbc4d40 | Ctor: 0x855910 | Dtor: 0x84d240 | Vtable: 0x205dd50 (2 slots)
    // Vtable (0x205dd50 / off_205DD50) Slot Table (2 virtual methods):
    //   [+00] 0x85a430 : sub_85A430
    //   [+04] 0x85a450 : sub_85A450
} // namespace ActorTimer
