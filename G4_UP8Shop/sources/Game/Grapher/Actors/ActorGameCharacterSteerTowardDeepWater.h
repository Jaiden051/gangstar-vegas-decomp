#pragma once
// Grapher Actor: ActorGameCharacterSteerTowardDeepWater
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSteerTowardDeepWater
{
    constexpr const char* kActorName = "GameCharacterSteerTowardDeepWater";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7d10 | Ctor: 0x845040 | Dtor: 0x838e30 | Vtable: 0x205c6c8 (11 slots)
    // Vtable (0x205c6c8 / off_205C6C8) Slot Table (11 virtual methods):
    //   [+00] 0x838e30 : ActorGameCharacterSteerTowardDeepWater::~ActorGameCharacterSteerTowardDeepWater
    //   [+04] 0x839570 : sub_839570
    //   [+08] 0x83c830 : sub_83C830
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x83a8d0 : sub_83A8D0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSteerTowardDeepWater
