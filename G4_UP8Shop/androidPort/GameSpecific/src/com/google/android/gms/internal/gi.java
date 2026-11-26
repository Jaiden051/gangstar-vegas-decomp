// Decompiled from classes.dex (SourceFile: gi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.cast.Cast$Listener;
import android.os.Message;
import android.text.TextUtils;
import com.google.android.gms.cast.Cast;
public final class gi extends com.google.android.gms.internal.hc {
    // Fields
    private static final java.lang.Object B;
    private static final java.lang.Object C;
    private static final com.google.android.gms.internal.go a;
    private com.google.android.gms.common.api.a$d A;
    private com.google.android.gms.cast.ApplicationMetadata b;
    private final com.google.android.gms.cast.CastDevice c;
    private final com.google.android.gms.cast.Cast$Listener g;
    private final android.os.Handler h;
    private final com.google.android.gms.internal.gn i;
    private final java.util.Map j;
    private final long k;
    private java.lang.String l;
    private boolean m;
    private boolean n;
    private boolean o;
    private boolean p;
    private java.util.concurrent.atomic.AtomicBoolean q;
    private double r;
    private int s;
    private final java.util.concurrent.atomic.AtomicLong t;
    private java.lang.String u;
    private java.lang.String v;
    private android.os.Bundle w;
    private java.util.Map x;
    private com.google.android.gms.internal.gi$b y;
    private com.google.android.gms.common.api.a$d z;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.go("CastClientImpl");
      B = new Object();
      C = new Object();
    }

    public gi(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.cast.CastDevice p2,
            long p3,
            com.google.android.gms.cast.Cast$Listener p5,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p6,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p7)
    {
      super(p0, p1, p6, p7, null);
      this.c = p2;
      this.g = p5;
      this.k = p3;
      this.h = new android.os.Handler(p1);
      this.j = new java.util.HashMap();
      this.p = false;
      this.s = -1;
      this.b = null;
      this.l = null;
      this.q = new java.util.concurrent.atomic.AtomicBoolean(false);
      this.r = 0.0;
      this.m = false;
      this.t = new java.util.concurrent.atomic.AtomicLong(0);
      this.x = new java.util.HashMap();
      this.y = new com.google.android.gms.internal.gi$b(this, 0);
      this.a((com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)this.y);
      this.i = new com.google.android.gms.internal.gi$1(this);
    }

    private static com.google.android.gms.internal.gm G(android.os.IBinder p0)
    {
      return gm$a.H(p0);
    }

    /* synthetic */ static com.google.android.gms.cast.ApplicationMetadata a(
            com.google.android.gms.internal.gi p0,
            com.google.android.gms.cast.ApplicationMetadata p1)
    {
      p0.b = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.common.api.a$d a(
            com.google.android.gms.internal.gi p0,
            com.google.android.gms.common.api.a$d p1)
    {
      p0.z = p1;
      return p1;
    }

    /* synthetic */ static String a(com.google.android.gms.internal.gi p0, String p1)
    {
      p0.u = p1;
      return p1;
    }

    private void a(com.google.android.gms.internal.gf p0)
    {
      String v2;
      boolean v3;
      Object[] v4;
      v2 = p0.b();
      if ( gj.a(v2, this.l) )
      {
        v3 = false;
      }
      else
      {
        this.l = v2;
        v3 = true;
      }
      v4 = new Object[2];
      v4[0] = Boolean.valueOf(v3);
      v4[1] = Boolean.valueOf(this.n);
      a.b("hasChanged=%b, mFirstApplicationStatusUpdate=%b", v4);
      if ( this.g != null && (v3 || this.n) )
        Cast$Listener.onApplicationStatusChanged();
      this.n = false;
    }

    /* synthetic */ static void a(com.google.android.gms.internal.gi p0, com.google.android.gms.internal.gf p1)
    {
      String v2;
      boolean v3;
      Object[] v4;
      v2 = p1.b();
      if ( gj.a(v2, p0.l) )
      {
        v3 = false;
      }
      else
      {
        p0.l = v2;
        v3 = true;
      }
      v4 = new Object[2];
      v4[0] = Boolean.valueOf(v3);
      v4[1] = Boolean.valueOf(p0.n);
      a.b("hasChanged=%b, mFirstApplicationStatusUpdate=%b", v4);
      if ( p0.g != null && (v3 || p0.n) )
        Cast$Listener.onApplicationStatusChanged();
      p0.n = false;
    }

    /* synthetic */ static void a(com.google.android.gms.internal.gi p0, com.google.android.gms.internal.gk p1)
    {
      double v2; // RETVAL
      boolean v3;
      boolean v4; // RETVAL
      Object[] v5;
      int v6; // RETVAL
      boolean v7;
      Object[] v8;
      v2 = p1.b();
      if ( v2 == p0.r )
      {
        v3 = false;
      }
      else
      {
        p0.r = v2;
        v3 = true;
      }
      v4 = p1.c();
      if ( v4 != p0.m )
      {
        p0.m = v4;
        v3 = true;
      }
      v5 = new Object[2];
      v5[0] = Boolean.valueOf(v3);
      v5[1] = Boolean.valueOf(p0.o);
      a.b("hasVolumeChanged=%b, mFirstDeviceStatusUpdate=%b", v5);
      if ( p0.g != null && (v3 || p0.o) )
        Cast$Listener.onVolumeChanged();
      v6 = p1.d();
      if ( v6 == p0.s )
      {
        v7 = false;
      }
      else
      {
        p0.s = v6;
        v7 = true;
      }
      v8 = new Object[2];
      v8[0] = Boolean.valueOf(v7);
      v8[1] = Boolean.valueOf(p0.o);
      a.b("hasActiveInputChanged=%b, mFirstDeviceStatusUpdate=%b", v8);
      if ( p0.g != null && (v7 || p0.o) )
        Cast$Listener.O$13462e();
      p0.o = false;
    }

    private void a(com.google.android.gms.internal.gk p0)
    {
      double v2; // RETVAL
      boolean v3;
      boolean v4; // RETVAL
      Object[] v5;
      int v6; // RETVAL
      boolean v7;
      Object[] v8;
      v2 = p0.b();
      if ( v2 == this.r )
      {
        v3 = false;
      }
      else
      {
        this.r = v2;
        v3 = true;
      }
      v4 = p0.c();
      if ( v4 != this.m )
      {
        this.m = v4;
        v3 = true;
      }
      v5 = new Object[2];
      v5[0] = Boolean.valueOf(v3);
      v5[1] = Boolean.valueOf(this.o);
      a.b("hasVolumeChanged=%b, mFirstDeviceStatusUpdate=%b", v5);
      if ( this.g != null && (v3 || this.o) )
        Cast$Listener.onVolumeChanged();
      v6 = p0.d();
      if ( v6 == this.s )
      {
        v7 = false;
      }
      else
      {
        this.s = v6;
        v7 = true;
      }
      v8 = new Object[2];
      v8[0] = Boolean.valueOf(v7);
      v8[1] = Boolean.valueOf(this.o);
      a.b("hasActiveInputChanged=%b, mFirstDeviceStatusUpdate=%b", v8);
      if ( this.g != null && (v7 || this.o) )
        Cast$Listener.O$13462e();
      this.o = false;
    }

    /* synthetic */ static boolean a(com.google.android.gms.internal.gi p0, boolean p1)
    {
      p0.p = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.common.api.a$d b(
            com.google.android.gms.internal.gi p0,
            com.google.android.gms.common.api.a$d p1)
    {
      p0.A = p1;
      return p1;
    }

    /* synthetic */ static String b(com.google.android.gms.internal.gi p0, String p1)
    {
      p0.v = p1;
      return p1;
    }

    /* synthetic */ static java.util.concurrent.atomic.AtomicBoolean b(com.google.android.gms.internal.gi p0)
    {
      return p0.q;
    }

    private void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.cast.Cast$ApplicationConnectionResult> p0)
 throws android.os.RemoteException {
      Object v2;
      v2 = B;
      synchronized ( v2 )
      {
        if ( this.z != null )
          this.z.a(new com.google.android.gms.internal.gi$a(new com.google.android.gms.common.api.Status(2002)));
        this.z = p0;
      }
    }

    /* synthetic */ static com.google.android.gms.common.api.a$d c(com.google.android.gms.internal.gi p0)
    {
      return p0.z;
    }

    private void c(com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0)
 throws android.os.RemoteException {
      Object v2;
      v2 = C;
      synchronized ( v2 )
      {
        if ( this.A != null )
          p0.a(new com.google.android.gms.common.api.Status(2001));
        else
          this.A = p0;
        return;
      }
    }

    /* synthetic */ static com.google.android.gms.cast.Cast$Listener d(com.google.android.gms.internal.gi p0)
    {
      return p0.g;
    }

    /* synthetic */ static android.os.Handler e(com.google.android.gms.internal.gi p0)
    {
      return p0.h;
    }

    /* synthetic */ static com.google.android.gms.internal.go ef()
    {
      return a;
    }

    /* synthetic */ static Object eg()
    {
      return B;
    }

    /* synthetic */ static Object eh()
    {
      return C;
    }

    /* synthetic */ static java.util.Map f(com.google.android.gms.internal.gi p0)
    {
      return p0.j;
    }

    /* synthetic */ static com.google.android.gms.cast.CastDevice g(com.google.android.gms.internal.gi p0)
    {
      return p0.c;
    }

    /* synthetic */ static java.util.Map h(com.google.android.gms.internal.gi p0)
    {
      return p0.x;
    }

    /* synthetic */ static com.google.android.gms.common.api.a$d i(com.google.android.gms.internal.gi p0)
    {
      return p0.A;
    }

    /* synthetic */ static void j(com.google.android.gms.internal.gi p0)
    {
      p0.l();
    }

    private void l()
    {
      java.util.Map j;
      a.b("removing all MessageReceivedCallbacks", new Object[0]);
      j = this.j;
      synchronized ( j )
      {
        this.j.clear();
      }
    }

    private void m()
    {
      if ( !this.p || this.q.get() )
        throw new IllegalStateException("Not connected to a device");
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)gm$a.H(p0);
    }

    public final void a(double p0)
 throws android.os.RemoteException {
      if ( Double.isInfinite(p0) || Double.isNaN(p0) )
        throw new IllegalArgumentException("Volume cannot be " + p0);
      ((com.google.android.gms.internal.gm)this.H()).a(p0, this.r, this.m);
    }

    protected final void a(int p0, android.os.IBinder p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      Object[] v4;
      v4 = new Object[1];
      v4[0] = Integer.valueOf(p0);
      a.b("in onPostInitHandler; statusCode=%d", v4);
      if ( p0 != 0 && p0 != 1001 )
      {
        this.p = false;
      }
      else
      {
        this.p = true;
        this.n = true;
        this.o = true;
      }
      if ( p0 == 1001 )
      {
        this.w = new android.os.Bundle();
        this.w.putBoolean("com.google.android.gms.cast.EXTRA_APP_NO_LONGER_RUNNING", true);
        p0 = 0;
      }
      super.a(p0, p1, p2);
    }

    public final void a(com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0)
 throws android.os.RemoteException {
      this.c(p0);
      ((com.google.android.gms.internal.gm)this.H()).b();
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      android.os.Bundle v3;
      Object[] v4;
      v3 = new android.os.Bundle();
      v4 = new Object[2];
      v4[0] = this.u;
      v4[1] = this.v;
      a.b("getServiceFromBroker(): mLastApplicationId=%s, mLastSessionId=%s", v4);
      this.c.a(v3);
      v3.putLong("com.google.android.gms.cast.EXTRA_CAST_FLAGS", this.k);
      if ( this.u != null )
      {
        v3.putString("last_application_id", this.u);
        if ( this.v != null )
          v3.putString("last_session_id", this.v);
      }
      p0.a(p1, 5077000, this.E().getPackageName(), this.i.asBinder(), v3);
    }

    public final void a(String p0)
 throws android.os.RemoteException {
      java.util.Map j;
      com.google.android.gms.cast.Cast$MessageReceivedCallback v4;
      Object[] v7;
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("Channel namespace cannot be null or empty");
      j = this.j;
      synchronized ( j )
      {
        v4 = (com.google.android.gms.cast.Cast$MessageReceivedCallback)this.j.remove(p0);
      }
      if ( v4 != null )
      {
        try
        {
          ((com.google.android.gms.internal.gm)this.H()).c(p0);
        }
        catch ( IllegalStateException v6 )
        {
          v7 = new Object[2];
          v7[0] = p0;
          v7[1] = v6.getMessage();
          a.a(v6, "Error unregistering namespace (%s): %s", v7);
        }
      }
    }

    public final void a(String p0, com.google.android.gms.cast.Cast$MessageReceivedCallback p1)
 throws android.os.RemoteException {
      java.util.Map j;
      gj.ak(p0);
      this.a(p0);
      if ( p1 != null )
      {
        j = this.j;
        synchronized ( j )
        {
          this.j.put(p0, p1);
        }
        ((com.google.android.gms.internal.gm)this.H()).b(p0);
      }
    }

    public final void a(
            String p0,
            com.google.android.gms.cast.LaunchOptions p1,
            com.google.android.gms.common.api.a$d<com.google.android.gms.cast.Cast$ApplicationConnectionResult> p2)
 throws android.os.RemoteException {
      this.b(p2);
      ((com.google.android.gms.internal.gm)this.H()).a(p0, p1);
    }

    public final void a(String p0, com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p1)
 throws android.os.RemoteException {
      this.c(p1);
      ((com.google.android.gms.internal.gm)this.H()).a(p0);
    }

    public final void a(
            String p0,
            String p1,
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p2)
 throws android.os.RemoteException {
      long v4;
      if ( TextUtils.isEmpty(p1) )
        throw new IllegalArgumentException("The message payload cannot be null or empty");
      if ( p1.length() > 0x10000 )
        throw new IllegalArgumentException("Message exceeds maximum size");
      gj.ak(p0);
      this.m();
      v4 = this.t.incrementAndGet();
      ((com.google.android.gms.internal.gm)this.H()).a(p0, p1, v4);
      this.x.put(Long.valueOf(v4), p2);
    }

    public final void a(
            String p0,
            boolean p1,
            com.google.android.gms.common.api.a$d<com.google.android.gms.cast.Cast$ApplicationConnectionResult> p2)
 throws android.os.RemoteException {
      this.b(p2);
      ((com.google.android.gms.internal.gm)this.H()).a(p0, false);
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.gm)this.H()).a(p0, this.r, this.m);
    }

    public final void b()
 throws android.os.RemoteException {
      Object[] v1;
      Object[] v3;
      v1 = new Object[2];
      v1[0] = Boolean.valueOf(this.q.get());
      v1[1] = Boolean.valueOf(this.c());
      a.b("disconnect(); mDisconnecting=%b, isConnected=%b", v1);
      if ( this.q.getAndSet(true) )
      {
        a.b("mDisconnecting is set, so short-circuiting", new Object[0]);
        return;
      }
      this.l();
      try
      {
        try
        {
          if ( this.c() || this.D() )
            ((com.google.android.gms.internal.gm)this.H()).a();
          return;
        }
        catch ( android.os.RemoteException v2 )
        {
          v3 = new Object[1];
          v3[0] = v2.getMessage();
          a.a(v2, "Error while disconnecting the controller interface: %s", v3);
        }
      }
      finally
      {
        super.b();
      }
      return;
    }

    public final void b(
            String p0,
            String p1,
            com.google.android.gms.common.api.a$d<com.google.android.gms.cast.Cast$ApplicationConnectionResult> p2)
 throws android.os.RemoteException {
      this.b(p2);
      ((com.google.android.gms.internal.gm)this.H()).a(p0, p1);
    }

    public final android.os.Bundle d_()
    {
      android.os.Bundle w;
      if ( this.w == null )
        return super.d_();
      w = this.w;
      this.w = null;
      return w;
    }

    protected final String e()
    {
      return "com.google.android.gms.cast.internal.ICastDeviceController";
    }

    protected final String f()
    {
      return "com.google.android.gms.cast.service.BIND_CAST_DEVICE_CONTROLLER_SERVICE";
    }

    public final void g()
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.gm)this.H()).c();
    }

    public final double h()
    {
      this.m();
      return this.r;
    }

    public final boolean i()
    {
      this.m();
      return this.m;
    }

    public final com.google.android.gms.cast.ApplicationMetadata j()
    {
      this.m();
      return this.b;
    }

    public final String k()
    {
      this.m();
      return this.l;
    }

}
