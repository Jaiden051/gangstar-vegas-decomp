// Decompiled from classes.dex (SourceFile: s.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

abstract class s implements com.gameloft.android.GAND.GloftGGSS.w {
    // Fields
    protected int[] a;
    final com.gameloft.android.GAND.GloftGGSS.GLSurfaceView b;

    // Methods
    public s(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0, int[] p1)
    {
      super();
      int v3;
      int[] v4;
      this.b = p0;
      if ( GLSurfaceView.access$200(this.b) == 2 )
      {
        v3 = p1.length;
        v4 = new int[(v3 + 2)];
        System.arraycopy(p1, 0, v4, 0, v3 - 1);
        v4[v3 - 1] = 12352;
        v4[v3] = 4;
        v4[v3 + 1] = 12344;
        p1 = v4;
      }
      this.a = (int[])p1;
    
    }

    private int[] a(int[] p0)
    {
      int v3;
      int[] v4;
      if ( GLSurfaceView.access$200(this.b) == 2 )
      {
        v3 = p0.length;
        v4 = new int[(v3 + 2)];
        System.arraycopy(p0, 0, v4, 0, v3 - 1);
        v4[v3 - 1] = 12352;
        v4[v3] = 4;
        v4[v3 + 1] = 12344;
        return v4;
      }
      return (int[])p0;
    }

    public final javax.microedition.khronos.egl.EGLConfig a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1)
    {
      int[] v3;
      int v4;
      javax.microedition.khronos.egl.EGLConfig[] v5;
      javax.microedition.khronos.egl.EGLConfig result; // RETVAL
    
      v3 = new int[1];
      if ( !p0.eglChooseConfig(p1, this.a, null, 0, v3) )
        throw new IllegalArgumentException("eglChooseConfig failed");
      v4 = v3[0];
      if ( v4 <= 0 )
        throw new IllegalArgumentException("No configs match configSpec");
      v5 = new javax.microedition.khronos.egl.EGLConfig[v4];
      if ( !p0.eglChooseConfig(p1, this.a, v5, v4, v3) )
        throw new IllegalArgumentException("eglChooseConfig#2 failed");
      result = this.a(p0, p1, v5);
      if ( result == null )
        throw new IllegalArgumentException("No config chosen");
      return result;
    }

    abstract javax.microedition.khronos.egl.EGLConfig a(javax.microedition.khronos.egl.EGL10 p0, javax.microedition.khronos.egl.EGLDisplay p1, javax.microedition.khronos.egl.EGLConfig[] p2);

}
