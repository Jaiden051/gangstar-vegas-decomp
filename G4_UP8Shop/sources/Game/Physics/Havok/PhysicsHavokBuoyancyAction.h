#pragma once
#include "Core/Utils/DecompTypes.h"

namespace PhysicsHavokBuoyancyAction
{
    struct Self { uint8_t opaque[256]; };
    hkpAction::Self * addToWorld_thunk(int a1, int a2);
    hkpAction::Self * addToWorld(hkpAction::Self *a1, int a2);
    int removeReference_thunk(int a1);
    int removeReference(int a1);
    int applyAction(long double a1, int a2, int a3, const hkMatrix3f::Self *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, float a18, float a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, float a57, float a58, float a59, float a60, float a61, float a62, float a63, float a64);
    int clone();
    int Destroy(hkpUnaryAction::Self *a1);
}
