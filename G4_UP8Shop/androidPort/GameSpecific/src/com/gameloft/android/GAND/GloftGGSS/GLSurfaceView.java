// Decompiled from classes.dex (SourceFile: GLSurfaceView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public class GLSurfaceView extends android.view.SurfaceView implements android.view.SurfaceHolder.Callback {
    // Fields
    private static java.lang.String a;
    private static boolean b;
    private static boolean c;
    private static boolean d;
    private static boolean e;
    private static boolean f;
    private static boolean g;
    private static boolean h;
    private static boolean i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    private static final com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager n;
    private static android.content.Context z;
    private boolean o;
    private com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread p;
    private com.gameloft.android.GAND.GloftGGSS.ab q;
    private boolean r;
    private com.gameloft.android.GAND.GloftGGSS.w s;
    private com.gameloft.android.GAND.GloftGGSS.x t;
    private com.gameloft.android.GAND.GloftGGSS.y u;
    private com.gameloft.android.GAND.GloftGGSS.z v;
    private int w;
    private int x;
    private boolean y;

    // Methods
    static
    {
      n = new com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager(0);
    }

    public GLSurfaceView(android.content.Context p0)
    {
      super(p0);
      this.o = true;
      this.a(p0);
    }

    public GLSurfaceView(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.o = true;
      this.a(p0);
    }

    private void a(int p0)
    {
      this.w = p0;
    }

    private void a(int p0, int p1, int p2, int p3, int p4, int p5)
    {
      this.a((com.gameloft.android.GAND.GloftGGSS.w)new com.gameloft.android.GAND.GloftGGSS.t(this, p0, p1, p2, p3, p4, p5));
    }

    private void a(android.content.Context p0)
    {
      z = p0;
      this.getHolder().addCallback(this);
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.z p0)
    {
      this.v = p0;
    }

    private void a(Runnable p0)
    {
      this.p.a(p0);
    }

    /* synthetic */ static boolean access$1000(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.o;
    }

    /* synthetic */ static boolean access$1002(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0,
            boolean p1)
    {
      p0.o = p1;
      return p1;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread access$1100(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.p;
    }

    /* synthetic */ static android.content.Context access$1300()
    {
      return z;
    }

    /* synthetic */ static int access$200(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.x;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.w access$300(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.s;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.x access$400(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.t;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.y access$500(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.u;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.z access$600(
            com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.v;
    }

    /* synthetic */ static int access$700(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.w;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThreadManager access$800()
    {
      return n;
    }

    /* synthetic */ static boolean access$900(com.gameloft.android.GAND.GloftGGSS.GLSurfaceView p0)
    {
      return p0.y;
    }

    private int b()
    {
      return this.w;
    }

    private void b(int p0)
    {
      this.i();
      this.x = p0;
    }

    private void b(boolean p0)
    {
      this.a((com.gameloft.android.GAND.GloftGGSS.w)new com.gameloft.android.GAND.GloftGGSS.ac(this, p0));
    }

    private void c(int p0)
    {
      this.p.a(p0);
    }

    private boolean c()
    {
      return this.y;
    }

    private com.gameloft.android.GAND.GloftGGSS.ab d()
    {
      return this.q;
    }

    private com.gameloft.android.GAND.GloftGGSS.Keyboard e()
    {
      if ( this.q != null )
        return this.q.b();
      else
        return null;
    }

    private int f()
    {
      return this.p.a();
    }

    private void g()
    {
      this.p.b();
    }

    private void h()
    {
      this.p.e();
    }

    private void i()
    {
      if ( this.p != null )
        throw new IllegalStateException("setRenderer has already been called for this instance.");
    }

    public final void a()
    {
      this.p.f();
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.ab p0)
    {
      this.i();
      if ( this.s == null )
        this.s = (com.gameloft.android.GAND.GloftGGSS.w)new com.gameloft.android.GAND.GloftGGSS.ac(this, true);
      if ( this.t == null )
        this.t = (com.gameloft.android.GAND.GloftGGSS.x)new com.gameloft.android.GAND.GloftGGSS.u(this, 0);
      if ( this.u == null )
        this.u = (com.gameloft.android.GAND.GloftGGSS.y)new com.gameloft.android.GAND.GloftGGSS.v(0);
      this.q = p0;
      this.p = new com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread(this, p0);
      this.p.start();
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.w p0)
    {
      this.i();
      this.s = p0;
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.x p0)
    {
      this.i();
      this.t = p0;
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.y p0)
    {
      this.i();
      this.u = p0;
    }

    public final void a(boolean p0)
    {
      this.y = true;
    }

    protected void onAttachedToWindow()
    {
      int v1;
      super.onAttachedToWindow();
      if ( this.r && this.q != null )
      {
        if ( this.p != null )
          v1 = this.p.a();
        else
          v1 = 1;
        this.p = new com.gameloft.android.GAND.GloftGGSS.GLSurfaceView$GLThread(this, this.q);
        if ( v1 != 1 )
          this.p.a(v1);
        this.p.start();
      }
      this.r = false;
    }

    protected void onDetachedFromWindow()
    {
      if ( this.p != null )
        this.p.g();
      this.r = true;
      super.onDetachedFromWindow();
    }

    public void surfaceChanged(android.view.SurfaceHolder p0, int p1, int p2, int p3)
    {
      this.p.a(p2, p3);
    }

    public void surfaceCreated(android.view.SurfaceHolder p0)
    {
      this.p.c();
    }

    public void surfaceDestroyed(android.view.SurfaceHolder p0)
    {
      this.p.d();
    }

}
