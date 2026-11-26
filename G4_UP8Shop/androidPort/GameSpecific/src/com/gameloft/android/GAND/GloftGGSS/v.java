// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class v implements com.gameloft.android.GAND.GloftGGSS.y {
    // Methods
    private v()
    {
      super();
    }

    /* synthetic */ v(int p0)
    {
      this();
    }

    public final javax.microedition.khronos.egl.EGLSurface a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig p2,
            Object p3)
    {
      return p0.eglCreateWindowSurface(p1, p2, p3, null);
    }

    public final void a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLSurface p2)
    {
      p0.eglDestroySurface(p1, p2);
    }

}
