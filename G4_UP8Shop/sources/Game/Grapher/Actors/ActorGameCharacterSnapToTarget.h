#pragma once
// Grapher Actor: ActorGameCharacterSnapToTarget
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSnapToTarget
{
    constexpr const char* kActorName = "GameCharacterSnapToTarget";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7a40 | Ctor: 0x844a00 | Dtor: 0x838ec0 | Vtable: 0x205c608 (11 slots)
    // Vtable (0x205c608 / off_205C608) Slot Table (11 virtual methods):
    //   [+00] 0x838ec0 : ActorGameCharacterSnapToTarget::~ActorGameCharacterSnapToTarget
    //   [+04] 0x8394b0 : sub_8394B0
    //   [+08] 0x83ad50 : sub_83AD50
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x839e40 : sub_839E40
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSnapToTarget
