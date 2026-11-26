#pragma once
// Grapher Actor: ActorGameCharacterShoot
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterShoot
{
    constexpr const char* kActorName = "GameCharacterShoot";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7950 | Ctor: 0x8449c0 | Dtor: 0x838ef0 | Vtable: 0x205c5c8 (11 slots)
    // Vtable (0x205c5c8 / off_205C5C8) Slot Table (11 virtual methods):
    //   [+00] 0x838ef0 : ActorGameCharacterShoot::~ActorGameCharacterShoot
    //   [+04] 0x839470 : sub_839470
    //   [+08] 0x83b5f0 : sub_83B5F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83a800 : sub_83A800
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterShoot
