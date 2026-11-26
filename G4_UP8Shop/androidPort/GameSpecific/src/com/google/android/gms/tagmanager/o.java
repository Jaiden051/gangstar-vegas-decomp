// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Looper;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.internal.im;
class o extends com.google.android.gms.common.api.a$a {
    // Fields
    private final com.google.android.gms.internal.ik a;
    private final com.google.android.gms.tagmanager.o$d b;
    private final android.os.Looper c;
    private final com.google.android.gms.tagmanager.cf d;
    private final int e;
    private final android.content.Context f;
    private final com.google.android.gms.tagmanager.TagManager g;
    private final java.lang.String h;
    private com.google.android.gms.tagmanager.o$f i;
    private volatile com.google.android.gms.tagmanager.n j;
    private volatile boolean k;
    private com.google.android.gms.internal.c$j l;
    private long m;
    private java.lang.String n;
    private com.google.android.gms.tagmanager.o$e o;
    private com.google.android.gms.tagmanager.o$a p;

    // Methods
    private o(
            android.content.Context p0,
            com.google.android.gms.tagmanager.TagManager p1,
            android.os.Looper p2,
            String p3,
            int p4,
            com.google.android.gms.tagmanager.o$f p5,
            com.google.android.gms.tagmanager.o$e p6,
            com.google.android.gms.internal.ik p7,
            com.google.android.gms.tagmanager.cf p8)
    {
      super(((p2 != null) ? (p2) : (Looper.getMainLooper())));
      this.f = p0;
      this.g = p1;
      if ( p2 == null )
        p2 = Looper.getMainLooper();
      this.c = p2;
      this.h = p3;
      this.e = p4;
      this.i = p5;
      this.o = p6;
      this.b = new com.google.android.gms.tagmanager.o$d(this, 0);
      this.l = new com.google.android.gms.internal.c$j();
      this.a = p7;
      this.d = p8;
      if ( this.j() )
        this.a(cd.lY().b());
    }

    public o(
            android.content.Context p0,
            com.google.android.gms.tagmanager.TagManager p1,
            android.os.Looper p2,
            String p3,
            int p4,
            com.google.android.gms.tagmanager.r p5)
    {
      this(p0, p1, p2, p3, p4, (com.google.android.gms.tagmanager.o$f)new com.google.android.gms.tagmanager.cp(p0, p3), (com.google.android.gms.tagmanager.o$e)new com.google.android.gms.tagmanager.co(p0, p3, p5), im.fW(), (com.google.android.gms.tagmanager.cf)new com.google.android.gms.tagmanager.bf(30, 900000, 5000, "refreshing", im.fW()));
    }

    /* synthetic */ static com.google.android.gms.internal.ik a(com.google.android.gms.tagmanager.o p0)
    {
      return p0.a;
    }

    private synchronized void a(long p0)
    {
      if ( this.o != null )
      {
        try
        {
          this.o.a(p0, this.l.c);
        }
        finally
        {
        }
      }
      else
      {
        bh.D("Refresh requested, but no network load scheduler.");
      }
    }

    private synchronized void a(com.google.android.gms.internal.c$j p0)
    {
      com.google.android.gms.internal.lf$a v2;
      if ( this.i != null )
      {
        v2 = new com.google.android.gms.internal.lf$a();
        v2.a = this.m;
        v2.b = new com.google.android.gms.internal.c$f();
        v2.c = p0;
        this.i.a(v2);
      }
    }

    private synchronized void a(com.google.android.gms.internal.c$j p0, long p1, boolean p3)
 throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.tagmanager.Container v5;
      com.google.android.gms.tagmanager.n j;
      com.google.android.gms.common.api.Result v7;
      com.google.android.gms.tagmanager.n v9;
      if ( p3 && this.k )
        return;
      try
      {
        if ( this.d() )
          com.gameloft.android.DecompRT.discard(this.j);
        this.l = p0;
        this.m = p1;
        this.a(Math.max(0, Math.min(43200000, this.m + 43200000 - this.a.a())));
        v5 = new com.google.android.gms.tagmanager.Container(this.f, this.g.a(), this.h, p1, p0);
        j = this.j;
        if ( j != null )
        {
          v9 = this.j;
          v9.a(v5);
        }
        else
        {
          this.j = new com.google.android.gms.tagmanager.n(this.g, this.c, v5, (com.google.android.gms.tagmanager.n$a)this.b);
        }
        if ( !this.d() && this.p.a(v5) )
        {
          v7 = (com.google.android.gms.common.api.Result)this.j;
          this.a(v7);
        }
        return;
      }
      finally
      {
      }
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.o p0, long p1)
    {
      p0.a(p1);
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.o p0, com.google.android.gms.internal.c$j p1)
    {
      p0.a(p1);
    }

    /* synthetic */ static void a(
            com.google.android.gms.tagmanager.o p0,
            com.google.android.gms.internal.c$j p1,
            long p2,
            boolean p4)
 throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      p0.a(p1, p2, p4);
    }

    private void a(boolean p0)
    {
      com.google.android.gms.tagmanager.cq$c v2;
      this.i.a((com.google.android.gms.tagmanager.bg)new com.google.android.gms.tagmanager.o$b(this, 0));
      this.o.a((com.google.android.gms.tagmanager.bg)new com.google.android.gms.tagmanager.o$c(this, 0));
      v2 = this.i.a(this.e);
      if ( v2 != null )
        this.j = new com.google.android.gms.tagmanager.n(this.g, this.c, new com.google.android.gms.tagmanager.Container(this.f, this.g.a(), this.h, 0, v2), (com.google.android.gms.tagmanager.n$a)this.b);
      this.p = (com.google.android.gms.tagmanager.o$a)new com.google.android.gms.tagmanager.o$2(this, p0);
      if ( this.j() )
        this.o.a(0, "");
      else
        this.i.a();
    }

    /* synthetic */ static boolean b(com.google.android.gms.tagmanager.o p0)
    {
      return p0.k;
    }

    /* synthetic */ static com.google.android.gms.internal.c$j c(com.google.android.gms.tagmanager.o p0)
    {
      return p0.l;
    }

    /* synthetic */ static long d(com.google.android.gms.tagmanager.o p0)
    {
      return p0.m;
    }

    /* synthetic */ static boolean e(com.google.android.gms.tagmanager.o p0)
    {
      return p0.j();
    }

    /* synthetic */ static com.google.android.gms.tagmanager.n f(com.google.android.gms.tagmanager.o p0)
    {
      return p0.j;
    }

    /* synthetic */ static com.google.android.gms.tagmanager.cf g(com.google.android.gms.tagmanager.o p0)
    {
      return p0.d;
    }

    private boolean j()
    {
      com.google.android.gms.tagmanager.cd v1;
      v1 = cd.lY();
      return (v1.a() == cd$a.b || v1.a() == cd$a.c) && this.h.equals(v1.c());
    }

    /* synthetic */ protected final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)this.b(p0);
    }

    final synchronized void a(String p0)
    {
      this.n = p0;
      if ( this.o != null )
        this.o.a(p0);
    }

    protected final com.google.android.gms.tagmanager.ContainerHolder b(com.google.android.gms.common.api.Status p0)
    {
      com.google.android.gms.tagmanager.n j;
      j = this.j;
      if ( j != null )
        return (com.google.android.gms.tagmanager.ContainerHolder)this.j;
      if ( p0 == Status.d )
        bh.A("timer expired: setting result to failure");
      return (com.google.android.gms.tagmanager.ContainerHolder)new com.google.android.gms.tagmanager.n(p0);
    }

    public final void f()
 throws android.os.RemoteException {
      com.google.android.gms.tagmanager.cq$c v1;
      v1 = this.i.a(this.e);
      if ( v1 != null )
      {
        this.a((com.google.android.gms.common.api.Result)new com.google.android.gms.tagmanager.n(this.g, this.c, new com.google.android.gms.tagmanager.Container(this.f, this.g.a(), this.h, 0, v1), (com.google.android.gms.tagmanager.n$a)new com.google.android.gms.tagmanager.o$1(this)));
      }
      else
      {
        bh.A("Default was requested, but no default container was found");
        this.a((com.google.android.gms.common.api.Result)this.b(new com.google.android.gms.common.api.Status(10, "Default was requested, but no default container was found", null)));
      }
      this.o = null;
      this.i = null;
    }

    public final void g()
    {
      this.a(false);
    }

    public final void h()
    {
      this.a(true);
    }

    final synchronized String i()
    {
      return this.n;
    }

}
