#pragma once
// Grapher Actor: ActorGameHUDGenericText
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDGenericText
{
    constexpr const char* kActorName = "GameHUDGenericText";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(uint8_t *a1, unsigned int a2);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcab00 | Ctor: 0xc4fa00 | Dtor: 0xc3f350 | Vtable: 0x206c928 (11 slots)
    // Vtable (0x206c928 / off_206C928) Slot Table (11 virtual methods):
    //   [+00] 0xc3f350 : ActorGameHUDGenericText::~ActorGameHUDGenericText
    //   [+04] 0xc40090 : sub_C40090
    //   [+08] 0xc47d20 : sub_C47D20
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc55920 : sub_C55920
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDGenericText
