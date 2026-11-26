// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import javax.microedition.khronos.egl.EGL10;
final class u implements com.gameloft.android.GAND.GloftGGSS.x {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLSurfaceView a;
    private int b;

    // Methods
    private u(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      super();
      this.a = p0;
      this.b = 12440;
    
    }

    /* synthetic */ u(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0, int p1)
    {
      this(p0);
    }

    public final javax.microedition.khronos.egl.EGLContext a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig p2)
    {
      int[] v4;
      javax.microedition.khronos.egl.EGLContext v5;
      v4 = new int[3];
      v4[0] = this.b;
      v4[1] = GLSurfaceView.access$200(this.a);
      v4[2] = 12344;
      v5 = EGL10.EGL_NO_CONTEXT;
      if ( GLSurfaceView.access$200(this.a) == 0 )
        v4 = null;
      return p0.eglCreateContext(p1, p2, v5, v4);
    }

    public final void a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLContext p2)
    {
      if ( !p0.eglDestroyContext(p1, p2) )
      {
        Log.e("DefaultContextFactory", "display:" + p1 + " context: " + p2, new Object[0]);
        throw new RuntimeException("eglDestroyContext failed: " + p0.eglGetError());
      }
    }

}
