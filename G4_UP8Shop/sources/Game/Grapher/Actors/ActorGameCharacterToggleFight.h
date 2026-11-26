#pragma once
// Grapher Actor: ActorGameCharacterToggleFight
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterToggleFight
{
    constexpr const char* kActorName = "GameCharacterToggleFight";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc82b0 | Ctor: 0x8451c0 | Dtor: 0x838d40 | Vtable: 0x205c808 (11 slots)
    // Vtable (0x205c808 / off_205C808) Slot Table (11 virtual methods):
    //   [+00] 0x838d40 : ActorGameCharacterToggleFight::~ActorGameCharacterToggleFight
    //   [+04] 0x8396b0 : sub_8396B0
    //   [+08] 0x83dc00 : sub_83DC00
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x846d60 : sub_846D60
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterToggleFight
