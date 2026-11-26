#pragma once
// Grapher Actor: ActorGameScriptExec
#include "Core/Utils/DecompTypes.h"

namespace ActorGameScriptExec
{
    constexpr const char* kActorName = "GameScriptExec";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbcd620 | Ctor: 0x829990 | Dtor: 0x81ecd0 | Vtable: 0x205ba28 (11 slots)
    // Vtable (0x205ba28 / off_205BA28) Slot Table (11 virtual methods):
    //   [+00] 0x81ecd0 : ActorGameScriptExec::~ActorGameScriptExec
    //   [+04] 0x8205f0 : sub_8205F0
    //   [+08] 0x824cd0 : sub_824CD0
    //   [+12] 0x8347d0 : sub_8347D0
    //   [+16] 0x834450 : sub_834450
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x835df0 : byte_835DF0
    //   [+28] 0x13b4390 : _ZN7grapher9ActorBase6CancelEPNS_12ActorContextE
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x834050 : sub_834050
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameScriptExec
