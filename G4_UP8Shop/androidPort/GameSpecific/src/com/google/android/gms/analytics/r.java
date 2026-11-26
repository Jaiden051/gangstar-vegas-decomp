// Decompiled from classes.dex (SourceFile: r.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class r extends com.google.android.gms.analytics.af {
    // Fields
    private static final java.lang.Object a;
    private static com.google.android.gms.analytics.r o;
    private android.content.Context b;
    private com.google.android.gms.analytics.d c;
    private volatile com.google.android.gms.analytics.f d;
    private int e;
    private boolean f;
    private boolean g;
    private java.lang.String h;
    private boolean i;
    private boolean j;
    private com.google.android.gms.analytics.e k;
    private android.os.Handler l;
    private com.google.android.gms.analytics.q m;
    private boolean n;

    // Methods
    static
    {
      a = new Object();
    }

    private r()
    {
      super();
      this.e = 1800;
      this.f = true;
      this.i = true;
      this.j = true;
      this.k = (com.google.android.gms.analytics.e)new com.google.android.gms.analytics.r$1(this);
      this.n = false;
    }

    /* synthetic */ static boolean a(com.google.android.gms.analytics.r p0)
    {
      return p0.i;
    }

    /* synthetic */ static int b(com.google.android.gms.analytics.r p0)
    {
      return p0.e;
    }

    /* synthetic */ static boolean c(com.google.android.gms.analytics.r p0)
    {
      return p0.n;
    }

    /* synthetic */ static Object cE()
    {
      return a;
    }

    public static com.google.android.gms.analytics.r cz()
    {
      if ( o == null )
        o = new com.google.android.gms.analytics.r();
      return o;
    }

    /* synthetic */ static android.os.Handler d(com.google.android.gms.analytics.r p0)
    {
      return p0.l;
    }

    private void d()
    {
      this.m = new com.google.android.gms.analytics.q(this);
      this.m.a(this.b);
    }

    private void e()
    {
      this.l = new android.os.Handler(this.b.getMainLooper(), (android.os.Handler.Callback)new com.google.android.gms.analytics.r$2(this));
      if ( this.e > 0 )
        this.l.sendMessageDelayed(this.l.obtainMessage(1, a), 1000 * this.e);
    }

    private void f()
    {
      com.google.android.gms.analytics.f d;
      com.google.android.gms.analytics.f v2;
      d = this.d;
      if ( d != null )
      {
        u.cP().a(u$a.af);
        v2 = this.d;
        v2.c();
      }
      else
      {
        aa.C("setForceLocalDispatch() queued. It will be called once initialization is complete.");
        this.g = true;
      }
    }

    final synchronized void a()
    {
      com.google.android.gms.analytics.f d;
      com.google.android.gms.analytics.f v2;
      d = this.d;
      if ( d != null )
      {
        try
        {
          u.cP().a(u$a.S);
          v2 = this.d;
          v2.a();
        }
        finally
        {
        }
      }
      else
      {
        aa.C("Dispatch call queued. Dispatch will run once initialization is complete.");
        this.f = true;
      }
    }

    final synchronized void a(int p0)
    {
      if ( this.l != null )
      {
        try
        {
          u.cP().a(u$a.T);
          if ( !this.n && this.i && this.e > 0 )
            this.l.removeMessages(1, a);
          this.e = p0;
          if ( p0 > 0 && !this.n && this.i )
            this.l.sendMessageDelayed(this.l.obtainMessage(1, a), 1000 * p0);
        }
        finally
        {
        }
      }
      else
      {
        aa.C("Dispatch period set with null handler. Dispatch will run once initialization is complete.");
        this.e = p0;
      }
    }

    final synchronized void a(android.content.Context p0, com.google.android.gms.analytics.f p1)
    {
      com.google.android.gms.analytics.f d;
      com.google.android.gms.analytics.f v4;
      com.google.android.gms.analytics.f v6;
      if ( this.b != null )
        return;
      try
      {
        this.b = p0.getApplicationContext();
        d = this.d;
        if ( d == null )
        {
          this.d = p1;
          if ( this.f )
          {
            this.a();
            this.f = false;
          }
          if ( this.g )
          {
            v4 = this.d;
            if ( v4 != null )
            {
              u.cP().a(u$a.af);
              v6 = this.d;
              v6.c();
            }
            else
            {
              aa.C("setForceLocalDispatch() queued. It will be called once initialization is complete.");
              this.g = true;
            }
            this.g = false;
          }
        }
        return;
      }
      finally
      {
      }
    }

    final synchronized void a(boolean p0)
    {
      this.a(this.n, p0);
    }

    final synchronized void a(boolean p0, boolean p1)
    {
      StringBuilder v3;
      String v4;
      if ( this.n == p0 && this.i == p1 )
        return;
      try
      {
        if ( (p0 || !p1) && this.e > 0 )
          this.l.removeMessages(1, a);
        if ( !p0 && p1 && this.e > 0 )
          this.l.sendMessageDelayed(this.l.obtainMessage(1, a), 1000 * this.e);
        v3 = new StringBuilder("PowerSaveMode ");
        if ( !p0 && p1 )
          v4 = "terminated.";
        else
          v4 = "initiated.";
        aa.C(v3.append(v4).toString());
        this.n = p0;
        this.i = p1;
        return;
      }
      finally
      {
      }
    }

    final synchronized void b()
    {
      if ( !this.n && this.i && this.e > 0 )
      {
        this.l.removeMessages(1, a);
        this.l.sendMessage(this.l.obtainMessage(1, a));
      }
    }

    final synchronized com.google.android.gms.analytics.d c()
    {
      com.google.android.gms.analytics.d c;
      c = this.c;
      try
      {
        if ( c == null )
        {
          if ( this.b == null )
            throw new IllegalStateException("Cant get a store unless we have a context");
          this.c = (com.google.android.gms.analytics.d)new com.google.android.gms.analytics.ac(this.k, this.b);
          if ( this.h != null )
          {
            this.c.b().a(this.h);
            this.h = null;
          }
        }
        if ( this.l == null )
        {
          this.l = new android.os.Handler(this.b.getMainLooper(), (android.os.Handler.Callback)new com.google.android.gms.analytics.r$2(this));
          if ( this.e > 0 )
            this.l.sendMessageDelayed(this.l.obtainMessage(1, a), 1000 * this.e);
        }
        if ( this.m == null && this.j )
        {
          this.m = new com.google.android.gms.analytics.q(this);
          this.m.a(this.b);
        }
        return this.c;
      }
      finally
      {
      }
    }

}
