#pragma once
// Grapher Actor: ActorGameCharacterStopForObject
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterStopForObject
{
    constexpr const char* kActorName = "GameCharacterStopForObject";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7e00 | Ctor: 0x845080 | Dtor: 0x838e00 | Vtable: 0x205c708 (11 slots)
    // Vtable (0x205c708 / off_205C708) Slot Table (11 virtual methods):
    //   [+00] 0x838e00 : ActorGameCharacterStopForObject::~ActorGameCharacterStopForObject
    //   [+04] 0x8395b0 : sub_8395B0
    //   [+08] 0x83cac0 : sub_83CAC0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83a980 : sub_83A980
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterStopForObject
