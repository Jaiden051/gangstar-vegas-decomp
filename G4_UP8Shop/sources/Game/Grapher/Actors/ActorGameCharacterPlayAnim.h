#pragma once
// Grapher Actor: ActorGameCharacterPlayAnim
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterPlayAnim
{
    constexpr const char* kActorName = "GameCharacterPlayAnim";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6a50 | Ctor: 0xc665e0 | Dtor: 0xc5adf0 | Vtable: 0x206cf28 (11 slots)
    // Vtable (0x206cf28 / off_206CF28) Slot Table (11 virtual methods):
    //   [+00] 0xc5adf0 : ActorGameCharacterPlayAnim::~ActorGameCharacterPlayAnim
    //   [+04] 0xc5b410 : sub_C5B410
    //   [+08] 0xc60230 : sub_C60230
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc6a920 : sub_C6A920
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterPlayAnim
