// Decompiled from classes.dex (SourceFile: jd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jd implements com.google.android.gms.location.GeofencingApi {
    // Methods
    public jd()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.app.PendingIntent p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jd$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            java.util.List<String> p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jd$3(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            java.util.List<com.google.android.gms.location.Geofence> p1,
            android.app.PendingIntent p2)
 throws android.os.RemoteException {
      java.util.List v4;
      java.util.Iterator v5;
      com.google.android.gms.location.Geofence v6;
      java.util.List v7;
      if ( p1 != null )
      {
        v4 = new java.util.ArrayList(p1.size());
        v5 = p1.iterator();
        while ( v5.hasNext() )
        {
          v6 = (com.google.android.gms.location.Geofence)v5.next();
          hn.b(v6 instanceof com.google.android.gms.internal.ji, "Geofence must be created using Geofence.Builder.");
          v4.add((com.google.android.gms.internal.ji)v6);
        }
        v7 = v4;
      }
      else
      {
        v7 = null;
      }
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jd$1(this, v7, p2));
    }

}
