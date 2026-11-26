// Decompiled from classes.dex (SourceFile: bq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
import android.text.TextUtils;
public final class bq implements com.google.android.gms.internal.br$a {
    // Fields
    private final java.lang.String a;
    private final com.google.android.gms.internal.bu b;
    private final long c;
    private final com.google.android.gms.internal.bm d;
    private final com.google.android.gms.internal.aj e;
    private final com.google.android.gms.internal.am f;
    private final android.content.Context g;
    private final java.lang.Object h;
    private final com.google.android.gms.internal.ew i;
    private com.google.android.gms.internal.bv j;
    private int k;

    // Methods
    public bq(
            android.content.Context p0,
            String p1,
            com.google.android.gms.internal.bu p2,
            com.google.android.gms.internal.bn p3,
            com.google.android.gms.internal.bm p4,
            com.google.android.gms.internal.aj p5,
            com.google.android.gms.internal.am p6,
            com.google.android.gms.internal.ew p7)
    {
      super();
      long b;
      this.h = new Object();
      this.k = -2;
      this.g = p0;
      if ( "com.google.ads.mediation.customevent.CustomEventAdapter".equals(p1) )
        this.a = bq.b(p4);
      else
        this.a = p1;
      this.b = p2;
      if ( p3.b == -1 )
        b = 10000;
      else
        b = p3.b;
      this.c = b;
      this.d = p4;
      this.e = p5;
      this.f = p6;
      this.i = p7;
    
    }

    /* synthetic */ static com.google.android.gms.internal.bv a(
            com.google.android.gms.internal.bq p0,
            com.google.android.gms.internal.bv p1)
    {
      p0.j = p1;
      return p1;
    }

    /* synthetic */ static Object a(com.google.android.gms.internal.bq p0)
    {
      return p0.h;
    }

    private void a(long p0, long p2, long p4, long p6)
    {
      long v5; // RETVAL
      long v6;
      long v7;
      while ( this.k == -2 )
      {
        v5 = SystemClock.elapsedRealtime();
        v6 = p2 - (v5 - p0);
        v7 = p6 - (v5 - p4);
        if ( v6 > 0 && v7 > 0 )
        {
          try
          {
            this.h.wait(Math.min(v6, v7));
          }
          catch ( InterruptedException e )
          {
            this.k = -1;
          }
        }
        else
        {
          ev.B("Timed out waiting for adapter.");
          this.k = 3;
        }
      }
    }

    private void a(com.google.android.gms.internal.bp p0)
    {
      try
      {
        if ( this.i.d >= 4100000 )
        {
          if ( this.f.e )
            this.j.a(com.google.android.gms.dynamic.e.h(this.g), this.e, this.d.g, this.d.a, p0);
          else
            this.j.a(com.google.android.gms.dynamic.e.h(this.g), this.f, this.e, this.d.g, this.d.a, p0);
        }
        else if ( this.f.e )
        {
          this.j.a(com.google.android.gms.dynamic.e.h(this.g), this.e, this.d.g, p0);
        }
        else
        {
          this.j.a(com.google.android.gms.dynamic.e.h(this.g), this.f, this.e, this.d.g, p0);
        }
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Could not request ad from mediation adapter.", v2);
        this.a(5);
      }
    }

    /* synthetic */ static void a(com.google.android.gms.internal.bq p0, com.google.android.gms.internal.bp p1)
    {
      try
      {
        if ( p0.i.d >= 4100000 )
        {
          if ( p0.f.e )
            p0.j.a(com.google.android.gms.dynamic.e.h(p0.g), p0.e, p0.d.g, p0.d.a, p1);
          else
            p0.j.a(com.google.android.gms.dynamic.e.h(p0.g), p0.f, p0.e, p0.d.g, p0.d.a, p1);
        }
        else if ( p0.f.e )
        {
          p0.j.a(com.google.android.gms.dynamic.e.h(p0.g), p0.e, p0.d.g, p1);
        }
        else
        {
          p0.j.a(com.google.android.gms.dynamic.e.h(p0.g), p0.f, p0.e, p0.d.g, p1);
        }
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Could not request ad from mediation adapter.", v2);
        p0.a(5);
      }
    }

    /* synthetic */ static int b(com.google.android.gms.internal.bq p0)
    {
      return p0.k;
    }

    private com.google.android.gms.internal.bv b()
    {
      String v1;
      v1 = "Instantiating mediation adapter: " + this.a;
      ev.B(v1);
      try
      {
        return this.b.a(this.a);
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.a("Could not instantiate mediation adapter: " + this.a, v4);
        return null;
      }
    }

    private static String b(com.google.android.gms.internal.bm p0)
    {
      try
      {
        if ( TextUtils.isEmpty(p0.e)
          || !com.google.android.gms.ads.mediation.customevent.CustomEvent.class.isAssignableFrom(Class.forName(
                                                                                                    p0.e,
                                                                                                    false,
                                                                                                    com.google.android.gms.internal.bq.class.getClassLoader())) )
        {
          return "com.google.ads.mediation.customevent.CustomEventAdapter";
        }
        return "com.google.android.gms.ads.mediation.customevent.CustomEventAdapter";
      }
      catch ( ClassNotFoundException e )
      {
        ev.D("Could not create custom event adapter.");
      }
      return "com.google.ads.mediation.customevent.CustomEventAdapter";
    }

    private void b(long p0, long p2, long p4, long p6)
    {
      long v5; // RETVAL
      long v6;
      long v7;
      v5 = SystemClock.elapsedRealtime();
      v6 = p2 - (v5 - p0);
      v7 = p6 - (v5 - p4);
      if ( v6 > 0 && v7 > 0 )
      {
        try
        {
          this.h.wait(Math.min(v6, v7));
        }
        catch ( InterruptedException e )
        {
          this.k = -1;
        }
      }
      else
      {
        ev.B("Timed out waiting for adapter.");
        this.k = 3;
      }
    }

    /* synthetic */ static com.google.android.gms.internal.bv c(com.google.android.gms.internal.bq p0)
    {
      return p0.b();
    }

    /* synthetic */ static com.google.android.gms.internal.bv d(com.google.android.gms.internal.bq p0)
    {
      return p0.j;
    }

    public final com.google.android.gms.internal.br a(long p0, long p2)
    {
      Object h;
      long v4;
      com.google.android.gms.internal.bp v5;
      long c;
      h = this.h;
      synchronized ( h )
      {
        v4 = SystemClock.elapsedRealtime();
        v5 = new com.google.android.gms.internal.bp();
        eu.a.post((Runnable)new com.google.android.gms.internal.bq$1(this, v5));
        c = this.c;
        while ( this.k == -2 )
          this.b(v4, c, p0, p2);
        return new com.google.android.gms.internal.br(this.d, this.j, this.a, v5, this.k);
      }
    }

    public final void a()
    {
      Object h;
      h = this.h;
      synchronized ( h )
      {
        try
        {
          if ( this.j != null )
            this.j.c();
        }
        catch ( android.os.RemoteException v2 )
        {
          ev.c("Could not destroy mediation adapter.", v2);
        }
      }
      this.k = -1;
      this.h.notify();
      com.gameloft.android.DecompRT.monitorExit(h);
    }

    public final void a(int p0)
    {
      Object h;
      h = this.h;
      synchronized ( h )
      {
        this.k = p0;
        this.h.notify();
      }
    }

}
