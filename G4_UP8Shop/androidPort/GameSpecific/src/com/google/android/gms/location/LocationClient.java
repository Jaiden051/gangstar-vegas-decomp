// Decompiled from classes.dex (SourceFile: LocationClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.ji;
public class LocationClient implements com.google.android.gms.common.GooglePlayServicesClient {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    private final com.google.android.gms.internal.jh c;

    // Methods
    private LocationClient(
            android.content.Context p0,
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p1,
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p2)
    {
      super();
      this.c = new com.google.android.gms.internal.jh(p0, p1, p2, "location");
    }

    private void a(android.app.PendingIntent p0)
    {
      try
      {
        this.c.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    private void a(
            android.app.PendingIntent p0,
            com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p1)
    {
      try
      {
        this.c.a(p0, p1);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new IllegalStateException(v3);
      }
    }

    private void a(android.location.Location p0)
    {
      try
      {
        this.c.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    private void a(com.google.android.gms.location.LocationListener p0)
    {
      try
      {
        this.c.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    private void a(com.google.android.gms.location.LocationRequest p0, android.app.PendingIntent p1)
    {
      try
      {
        this.c.a(p0, p1);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new IllegalStateException(v3);
      }
    }

    private void a(
            com.google.android.gms.location.LocationRequest p0,
            com.google.android.gms.location.LocationListener p1)
    {
      try
      {
        this.c.a(p0, p1);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new IllegalStateException(v3);
      }
    }

    private void a(
            com.google.android.gms.location.LocationRequest p0,
            com.google.android.gms.location.LocationListener p1,
            android.os.Looper p2)
    {
      try
      {
        this.c.a(p0, p1, p2);
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new IllegalStateException(v4);
      }
    }

    private void a(
            java.util.List<com.google.android.gms.location.Geofence> p0,
            android.app.PendingIntent p1,
            com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener p2)
    {
      java.util.List v4;
      java.util.List v5;
      java.util.Iterator v6;
      com.google.android.gms.location.Geofence v7;
      v4 = null;
      if ( p0 != null )
      {
        v5 = new java.util.ArrayList();
        v6 = p0.iterator();
        while ( v6.hasNext() )
        {
          v7 = (com.google.android.gms.location.Geofence)v6.next();
          hn.b(v7 instanceof com.google.android.gms.internal.ji, "Geofence must be created using Geofence$Builder.");
          v5.add((com.google.android.gms.internal.ji)v7);
        }
        v4 = v5;
      }
      try
      {
        this.c.a(v4, p1, p2);
      }
      catch ( android.os.RemoteException v8 )
      {
        throw new IllegalStateException(v8);
      }
    }

    private void a(
            java.util.List<String> p0,
            com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p1)
    {
      try
      {
        this.c.a(p0, p1);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new IllegalStateException(v3);
      }
    }

    private void a(boolean p0)
    {
      try
      {
        this.c.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    private android.location.Location e()
    {
      return this.c.g();
    }

    public static int getErrorCode(android.content.Intent p0)
    {
      return p0.getIntExtra("gms_error_code", -1);
    }

    public static int getGeofenceTransition(android.content.Intent p0)
    {
      int v1;
      int IntExtra; // RETVAL
    
      v1 = -1;
      IntExtra = p0.getIntExtra("com.google.android.location.intent.extra.transition", -1);
      if ( IntExtra != -1 && (IntExtra == 1 || IntExtra == 2 || IntExtra == 4) )
        return IntExtra;
      return v1;
    }

    public static java.util.List<com.google.android.gms.location.Geofence> getTriggeringGeofences(
            android.content.Intent p0)
    {
      java.util.ArrayList v1;
      java.util.ArrayList v4;
      java.util.Iterator i;
      v1 = (java.util.ArrayList)p0.getSerializableExtra("com.google.android.location.intent.extra.geofence_list");
      if ( v1 == null )
        return null;
      v4 = new java.util.ArrayList(v1.size());
      for ( i = v1.iterator(); i.hasNext(); v4.add(ji.h((byte[])i.next())) )
        ;
      return v4;
    }

    public static android.location.Location getTriggeringLocation(android.content.Intent p0)
    {
      return (android.location.Location)p0.getParcelableExtra("com.google.android.location.intent.extra.triggering_location");
    }

    public static boolean hasError(android.content.Intent p0)
    {
      return p0.hasExtra("gms_error_code");
    }

    public final void a()
 throws android.os.RemoteException {
      this.c.a();
    }

    public final void a(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.c.a(p0);
    }

    public final void a(
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      this.c.a(p0);
    }

    public final void b()
 throws android.os.RemoteException {
      this.c.b();
    }

    public final boolean b(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      return this.c.b(p0);
    }

    public final boolean b(
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      return this.c.b(p0);
    }

    public final void c(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      this.c.c(p0);
    }

    public final void c(
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      this.c.c(p0);
    }

    public final boolean c()
    {
      return this.c.c();
    }

    public final boolean d()
    {
      return this.c.D();
    }

}
