// Decompiled from classes.dex (SourceFile: a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import android.os.Looper;
import com.google.android.gms.internal.hn;
public abstract class a$a<R extends com.google.android.gms.common.api.Result> implements com.google.android.gms.common.api.PendingResult<R>, com.google.android.gms.common.api.a$d<R> {
    // Fields
    private final java.lang.Object a;
    private com.google.android.gms.common.api.a$c b;
    private final java.util.concurrent.CountDownLatch c;
    private final java.util.ArrayList d;
    private com.google.android.gms.common.api.ResultCallback e;
    private volatile com.google.android.gms.common.api.Result f;
    private volatile boolean g;
    private boolean h;
    private boolean i;
    private com.google.android.gms.internal.hh j;

    // Methods
    a$a()
    {
      super();
      this.a = new Object();
      this.c = new java.util.concurrent.CountDownLatch(1);
      this.d = new java.util.ArrayList();
    }

    public a$a(android.os.Looper p0)
    {
      super();
      this.a = new Object();
      this.c = new java.util.concurrent.CountDownLatch(1);
      this.d = new java.util.ArrayList();
      this.b = new com.google.android.gms.common.api.a$c(p0);
    }

    public a$a(com.google.android.gms.common.api.a$c<R> p0)
    {
      super();
      this.a = new Object();
      this.c = new java.util.concurrent.CountDownLatch(1);
      this.d = new java.util.ArrayList();
      this.b = p0;
    }

    /* synthetic */ static void a(com.google.android.gms.common.api.a$a p0)
 throws android.os.RemoteException {
      p0.h();
    }

    private void b(R p0)
 throws android.os.DeadObjectException, android.os.RemoteException {
      com.google.android.gms.common.api.Result f;
      com.google.android.gms.common.api.Status v3;
      java.util.Iterator i;
      this.f = p0;
      this.j = null;
      this.c.countDown();
      f = this.f;
      v3 = f.D_();
      if ( this.e != null )
      {
        this.b.a();
        if ( !this.h )
          this.b.a(this.e, this.f());
      }
      for ( i = this.d.iterator(); i.hasNext(); ((com.google.android.gms.common.api.PendingResult$a)i.next()).a(v3) )
        ;
      this.d.clear();
    }

    private R f()
 throws android.os.RemoteException {
      Object a;
      boolean g;
      com.google.android.gms.common.api.Result f;
      a = this.a;
      synchronized ( a )
      {
        g = this.g;
        hn.a(!g, "Result has already been consumed.");
        hn.a(this.d(), "Result is not ready.");
        f = this.f;
        this.e();
        return (R)f;
      }
    }

    private void g()
 throws android.os.RemoteException {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( !this.d() )
        {
          this.a(this.a(Status.b));
          this.i = true;
        }
      }
    }

    private void h()
 throws android.os.RemoteException {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( !this.d() )
        {
          this.a(this.a(Status.d));
          this.i = true;
        }
      }
    }

    public final R a(long p0, java.util.concurrent.TimeUnit p2)
 throws android.os.RemoteException {
      boolean g;
      hn.a(true, "await must not be called on the UI thread when time is greater than zero.");
      g = this.g;
      hn.a(!g, "Result has already been consumed.");
      try
      {
        if ( !this.c.await(0, p2) )
          this.h();
      }
      catch ( InterruptedException e )
      {
        this.g();
      }
      hn.a(this.d(), "Result is not ready.");
      return this.f();
    }

    protected abstract com.google.android.gms.common.api.Result a(com.google.android.gms.common.api.Status p0) throws android.os.RemoteException;

    public void a()
 throws android.os.RemoteException {
      Object a;
      boolean g;
      com.google.android.gms.common.api.Result f;
      a = this.a;
      synchronized ( a )
      {
        if ( this.h || (g = this.g) )
          return;
        if ( this.j != null )
        {
          try
          {
            this.j.a();
          }
          catch ( android.os.RemoteException e )
          {
          }
        }
        f = this.f;
        com.google.android.gms.common.api.a.a(f);
        this.e = null;
        this.h = true;
        this.b((R)this.a(Status.e));
        return;
      }
    }

    public final void a(com.google.android.gms.common.api.PendingResult$a p0)
 throws android.os.RemoteException {
      Object v2 = null;
      boolean g;
      boolean v4 = false;
      Object a;
      com.google.android.gms.common.api.Result f;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            g = this.g;
            try
            {
            if ( !g )
            {
            v4 = true;
            { _pc = 1; continue _sm; }
            }
            v4 = false;
            }
            catch ( Throwable v7 )
            {
            com.gameloft.android.DecompRT.monitorExit(v2);
            throw v7;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            hn.a(v4, "Result has already been consumed.");
            a = this.a;
            com.gameloft.android.DecompRT.monitorEnter(a);
            if ( this.d() )
            {
            f = this.f;
            p0.a(f.D_());
            }
            else
            {
            this.d.add(p0);
            }
            com.gameloft.android.DecompRT.monitorExit(a);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public final void a(R p0)
 throws android.os.RemoteException {
      Object a;
      boolean g;
      a = this.a;
      synchronized ( a )
      {
        if ( this.i || this.h )
        {
          com.google.android.gms.common.api.a.a(p0);
        }
        else
        {
          hn.a(!this.d(), "Results have already been set");
          g = this.g;
          hn.a(!g, "Result has already been consumed");
          this.b(p0);
        }
        return;
      }
    }

    public final void a(com.google.android.gms.common.api.ResultCallback<R> p0)
 throws android.os.RemoteException {
      Object v2 = null;
      boolean g;
      boolean v4 = false;
      Object a;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            g = this.g;
            try
            {
            if ( !g )
            {
            v4 = true;
            { _pc = 1; continue _sm; }
            }
            v4 = false;
            }
            catch ( Throwable v6 )
            {
            com.gameloft.android.DecompRT.monitorExit(v2);
            throw v6;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            hn.a(v4, "Result has already been consumed.");
            a = this.a;
            com.gameloft.android.DecompRT.monitorEnter(a);
            if ( !this.c() )
            {
            if ( this.d() )
            this.b.a(p0, this.f());
            else
            this.e = p0;
            }
            com.gameloft.android.DecompRT.monitorExit(a);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public final void a(
            com.google.android.gms.common.api.ResultCallback<R> p0,
            long p1,
            java.util.concurrent.TimeUnit p3)
 throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      Object v4 = null;
      boolean g;
      boolean v6 = false;
      Object a;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            g = this.g;
            try
            {
            if ( !g )
            {
            v6 = true;
            { _pc = 1; continue _sm; }
            }
            v6 = false;
            }
            catch ( Throwable v8 )
            {
            com.gameloft.android.DecompRT.monitorExit(v4);
            throw v8;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            hn.a(v6, "Result has already been consumed.");
            a = this.a;
            com.gameloft.android.DecompRT.monitorEnter(a);
            if ( !this.c() )
            {
            if ( this.d() )
            {
            this.b.a(p0, this.f());
            }
            else
            {
            this.e = p0;
            this.b.a(this, p3.toMillis(p1));
            }
            }
            com.gameloft.android.DecompRT.monitorExit(a);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    protected final void a(com.google.android.gms.common.api.a$c<R> p0)
 throws android.os.RemoteException {
      this.b = p0;
    }

    protected final void a(com.google.android.gms.internal.hh p0)
 throws android.os.RemoteException {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.j = p0;
      }
    }

    /* synthetic */ public final void a(Object p0)
 throws android.os.RemoteException {
      this.a((com.google.android.gms.common.api.Result)p0);
    }

    public final R b()
 throws android.os.RemoteException {
      boolean g;
      hn.a(Looper.myLooper() != Looper.getMainLooper(), "await must not be called on the UI thread");
      g = this.g;
      hn.a(!g, "Result has already been consumed");
      try
      {
        this.c.await();
      }
      catch ( InterruptedException e )
      {
        this.g();
      }
      hn.a(this.d(), "Result is not ready.");
      return this.f();
    }

    public final boolean c()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        return this.h;
      }
    }

    public final boolean d()
    {
      return this.c.getCount() == 0;
    }

    protected void e()
    {
      this.g = true;
      this.f = null;
      this.e = null;
    }

}
