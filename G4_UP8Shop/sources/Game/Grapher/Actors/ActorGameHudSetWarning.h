#pragma once
// Grapher Actor: ActorGameHudSetWarning
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHudSetWarning
{
    constexpr const char* kActorName = "GameHudSetWarning";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcafb0 | Ctor: 0xc4fb90 | Dtor: 0xc3f290 | Vtable: 0x206ca88 (11 slots)
    // Vtable (0x206ca88 / off_206CA88) Slot Table (11 virtual methods):
    //   [+00] 0xc3f290 : ActorGameHudSetWarning::~ActorGameHudSetWarning
    //   [+04] 0xc3fd10 : sub_C3FD10
    //   [+08] 0xc4aad0 : sub_C4AAD0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0xc3f6b0 : sub_C3F6B0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0xc59ba0 : sub_C59BA0
    //   [+28] 0xc59ab0 : sub_C59AB0
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc41750 : sub_C41750
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHudSetWarning
