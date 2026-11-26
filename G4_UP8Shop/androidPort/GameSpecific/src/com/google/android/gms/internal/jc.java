// Decompiled from classes.dex (SourceFile: jc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.location.LocationServices;
public class jc implements com.google.android.gms.location.FusedLocationProviderApi {
    // Methods
    public jc()
    {
      super();
    }

    public final android.location.Location a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      com.google.android.gms.internal.jh v2; // RETVAL
      com.google.android.gms.internal.jh v3;
      v2 = LocationServices.e(p0);
      v3 = v2;
      try
      {
        return v2.g();
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.app.PendingIntent p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jc$5(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.location.Location p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jc$7(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.location.LocationListener p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jc$4(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.location.LocationRequest p1,
            android.app.PendingIntent p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jc$3(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.location.LocationRequest p1,
            com.google.android.gms.location.LocationListener p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jc$1(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.location.LocationRequest p1,
            com.google.android.gms.location.LocationListener p2,
            android.os.Looper p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jc$2(this, p1, p2, p3));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jc$6(this, p1));
    }

}
