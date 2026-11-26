// Decompiled from classes.dex (SourceFile: jh$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
import com.google.android.gms.location.LocationStatusCodes;
final class jh$d extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.internal.jh a;
    private final int b;
    private final java.lang.String[] c;
    private final android.app.PendingIntent e;
    private final int f;

    // Methods
    public jh$d(
            com.google.android.gms.internal.jh p0,
            int p1,
            com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p2,
            int p3,
            android.app.PendingIntent p4)
    {
      super(p0, p2);
      this.a = p0;
      gy.A(true);
      this.f = 1;
      this.b = LocationStatusCodes.cJ(p3);
      this.e = p4;
      this.c = null;
    
    }

    public jh$d(
            com.google.android.gms.internal.jh p0,
            int p1,
            com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p2,
            int p3,
            String[] p4)
    {
      super(p0, p2);
      this.a = p0;
      gy.A(true);
      this.f = 2;
      this.b = LocationStatusCodes.cJ(p3);
      this.c = p4;
      this.e = null;
    
    }

    private void a(com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p0)
 throws android.os.RemoteException {
      if ( p0 != null )
      {
        switch ( this.f )
        {
          case 1:
            p0.b(this.b);
            break;
          case 2:
            p0.a(this.b);
            break;
          default:
            Log.wtf("LocationClientImpl", "Unsupported action: " + this.f);
            break;
        }
      }
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
 throws android.os.RemoteException {
      com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener v2;
      v2 = (com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener)p0;
      if ( v2 != null )
      {
        switch ( this.f )
        {
          case 1:
            v2.b(this.b);
            break;
          case 2:
            v2.a(this.b);
            break;
          default:
            Log.wtf("LocationClientImpl", "Unsupported action: " + this.f);
            break;
        }
      }
    }

}
