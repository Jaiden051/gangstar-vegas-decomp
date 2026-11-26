// Decompiled from classes.dex (SourceFile: dp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Looper;
import android.text.TextUtils;
public class dp implements java.lang.Runnable {
    // Fields
    protected final com.google.android.gms.internal.ey a;
    protected boolean b;
    protected boolean c;
    private final android.os.Handler d;
    private final long e;
    private long f;
    private com.google.android.gms.internal.ez$a g;
    private final int h;
    private final int i;

    // Methods
    public dp(com.google.android.gms.internal.ez$a p0, com.google.android.gms.internal.ey p1, int p2, int p3)
    {
      this(p0, p1, p2, p3, 200, 50);
    }

    private dp(
            com.google.android.gms.internal.ez$a p0,
            com.google.android.gms.internal.ey p1,
            int p2,
            int p3,
            long p4,
            long p6)
    {
      super();
      this.e = 200;
      this.f = 50;
      this.d = new android.os.Handler(Looper.getMainLooper());
      this.a = p1;
      this.g = p0;
      this.b = false;
      this.c = false;
      this.h = p3;
      this.i = p2;
    }

    /* synthetic */ static int a(com.google.android.gms.internal.dp p0)
    {
      return p0.i;
    }

    private void a(com.google.android.gms.internal.dv p0, com.google.android.gms.internal.fd p1)
    {
      com.google.android.gms.internal.ey a;
      String v4;
      this.a.setWebViewClient(p1);
      a = this.a;
      if ( TextUtils.isEmpty(p0.b) )
        v4 = null;
      else
        v4 = ep.v(p0.b);
      a.loadDataWithBaseURL(v4, p0.c, "text/html", "UTF-8", null);
    }

    /* synthetic */ static int b(com.google.android.gms.internal.dp p0)
    {
      return p0.h;
    }

    /* synthetic */ static long c(com.google.android.gms.internal.dp p0)
    {
      long v1;
      v1 = p0.f - 1;
      p0.f = v1;
      return v1;
    }

    /* synthetic */ static long d(com.google.android.gms.internal.dp p0)
    {
      return p0.f;
    }

    /* synthetic */ static com.google.android.gms.internal.ez$a e(com.google.android.gms.internal.dp p0)
    {
      return p0.g;
    }

    /* synthetic */ static long f(com.google.android.gms.internal.dp p0)
    {
      return p0.e;
    }

    /* synthetic */ static android.os.Handler g(com.google.android.gms.internal.dp p0)
    {
      return p0.d;
    }

    public final void a()
    {
      this.d.postDelayed((Runnable)this, this.e);
    }

    public final void a(com.google.android.gms.internal.dv p0)
    {
      com.google.android.gms.internal.ey a;
      String v3;
      this.a.setWebViewClient(new com.google.android.gms.internal.fd(this, this.a, p0.q));
      a = this.a;
      if ( TextUtils.isEmpty(p0.b) )
        v3 = null;
      else
        v3 = ep.v(p0.b);
      a.loadDataWithBaseURL(v3, p0.c, "text/html", "UTF-8", null);
    }

    public final synchronized void b()
    {
      this.b = true;
    }

    public final synchronized boolean c()
    {
      return this.b;
    }

    public final boolean d()
    {
      return this.c;
    }

    public void run()
    {
      try {
      if ( this.a != null && !this.c() )
        new com.google.android.gms.internal.dp$a(this, this.a).execute(new Void[0]);
      else
        this.g.a(this.a);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
