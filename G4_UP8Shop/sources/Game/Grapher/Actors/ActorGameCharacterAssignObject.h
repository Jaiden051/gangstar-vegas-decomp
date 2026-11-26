#pragma once
// Grapher Actor: ActorGameCharacterAssignObject
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterAssignObject
{
    constexpr const char* kActorName = "GameCharacterAssignObject";
    grapher::ActorBase::Self * CreateInstance(unsigned int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc5010 | Ctor: 0x854d90 | Dtor: 0x84d0c0 | Vtable: 0x205d9a8 (11 slots)
    // Vtable (0x205d9a8 / off_205D9A8) Slot Table (11 virtual methods):
    //   [+00] 0x84d0c0 : ActorGameCharacterAssignObject::~ActorGameCharacterAssignObject
    //   [+04] 0x84d610 : sub_84D610
    //   [+08] 0x852110 : sub_852110
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x859310 : sub_859310
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterAssignObject
