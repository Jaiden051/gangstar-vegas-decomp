// Decompiled from classes.dex (SourceFile: GLSurfaceView$GLThreadManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

class GLSurfaceView$GLThreadManager {
    // Fields
    private static java.lang.String a;
    private static int g;
    private static java.lang.String h;
    private static java.lang.String i;
    private boolean b;
    private int c;
    private boolean d;
    private boolean e;
    private boolean f;
    private com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread j;

    // Methods
    static
    {
      a = "GLThreadManager";
    }

    private GLSurfaceView$GLThreadManager()
    {
      super();
    }

    /* synthetic */ GLSurfaceView$GLThreadManager(int p0)
    {
      this();
    }

    private void c()
    {
      if ( !this.b )
      {
        this.c = SystemPropertiesProxy.getInt(GLSurfaceView.access$1300(), "ro.opengles.version", 0).intValue();
        if ( this.c >= 0x20000 )
          this.e = true;
        this.b = true;
      }
    }

    public final synchronized void a(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread p0)
    {
      GLSurfaceView$GLThread.access$1202(p0, true);
      if ( this.j == p0 )
        this.j = null;
      this.notifyAll();
    }

    public final synchronized void a(javax.microedition.khronos.opengles.GL10 p0)
    {
      boolean v2;
      String String; // RETVAL
      String v4;
      v2 = false;
      if ( !this.d )
      {
        this.c();
        String = p0.glGetString(7937);
        v4 = String;
        if ( this.c < 0x20000 )
        {
          this.e = !String.startsWith("Q3Dimension MSM7500 ");
          this.notifyAll();
        }
        if ( !this.e || v4.startsWith("Adreno") )
          v2 = true;
        this.f = v2;
        this.d = true;
      }
    }

    public final synchronized boolean a()
    {
      return this.f;
    }

    public final synchronized boolean b()
    {
      this.c();
      return !this.e;
    }

    public final boolean b(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread p0)
    {
      boolean v2;
      v2 = true;
      if ( this.j != p0 && this.j != null )
      {
        this.c();
        if ( !this.e )
        {
          if ( this.j != null )
            this.j.h();
          return false;
        }
      }
      else
      {
        this.j = p0;
        this.notifyAll();
      }
      return v2;
    }

    public final void c(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread p0)
    {
      if ( this.j == p0 )
        this.j = null;
      this.notifyAll();
    }

}
