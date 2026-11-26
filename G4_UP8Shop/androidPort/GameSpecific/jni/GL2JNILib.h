#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Bridge: GL2JNILib.h
// ============================================================================
#pragma once


namespace GL2JNILib {
    void init(int width, int height);
    void resize(int width, int height);
    void step();
    void pause();
    void resume();
    void touchEvent(int action, int id, int x, int y);
    void keyEvent(int keyCode, int action);
} // namespace GL2JNILib
