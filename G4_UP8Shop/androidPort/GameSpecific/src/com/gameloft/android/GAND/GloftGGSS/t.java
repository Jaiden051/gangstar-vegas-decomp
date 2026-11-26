// Decompiled from classes.dex (SourceFile: t.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

class t extends com.gameloft.android.GAND.GloftGGSS.s {
    // Fields
    protected int c;
    protected int d;
    protected int e;
    protected int f;
    protected int g;
    protected int h;
    final com.gameloft.android.GAND.GloftGGSS.GLSurfaceView i;
    private int[] j;

    // Methods
    public t(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0, int p1, int p2, int p3, int p4, int p5, int p6)
    {
      super(p0, new int[] { 12324, p1, 12323, p2, 12322, p3, 12321, p4, 12325, p5, 12326, p6, 12344 });
      this.i = p0;
      this.j = new int[1];
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
    }

    private int a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig p2,
            int p3,
            int p4)
    {
      int v6;
      v6 = 0;
      if ( p0.eglGetConfigAttrib(p1, p2, p3, this.j) )
        return this.j[0];
      return v6;
    }

    public final javax.microedition.khronos.egl.EGLConfig a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig[] p2)
    {
      int v4;
      int i;
      javax.microedition.khronos.egl.EGLConfig v6;
      int v7;
      int v8; // RETVAL
      int v9;
      int v10;
      int v11;
      int v12; // RETVAL
    
      v4 = p2.length;
      for ( i = 0; i < v4; ++i )
      {
        v6 = p2[i];
        v7 = this.a(p0, p1, v6, 12325, 0);
        v8 = this.a(p0, p1, v6, 12326, 0);
        if ( v7 >= this.g && v8 >= this.h )
        {
          v9 = this.a(p0, p1, v6, 12324, 0);
          v10 = this.a(p0, p1, v6, 12323, 0);
          v11 = this.a(p0, p1, v6, 12322, 0);
          v12 = this.a(p0, p1, v6, 12321, 0);
          if ( v9 == this.c && v10 == this.d && v11 == this.e && v12 == this.f )
            return v6;
        }
      }
      return null;
    }

}
