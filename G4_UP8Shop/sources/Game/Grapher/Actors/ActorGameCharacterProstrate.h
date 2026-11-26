#pragma once
// Grapher Actor: ActorGameCharacterProstrate
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterProstrate
{
    constexpr const char* kActorName = "GameCharacterProstrate";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc6b40 | Ctor: 0xc66620 | Dtor: 0xc5adc0 | Vtable: 0x206cf68 (11 slots)
    // Vtable (0x206cf68 / off_206CF68) Slot Table (11 virtual methods):
    //   [+00] 0xc5adc0 : ActorGameCharacterProstrate::~ActorGameCharacterProstrate
    //   [+04] 0xc5b450 : sub_C5B450
    //   [+08] 0xc5c8b0 : sub_C5C8B0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc5b9c0 : sub_C5B9C0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterProstrate
