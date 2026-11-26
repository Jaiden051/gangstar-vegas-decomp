// Decompiled from classes.dex (SourceFile: s.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class s implements com.google.android.gms.analytics.ag, com.google.android.gms.analytics.c$b, com.google.android.gms.analytics.c$c {
    // Fields
    private volatile long a;
    private volatile com.google.android.gms.analytics.s$a b;
    private volatile com.google.android.gms.analytics.b c;
    private com.google.android.gms.analytics.d d;
    private com.google.android.gms.analytics.d e;
    private final com.google.android.gms.analytics.GoogleAnalytics f;
    private final com.google.android.gms.analytics.f g;
    private final android.content.Context h;
    private final java.util.Queue i;
    private volatile int j;
    private volatile java.util.Timer k;
    private volatile java.util.Timer l;
    private volatile java.util.Timer m;
    private boolean n;
    private boolean o;
    private boolean p;
    private boolean q;
    private com.google.android.gms.analytics.i r;
    private long s;

    // Methods
    s(android.content.Context p0, com.google.android.gms.analytics.f p1)
    {
      this(p0, p1, null, GoogleAnalytics.getInstance(p0));
    }

    private s(
            android.content.Context p0,
            com.google.android.gms.analytics.f p1,
            com.google.android.gms.analytics.d p2,
            com.google.android.gms.analytics.GoogleAnalytics p3)
    {
      super();
      this.i = new java.util.concurrent.ConcurrentLinkedQueue();
      this.s = 300000;
      this.e = null;
      this.h = p0;
      this.g = p1;
      this.f = p3;
      this.r = (com.google.android.gms.analytics.i)new com.google.android.gms.analytics.s$1(this);
      this.j = 0;
      this.b = s$a.g;
    }

    private static java.util.Timer a(java.util.Timer p0)
    {
      if ( p0 != null )
        p0.cancel();
      return null;
    }

    /* synthetic */ static void a(com.google.android.gms.analytics.s p0)
    {
      p0.h();
    }

    /* synthetic */ static com.google.android.gms.analytics.s$a b(com.google.android.gms.analytics.s p0)
    {
      return p0.b;
    }

    /* synthetic */ static void c(com.google.android.gms.analytics.s p0)
    {
      p0.j();
    }

    /* synthetic */ static void d(com.google.android.gms.analytics.s p0)
    {
      p0.k();
    }

    /* synthetic */ static java.util.Queue e(com.google.android.gms.analytics.s p0)
    {
      return p0.i;
    }

    /* synthetic */ static long f(com.google.android.gms.analytics.s p0)
    {
      return p0.a;
    }

    /* synthetic */ static long g(com.google.android.gms.analytics.s p0)
    {
      return p0.s;
    }

    private void g()
    {
      java.util.Timer k;
      java.util.Timer l;
      java.util.Timer m;
      k = this.k;
      this.k = a(k);
      l = this.l;
      this.l = a(l);
      m = this.m;
      this.m = a(m);
    }

    /* synthetic */ static com.google.android.gms.analytics.i h(com.google.android.gms.analytics.s p0)
    {
      return p0.r;
    }

    private synchronized void h()
    {
      com.google.android.gms.analytics.s$a b = null;
      com.google.android.gms.analytics.s$d v2 = null;
      com.google.android.gms.analytics.s$d v4 = null;
      com.google.android.gms.analytics.b c = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(Thread.currentThread().equals(this.g.e())) ) { _pc = 2; continue _sm; }
            try
            {
            if ( this.o )
            this.a();
            b = this.b;
            switch ( s$3.a[b.ordinal()] )
            {
            case 1:
            while ( !this.i.isEmpty() )
            {
            v2 = (com.google.android.gms.analytics.s$d)this.i.poll();
            aa.C("Sending hit to store  " + v2);
            this.d.a(v2.a(), v2.b(), v2.c(), v2.d());
            }
            if ( this.n )
            this.i();
            break;
            case 2:
            while ( !this.i.isEmpty() )
            {
            v4 = (com.google.android.gms.analytics.s$d)this.i.peek();
            aa.C("Sending hit to service   " + v4);
            if ( this.f.a() )
            {
            aa.C("Dry run enabled. Hit not actually sent to service.");
            }
            else
            {
            c = this.c;
            c.a(v4.a(), v4.b(), v4.c(), v4.d());
            }
            this.i.poll();
            }
            this.a = this.r.a();
            break;
            case 6:
            aa.C("Need to reconnect");
            if ( !this.i.isEmpty() )
            this.k();
            break;
            default:
            { _pc = 1; continue _sm; }
            }
            }
            finally
            {
            }
            _pc = 1;
            continue _sm;
          case 1:
            _pc = 3;
            continue _sm;
          case 2:
            {
            this.g.d().add(new com.google.android.gms.analytics.s$2(this));
            }
            _pc = 3;
            continue _sm;
          case 3:
            return;
        }
      }
}

    private void i()
    {
      this.d.a();
      this.n = false;
    }

    /* synthetic */ static void i(com.google.android.gms.analytics.s p0)
    {
      p0.l();
    }

    /* synthetic */ static java.util.Timer j(com.google.android.gms.analytics.s p0)
    {
      return p0.m;
    }

    private synchronized void j()
    {
      com.google.android.gms.analytics.s$a b;
      com.google.android.gms.analytics.r v3; // RETVAL
    
      b = this.b;
      if ( b == s$a.c )
        return;
      try
      {
        this.g();
        aa.C("falling back to local store");
        if ( this.e != null )
        {
          this.d = this.e;
        }
        else
        {
          v3 = com.google.android.gms.analytics.r.cz();
          v3.a(this.h, this.g);
          this.d = v3.c();
        }
        this.b = s$a.c;
        this.h();
        return;
      }
      finally
      {
      }
    }

    private synchronized void k()
    {
      com.google.android.gms.analytics.b v1 = null;
      com.google.android.gms.analytics.s$a b = null;
      int j = 0;
      java.util.Timer l = null;
      java.util.Timer v5 = null;
      com.google.android.gms.analytics.b c = null;
      Object v7 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              if ( !(this.q || (v1 = this.c) == null || (b = this.b) == s$a.c) ) { _pc = 1; continue _sm; }
              {
              aa.D("client not initialized.");
              this.j();
              }
              _pc = 2;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 3;
              {
              try
              {
              j = this.j;
              this.j = j + 1;
              l = this.l;
              a(l);
              this.b = s$a.a;
              this.l = new java.util.Timer("Failed Connect");
              v5 = this.l;
              v5.schedule(new com.google.android.gms.analytics.s$c(this, 0), 3000);
              aa.C("connecting to Analytics service");
              c = this.c;
              c.b();
              return;
              }
              catch ( SecurityException e )
              {
              aa.D("security exception on connectToService");
              this.j();
              return;
              }
              }


            case 2:
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              if ( !((_ehEx != null)) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v7 = _ehCaught;
              throw com.gameloft.android.DecompRT.sneakyThrow(v7);
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    private synchronized void l()
    {
      com.google.android.gms.analytics.b c;
      com.google.android.gms.analytics.s$a b;
      com.google.android.gms.analytics.b v3;
      c = this.c;
      if ( c != null )
      {
        b = this.b;
        if ( b == s$a.b )
        {
          this.b = s$a.f;
          v3 = this.c;
          v3.c();
        }
      }
    }

    private void m()
    {
      java.util.Timer k;
      java.util.Timer v2;
      k = this.k;
      this.k = a(k);
      this.k = new java.util.Timer("Service Reconnect");
      v2 = this.k;
      v2.schedule(new com.google.android.gms.analytics.s$e(this, 0), 5000);
    }

    public final void a()
    {
      com.google.android.gms.analytics.s$a b;
      com.google.android.gms.analytics.b c;
      aa.C("clearHits called");
      this.i.clear();
      b = this.b;
      switch ( s$3.a[b.ordinal()] )
      {
        case 1:
          this.d.a(0);
          this.o = false;
          break;
        case 2:
          c = this.c;
          c.a();
          this.o = false;
          break;
        default:
          this.o = true;
          break;
      }
    }

    public final synchronized void a(int p0)
    {
      int j;
      this.b = s$a.e;
      j = this.j;
      if ( j >= 2 )
      {
        try
        {
          aa.D("Service unavailable (code=" + p0 + "), using local store.");
          this.j();
        }
        finally
        {
        }
      }
      else
      {
        aa.D("Service unavailable (code=" + p0 + "), will retry.");
        this.m();
      }
    }

    public final void a(
            java.util.Map<String, String> p0,
            long p1,
            String p3,
            java.util.List<com.google.android.gms.internal.fe> p4)
    {
      aa.C("putHit called");
      this.i.add(new com.google.android.gms.analytics.s$d(p0, p1, p3, p4));
      this.h();
    }

    public final synchronized void b()
    {
      com.google.android.gms.analytics.s$a b;
      if ( this.q )
        return;
      try
      {
        aa.C("setForceLocalDispatch called.");
        this.q = true;
        b = this.b;
        switch ( s$3.a[b.ordinal()] )
        {
          case 1:
            return;
          case 2:
            this.l();
            break;
          case 3:
            this.p = true;
            return;
          default:
            return;
        }
        return;
      }
      finally
      {
      }
    }

    public final void c()
    {
      com.google.android.gms.analytics.s$a b;
      b = this.b;
      switch ( s$3.a[b.ordinal()] )
      {
        case 1:
          this.i();
          break;
        case 2:
          return;
        default:
          this.n = true;
          break;
      }
    }

    public final void d()
    {
      com.google.android.gms.analytics.b c;
      c = this.c;
      if ( c == null )
      {
        this.c = (com.google.android.gms.analytics.b)new com.google.android.gms.analytics.c(this.h, (com.google.android.gms.analytics.c$b)this, (com.google.android.gms.analytics.c$c)this);
        this.k();
      }
    }

    public final synchronized void e()
    {
      java.util.Timer l;
      java.util.Timer m;
      java.util.Timer v3;
      l = this.l;
      this.l = a(l);
      this.j = 0;
      aa.C("Connected to service");
      this.b = s$a.b;
      if ( this.p )
      {
        this.l();
        this.p = false;
      }
      else
      {
        try
        {
          this.h();
          m = this.m;
          this.m = a(m);
          this.m = new java.util.Timer("disconnect check");
          v3 = this.m;
          v3.schedule(new com.google.android.gms.analytics.s$b(this, 0), this.s);
        }
        finally
        {
        }
      }
    }

    public final synchronized void f()
    {
      com.google.android.gms.analytics.s$a b;
      int j;
      b = this.b;
      if ( b == s$a.f )
      {
        aa.C("Disconnected from service");
        this.g();
        this.b = s$a.g;
        return;
      }
      try
      {
        aa.C("Unexpected disconnect.");
        this.b = s$a.e;
        j = this.j;
        if ( j < 2 )
        {
          this.m();
          return;
        }
        this.j();
      }
      finally
      {
      }
    }

}
