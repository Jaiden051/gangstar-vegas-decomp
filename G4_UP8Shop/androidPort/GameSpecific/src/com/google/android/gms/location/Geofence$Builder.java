// Decompiled from classes.dex (SourceFile: Geofence$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import android.os.SystemClock;
public final class Geofence$Builder {
    // Fields
    private java.lang.String a;
    private int b;
    private long c;
    private short d;
    private double e;
    private double f;
    private float g;
    private int h;
    private int i;

    // Methods
    public Geofence$Builder()
    {
      super();
      this.a = null;
      this.b = 0;
      this.c = 0x8000000000000000L;
      this.d = -1;
      this.h = 0;
      this.i = -1;
    }

    private com.google.android.gms.location.Geofence$Builder a(double p0, double p2, float p4)
    {
      this.d = 1;
      this.e = p0;
      this.f = p2;
      this.g = p4;
      return this;
    }

    private com.google.android.gms.location.Geofence$Builder a(int p0)
    {
      this.b = p0;
      return this;
    }

    private com.google.android.gms.location.Geofence$Builder a(long p0)
    {
      if ( p0 >= 0 )
        this.c = SystemClock.elapsedRealtime() + p0;
      else
        this.c = -1;
      return this;
    }

    private com.google.android.gms.location.Geofence$Builder a(String p0)
    {
      this.a = p0;
      return this;
    }

    private com.google.android.gms.location.Geofence a()
    {
      if ( this.a == null )
        throw new IllegalArgumentException("Request ID not set.");
      if ( this.b == 0 )
        throw new IllegalArgumentException("Transitions types not set.");
      if ( (this.b & 4) != 0 && this.i < 0 )
        throw new IllegalArgumentException("Non-negative loitering delay needs to be set when transition types include GEOFEN" +
                                           "CE_TRANSITION_DWELLING.");
      if ( this.c == 0x8000000000000000L )
        throw new IllegalArgumentException("Expiration not set.");
      if ( this.d == -1 )
        throw new IllegalArgumentException("Geofence region not set.");
      if ( this.h < 0 )
        throw new IllegalArgumentException("Notification responsiveness should be nonnegative.");
      return (com.google.android.gms.location.Geofence)new com.google.android.gms.internal.ji(this.a, this.b, (short)1, this.e, this.f, this.g, this.c, this.h, this.i);
    }

    private com.google.android.gms.location.Geofence$Builder b(int p0)
    {
      this.h = p0;
      return this;
    }

    private com.google.android.gms.location.Geofence$Builder c(int p0)
    {
      this.i = p0;
      return this;
    }

}
