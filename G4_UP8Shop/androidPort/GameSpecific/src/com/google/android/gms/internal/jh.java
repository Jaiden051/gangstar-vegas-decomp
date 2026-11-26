// Decompiled from classes.dex (SourceFile: jh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.app.PendingIntent;
public class jh extends com.google.android.gms.internal.hc {
    // Fields
    private final com.google.android.gms.internal.jk a;
    private final com.google.android.gms.internal.jg b;
    private final com.google.android.gms.internal.ka c;
    private final com.google.android.gms.internal.ja g;
    private final java.lang.String h;

    // Methods
    public jh(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3,
            String p4)
    {
      this(p0, p1, p0.getPackageName(), p2, p3, p4, null);
    }

    private jh(
            android.content.Context p0,
            android.os.Looper p1,
            String p2,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p3,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p4,
            String p5,
            String p6)
    {
      super(p0, p1, p3, p4, new String[0]);
      this.a = (com.google.android.gms.internal.jk)new com.google.android.gms.internal.jh$c(this, 0);
      this.b = new com.google.android.gms.internal.jg(p0, this.a);
      this.h = p5;
      this.c = new com.google.android.gms.internal.ka(p2, this.a);
      this.g = ja.a(p0, null, this.a);
    }

    public jh(
            android.content.Context p0,
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p1,
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p2,
            String p3)
    {
      super(p0, p1, p2, new String[0]);
      this.a = (com.google.android.gms.internal.jk)new com.google.android.gms.internal.jh$c(this, 0);
      this.b = new com.google.android.gms.internal.jg(p0, this.a);
      this.h = p3;
      this.c = new com.google.android.gms.internal.ka(p0.getPackageName(), this.a);
      this.g = ja.a(p0, null, this.a);
    }

    private static com.google.android.gms.internal.jf at(android.os.IBinder p0)
    {
      return jf$a.as(p0);
    }

    /* synthetic */ static void b(com.google.android.gms.internal.jh p0)
    {
      p0.G();
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)jf$a.as(p0);
    }

    public final void a(long p0, android.app.PendingIntent p2)
 throws android.os.RemoteException {
      this.G();
      hn.f(p2);
      hn.b(p0 >= 0, "detectionIntervalMillis must be >= 0");
      ((com.google.android.gms.internal.jf)this.H()).a(p0, true, p2);
    }

    public final void a(android.app.PendingIntent p0)
 throws android.os.RemoteException {
      this.G();
      hn.f(p0);
      ((com.google.android.gms.internal.jf)this.H()).a(p0);
    }

    public final void a(
            android.app.PendingIntent p0,
            com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p1)
 throws android.os.RemoteException {
      com.google.android.gms.internal.je v3;
      this.G();
      hn.b(p0, "PendingIntent must be specified.");
      hn.b(p1, "OnRemoveGeofencesResultListener not provided.");
      if ( p1 != null )
        v3 = new com.google.android.gms.internal.jh$b(p1, this);
      else
        v3 = null;
      ((com.google.android.gms.internal.jf)this.H()).a(p0, v3, this.E().getPackageName());
    }

    public final void a(android.location.Location p0)
 throws android.os.RemoteException {
      this.b.a(p0);
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      android.os.Bundle v3;
      v3 = new android.os.Bundle();
      v3.putString("client_name", this.h);
      p0.e(p1, 5077000, this.E().getPackageName(), v3);
    }

    public final void a(com.google.android.gms.location.LocationListener p0)
 throws android.os.RemoteException {
      this.b.a(p0);
    }

    public final void a(com.google.android.gms.location.LocationRequest p0, android.app.PendingIntent p1)
 throws android.os.RemoteException {
      this.b.a(p0, p1);
    }

    public final void a(
            com.google.android.gms.location.LocationRequest p0,
            com.google.android.gms.location.LocationListener p1)
 throws android.os.RemoteException {
      this.a(p0, p1, null);
    }

    public final void a(
            com.google.android.gms.location.LocationRequest p0,
            com.google.android.gms.location.LocationListener p1,
            android.os.Looper p2)
 throws android.os.RemoteException {
      com.google.android.gms.internal.jg b;
      b = this.b;
      synchronized ( b )
      {
        this.b.a(p0, p1, p2);
      }
    }

    public final void a(
            java.util.List<com.google.android.gms.internal.ji> p0,
            android.app.PendingIntent p1,
            com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener p2)
 throws android.os.RemoteException {
      boolean v4;
      com.google.android.gms.internal.je v5;
      this.G();
      v4 = p0 != null && p0.size() > 0;
      hn.b(v4, "At least one geofence must be specified.");
      hn.b(p1, "PendingIntent must be specified.");
      hn.b(p2, "OnAddGeofencesResultListener not provided.");
      if ( p2 != null )
        v5 = new com.google.android.gms.internal.jh$b(p2, this);
      else
        v5 = null;
      ((com.google.android.gms.internal.jf)this.H()).a(p0, p1, v5, this.E().getPackageName());
    }

    public final void a(
            java.util.List<String> p0,
            com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p1)
 throws android.os.RemoteException {
      boolean v3;
      String[] v4;
      com.google.android.gms.internal.je v5;
      this.G();
      v3 = p0 != null && p0.size() > 0;
      hn.b(v3, "geofenceRequestIds can't be null nor empty.");
      hn.b(p1, "OnRemoveGeofencesResultListener not provided.");
      v4 = (String[])p0.toArray(new String[0]);
      if ( p1 != null )
        v5 = new com.google.android.gms.internal.jh$b(p1, this);
      else
        v5 = null;
      ((com.google.android.gms.internal.jf)this.H()).a(v4, v5, this.E().getPackageName());
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      this.b.a(p0);
    }

    public final void b()
 throws android.os.RemoteException {
      com.google.android.gms.internal.jg b;
      b = this.b;
      synchronized ( b )
      {
        if ( this.c() )
        {
          this.b.b();
          this.b.c();
        }
        super.b();
      }
    }

    public final void b(android.app.PendingIntent p0)
 throws android.os.RemoteException {
      this.b.a(p0);
    }

    protected final String e()
    {
      return "com.google.android.gms.location.internal.IGoogleLocationManagerService";
    }

    protected final String f()
    {
      return "com.google.android.location.internal.GoogleLocationManagerService.START";
    }

    public final android.location.Location g()
    {
      return this.b.a();
    }

}
