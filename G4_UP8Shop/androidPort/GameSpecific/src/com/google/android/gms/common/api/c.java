// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import android.os.Looper;
import android.util.Log;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.internal.hn;
import java.util.Collections;
final class c implements com.google.android.gms.common.api.GoogleApiClient {
    // Fields
    final java.util.Queue a;
    final android.os.Handler b;
    final java.util.Set c;
    final com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks d;
    private final java.util.concurrent.locks.Lock e;
    private final java.util.concurrent.locks.Condition f;
    private final com.google.android.gms.internal.hd g;
    private final android.support.v4.app.Fragment h;
    private final android.os.Looper i;
    private com.google.android.gms.common.ConnectionResult j;
    private int k;
    private int l;
    private int m;
    private boolean n;
    private int o;
    private long p;
    private final android.os.Bundle q;
    private final java.util.Map r;
    private final java.util.List s;
    private boolean t;
    private final com.google.android.gms.common.api.c$a u;
    private final com.google.android.gms.internal.hd$b v;

    // Methods
    public c(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            java.util.Map<com.google.android.gms.common.api.Api<?>, com.google.android.gms.common.api.Api$ApiOptions> p3,
            android.support.v4.app.Fragment p4,
            java.util.Set<com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks> p5,
            java.util.Set<com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener> p6)
    {
      super();
      java.util.Iterator i;
      java.util.Iterator j;
      java.util.Iterator v10;
      com.google.android.gms.common.api.Api v11;
      com.google.android.gms.common.api.Api$b v12;
      this.e = new java.util.concurrent.locks.ReentrantLock();
      this.f = this.e.newCondition();
      this.a = new java.util.LinkedList();
      this.l = 4;
      this.m = 0;
      this.n = false;
      this.p = 5000;
      this.q = new android.os.Bundle();
      this.r = new java.util.HashMap();
      this.c = Collections.newSetFromMap(new java.util.concurrent.ConcurrentHashMap());
      this.u = (com.google.android.gms.common.api.c$a)new com.google.android.gms.common.api.c$1(this);
      this.d = (com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)new com.google.android.gms.common.api.c$2(this);
      this.v = (com.google.android.gms.internal.hd$b)new com.google.android.gms.common.api.c$3(this);
      this.g = new com.google.android.gms.internal.hd(p1, this.v);
      this.h = p4;
      this.i = p1;
      this.b = new com.google.android.gms.common.api.c$b(this, p1);
      for ( i = p5.iterator();
            i.hasNext();
            this.g.a((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)i.next()) )
      {
        ;
      }
      for ( j = p6.iterator();
            j.hasNext();
            this.g.a((com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener)(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)j.next()) )
      {
        ;
      }
      v10 = p3.keySet().iterator();
      while ( v10.hasNext() )
      {
        v11 = (com.google.android.gms.common.api.Api)v10.next();
        v12 = v11.a();
        this.r.put(v11.c(), a(
                              v12,
                              p3.get(v11),
                              p0,
                              p1,
                              p2,
                              this.d,
                              (com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)new com.google.android.gms.common.api.c$4(this, v12)));
      }
      this.s = Collections.unmodifiableList(p2.d());
    
    }

    /* synthetic */ static com.google.android.gms.common.ConnectionResult a(
            com.google.android.gms.common.api.c p0,
            com.google.android.gms.common.ConnectionResult p1)
    {
      p0.j = p1;
      return p1;
    }

    private static <C extends com.google.android.gms.common.api.Api$a, O> C a(
            com.google.android.gms.common.api.Api$b<C, O> p0,
            Object p1,
            android.content.Context p2,
            android.os.Looper p3,
            com.google.android.gms.internal.gz p4,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p5,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p6)
    {
      return p0.a(p2, p3, p4, (O)p1, p5, p6);
    }

    /* synthetic */ static java.util.concurrent.locks.Lock a(com.google.android.gms.common.api.c p0)
    {
      return p0.e;
    }

    private void a(int p0)
 throws android.os.RemoteException {
      java.util.Iterator i;
      com.google.android.gms.common.api.c$c v3;
      java.util.Iterator j;
      boolean v6;
      boolean v7;
      java.util.Iterator v8;
      com.google.android.gms.common.api.Api$a v9;
      this.e.lock();
      try
      {
        if ( this.l != 3 )
        {
          if ( p0 == -1 )
          {
            if ( this.h() )
            {
              for ( i = this.a.iterator(); i.hasNext(); i.remove() )
              {
                v3 = (com.google.android.gms.common.api.c$c)i.next();
                v3.g();
                v3.a();
              }
            }
            else
            {
              this.a.clear();
            }
            for ( j = this.c.iterator(); j.hasNext(); ((com.google.android.gms.common.api.c$c)j.next()).a() )
              ;
            this.c.clear();
            if ( this.j == null && !this.a.isEmpty() )
            {
              this.n = true;
              return;
            }
          }
          v6 = this.h();
          v7 = this.g();
          this.l = 3;
          if ( v6 )
          {
            if ( p0 == -1 )
              this.j = null;
            this.f.signalAll();
          }
          this.t = false;
          v8 = this.r.values().iterator();
          while ( v8.hasNext() )
          {
            v9 = (com.google.android.gms.common.api.Api$a)v8.next();
            if ( v9.c() )
              v9.b();
          }
          this.t = true;
          this.l = 4;
          if ( v7 )
          {
            if ( p0 != -1 )
              this.g.a(p0);
            this.t = false;
          }
        }
      }
      finally
      {
        this.e.unlock();
      }
    }

    private <A extends com.google.android.gms.common.api.Api$a> void a(com.google.android.gms.common.api.c$c<A> p0)
 throws android.os.RemoteException {
      boolean v2;
      boolean v3;
      v2 = true;
      this.e.lock();
      try
      {
        v3 = this.g() || this.k();
        hn.a(v3, "GoogleApiClient is not connected yet.");
        if ( p0.f() == null )
          v2 = false;
        hn.b(v2, "This task can not be executed or enqueued (it's probably a Batch or malformed)");
        this.c.add(p0);
        p0.a(this.u);
        if ( this.k() )
        {
          p0.c(new com.google.android.gms.common.api.Status(8));
          return;
        }
        p0.b((A)this.a(p0.f()));
      }
      finally
      {
        this.e.unlock();
      }
    }

    /* synthetic */ static void a(com.google.android.gms.common.api.c p0, int p1)
 throws android.os.RemoteException {
      p0.a(p1);
    }

    /* synthetic */ static int b(com.google.android.gms.common.api.c p0)
    {
      return p0.l;
    }

    /* synthetic */ static int b(com.google.android.gms.common.api.c p0, int p1)
    {
      p0.m = p1;
      return p1;
    }

    /* synthetic */ static int c(com.google.android.gms.common.api.c p0, int p1)
    {
      p0.k = p1;
      return p1;
    }

    /* synthetic */ static android.os.Bundle c(com.google.android.gms.common.api.c p0)
    {
      return p0.q;
    }

    /* synthetic */ static void d(com.google.android.gms.common.api.c p0)
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      android.os.Bundle q;
      p0.e.lock();
      try
      {
        if ( --p0.o == 0 )
        {
          if ( p0.j != null )
          {
            p0.n = false;
            p0.a(3);
            if ( p0.k() )
              --p0.m;
            if ( p0.k() )
              p0.b.sendMessageDelayed(p0.b.obtainMessage(1), p0.p);
            else
              p0.g.a(p0.j);
            p0.t = false;
            return;
          }
          p0.l = 2;
          p0.l();
          p0.f.signalAll();
          p0.j();
          if ( p0.n )
          {
            p0.n = false;
            p0.a(-1);
          }
          else
          {
            if ( p0.q.isEmpty() )
              q = null;
            else
              q = p0.q;
            p0.g.a(q);
          }
        }
      }
      finally
      {
        p0.e.unlock();
      }
    }

    /* synthetic */ static boolean e(com.google.android.gms.common.api.c p0)
    {
      return p0.k();
    }

    /* synthetic */ static long f(com.google.android.gms.common.api.c p0)
    {
      return p0.p;
    }

    /* synthetic */ static boolean g(com.google.android.gms.common.api.c p0)
    {
      return p0.t;
    }

    /* synthetic */ static com.google.android.gms.common.ConnectionResult h(com.google.android.gms.common.api.c p0)
    {
      return p0.j;
    }

    /* synthetic */ static int i(com.google.android.gms.common.api.c p0)
    {
      return p0.k;
    }

    private void i()
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      android.os.Bundle q;
      this.e.lock();
      try
      {
        if ( --this.o == 0 )
        {
          if ( this.j != null )
          {
            this.n = false;
            this.a(3);
            if ( this.k() )
              --this.m;
            if ( this.k() )
              this.b.sendMessageDelayed(this.b.obtainMessage(1), this.p);
            else
              this.g.a(this.j);
            this.t = false;
            return;
          }
          this.l = 2;
          this.l();
          this.f.signalAll();
          this.j();
          if ( this.n )
          {
            this.n = false;
            this.a(-1);
          }
          else
          {
            if ( this.q.isEmpty() )
              q = null;
            else
              q = this.q;
            this.g.a(q);
          }
        }
      }
      finally
      {
        this.e.unlock();
      }
    }

    private void j()
 throws android.os.RemoteException {
      boolean v1;
      v1 = this.g() || this.k();
      hn.a(v1, "GoogleApiClient is not connected yet.");
      this.e.lock();
      while ( true )
      {
        try
        {
          if ( !this.a.isEmpty() )
          {
            try
            {
              this.a((com.google.android.gms.common.api.c$c)this.a.remove());
            }
            catch ( android.os.DeadObjectException v2 )
            {
              Log.w("GoogleApiClientImpl", "Service died while flushing queue", v2);
            }
            continue;
          }
          this.e.unlock();
          return;
        }
        catch ( Throwable v3 )
        {
          this.e.unlock();
          throw v3;
        }
      }
    }

    private boolean k()
    {
      java.util.concurrent.locks.Lock e;
      int m;
      e = this.e;
      e.lock();
      try
      {
        m = this.m;
      }
      finally
      {
        this.e.unlock();
      }
      return m != 0;
    }

    private void l()
    {
      this.e.lock();
      try
      {
        this.m = 0;
        this.b.removeMessages(1);
      }
      finally
      {
        this.e.unlock();
      }
    }

    public final android.os.Looper a()
    {
      return this.i;
    }

    public final com.google.android.gms.common.ConnectionResult a(long p0, java.util.concurrent.TimeUnit p2)
    {
      java.util.concurrent.locks.Lock e = null;
      long v4 = 0L;
      com.google.android.gms.common.ConnectionResult j = null;
      Throwable _cv_1 = null;
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
              hn.a(Looper.myLooper() != Looper.getMainLooper(), "blockingConnect must not be called on the UI thread");
              e = this.e;
              e.lock();
              _ehCatchPc = 6;
              this.b();
              v4 = p2.toNanos(p0);
              _pc = 1;
              continue _sm;
            case 1:
              if ( !this.h() )
              {
              if ( this.g() )
              {
              j = ConnectionResult.s;
              this.e.unlock();
              return j;
              }
              if ( this.j != null )
              {
              j = this.j;
              this.e.unlock();
              return j;
              }
              j = new com.google.android.gms.common.ConnectionResult(13, null);
              { _pc = 8; continue _sm; }
              }
              _ehEx = null;
              _ehCatchPc = 3;
              v4 = this.f.awaitNanos(v4);
              if ( v4 <= 0 )
              {
              j = new com.google.android.gms.common.ConnectionResult(14, null);
              this.e.unlock();
              return j;
              }
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 6;
              if ( !((_ehEx != null && (_ehEx instanceof InterruptedException))) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              Thread.currentThread().interrupt();
              j = new com.google.android.gms.common.ConnectionResult(15, null);
              this.e.unlock();
              _pc = 4;
              continue _sm;
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = 6;
              return j;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 7; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              this.e.unlock();
              throw _cv_1;
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              this.e.unlock();
              return j;
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

    public final <C extends com.google.android.gms.common.api.Api$a> C a(com.google.android.gms.common.api.Api$c<C> p0)
    {
      com.google.android.gms.common.api.Api$a v2;
      v2 = (com.google.android.gms.common.api.Api$a)this.r.get(p0);
      hn.b(v2, "Appropriate Api was not requested.");
      return (C)v2;
    }

    public final <A extends com.google.android.gms.common.api.Api$a, T extends com.google.android.gms.common.api.a$b<? extends com.google.android.gms.common.api.Result, A>> T a(
            T p0)
 throws android.os.RemoteException {
      this.e.lock();
      try
      {
        if ( this.g() )
        {
          this.b(p0);
          return p0;
        }
        this.a.add(p0);
      }
      finally
      {
        this.e.unlock();
      }
      return p0;
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      this.g.a(p0);
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0)
    {
      this.g.a((com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener)p0);
    }

    public final <A extends com.google.android.gms.common.api.Api$a, T extends com.google.android.gms.common.api.a$b<? extends com.google.android.gms.common.api.Result, A>> T b(
            T p0)
 throws android.os.RemoteException {
      boolean v2;
      v2 = this.g() || this.k();
      hn.a(v2, "GoogleApiClient is not connected yet.");
      this.j();
      try
      {
        this.a((com.google.android.gms.common.api.c$c)p0);
        return p0;
      }
      catch ( android.os.DeadObjectException e )
      {
        this.a(1);
      }
      return p0;
    }

    public final void b()
 throws android.os.RemoteException {
      java.util.Iterator i;
      this.e.lock();
      try
      {
        this.n = false;
        if ( !this.g() && !this.h() )
        {
          this.t = true;
          this.j = null;
          this.l = 1;
          this.q.clear();
          this.o = this.r.size();
          for ( i = this.r.values().iterator(); i.hasNext(); ((com.google.android.gms.common.api.Api$a)i.next()).a() )
            ;
        }
        return;
      }
      finally
      {
        this.e.unlock();
      }
    }

    public final boolean b(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      return this.g.b(p0);
    }

    public final boolean b(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0)
    {
      return this.g.b((com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener)p0);
    }

    public final com.google.android.gms.common.ConnectionResult c()
 throws android.os.RemoteException {
      java.util.concurrent.locks.Lock e;
      com.google.android.gms.common.ConnectionResult v3;
      hn.a(Looper.myLooper() != Looper.getMainLooper(), "blockingConnect must not be called on the UI thread");
      e = this.e;
      e.lock();
      try
      {
        this.b();
        while ( this.h() )
        {
          try
          {
            this.f.await();
          }
          catch ( InterruptedException e2 )
          {
            Thread.currentThread().interrupt();
            return new com.google.android.gms.common.ConnectionResult(15, null);
          }
        }
        if ( this.g() )
          return ConnectionResult.s;
        if ( this.j != null )
          return this.j;
        v3 = new com.google.android.gms.common.ConnectionResult(13, null);
      }
      finally
      {
        this.e.unlock();
      }
      return v3;
    }

    public final void c(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      this.g.c(p0);
    }

    public final void c(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0)
    {
      this.g.c((com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener)p0);
    }

    public final void d()
 throws android.os.RemoteException {
      this.l();
      this.a(-1);
    }

    public final void e()
 throws android.os.RemoteException {
      this.d();
      this.b();
    }

    public final void f()
 throws android.os.RemoteException {
      hn.a(this.h != null, "Called stopAutoManage but automatic lifecycle management is not enabled.");
      if ( this.h.getActivity() != null )
      {
        this.h.getActivity().c().a().a(this.h).h();
        this.d();
      }
    }

    public final boolean g()
    {
      java.util.concurrent.locks.Lock e;
      int l;
      e = this.e;
      e.lock();
      try
      {
        l = this.l;
      }
      finally
      {
        this.e.unlock();
      }
      return l == 2;
    }

    public final boolean h()
    {
      boolean v1;
      java.util.concurrent.locks.Lock e;
      int l;
      v1 = true;
      e = this.e;
      e.lock();
      try
      {
        l = this.l;
      }
      catch ( Throwable v5 )
      {
        this.e.unlock();
        throw v5;
      }
      if ( l != 1 )
        v1 = false;
      this.e.unlock();
      return v1;
    }

}
