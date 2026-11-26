#pragma once
// Grapher Actor: ActorGameCharacterState
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterState
{
    constexpr const char* kActorName = "GameCharacterState";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7c20 | Ctor: 0x844a40 | Dtor: 0x838e60 | Vtable: 0x205c688 (11 slots)
    // Vtable (0x205c688 / off_205C688) Slot Table (11 virtual methods):
    //   [+00] 0x838e60 : ActorGameCharacterState::~ActorGameCharacterState
    //   [+04] 0x839530 : sub_839530
    //   [+08] 0x83c550 : sub_83C550
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x844f20 : sub_844F20
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterState
