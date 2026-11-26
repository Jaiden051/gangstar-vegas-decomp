// Decompiled from classes.dex (SourceFile: NativeBridgeHIDControllers.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils.controller;

public class NativeBridgeHIDControllers {
    // Methods
    public NativeBridgeHIDControllers()
    {
      super();
    }

    public static native void NativeControllerConnected(java.lang.String p0);

    public static native void NativeControllerDisconnected();

    public static native void NativeHandleInputEvents(int p0, double p1);

    public static void NativeListenerRegistered(int p0)
    {
      StandardHIDController.StartControllerListener(p0);
    }

    public static void NativeListenerUnRegistered()
    {
      StandardHIDController.StopControllerListener();
    }

}
