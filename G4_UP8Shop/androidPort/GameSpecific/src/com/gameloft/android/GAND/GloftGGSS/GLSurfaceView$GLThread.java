// Decompiled from classes.dex (SourceFile: GLSurfaceView$GLThread.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import javax.microedition.khronos.egl.EGL10;
class GLSurfaceView$GLThread extends java.lang.Thread {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLSurfaceView a;
    private boolean b;
    private boolean c;
    private boolean d;
    private boolean e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private int k;
    private int l;
    private int m;
    private boolean n;
    private boolean o;
    private java.util.ArrayList p;
    private com.gameloft.android.GAND.GloftGGSS.ab q;
    private com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$EglHelper r;

    // Methods
    GLSurfaceView$GLThread(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0, com.gameloft.android.GAND.GloftGGSS.ab p1)
    {
      super();
      this.a = p0;
      this.p = new java.util.ArrayList();
      this.k = 0;
      this.l = 0;
      this.n = true;
      this.m = 1;
      this.q = p1;
    
    }

    /* synthetic */ static boolean access$1202(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread p0,
            boolean p1)
    {
      p0.c = p1;
      return p1;
    }

    private void i()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$EglHelper r;
      if ( this.i )
      {
        this.i = false;
        r = this.r;
        if ( r.c != null && r.c != EGL10.EGL_NO_SURFACE )
        {
          r.a.eglMakeCurrent(r.b, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
          GLSurfaceView.access$500(r.f).a(r.a, r.b, r.c);
          r.c = null;
        }
      }
    }

    private void j()
    {
      if ( this.h )
      {
        this.r.d();
        this.h = false;
        GLSurfaceView.access$800().c(this);
      }
    }

    private void k()
    {
      this.r = new com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$EglHelper(this.a);
      this.h = false;
      this.i = false;
      try
      {
        javax.microedition.khronos.opengles.GL10 gl = null;
        boolean createEglContext = false;
        boolean createEglSurface = false;
        boolean lostEglContext = false;
        boolean sizeChanged = false;
        boolean wantRenderNotification = false;
        boolean doRenderNotification = false;
        boolean askedToReleaseEglContext = false;
        int w = 0;
        int h = 0;
        Runnable event = null;

        while ( true )
        {
          synchronized ( GLSurfaceView.access$800() )
          {
            while ( true )
            {
              if ( this.b )
                return;

              if ( !this.p.isEmpty() )
              {
                event = (Runnable)this.p.remove(0);
                break;
              }

              if ( this.e != this.d )
              {
                this.e = this.d;
                GLSurfaceView.access$800().notifyAll();
              }

              if ( this.j )
              {
                this.i();
                this.j();
                this.j = false;
                askedToReleaseEglContext = true;
              }

              if ( lostEglContext )
              {
                this.i();
                this.j();
                lostEglContext = false;
              }

              if ( this.i && this.e )
              {
                this.i();
                if ( !GLSurfaceView.access$900(this.a) || GLSurfaceView.access$800().a() )
                  this.j();
                if ( GLSurfaceView.access$800().b() )
                  this.r.d();
              }

              if ( !this.f && !this.g )
              {
                if ( this.i )
                  this.i();
                this.g = true;
                GLSurfaceView.access$800().notifyAll();
              }

              if ( this.f && this.g )
              {
                this.g = false;
                GLSurfaceView.access$800().notifyAll();
              }

              if ( doRenderNotification )
              {
                wantRenderNotification = false;
                doRenderNotification = false;
                this.o = true;
                GLSurfaceView.access$800().notifyAll();
              }

              if ( this.m() )
              {
                if ( !this.h )
                {
                  if ( askedToReleaseEglContext )
                  {
                    askedToReleaseEglContext = false;
                  }
                  else if ( GLSurfaceView.access$800().b(this) )
                  {
                    try
                    {
                      this.r.a();
                    }
                    catch ( RuntimeException e )
                    {
                      GLSurfaceView.access$800().c(this);
                      throw e;
                    }
                    this.h = true;
                    createEglContext = true;
                    GLSurfaceView.access$800().notifyAll();
                  }
                }

                if ( this.h && !this.i )
                {
                  this.i = true;
                  createEglSurface = true;
                  sizeChanged = true;
                }

                if ( this.i )
                {
                  if ( GLSurfaceView.access$1000(this.a) )
                  {
                    sizeChanged = true;
                    w = this.k;
                    h = this.l;
                    wantRenderNotification = true;
                    GLSurfaceView.access$1002(this.a, false);
                  }
                  else
                  {
                    this.n = false;
                  }
                  GLSurfaceView.access$800().notifyAll();
                  break;
                }
              }

              GLSurfaceView.access$800().wait();
            }
          }

          if ( event != null )
          {
            event.run();
            event = null;
            continue;
          }

          if ( createEglSurface )
          {
            try
            {
              gl = (javax.microedition.khronos.opengles.GL10)this.r.a(this.a.getHolder());
            }
            catch ( RuntimeException e )
            {
              gl = null;
            }
            if ( gl == null )
              continue;
            GLSurfaceView.access$800().a(gl);
            createEglSurface = false;
          }

          if ( createEglContext )
          {
            this.q.c();
            createEglContext = false;
          }

          if ( sizeChanged )
          {
            this.q.a(w, h);
            sizeChanged = false;
          }

          if ( !Game.az.aC )
          {
            this.q.a();
          }
          else
          {
            try
            {
              Thread.sleep(33);
              this.r.b();
            }
            catch ( InterruptedException v43 )
            {
              Log.e("GLThread", "InterruptedException: " + v43.getMessage(), new Object[0]);
            }
          }

          Game.startProfiling();
          Game.endProfiling();

          if ( wantRenderNotification )
            doRenderNotification = true;
        }
      }
      catch ( InterruptedException ignored )
      {
      }
      finally
      {
        synchronized ( GLSurfaceView.access$800() )
        {
          this.i();
          this.j();
        }
      }
    }

    private boolean l()
    {
      return this.h && this.i && this.m();
    }

    private boolean m()
    {
      boolean v1;
      v1 = true;
      if ( this.e || !this.f || this.k <= 0 || this.l <= 0 || !this.n && this.m != 1 )
        return false;
      return v1;
    }

    public final int a()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v1; // RETVAL
    
      v1 = GLSurfaceView.access$800();
      synchronized ( v1 )
      {
        return this.m;
      }
    }

    public final void a(int p0)
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v2; // RETVAL
      Object v3;
      if ( p0 < 0 || p0 > 1 )
        throw new IllegalArgumentException("renderMode");
      v2 = GLSurfaceView.access$800();
      v3 = v2;
      synchronized ( v3 )
      {
        this.m = p0;
        GLSurfaceView.access$800().notifyAll();
        com.gameloft.android.DecompRT.monitorExit(v3);
      }
    }

    public final void a(int p0, int p1)
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v3; // RETVAL
      Object v4;
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread v5; // RETVAL
    
      v3 = GLSurfaceView.access$800();
      v4 = v3;
      synchronized ( v4 )
      {
        this.k = p0;
        this.l = p1;
        GLSurfaceView.access$1002(this.a, true);
        this.n = true;
        this.o = false;
        GLSurfaceView.access$800().notifyAll();
        while ( !this.c && !this.e && !this.o && GLSurfaceView.access$1100(this.a) != null )
        {
          v5 = GLSurfaceView.access$1100(this.a);
          if ( !v5.h || !v5.i || !v5.m() )
            break;
          try
          {
            GLSurfaceView.access$800().wait();
          }
          catch ( InterruptedException e )
          {
            Thread.currentThread().interrupt();
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v4);
      }
    }

    public final void a(Runnable p0)
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v2; // RETVAL
      Object v3;
      if ( p0 == null )
        throw new IllegalArgumentException("r must not be null");
      v2 = GLSurfaceView.access$800();
      v3 = v2;
      synchronized ( v3 )
      {
        this.p.add(p0);
        GLSurfaceView.access$800().notifyAll();
        com.gameloft.android.DecompRT.monitorExit(v3);
      }
    }

    public final void b()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v1; // RETVAL
      Object v2;
      v1 = GLSurfaceView.access$800();
      v2 = v1;
      synchronized ( v2 )
      {
        this.n = true;
        GLSurfaceView.access$800().notifyAll();
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    public final void c()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v1; // RETVAL
      Object v2;
      v1 = GLSurfaceView.access$800();
      v2 = v1;
      synchronized ( v2 )
      {
        this.f = true;
        GLSurfaceView.access$800().notifyAll();
        while ( this.g && !this.c )
        {
          try
          {
            GLSurfaceView.access$800().wait();
          }
          catch ( InterruptedException e )
          {
            Thread.currentThread().interrupt();
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    public final void d()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v1; // RETVAL
      Object v2;
      v1 = GLSurfaceView.access$800();
      v2 = v1;
      synchronized ( v2 )
      {
        this.f = false;
        GLSurfaceView.access$800().notifyAll();
        while ( !this.g && !this.c )
        {
          try
          {
            GLSurfaceView.access$800().wait();
          }
          catch ( InterruptedException e )
          {
            Thread.currentThread().interrupt();
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    public final void e()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v1; // RETVAL
      Object v2;
      v1 = GLSurfaceView.access$800();
      v2 = v1;
      synchronized ( v2 )
      {
        this.d = true;
        GLSurfaceView.access$800().notifyAll();
        while ( !this.c && !this.e )
        {
          try
          {
            GLSurfaceView.access$800().wait();
          }
          catch ( InterruptedException e )
          {
            Thread.currentThread().interrupt();
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    public final void f()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v1; // RETVAL
      Object v2;
      v1 = GLSurfaceView.access$800();
      v2 = v1;
      synchronized ( v2 )
      {
        this.d = false;
        this.n = true;
        this.o = false;
        GLSurfaceView.access$800().notifyAll();
        while ( !this.c && this.e && !this.o )
        {
          try
          {
            GLSurfaceView.access$800().wait();
          }
          catch ( InterruptedException e )
          {
            Thread.currentThread().interrupt();
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    public final void g()
    {
      com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager v1; // RETVAL
      Object v2;
      v1 = GLSurfaceView.access$800();
      v2 = v1;
      synchronized ( v2 )
      {
        this.b = true;
        GLSurfaceView.access$800().notifyAll();
        while ( !this.c )
        {
          try
          {
            GLSurfaceView.access$800().wait();
          }
          catch ( InterruptedException e )
          {
            Thread.currentThread().interrupt();
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    public final void h()
    {
      this.j = true;
      GLSurfaceView.access$800().notifyAll();
    }

    public void run()
    {
      this.setName("GLThread " + this.getId());
      try
      {
        this.k();
      }
      finally
      {
        GLSurfaceView.access$800().a(this);
      }
    }

}
