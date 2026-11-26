// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Process;
import com.google.android.gms.internal.im;
class a {
    // Fields
    private static java.lang.Object j;
    private static com.google.android.gms.tagmanager.a k;
    private volatile long a;
    private volatile long b;
    private volatile boolean c;
    private volatile com.google.android.gms.ads.identifier.AdvertisingIdClient$Info d;
    private volatile long e;
    private final android.content.Context f;
    private final com.google.android.gms.internal.ik g;
    private final java.lang.Thread h;
    private com.google.android.gms.tagmanager.a$a i;

    // Methods
    static
    {
      j = new Object();
    }

    private a(android.content.Context p0)
    {
      this(p0, null, im.fW());
    }

    private a(android.content.Context p0, com.google.android.gms.tagmanager.a$a p1, com.google.android.gms.internal.ik p2)
    {
      super();
      this.a = 900000;
      this.b = 30000;
      this.c = false;
      this.i = (com.google.android.gms.tagmanager.a$a)new com.google.android.gms.tagmanager.a$1(this);
      this.g = p2;
      if ( p0 != null )
        this.f = p0.getApplicationContext();
      else
        this.f = null;
      this.h = new Thread((Runnable)new com.google.android.gms.tagmanager.a$2(this));
    }

    static com.google.android.gms.tagmanager.a J(android.content.Context p0)
    {
      Object v1;
      com.google.android.gms.tagmanager.a v2;
      if ( k != null )
        return k;
      v1 = j;
      synchronized ( v1 )
      {
        if ( k == null )
        {
          v2 = new com.google.android.gms.tagmanager.a(p0);
          k = v2;
          v2.h.start();
        }
        return k;
      }
    }

    /* synthetic */ static android.content.Context a(com.google.android.gms.tagmanager.a p0)
    {
      return p0.f;
    }

    /* synthetic */ static void b(com.google.android.gms.tagmanager.a p0)
    {
      long a;
      Process.setThreadPriority(10);
      while ( !p0.c )
      {
        try
        {
          p0.d = p0.i.a();
          a = p0.a;
          Thread.sleep(a);
        }
        catch ( InterruptedException e )
        {
          bh.B("sleep interrupted in AdvertiserDataPoller thread; continuing");
        }
      }
    }

    private void c()
    {
      long a;
      Process.setThreadPriority(10);
      while ( !this.c )
      {
        try
        {
          this.d = this.i.a();
          a = this.a;
          Thread.sleep(a);
        }
        catch ( InterruptedException e )
        {
          bh.B("sleep interrupted in AdvertiserDataPoller thread; continuing");
        }
      }
    }

    private void d()
    {
      long v1; // RETVAL
      long e;
      long v3;
      long b;
      v1 = this.g.a();
      e = this.e;
      v3 = v1 - e;
      b = this.b;
      if ( v3 >= b )
      {
        this.h.interrupt();
        this.e = this.g.a();
      }
    }

    private void e()
    {
      this.h.interrupt();
    }

    private void f()
    {
      this.h.start();
    }

    public final String a()
    {
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info d;
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info v4;
      this.d();
      d = this.d;
      if ( d == null )
        return null;
      v4 = this.d;
      return v4.a();
    }

    public final boolean b()
    {
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info d;
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info v4;
      this.d();
      d = this.d;
      if ( d == null )
        return true;
      v4 = this.d;
      return v4.b();
    }

}
