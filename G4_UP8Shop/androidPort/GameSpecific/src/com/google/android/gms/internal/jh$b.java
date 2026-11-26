// Decompiled from classes.dex (SourceFile: jh$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
final class jh$b extends com.google.android.gms.internal.je$a {
    // Fields
    private com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener a;
    private com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener b;
    private com.google.android.gms.internal.jh c;

    // Methods
    public jh$b(
            com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener p0,
            com.google.android.gms.internal.jh p1)
    {
      super();
      this.a = p0;
      this.b = null;
      this.c = p1;
    }

    public jh$b(
            com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener p0,
            com.google.android.gms.internal.jh p1)
    {
      super();
      this.b = p0;
      this.a = null;
      this.c = p1;
    }

    public final void a(int p0, android.app.PendingIntent p1)
    {
      com.google.android.gms.internal.jh c;
      if ( this.c != null )
      {
        c = this.c;
        c.getClass();
        c.a(new com.google.android.gms.internal.jh$d(c, 1, this.b, p0, p1));
        this.c = null;
        this.a = null;
        this.b = null;
      }
      else
      {
        Log.wtf("LocationClientImpl", "onRemoveGeofencesByPendingIntentResult called multiple times");
      }
    }

    public final void a(int p0, String[] p1)
    {
      com.google.android.gms.internal.jh c;
      if ( this.c != null )
      {
        c = this.c;
        c.getClass();
        c.a(new com.google.android.gms.internal.jh$a(c, this.a, p0, p1));
        this.c = null;
        this.a = null;
        this.b = null;
      }
      else
      {
        Log.wtf("LocationClientImpl", "onAddGeofenceResult called multiple times");
      }
    }

    public final void b(int p0, String[] p1)
    {
      com.google.android.gms.internal.jh c;
      if ( this.c != null )
      {
        c = this.c;
        c.getClass();
        c.a(new com.google.android.gms.internal.jh$d(c, 2, this.b, p0, p1));
        this.c = null;
        this.a = null;
        this.b = null;
      }
      else
      {
        Log.wtf("LocationClientImpl", "onRemoveGeofencesByRequestIdsResult called multiple times");
      }
    }

}
