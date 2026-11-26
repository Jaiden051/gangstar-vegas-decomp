// Decompiled from classes.dex (SourceFile: GL2JNIView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import javax.microedition.khronos.egl.EGL10;
class GL2JNIView extends com.gameloft.android.GAND.GloftGGSS.GLSurfaceView {
    // Fields
    private static int[] A;
    private static int B;
    public static android.content.Context a;
    public static boolean b;
    public static boolean c;
    public static boolean g;
    public static boolean i;
    private static java.lang.String n;
    private static boolean o;
    private static int p;
    private static int q;
    private static int r;
    private static int s;
    private static int t;
    private static int z;
    boolean d;
    com.gameloft.android.GAND.GloftGGSS.o e;
    com.gameloft.android.GAND.GloftGGSS.o f;
    protected com.gameloft.android.GAND.GloftGGSS.GL2JNIView$Renderer h;
    private javax.microedition.khronos.egl.EGL10 u;
    private javax.microedition.khronos.egl.EGLDisplay v;
    private javax.microedition.khronos.egl.EGLSurface w;
    private javax.microedition.khronos.egl.EGLContext[] x;
    private javax.microedition.khronos.egl.EGLSurface[] y;

    // Methods
    static
    {
      n = "GL2JNIView";
      p = 12512;
      q = 12513;
      r = 12514;
      s = 12515;
      t = 4;
      a = null;
      b = false;
      c = false;
      z = 12440;
      A = new int[] { 12375, 1, 12374, 1, 12344 };
      B = 0;
      i = true;
    }

    public GL2JNIView(android.content.Context p0, boolean p1)
    {
      super(p0);
      this.u = null;
      this.v = null;
      this.w = null;
      this.x = null;
      this.y = null;
      this.d = false;
      this.e = new com.gameloft.android.GAND.GloftGGSS.o(this, 0.0f, 0.0f);
      this.f = new com.gameloft.android.GAND.GloftGGSS.o(this, 0.0f, 0.0f);
      a = p0;
      this.a(true);
      this.a((com.gameloft.android.GAND.GloftGGSS.x)new com.gameloft.android.GAND.GloftGGSS.n(this, 0));
      this.a((com.gameloft.android.GAND.GloftGGSS.y)new com.gameloft.android.GAND.GloftGGSS.p(this, 0));
      this.h = new com.gameloft.android.GAND.GloftGGSS.GL2JNIView$Renderer(a, this);
      this.a((com.gameloft.android.GAND.GloftGGSS.w)new com.gameloft.android.GAND.GloftGGSS.GL2JNIView$ConfigChooser(0));
      this.a((com.gameloft.android.GAND.GloftGGSS.ab)this.h);
      this.setFocusable(true);
      this.setFocusableInTouchMode(true);
    }

    /* synthetic */ static int[] access$1000()
    {
      return A;
    }

    /* synthetic */ static int access$1100()
    {
      return t;
    }

    /* synthetic */ static int access$1200()
    {
      return r;
    }

    /* synthetic */ static int access$1300_gv()
    {
      return s;
    }

    /* synthetic */ static int access$1400()
    {
      return p;
    }

    /* synthetic */ static int access$1500()
    {
      return q;
    }

    /* synthetic */ static boolean access$300(String p0, javax.microedition.khronos.egl.EGL10 p1)
    {
      return checkEglError(p0, p1);
    }

    /* synthetic */ static int access$400()
    {
      return z;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLDisplay access$500(
            com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0)
    {
      return p0.v;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLDisplay access$502(
            com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0,
            javax.microedition.khronos.egl.EGLDisplay p1)
    {
      p0.v = p1;
      return p1;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGL10 access$600(
            com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0)
    {
      return p0.u;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGL10 access$602(
            com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0,
            javax.microedition.khronos.egl.EGL10 p1)
    {
      p0.u = p1;
      return p1;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLContext[] access$700(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0)
    {
      return p0.x;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLContext[] access$702(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0, javax.microedition.khronos.egl.EGLContext[] p1)
    {
      p0.x = (javax.microedition.khronos.egl.EGLContext[])p1;
      return (javax.microedition.khronos.egl.EGLContext[])p1;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLSurface[] access$800(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0)
    {
      return p0.y;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLSurface[] access$802(com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0, javax.microedition.khronos.egl.EGLSurface[] p1)
    {
      p0.y = (javax.microedition.khronos.egl.EGLSurface[])p1;
      return (javax.microedition.khronos.egl.EGLSurface[])p1;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLSurface access$900(
            com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0)
    {
      return p0.w;
    }

    /* synthetic */ static javax.microedition.khronos.egl.EGLSurface access$902(
            com.gameloft.android.GAND.GloftGGSS.GL2JNIView p0,
            javax.microedition.khronos.egl.EGLSurface p1)
    {
      p0.w = p1;
      return p1;
    }

    private void b(boolean p0)
    {
      if ( p0 )
        this.getHolder().setFormat(-3);
      this.a((com.gameloft.android.GAND.GloftGGSS.x)new com.gameloft.android.GAND.GloftGGSS.n(this, 0));
      this.a((com.gameloft.android.GAND.GloftGGSS.y)new com.gameloft.android.GAND.GloftGGSS.p(this, 0));
      this.h = new com.gameloft.android.GAND.GloftGGSS.GL2JNIView$Renderer(a, this);
      this.a((com.gameloft.android.GAND.GloftGGSS.w)new com.gameloft.android.GAND.GloftGGSS.GL2JNIView$ConfigChooser(0));
      this.a((com.gameloft.android.GAND.GloftGGSS.ab)this.h);
    }

    private static boolean checkEglError(String p0, javax.microedition.khronos.egl.EGL10 p1)
    {
      boolean v2;
      int v3;
      if ( B != 0 )
      {
        v2 = true;
      }
      else
      {
        v2 = true;
        while ( p1.eglGetError() != 12288 )
        {
          v3 = B + 1;
          B = v3;
          if ( v3 > 100 )
            return true;
          v2 = false;
        }
      }
      B = 0;
      return v2;
    }

    private static void nativeOnTouch(int p0, int p1, int p2, int p3)
    {
      Game.nativeOnTouch(p0, p1, p2, p3);
    }

    public final boolean a(int p0)
    {
      boolean Current;
      if ( p0 >= 0 )
      {
        Current = this.u.eglMakeCurrent(this.v, this.y[p0], this.y[p0], this.x[p0]);
        checkEglError("setCurrentContext(" + p0 + ")", this.u);
        return Current;
      }
      try
      {
        return this.u.eglMakeCurrent(this.v, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
      }
      catch ( Exception e )
      {
        return false;
      }
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      int Action;
      int v3;
      int PointerCount;
      int v5;
      int v6;
      int i;
      int v9;
      int v10;
      int v11;
      int v12;
      int j;
      int PointerId;
      int k;
      int v16;
      int v17;
      int v18;
      int v19;
      float v20;
      float v21; // RETVAL
      int m;
      int v23;
      int v24;
      int v25;
      int n;
      float v27;
      float v28; // RETVAL
      float v29;
      float v30;
      float v31; // RETVAL
      float v32;
      float v33;
      int PointerIndex;
      if ( p0.getSource() == 1048584 && Game.t )
      {
        Action = p0.getAction();
        v3 = Action & 0xFF;
        PointerCount = p0.getPointerCount();
        v5 = (Action & 0xFF00) >> 8;
        p0.getX(v5);
        p0.getY(v5);
        p0.getX(v5);
        p0.getY(v5);
        if ( (int)p0.getX(v5) > 360 )
        {
          if ( (int)p0.getX(v5) < 606 )
            return true;
          v6 = 2;
        }
        else
        {
          v6 = 1;
        }
        if ( Action == 0 )
        {
          if ( v6 == 2 )
            Game.nativeCameraJoyPad((int)p0.getX(v5), (int)p0.getY(v5));
          else
            Game.nativeJoyPadMove((int)p0.getX(v5), (int)p0.getY(v5), 1, 1);
        }
        if ( v3 == 5 )
        {
          if ( v6 == 2 )
            Game.nativeCameraJoyPad((int)p0.getX(v5), (int)p0.getY(v5));
          else
            Game.nativeJoyPadMove((int)p0.getX(v5), (int)p0.getY(v5), 1, 1);
        }
        if ( Action == 2 )
        {
          for ( i = 0; i < PointerCount; ++i )
          {
            v6 = 0;
            if ( (int)p0.getX(i) > 360 )
            {
              if ( (int)p0.getX(i) >= 606 )
              {
                v6 = 2;
                Game.nativeCameraJoyPad((int)p0.getX(i), (int)p0.getY(i));
              }
            }
            else
            {
              v6 = 1;
              Game.nativeJoyPadMove((int)p0.getX(i), (int)p0.getY(i), 1, 1);
            }
          }
        }
        if ( v3 == 6 )
        {
          if ( v6 == 2 )
            Game.nativeCameraJoyPad(0, 0);
          else
            Game.nativeJoyPadMove(0, 0, 0, v6);
        }
        if ( Action == 1 )
        {
          if ( v6 == 2 )
            Game.nativeCameraJoyPad(0, 0);
          else
            Game.nativeJoyPadMove(0, 0, 0, v6);
        }
      }
      else
      {
        if ( Game.v )
        {
          v9 = p0.getAction();
          v10 = v9 & 0xFF;
          v11 = p0.getPointerCount();
          v12 = (v9 & 0xFF00) >> 8;
          if ( v9 == 1 )
          {
            for ( j = 0; j < v11; ++j )
            {
              PointerId = p0.getPointerId(j);
              Game.nativeOnTouch(0, (int)p0.getX(PointerId), (int)p0.getY(PointerId), PointerId);
            }
          }
          if ( v9 == 0 )
            Game.nativeOnTouch(1, (int)p0.getX(0), (int)p0.getY(0), 0);
          if ( v9 == 2 )
          {
            for ( k = 0; k < v11; ++k )
              Game.nativeOnTouch(2, (int)p0.getX(k), (int)p0.getY(k), p0.getPointerId(k));
          }
          if ( v10 == 6 )
            Game.nativeOnTouch(0, (int)p0.getX(v12), (int)p0.getY(v12), p0.getPointerId(v12));
          if ( v10 == 5 )
            Game.nativeOnTouch(1, (int)p0.getX(v12), (int)p0.getY(v12), p0.getPointerId(v12));
        }
        v16 = p0.getAction();
        v17 = v16 & 0xFF;
        v18 = p0.getPointerCount();
        v19 = (v16 & 0xFF00) >> 8;
        if ( v16 == 1 )
        {
          if ( Game.isNeedUsedTouchZone() )
          {
            v20 = p0.getX(0);
            v21 = p0.getY(0);
            Game.nativeOnTouch(0, (int)v20, (int)v21, 0);
            Game.nativeOnTouch(0, (int)v20, (int)v21, 1);
            this.e.c = false;
            this.e.a();
            this.f.c = false;
            this.f.a();
            this.d = false;
          }
          else
          {
            Game.nativeOnTouch(0, (int)p0.getX(0), (int)p0.getY(0), 0);
            Game.nativeOnTouch(0, (int)p0.getX(0), (int)p0.getY(0), 1);
            Game.nativeOnTouch(0, (int)p0.getX(0), (int)p0.getY(0), 2);
          }
        }
        if ( v16 == 2 && v19 <= 2 )
        {
          if ( Game.isNeedUsedTouchZone() )
          {
            for ( m = 0; m < v18; ++m )
            {
              v23 = p0.getPointerId(m);
              v24 = (int)p0.getX(v23);
              v25 = (int)p0.getY(v23);
              if ( this.f.c && this.f.b((float)v24, (float)v25) )
              {
                this.f.a((float)v24, (float)v25);
                Game.nativeOnTouch(2, v24, v25, 1);
              }
              else if ( this.e.c && this.e.b((float)v24, (float)v25) )
              {
                this.e.a((float)v24, (float)v25);
                Game.nativeOnTouch(2, v24, v25, 0);
              }
              else if ( Game.isNeedInvertTouchZone() )
              {
                this.e.a((float)v24, (float)v25);
                Game.nativeOnTouch(1, v24, v25, 0);
                Game.nativeOnTouch(2, v24, v25, 0);
              }
              else if ( this.e.c && !this.f.c || !this.e.c && this.f.c )
              {
                Game.nativeOnTouch(0, v24, v25, 0);
                this.e.c = false;
                this.e.a();
                Game.nativeOnTouch(1, v24, v25, 1);
                this.f.c = true;
                this.f.a((float)v24, (float)v25);
              }
            }
          }
          else
          {
            for ( n = 0; n < v18; ++n )
              Game.nativeOnTouch(2, (int)p0.getX(n), (int)p0.getY(n), p0.getPointerId(n));
          }
        }
        if ( v17 == 6 )
        {
          if ( Game.isNeedUsedTouchZone() )
          {
            v27 = p0.getX(v19);
            v28 = p0.getY(v19);
            v29 = v28;
            if ( this.e.c && this.e.b(v27, v28) )
            {
              Game.nativeOnTouch(0, (int)v27, (int)v29, 0);
              this.e.c = false;
              this.e.a();
            }
            else if ( this.f.c && this.f.b(v27, v29) )
            {
              Game.nativeOnTouch(0, (int)v27, (int)v29, 1);
              this.f.c = false;
              this.f.a();
            }
          }
          else
          {
            if ( v19 == 1 && v18 == 3 )
            {
              b = true;
            }
            else if ( v18 == 2 && b && v19 == 1 )
            {
              Game.nativeOnTouch(0, (int)p0.getX(1), (int)p0.getY(1), 2);
              b = false;
            }
            else if ( v19 != 0 || v18 != 3 )
            {
              if ( v18 == 2 && c )
              {
                switch ( v19 )
                {
                  case 0:
                    Game.nativeOnTouch(0, (int)p0.getX(0), (int)p0.getY(0), 1);
                    break;
                  case 1:
                    Game.nativeOnTouch(0, (int)p0.getX(1), (int)p0.getY(1), 2);
                    break;
                  default:
                    break;
                }
                c = false;
              }
            }
            else
            {
              c = true;
            }
            Game.nativeOnTouch(0, (int)p0.getX(v19), (int)p0.getY(v19), v19);
          }
        }
        if ( v16 == 0 && v19 <= 2 )
        {
          if ( Game.isNeedUsedTouchZone() )
          {
            v30 = p0.getX(0);
            v31 = p0.getY(0);
            this.e.c = true;
            this.e.a(v30, v31);
            Game.nativeOnTouch(1, (int)v30, (int)v31, 0);
          }
          else
          {
            Game.nativeOnTouch(1, (int)p0.getX(0), (int)p0.getY(0), 0);
          }
        }
        if ( v17 == 5 && v19 <= 2 )
        {
          if ( Game.isNeedUsedTouchZone() )
          {
            v32 = p0.getX(v19);
            v33 = p0.getY(v19);
            if ( Game.isNeedInvertTouchZone() )
            {
              if ( v19 == 0 )
              {
                this.d = true;
                v32 = p0.getX(1);
                v33 = p0.getY(1);
              }
              if ( this.d && v19 == 1 )
              {
                this.d = false;
                v32 = p0.getX(0);
                v33 = p0.getY(0);
              }
            }
            if ( this.e.c )
            {
              if ( !this.f.c )
              {
                this.f.c = true;
                this.f.a(v32, v33);
                Game.nativeOnTouch(1, (int)v32, (int)v33, 1);
              }
            }
            else
            {
              this.e.c = true;
              this.e.a(v32, v33);
              Game.nativeOnTouch(1, (int)v32, (int)v33, 0);
            }
          }
          else
          {
            PointerIndex = p0.findPointerIndex(p0.getPointerId(p0.getActionIndex()));
            Game.nativeOnTouch(1, (int)p0.getX(PointerIndex), (int)p0.getY(PointerIndex), PointerIndex);
          }
        }
      }
      return true;
    }

    public void onWindowFocusChanged(boolean p0)
    {
      if ( p0 )
        p0 = Game.az.s;
      if ( Game.aJ )
      {
        Game.aJ = false;
      }
      else
      {
        i = p0;
        super.onWindowFocusChanged(p0);
        if ( p0 )
          GL2JNILib.resume();
        if ( Game.az.aB )
        {
          if ( p0 && Game.az.aC )
          {
            Game.az.aC = false;
            GL2JNILib.resume();
          }
          else if ( !p0 && !Game.az.aC )
          {
            Game.az.aC = true;
            GL2JNILib.pause();
          }
        }
      }
    }

}
