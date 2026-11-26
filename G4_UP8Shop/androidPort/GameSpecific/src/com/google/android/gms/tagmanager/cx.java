// Decompiled from classes.dex (SourceFile: cx.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cx extends com.google.android.gms.tagmanager.cw {
    // Fields
    private static final java.lang.Object a;
    private static com.google.android.gms.tagmanager.cx n;
    private android.content.Context b;
    private com.google.android.gms.tagmanager.at c;
    private volatile com.google.android.gms.tagmanager.ar d;
    private int e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private com.google.android.gms.tagmanager.au j;
    private android.os.Handler k;
    private com.google.android.gms.tagmanager.bn l;
    private boolean m;

    // Methods
    static
    {
      a = new Object();
    }

    private cx()
    {
      super();
      this.e = 1800000;
      this.f = true;
      this.g = false;
      this.h = true;
      this.i = true;
      this.j = (com.google.android.gms.tagmanager.au)new com.google.android.gms.tagmanager.cx$1(this);
      this.m = false;
    }

    /* synthetic */ static boolean a(com.google.android.gms.tagmanager.cx p0)
    {
      return p0.h;
    }

    /* synthetic */ static int b(com.google.android.gms.tagmanager.cx p0)
    {
      return p0.e;
    }

    /* synthetic */ static boolean c(com.google.android.gms.tagmanager.cx p0)
    {
      return p0.m;
    }

    /* synthetic */ static Object cE()
    {
      return a;
    }

    /* synthetic */ static android.os.Handler d(com.google.android.gms.tagmanager.cx p0)
    {
      return p0.k;
    }

    private void d()
    {
      this.l = new com.google.android.gms.tagmanager.bn(this);
      this.l.a(this.b);
    }

    /* synthetic */ static com.google.android.gms.tagmanager.at e(com.google.android.gms.tagmanager.cx p0)
    {
      return p0.c;
    }

    private void e()
    {
      this.k = new android.os.Handler(this.b.getMainLooper(), (android.os.Handler.Callback)new com.google.android.gms.tagmanager.cx$2(this));
      if ( this.e > 0 )
        this.k.sendMessageDelayed(this.k.obtainMessage(1, a), this.e);
    }

    public static com.google.android.gms.tagmanager.cx mL()
    {
      if ( n == null )
        n = new com.google.android.gms.tagmanager.cx();
      return n;
    }

    final synchronized void a()
    {
      if ( !this.m && this.h && this.e > 0 )
      {
        this.k.removeMessages(1, a);
        this.k.sendMessage(this.k.obtainMessage(1, a));
      }
    }

    final synchronized void a(android.content.Context p0, com.google.android.gms.tagmanager.ar p1)
    {
      com.google.android.gms.tagmanager.ar d;
      if ( this.b == null )
      {
        try
        {
          this.b = p0.getApplicationContext();
          d = this.d;
          if ( d == null )
            this.d = p1;
        }
        finally
        {
        }
      }
    }

    final synchronized void a(boolean p0)
    {
      this.a(this.m, p0);
    }

    final synchronized void a(boolean p0, boolean p1)
    {
      StringBuilder v3;
      String v4;
      if ( this.m == p0 && this.h == p1 )
        return;
      try
      {
        if ( (p0 || !p1) && this.e > 0 )
          this.k.removeMessages(1, a);
        if ( !p0 && p1 && this.e > 0 )
          this.k.sendMessageDelayed(this.k.obtainMessage(1, a), this.e);
        v3 = new StringBuilder("PowerSaveMode ");
        if ( !p0 && p1 )
          v4 = "terminated.";
        else
          v4 = "initiated.";
        bh.C(v3.append(v4).toString());
        this.m = p0;
        this.h = p1;
        return;
      }
      finally
      {
      }
    }

    final synchronized com.google.android.gms.tagmanager.at b()
    {
      com.google.android.gms.tagmanager.at c;
      c = this.c;
      try
      {
        if ( c == null )
        {
          if ( this.b == null )
            throw new IllegalStateException("Cant get a store unless we have a context");
          this.c = (com.google.android.gms.tagmanager.at)new com.google.android.gms.tagmanager.ca(this.j, this.b);
        }
        if ( this.k == null )
        {
          this.k = new android.os.Handler(this.b.getMainLooper(), (android.os.Handler.Callback)new com.google.android.gms.tagmanager.cx$2(this));
          if ( this.e > 0 )
            this.k.sendMessageDelayed(this.k.obtainMessage(1, a), this.e);
        }
        this.g = true;
        if ( this.f )
        {
          this.c();
          this.f = false;
        }
        if ( this.l == null && this.i )
        {
          this.l = new com.google.android.gms.tagmanager.bn(this);
          this.l.a(this.b);
        }
        return this.c;
      }
      finally
      {
      }
    }

    public final synchronized void c()
    {
      com.google.android.gms.tagmanager.ar d;
      if ( this.g )
      {
        try
        {
          d = this.d;
          d.a((Runnable)new com.google.android.gms.tagmanager.cx$3(this));
        }
        finally
        {
        }
      }
      else
      {
        bh.C("Dispatch call queued. Dispatch will run once initialization is complete.");
        this.f = true;
      }
    }

}
