// Decompiled from classes.dex (SourceFile: NetworkDispatcher$DispatcherThread.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

class NetworkDispatcher$DispatcherThread extends android.os.HandlerThread {
    // Fields
    volatile android.os.Handler a;
    private final com.google.android.apps.analytics.o b;
    private final java.lang.String c;
    private int d;
    private int e;
    private long f;
    private com.google.android.apps.analytics.m g;
    private final com.google.android.apps.analytics.d h;
    private final com.google.android.apps.analytics.n i;
    private final com.google.android.apps.analytics.NetworkDispatcher j;

    // Methods
    private NetworkDispatcher$DispatcherThread(
            com.google.android.apps.analytics.d p0,
            com.google.android.apps.analytics.o p1,
            String p2,
            com.google.android.apps.analytics.NetworkDispatcher p3)
    {
      super("DispatcherThread");
      this.e = 30;
      this.g = null;
      this.h = p0;
      this.c = p2;
      this.b = p1;
      this.i = new com.google.android.apps.analytics.n(this, 0);
      this.b.b = (com.google.android.apps.analytics.p)this.i;
      this.j = p3;
    }

    /* synthetic */ NetworkDispatcher$DispatcherThread(
            com.google.android.apps.analytics.d p0,
            com.google.android.apps.analytics.o p1,
            String p2,
            com.google.android.apps.analytics.NetworkDispatcher p3,
            int p4)
    {
      this(p0, p1, p2, p3);
    }

    private NetworkDispatcher$DispatcherThread(
            com.google.android.apps.analytics.d p0,
            String p1,
            com.google.android.apps.analytics.NetworkDispatcher p2)
    {
      this(p0, new com.google.android.apps.analytics.o(NetworkDispatcher.access$200(p2)), p1, p2);
    }

    /* synthetic */ NetworkDispatcher$DispatcherThread(
            com.google.android.apps.analytics.d p0,
            String p1,
            com.google.android.apps.analytics.NetworkDispatcher p2,
            int p3)
    {
      this(p0, p1, p2);
    }

    /* synthetic */ static int access$1000(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.e;
    }

    /* synthetic */ static int access$1002(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0,
            int p1)
    {
      p0.e = p1;
      return p1;
    }

    /* synthetic */ static String access$1100(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.c;
    }

    /* synthetic */ static com.google.android.apps.analytics.n access$1200(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.i;
    }

    /* synthetic */ static com.google.android.apps.analytics.m access$400(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.g;
    }

    /* synthetic */ static com.google.android.apps.analytics.m access$402(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0,
            com.google.android.apps.analytics.m p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static int access$500(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.d;
    }

    /* synthetic */ static int access$502(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0,
            int p1)
    {
      p0.d = p1;
      return p1;
    }

    /* synthetic */ static long access$600(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.f;
    }

    /* synthetic */ static long access$602(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0,
            long p1)
    {
      p0.f = p1;
      return p1;
    }

    /* synthetic */ static long access$630(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0,
            long p1)
    {
      long v2;
      v2 = p0.f * p1;
      p0.f = v2;
      return v2;
    }

    /* synthetic */ static com.google.android.apps.analytics.NetworkDispatcher access$700(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.j;
    }

    /* synthetic */ static com.google.android.apps.analytics.o access$800(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.b;
    }

    /* synthetic */ static com.google.android.apps.analytics.d access$900(
            com.google.android.apps.analytics.NetworkDispatcher$DispatcherThread p0)
    {
      return p0.h;
    }

    public final void a(com.google.android.apps.analytics.i[] p0)
    {
      android.os.Handler a;
      android.os.Handler v3;
      a = this.a;
      if ( a != null )
      {
        v3 = this.a;
        v3.post((Runnable)new com.google.android.apps.analytics.m(this, p0));
      }
    }

    protected void onLooperPrepared()
    {
      this.a = new android.os.Handler();
    }

}
