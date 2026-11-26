#pragma once
// Grapher Actor: ActorGameCinematicDialog
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicDialog
{
    constexpr const char* kActorName = "GameCinematicDialog";
    int CreateInstance(int a1, int a2, int a3);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc8d00 | Ctor: 0x845440 | Dtor: 0x838b60 | Vtable: 0x205ca88 (11 slots)
    // Vtable (0x205ca88 / off_205CA88) Slot Table (11 virtual methods):
    //   [+00] 0x838b60 : ActorGameCinematicDialog::~ActorGameCinematicDialog
    //   [+04] 0x839930 : sub_839930
    //   [+08] 0x8400c0 : sub_8400C0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x835dc0 : sub_835DC0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x843e30 : sub_843E30
    //   [+28] 0x843d70 : sub_843D70
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x847b80 : sub_847B80
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicDialog
