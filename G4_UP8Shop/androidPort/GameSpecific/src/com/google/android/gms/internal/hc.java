// Decompiled from classes.dex (SourceFile: hc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Looper;
import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
public abstract class hc<T extends android.os.IInterface> implements com.google.android.gms.common.api.Api$a, com.google.android.gms.internal.hd$b {
    // Fields
    public static final java.lang.String[] f;
    private final android.content.Context a;
    private final android.os.Looper b;
    private android.os.IInterface c;
    final android.os.Handler d;
    boolean e;
    private final java.util.ArrayList g;
    private com.google.android.gms.internal.hc$f h;
    private volatile int i;
    private final java.lang.String[] j;
    private final com.google.android.gms.internal.hd k;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[2];
      v0[0] = "service_esmobile";
      v0[1] = "service_googleme";
      f = v0;
    }

    protected hc(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3,
            String[] p4)
    {
      super();
      this.g = new java.util.ArrayList();
      this.i = 1;
      this.e = false;
      this.a = (android.content.Context)hn.f(p0);
      this.b = (android.os.Looper)hn.b(p1, "Looper must not be null");
      this.k = new com.google.android.gms.internal.hd(p1, (com.google.android.gms.internal.hd$b)this);
      this.d = new com.google.android.gms.internal.hc$a(this, p1);
      this.a(p4);
      this.j = p4;
      this.a((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)hn.f(p2));
      this.a((com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)hn.f(p3));
    }

    protected hc(
            android.content.Context p0,
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p1,
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p2,
            String[] p3)
    {
      this(p0, p0.getMainLooper(), (com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)new com.google.android.gms.internal.hc$c(p1), (com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)new com.google.android.gms.internal.hc$g(p2), p3);
    }

    /* synthetic */ static android.os.IInterface a(com.google.android.gms.internal.hc p0, android.os.IInterface p1)
    {
      p0.c = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.internal.hc$f a(
            com.google.android.gms.internal.hc p0,
            com.google.android.gms.internal.hc$f p1)
    {
      p0.h = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.internal.hd a(com.google.android.gms.internal.hc p0)
    {
      return p0.k;
    }

    private void a(int p0)
 throws android.os.RemoteException {
      com.gameloft.android.DecompRT.discard(this.i);
      this.i = p0;
    }

    /* synthetic */ static void a(com.google.android.gms.internal.hc p0, int p1)
 throws android.os.RemoteException {
      p0.a(p1);
    }

    /* synthetic */ static java.util.ArrayList b(com.google.android.gms.internal.hc p0)
    {
      return p0.g;
    }

    /* synthetic */ static android.os.IInterface c(com.google.android.gms.internal.hc p0)
    {
      return p0.c;
    }

    /* synthetic */ static com.google.android.gms.internal.hc$f d(com.google.android.gms.internal.hc p0)
    {
      return p0.h;
    }

    /* synthetic */ static android.content.Context e(com.google.android.gms.internal.hc p0)
    {
      return p0.a;
    }

    private static void onConnected()
    {
      ;
    }

    private static void onDisconnected()
    {
      ;
    }

    public final boolean D()
    {
      int i;
      i = this.i;
      return i == 2;
    }

    public final android.content.Context E()
    {
      return this.a;
    }

    public final String[] F()
    {
      return this.j;
    }

    protected final void G()
    {
      if ( !this.c() )
        throw new IllegalStateException("Not connected. Call connect() and wait for onConnected() to be called.");
    }

    public final T H()
    {
      this.G();
      return (T)this.c;
    }

    protected abstract android.os.IInterface a(android.os.IBinder p0) ;

    public void a()
 throws android.os.RemoteException {
      int isGooglePlayServicesAvailable; // RETVAL
    
      this.e = true;
      this.a(2);
      isGooglePlayServicesAvailable = GooglePlayServicesUtil.isGooglePlayServicesAvailable(this.a);
      if ( isGooglePlayServicesAvailable != 0 )
      {
        this.a(1);
        this.d.sendMessage(this.d.obtainMessage(3, Integer.valueOf(isGooglePlayServicesAvailable)));
      }
      else
      {
        if ( this.h != null )
        {
          Log.e("GmsClient", "Calling connect() while still connected, missing disconnect().");
          this.c = null;
          he.B(this.a).b(this.f(), this.h);
        }
        this.h = new com.google.android.gms.internal.hc$f(this);
        if ( !he.B(this.a).a(this.f(), this.h) )
        {
          Log.e("GmsClient", "unable to connect to service: " + this.f());
          this.d.sendMessage(this.d.obtainMessage(3, Integer.valueOf(9)));
        }
      }
    }

    protected void a(int p0, android.os.IBinder p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      this.d.sendMessage(this.d.obtainMessage(1, new com.google.android.gms.internal.hc$h(this, p0, p1, p2)));
    }

    public final void a(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.k.a((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)new com.google.android.gms.internal.hc$c(p0));
    }

    public final void a(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      this.k.a(p0);
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      this.k.a(p0);
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0)
    {
      this.k.a((com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener)p0);
    }

    public final void a(com.google.android.gms.internal.hc$b<?> p0)
    {
      java.util.ArrayList g;
      g = this.g;
      synchronized ( g )
      {
        this.g.add(p0);
      }
      this.d.sendMessage(this.d.obtainMessage(2, p0));
    }

    protected abstract void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1) throws android.os.RemoteException;

    protected void a(String[] p0)
    {
      ;
    }

    public void b()
 throws android.os.RemoteException {
      java.util.ArrayList g;
      int v2;
      int i;
      this.e = false;
      g = this.g;
      synchronized ( g )
      {
        v2 = this.g.size();
        for ( i = 0; i < v2; ++i )
          ((com.google.android.gms.internal.hc$b)this.g.get(i)).e();
        this.g.clear();
      }
      this.a(1);
      this.c = null;
      if ( this.h != null )
      {
        he.B(this.a).b(this.f(), this.h);
        this.h = null;
      }
    }

    protected final void b(android.os.IBinder p0)
    {
      try
      {
        this.a(hj$a.L(p0), new com.google.android.gms.internal.hc$e(this));
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("GmsClient", "service died");
      }
    }

    public final boolean b(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      return this.k.b((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)new com.google.android.gms.internal.hc$c(p0));
    }

    public final boolean b(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      return this.k.b(p0);
    }

    public final void c(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.k.c((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)new com.google.android.gms.internal.hc$c(p0));
    }

    public final void c(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      this.k.c(p0);
    }

    public final boolean c()
    {
      int i;
      i = this.i;
      return i == 3;
    }

    public final android.os.Looper d()
    {
      return this.b;
    }

    public final void d(int p0)
    {
      this.d.sendMessage(this.d.obtainMessage(4, Integer.valueOf(2)));
    }

    public android.os.Bundle d_()
    {
      return null;
    }

    protected abstract java.lang.String e();

    public final boolean e_()
    {
      return this.e;
    }

    protected abstract java.lang.String f();

}
