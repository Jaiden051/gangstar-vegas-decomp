// Decompiled from classes.dex (SourceFile: hd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public final class hd {
    // Fields
    final java.util.ArrayList a;
    private final com.google.android.gms.internal.hd$b b;
    private final java.util.ArrayList c;
    private boolean d;
    private final java.util.ArrayList e;
    private final android.os.Handler f;

    // Methods
    public hd(android.os.Looper p0, com.google.android.gms.internal.hd$b p1)
    {
      super();
      this.c = new java.util.ArrayList();
      this.a = new java.util.ArrayList();
      this.d = false;
      this.e = new java.util.ArrayList();
      this.b = p1;
      this.f = new com.google.android.gms.internal.hd$a(this, p0);
    }

    /* synthetic */ static java.util.ArrayList a(com.google.android.gms.internal.hd p0)
    {
      return p0.c;
    }

    /* synthetic */ static com.google.android.gms.internal.hd$b b(com.google.android.gms.internal.hd p0)
    {
      return p0.b;
    }

    protected final void a()
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      java.util.ArrayList c;
      c = this.c;
      synchronized ( c )
      {
        this.a(this.b.d_());
      }
    }

    public final void a(int p0)
    {
      java.util.ArrayList c;
      java.util.Iterator v3;
      com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks v4;
      this.f.removeMessages(1);
      c = this.c;
      synchronized ( c )
      {
        this.d = true;
        v3 = new java.util.ArrayList(this.c).iterator();
        while ( v3.hasNext() )
        {
          v4 = (com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)v3.next();
          if ( !this.b.e_() )
            break;
          if ( this.c.contains(v4) )
            v4.a(p0);
        }
        this.d = false;
      }
    }

    public final void a(android.os.Bundle p0)
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      java.util.ArrayList c;
      java.util.Iterator v3;
      com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks v4;
      c = this.c;
      synchronized ( c )
      {
        hn.A(!this.d);
        this.f.removeMessages(1);
        this.d = true;
        hn.A(this.a.size() == 0);
        v3 = new java.util.ArrayList(this.c).iterator();
        while ( v3.hasNext() )
        {
          v4 = (com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)v3.next();
          if ( !this.b.e_() || !this.b.c() )
            break;
          if ( !this.a.contains(v4) )
            v4.a(p0);
        }
        this.a.clear();
        this.d = false;
      }
    }

    public final void a(com.google.android.gms.common.ConnectionResult p0)
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      java.util.ArrayList e;
      java.util.Iterator v3;
      com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener v4;
      this.f.removeMessages(1);
      e = this.e;
      synchronized ( e )
      {
        v3 = new java.util.ArrayList(this.e).iterator();
        while ( v3.hasNext() )
        {
          v4 = (com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener)v3.next();
          if ( !this.b.e_() )
            break;
          if ( this.e.contains(v4) )
            v4.a(p0);
        }
        return;
      }
    }

    public final void a(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      java.util.ArrayList e;
      hn.f(p0);
      e = this.e;
      synchronized ( e )
      {
        if ( this.e.contains(p0) )
          Log.w("GmsClientEvents", "registerConnectionFailedListener(): listener " + p0 + " is already registered");
        else
          this.e.add(p0);
        return;
      }
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      java.util.ArrayList c;
      hn.f(p0);
      c = this.c;
      synchronized ( c )
      {
        if ( this.c.contains(p0) )
          Log.w("GmsClientEvents", "registerConnectionCallbacks(): listener " + p0 + " is already registered");
        else
          this.c.add(p0);
        if ( this.b.c() )
          this.f.sendMessage(this.f.obtainMessage(1, p0));
        return;
      }
    }

    public final boolean b(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      java.util.ArrayList e;
      hn.f(p0);
      e = this.e;
      synchronized ( e )
      {
        return this.e.contains(p0);
      }
    }

    public final boolean b(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      java.util.ArrayList c;
      hn.f(p0);
      c = this.c;
      synchronized ( c )
      {
        return this.c.contains(p0);
      }
    }

    public final void c(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      java.util.ArrayList e;
      hn.f(p0);
      e = this.e;
      synchronized ( e )
      {
        if ( this.e != null && !this.e.remove(p0) )
          Log.w("GmsClientEvents", "unregisterConnectionFailedListener(): listener " + p0 + " not found");
      }
    }

    public final void c(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      java.util.ArrayList c;
      hn.f(p0);
      c = this.c;
      synchronized ( c )
      {
        if ( this.c != null )
        {
          if ( this.c.remove(p0) )
          {
            if ( this.d )
              this.a.add(p0);
          }
          else
          {
            Log.w("GmsClientEvents", "unregisterConnectionCallbacks(): listener " + p0 + " not found");
          }
        }
        return;
      }
    }

}
