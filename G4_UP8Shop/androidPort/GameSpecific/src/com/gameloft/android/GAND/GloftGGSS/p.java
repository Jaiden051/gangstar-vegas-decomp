// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class p implements com.gameloft.android.GAND.GloftGGSS.y {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GL2JNIView a;

    // Methods
    private p(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ p(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0, int p1)
    {
      this(p0);
    }

    public final javax.microedition.khronos.egl.EGLSurface a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig p2,
            Object p3)
    {
      javax.microedition.khronos.egl.EGLSurface WindowSurface;
      GL2JNIView.access$300("Before create window", p0);
      WindowSurface = p0.eglCreateWindowSurface(p1, p2, p3, null);
      GL2JNIView.access$300("After create window", p0);
      GL2JNIView.access$902(this.a, WindowSurface);
      if ( GL2JNIView.access$800(this.a) != null )
        GL2JNIView.access$800(this.a)[0] = WindowSurface;
      return WindowSurface;
    }

    public final void a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLSurface p2)
    {
      p0.eglDestroySurface(p1, p2);
      GL2JNIView.access$902(this.a, null);
      if ( GL2JNIView.access$800(this.a) != null )
        GL2JNIView.access$800(this.a)[0] = null;
    }

}
