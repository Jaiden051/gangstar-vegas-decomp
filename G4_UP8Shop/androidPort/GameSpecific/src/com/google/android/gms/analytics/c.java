// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class c implements com.google.android.gms.analytics.b {
    // Fields
    private android.content.ServiceConnection a;
    private com.google.android.gms.analytics.c$b b;
    private com.google.android.gms.analytics.c$c c;
    private android.content.Context d;
    private com.google.android.gms.internal.ff e;

    // Methods
    public c(android.content.Context p0, com.google.android.gms.analytics.c$b p1, com.google.android.gms.analytics.c$c p2)
    {
      super();
      this.d = p0;
      if ( p1 == null )
        throw new IllegalArgumentException("onConnectedListener cannot be null");
      this.b = p1;
      if ( p2 == null )
        throw new IllegalArgumentException("onConnectionFailedListener cannot be null");
      this.c = p2;
    }

    /* synthetic */ static android.content.ServiceConnection a(
            com.google.android.gms.analytics.c p0,
            android.content.ServiceConnection p1)
    {
      p0.a = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.internal.ff a(
            com.google.android.gms.analytics.c p0,
            com.google.android.gms.internal.ff p1)
    {
      p0.e = p1;
      return p1;
    }

    /* synthetic */ static void a(com.google.android.gms.analytics.c p0)
    {
      p0.b.e();
    }

    /* synthetic */ static android.content.Context b(com.google.android.gms.analytics.c p0)
    {
      return p0.d;
    }

    /* synthetic */ static com.google.android.gms.analytics.c$c c(com.google.android.gms.analytics.c p0)
    {
      return p0.c;
    }

    /* synthetic */ static com.google.android.gms.analytics.c$b d(com.google.android.gms.analytics.c p0)
    {
      return p0.b;
    }

    private com.google.android.gms.internal.ff d()
    {
      if ( this.e == null )
        throw new IllegalStateException("Not connected. Call connect() and wait for onConnected() to be called.");
      return this.e;
    }

    private void e()
    {
      if ( this.e == null )
        throw new IllegalStateException("Not connected. Call connect() and wait for onConnected() to be called.");
    }

    private boolean f()
    {
      return this.e != null;
    }

    private void g()
    {
      this.b.e();
    }

    private void h()
    {
      this.b.e();
    }

    public final void a()
    {
      try
      {
        this.d().a();
      }
      catch ( android.os.RemoteException v1 )
      {
        aa.A("clear hits failed: " + v1);
      }
    }

    public final void a(
            java.util.Map<String, String> p0,
            long p1,
            String p3,
            java.util.List<com.google.android.gms.internal.fe> p4)
    {
      try
      {
        this.d().a(p0, p1, p3, p4);
      }
      catch ( android.os.RemoteException v5 )
      {
        aa.A("sendHit failed: " + v5);
      }
    }

    public final void b()
    {
      android.content.Intent v1;
      boolean v2;
      v1 = new android.content.Intent("com.google.android.gms.analytics.service.START");
      v1.setComponent(new android.content.ComponentName("com.google.android.gms", "com.google.android.gms.analytics.service.AnalyticsService"));
      v1.putExtra("app_package_name", this.d.getPackageName());
      if ( this.a != null )
      {
        aa.A("Calling connect() while still connected, missing disconnect().");
      }
      else
      {
        this.a = (android.content.ServiceConnection)new com.google.android.gms.analytics.c$a(this);
        v2 = this.d.bindService(v1, this.a, 129);
        aa.C("connect: bindService returned " + v2 + " for " + v1);
        if ( !v2 )
        {
          this.a = null;
          this.c.a(1);
        }
      }
    }

    public final void c()
    {
      this.e = null;
      if ( this.a != null )
      {
        try
        {
          this.d.unbindService(this.a);
        }
        catch ( IllegalStateException e )
        {
        }
        catch ( IllegalArgumentException e )
        {
        }
        this.a = null;
        this.b.f();
      }
    }

}
