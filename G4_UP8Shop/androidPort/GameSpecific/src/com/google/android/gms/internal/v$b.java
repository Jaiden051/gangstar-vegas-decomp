// Decompiled from classes.dex (SourceFile: v$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class v$b implements com.google.android.gms.internal.h, java.lang.Runnable {
    // Fields
    private final java.util.List a;
    private final java.util.concurrent.CountDownLatch b;
    private final java.util.concurrent.atomic.AtomicReference c;
    private com.google.android.gms.internal.v$c d;

    // Methods
    public v$b(com.google.android.gms.internal.v$c p0)
    {
      super();
      this.a = new java.util.Vector();
      this.b = new java.util.concurrent.CountDownLatch(1);
      this.c = new java.util.concurrent.atomic.AtomicReference();
      this.d = p0;
      if ( eu.bR() )
        eo.execute((Runnable)this);
      else
        this.run();
    }

    private void a()
    {
      try
      {
        this.b.await();
      }
      catch ( InterruptedException v1 )
      {
        ev.c("Interrupted during GADSignals creation.", v1);
      }
    }

    private void b()
 throws InterruptedException {
      java.util.Iterator v1;
      Object[] v2;
      if ( !this.a.isEmpty() )
      {
        v1 = this.a.iterator();
        while ( v1.hasNext() )
        {
          v2 = (Object[])v1.next();
          if ( v2.length == 1 )
          {
            ((com.google.android.gms.internal.h)this.c.get()).a((android.view.MotionEvent)v2[0]);
          }
          else if ( v2.length == 3 )
          {
            ((com.google.android.gms.internal.h)this.c.get()).a(((Integer)v2[0]).intValue(), ((Integer)v2[1]).intValue(), ((Integer)v2[2]).intValue());
          }
        }
      }
    }

    public final String a(android.content.Context p0)
 throws InterruptedException {
      this.a();
      this.b();
      return ((com.google.android.gms.internal.h)this.c.get()).a(p0);
    }

    public final String a(android.content.Context p0, String p1)
 throws java.io.UnsupportedEncodingException, java.security.NoSuchAlgorithmException, java.io.IOException, InterruptedException {
      this.a();
      this.b();
      return ((com.google.android.gms.internal.h)this.c.get()).a(p0, p1);
    }

    public final void a(int p0, int p1, int p2)
 throws InterruptedException {
      com.google.android.gms.internal.h v4;
      Object[] v5;
      v4 = (com.google.android.gms.internal.h)this.c.get();
      if ( v4 != null )
      {
        this.b();
        v4.a(p0, p1, p2);
      }
      else
      {
        v5 = new Object[3];
        v5[0] = Integer.valueOf(p0);
        v5[1] = Integer.valueOf(p1);
        v5[2] = Integer.valueOf(p2);
        this.a.add(v5);
      }
    }

    public final void a(android.view.MotionEvent p0)
 throws InterruptedException {
      com.google.android.gms.internal.h v2;
      Object[] v3;
      v2 = (com.google.android.gms.internal.h)this.c.get();
      if ( v2 != null )
      {
        this.b();
        v2.a(p0);
      }
      else
      {
        v3 = new Object[1];
        v3[0] = p0;
        this.a.add(v3);
      }
    }

    public final void run()
    {
      try {
      try
      {
        this.c.set(k.a(this.d.e.b, this.d.c));
      }
      finally
      {
        this.b.countDown();
        this.d = null;
      }
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
