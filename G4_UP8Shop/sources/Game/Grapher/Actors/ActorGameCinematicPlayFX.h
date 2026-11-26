#pragma once
// Grapher Actor: ActorGameCinematicPlayFX
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCinematicPlayFX
{
    constexpr const char* kActorName = "GameCinematicPlayFX";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc90c0 | Ctor: 0x845bd0 | Dtor: 0x838aa0 | Vtable: 0x205cb88 (11 slots)
    // Vtable (0x205cb88 / off_205CB88) Slot Table (11 virtual methods):
    //   [+00] 0x838aa0 : ActorGameCinematicPlayFX::~ActorGameCinematicPlayFX
    //   [+04] 0x839a30 : sub_839A30
    //   [+08] 0x841db0 : sub_841DB0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x838f20 : sub_838F20
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x838950 : byte_838950
    //   [+28] 0x845d20 : sub_845D20
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x848450 : sub_848450
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCinematicPlayFX
