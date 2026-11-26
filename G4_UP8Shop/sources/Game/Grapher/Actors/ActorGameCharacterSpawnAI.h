#pragma once
// Grapher Actor: ActorGameCharacterSpawnAI
#include "Core/Utils/DecompTypes.h"

namespace ActorGameCharacterSpawnAI
{
    constexpr const char* kActorName = "GameCharacterSpawnAI";
    int CreateInstance(int a1, int a2, int a3);
    int Construct(grapher::ActorBase::Self *a1, unsigned int a2);
    int Destroy(grapher::ActorBase::Self *a1);

    // Factory: 0xbc7b30 | Ctor: 0x845c30 | Dtor: 0x838e90 | Vtable: 0x205c648 (11 slots)
    // Vtable (0x205c648 / off_205C648) Slot Table (11 virtual methods):
    //   [+00] 0x838e90 : ActorGameCharacterSpawnAI::~ActorGameCharacterSpawnAI
    //   [+04] 0x8394f0 : sub_8394F0
    //   [+08] 0x83b8d0 : sub_83B8D0
    //   [+12] 0x835db0 : sub_835DB0
    //   [+16] 0x84adb0 : sub_84ADB0
    //   [+20] 0x835dd0 : sub_835DD0
    //   [+24] 0x849fa0 : sub_849FA0
    //   [+28] 0x845cd0 : sub_845CD0
    //   [+32] 0x835de0 : sub_835DE0
    //   [+36] 0x849570 : sub_849570
    //   [+40] 0x13b8870 : _ZN7grapher9ActorBase6VerifyEv
} // namespace ActorGameCharacterSpawnAI
