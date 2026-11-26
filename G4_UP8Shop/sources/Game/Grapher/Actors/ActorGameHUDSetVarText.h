#pragma once
// Grapher Actor: ActorGameHUDSetVarText
#include "Core/Utils/DecompTypes.h"

namespace ActorGameHUDSetVarText
{
    constexpr const char* kActorName = "GameHUDSetVarText";
    int CreateInstance(int a1, int a2, int a3);
    void Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcb0a0 | Ctor: 0xc4fbf0 | Dtor: 0xc3f260 | Vtable: 0x206cac8 (11 slots)
    // Vtable (0x206cac8 / off_206CAC8) Slot Table (11 virtual methods):
    //   [+00] 0xc3f260 : ActorGameHUDSetVarText::~ActorGameHUDSetVarText
    //   [+04] 0xc3fd50 : sub_C3FD50
    //   [+08] 0xc4b1f0 : sub_C4B1F0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0xc58ed0 : sub_C58ED0
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameHUDSetVarText
