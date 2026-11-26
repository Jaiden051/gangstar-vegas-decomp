// Decompiled from classes.dex (SourceFile: co.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.concurrent.TimeUnit;
class co implements com.google.android.gms.tagmanager.o$e {
    // Fields
    private final java.lang.String a;
    private final android.content.Context b;
    private final java.util.concurrent.ScheduledExecutorService c;
    private final com.google.android.gms.tagmanager.co$a d;
    private java.util.concurrent.ScheduledFuture e;
    private boolean f;
    private com.google.android.gms.tagmanager.r g;
    private java.lang.String h;
    private com.google.android.gms.tagmanager.bg i;

    // Methods
    public co(android.content.Context p0, String p1, com.google.android.gms.tagmanager.r p2)
    {
      this(p0, p1, p2, null, null);
    }

    private co(
            android.content.Context p0,
            String p1,
            com.google.android.gms.tagmanager.r p2,
            com.google.android.gms.tagmanager.co$b p3,
            com.google.android.gms.tagmanager.co$a p4)
    {
      super();
      this.g = p2;
      this.b = p0;
      this.a = p1;
      this.c = ((com.google.android.gms.tagmanager.co$b)new com.google.android.gms.tagmanager.co$1(this)).a();
      this.d = (com.google.android.gms.tagmanager.co$a)new com.google.android.gms.tagmanager.co$2(this);
    }

    /* synthetic */ static android.content.Context a(com.google.android.gms.tagmanager.co p0)
    {
      return p0.b;
    }

    private synchronized void a()
    {
      if ( this.f )
        throw new IllegalStateException("called method after closed");
    }

    private com.google.android.gms.tagmanager.cn b(String p0)
    {
      com.google.android.gms.tagmanager.cn result; // RETVAL
    
      result = this.d.a(this.g);
      result.a(this.i);
      result.a(this.h);
      result.b(p0);
      return result;
    }

    /* synthetic */ static String b(com.google.android.gms.tagmanager.co p0)
    {
      return p0.a;
    }

    public final synchronized void a(long p0, String p2)
    {
      com.google.android.gms.tagmanager.cn v4; // RETVAL
    
      bh.C("loadAfterDelay: containerId=" + this.a + " delay=" + p0);
      this.a();
      if ( this.i == null )
        throw new IllegalStateException("callback must be set before loadAfterDelay() is called.");
      try
      {
        if ( this.e != null )
          this.e.cancel(false);
        v4 = this.d.a(this.g);
        v4.a(this.i);
        v4.a(this.h);
        v4.b(p2);
        this.e = this.c.schedule((Runnable)v4, p0, TimeUnit.MILLISECONDS);
      }
      finally
      {
      }
    }

    public final synchronized void a(com.google.android.gms.tagmanager.bg<com.google.android.gms.internal.c$j> p0)
    {
      this.a();
      this.i = p0;
    }

    public final synchronized void a(String p0)
    {
      this.a();
      this.h = p0;
    }

    public final synchronized void d()
    {
      this.a();
      if ( this.e != null )
        this.e.cancel(false);
      this.c.shutdown();
      this.f = true;
    }

}
