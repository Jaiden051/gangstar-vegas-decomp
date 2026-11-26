// Decompiled from classes.dex (SourceFile: Task.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

public class Task<TResult> {
    // Fields
    public static final java.util.concurrent.ExecutorService a;
    public static final java.util.concurrent.Executor b;
    private static final java.util.concurrent.Executor c;
    private final java.lang.Object d;
    private boolean e;
    private boolean f;
    private java.lang.Object g;
    private java.lang.Exception h;
    private java.util.List i;

    // Methods
    static
    {
      a = BoltsExecutors.background();
      c = BoltsExecutors.immediate();
      b = AndroidExecutors.uiThread();
    }

    private Task()
    {
      super();
      this.d = new Object();
      this.i = new java.util.ArrayList();
    }

    private bolts.Task<Void> a(java.util.concurrent.Callable<Boolean> p0, bolts.l<Void, bolts.Task<Void>> p1)
    {
      java.util.concurrent.Executor v3;
      bolts.k v4;
      v3 = c;
      v4 = new bolts.k();
      v4.a(new bolts.q(this, p0, p1, v3, v4));
      return this.b((bolts.l)new bolts.Task$1(this)).d((bolts.l)v4.a(), v3);
    }

    private bolts.Task<Void> a(
            java.util.concurrent.Callable<Boolean> p0,
            bolts.l<Void, bolts.Task<Void>> p1,
            java.util.concurrent.Executor p2)
    {
      bolts.k v4;
      v4 = new bolts.k();
      v4.a(new bolts.q(this, p0, p1, p2, v4));
      return this.b((bolts.l)new bolts.Task$1(this)).d((bolts.l)v4.a(), p2);
    }

    /* synthetic */ static void access$100(bolts.w p0, bolts.l p1, bolts.Task p2, java.util.concurrent.Executor p3)
    {
      completeImmediately(p0, p1, p2, p3);
    }

    /* synthetic */ static void access$200(bolts.w p0, bolts.l p1, bolts.Task p2, java.util.concurrent.Executor p3)
    {
      completeAfterTask(p0, p1, p2, p3);
    }

    /* synthetic */ static Object access$300(bolts.Task p0)
    {
      return p0.d;
    }

    /* synthetic */ static boolean access$400(bolts.Task p0)
    {
      return p0.e;
    }

    /* synthetic */ static boolean access$402(bolts.Task p0, boolean p1)
    {
      p0.e = p1;
      return p1;
    }

    /* synthetic */ static boolean access$502(bolts.Task p0, boolean p1)
    {
      p0.f = p1;
      return p1;
    }

    /* synthetic */ static void access$600(bolts.Task p0)
    {
      Object d;
      java.util.Iterator v2;
      bolts.l v3;
      d = p0.d;
      synchronized ( d )
      {
        v2 = p0.i.iterator();
        while ( v2.hasNext() )
        {
          v3 = (bolts.l)v2.next();
          try
          {
            v3.then(p0);
          }
          catch ( RuntimeException v4 )
          {
            throw v4;
          }
          catch ( Exception v6 )
          {
            throw new RuntimeException(v6);
          }
        }
        p0.i = null;
      }
    }

    /* synthetic */ static Object access$702(bolts.Task p0, Object p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static Exception access$802(bolts.Task p0, Exception p1)
    {
      p0.h = p1;
      return p1;
    }

    private <TContinuationResult> bolts.Task<TContinuationResult> c(
            bolts.l<TResult, TContinuationResult> p0,
            java.util.concurrent.Executor p1)
    {
      bolts.w v3;
      Object d;
      boolean v5;
      v3 = create();
      d = this.d;
      synchronized ( d )
      {
        v5 = this.e();
        if ( !v5 )
          this.i.add(new bolts.r(this, v3, p0, p1));
      }
      if ( v5 )
        completeImmediately(v3, p0, this, p1);
      return v3.a;
    }

    public static <TResult> bolts.Task<TResult> call(java.util.concurrent.Callable<TResult> p0)
    {
      return call(p0, c);
    }

    public static <TResult> bolts.Task<TResult> call(
            java.util.concurrent.Callable<TResult> p0,
            java.util.concurrent.Executor p1)
    {
      bolts.w v2; // RETVAL
    
      v2 = create();
      p1.execute((Runnable)new bolts.o(v2, p0));
      return v2.a;
    }

    public static <TResult> bolts.Task<TResult> callInBackground(java.util.concurrent.Callable<TResult> p0)
    {
      return call(p0, a);
    }

    public static <TResult> bolts.Task<TResult> cancelled()
    {
      bolts.w v0; // RETVAL
    
      v0 = create();
      v0.b();
      return v0.a;
    }

    private static void completeAfterTask(bolts.w p0, bolts.l p1, bolts.Task p2, java.util.concurrent.Executor p3)
    {
      p3.execute((Runnable)new bolts.m(p1, p2, p0));
    }

    private static void completeImmediately(bolts.w p0, bolts.l p1, bolts.Task p2, java.util.concurrent.Executor p3)
    {
      p3.execute((Runnable)new bolts.v(p1, p2, p0));
    }

    public static bolts.w create()
    {
      bolts.Task v0;
      v0 = new bolts.Task();
      v0.getClass();
      return new bolts.w(v0, 0);
    }

    private <TContinuationResult> bolts.Task<TContinuationResult> d(
            bolts.l<TResult, bolts.Task<TContinuationResult>> p0)
    {
      return this.b(p0, c);
    }

    private <TContinuationResult> bolts.Task<TContinuationResult> d(
            bolts.l<TResult, bolts.Task<TContinuationResult>> p0,
            java.util.concurrent.Executor p1)
    {
      bolts.w v3;
      Object d;
      boolean v5;
      v3 = create();
      d = this.d;
      synchronized ( d )
      {
        v5 = this.e();
        if ( !v5 )
          this.i.add(new bolts.s(this, v3, p0, p1));
      }
      if ( v5 )
        completeAfterTask(v3, p0, this, p1);
      return v3.a;
    }

    private boolean e()
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        return this.e;
      }
    }

    private void f() throws InterruptedException
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        if ( !this.e() )
          this.d.wait();
      }
    }

    public static <TResult> bolts.Task<TResult> forError(Exception p0)
    {
      bolts.w v1; // RETVAL
    
      v1 = create();
      v1.b(p0);
      return v1.a;
    }

    public static <TResult> bolts.Task<TResult> forResult(TResult p0)
    {
      bolts.w v1; // RETVAL
    
      v1 = create();
      v1.b(p0);
      return v1.a;
    }

    private <TOut> bolts.Task<TOut> g()
    {
      return (bolts.Task<TOut>)this;
    }

    private bolts.Task<Void> h()
    {
      return this.b((bolts.l)new bolts.Task$1(this));
    }

    private void i()
    {
      Object d;
      java.util.Iterator v2;
      bolts.l v3;
      d = this.d;
      synchronized ( d )
      {
        v2 = this.i.iterator();
        while ( v2.hasNext() )
        {
          v3 = (bolts.l)v2.next();
          try
          {
            v3.then(this);
          }
          catch ( RuntimeException v4 )
          {
            throw v4;
          }
          catch ( Exception v6 )
          {
            throw new RuntimeException(v6);
          }
        }
        this.i = null;
      }
    }

    public static bolts.Task<Void> whenAll(java.util.Collection<? extends bolts.Task<?>> p0)
    {
      bolts.w v3;
      java.util.ArrayList v4;
      Object v5;
      java.util.concurrent.atomic.AtomicInteger v6;
      java.util.concurrent.atomic.AtomicBoolean v7;
      java.util.Iterator i;
      if ( p0.size() == 0 )
        return forResult(null);
      v3 = create();
      v4 = new java.util.ArrayList();
      v5 = new Object();
      v6 = new java.util.concurrent.atomic.AtomicInteger(p0.size());
      v7 = new java.util.concurrent.atomic.AtomicBoolean(false);
      for ( i = p0.iterator(); i.hasNext(); ((bolts.Task)i.next()).a((bolts.l)new bolts.p(v5, v4, v7, v6, v3)) )
        ;
      return v3.a;
    }

    public final <TContinuationResult> bolts.Task<TContinuationResult> a(bolts.l<TResult, TContinuationResult> p0)
    {
      return this.c(p0, c);
    }

    public final <TContinuationResult> bolts.Task<TContinuationResult> a(
            bolts.l<TResult, TContinuationResult> p0,
            java.util.concurrent.Executor p1)
    {
      return this.d((bolts.l)new bolts.t(this, p0), p1);
    }

    public final boolean a()
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        return this.f;
      }
    }

    public final <TContinuationResult> bolts.Task<TContinuationResult> b(
            bolts.l<TResult, bolts.Task<TContinuationResult>> p0)
    {
      return this.d(p0, c);
    }

    public final <TContinuationResult> bolts.Task<TContinuationResult> b(
            bolts.l<TResult, bolts.Task<TContinuationResult>> p0,
            java.util.concurrent.Executor p1)
    {
      return this.d((bolts.l)new bolts.u(this, p0), p1);
    }

    public final boolean b()
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        return this.h != null;
      }
    }

    public final <TContinuationResult> bolts.Task<TContinuationResult> c(bolts.l<TResult, TContinuationResult> p0)
    {
      return this.a(p0, c);
    }

    public final TResult c()
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        return (TResult)this.g;
      }
    }

    public final Exception d()
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        return this.h;
      }
    }

}
