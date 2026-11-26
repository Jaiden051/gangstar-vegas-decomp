// Decompiled from classes.dex (SourceFile: LocationRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import android.os.SystemClock;
import com.google.android.gms.internal.hl;
public final class LocationRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.location.LocationRequestCreator CREATOR;
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    int e;
    long f;
    long g;
    boolean h;
    long i;
    int j;
    float k;
    private final int l;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.location.LocationRequestCreator();
    }

    public LocationRequest()
    {
      super();
      this.l = 1;
      this.e = 102;
      this.f = 3600000;
      this.g = 600000;
      this.h = false;
      this.i = 0x7FFFFFFFFFFFFFFFL;
      this.j = 0x7FFFFFFF;
      this.k = 0.0f;
    }

    LocationRequest(int p0, int p1, long p2, long p4, boolean p6, long p7, int p9, float p10)
    {
      super();
      this.l = p0;
      this.e = p1;
      this.f = p2;
      this.g = p4;
      this.h = p6;
      this.i = p7;
      this.j = p9;
      this.k = p10;
    }

    private com.google.android.gms.location.LocationRequest a(int p0)
    {
      cG(p0);
      this.e = p0;
      return this;
    }

    private com.google.android.gms.location.LocationRequest a(long p0)
    {
      v(p0);
      this.f = p0;
      if ( !this.h )
        this.g = (long)((double)this.f / 6.0);
      return this;
    }

    private static void a(float p0)
    {
      if ( p0 < 0.0f )
        throw new IllegalArgumentException("invalid displacement: " + p0);
    }

    private int b()
    {
      return this.e;
    }

    private com.google.android.gms.location.LocationRequest b(float p0)
    {
      a(p0);
      this.k = p0;
      return this;
    }

    private com.google.android.gms.location.LocationRequest b(int p0)
    {
      if ( p0 <= 0 )
        throw new IllegalArgumentException("invalid numUpdates: " + p0);
      this.j = p0;
      return this;
    }

    private com.google.android.gms.location.LocationRequest b(long p0)
    {
      v(p0);
      this.h = true;
      this.g = p0;
      return this;
    }

    private long c()
    {
      return this.f;
    }

    private com.google.android.gms.location.LocationRequest c(long p0)
    {
      long v2; // RETVAL
    
      v2 = SystemClock.elapsedRealtime();
      if ( p0 <= 0x7FFFFFFFFFFFFFFFL - v2 )
        this.i = v2 + p0;
      else
        this.i = 0x7FFFFFFFFFFFFFFFL;
      if ( this.i < 0 )
        this.i = 0;
      return this;
    }

    private static void cG(int p0)
    {
      switch ( p0 )
      {
        case 'd':
        case 'f':
        case 'h':
        case 'i':
          return;
        default:
          throw new IllegalArgumentException("invalid quality: " + p0);
      }
    }

    public static String cH(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 'd':
          v1 = "PRIORITY_HIGH_ACCURACY";
          break;
        case 'f':
          v1 = "PRIORITY_BALANCED_POWER_ACCURACY";
          break;
        case 'h':
          v1 = "PRIORITY_LOW_POWER";
          break;
        case 'i':
          v1 = "PRIORITY_NO_POWER";
          break;
        default:
          v1 = "???";
          break;
      }
      return v1;
    }

    public static com.google.android.gms.location.LocationRequest create()
    {
      return new com.google.android.gms.location.LocationRequest();
    }

    private long d()
    {
      return this.g;
    }

    private com.google.android.gms.location.LocationRequest d(long p0)
    {
      this.i = p0;
      if ( this.i < 0 )
        this.i = 0;
      return this;
    }

    private long e()
    {
      return this.i;
    }

    private int f()
    {
      return this.j;
    }

    private float g()
    {
      return this.k;
    }

    private static void v(long p0)
    {
      if ( p0 < 0 )
        throw new IllegalArgumentException("invalid interval: " + p0);
    }

    final int a()
    {
      return this.l;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.location.LocationRequest v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.location.LocationRequest )
        {
          v4 = (com.google.android.gms.location.LocationRequest)p0;
          if ( this.e != v4.e
            || this.f != v4.f
            || this.g != v4.g
            || this.h != v4.h
            || this.i != v4.i
            || this.j != v4.j
            || this.k != v4.k )
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[7];
      v1[0] = Integer.valueOf(this.e);
      v1[1] = Long.valueOf(this.f);
      v1[2] = Long.valueOf(this.g);
      v1[3] = Boolean.valueOf(this.h);
      v1[4] = Long.valueOf(this.i);
      v1[5] = Integer.valueOf(this.j);
      v1[6] = Float.valueOf(this.k);
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      StringBuilder v1;
      long v2;
      v1 = new StringBuilder();
      v1.append("Request[").append(cH(this.e));
      if ( this.e != 105 )
      {
        v1.append(" requested=");
        v1.append(this.f + "ms");
      }
      v1.append(" fastest=");
      v1.append(this.g + "ms");
      if ( this.i != 0x7FFFFFFFFFFFFFFFL )
      {
        v2 = this.i - SystemClock.elapsedRealtime();
        v1.append(" expireIn=");
        v1.append(v2 + "ms");
      }
      if ( this.j != 0x7FFFFFFF )
        v1.append(" num=").append(this.j);
      v1.append(']');
      return v1.toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      LocationRequestCreator.a(this, p0, p1);
    }

}
