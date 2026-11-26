// Decompiled from classes.dex (SourceFile: ji.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
import java.util.Locale;
public class ji implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.location.Geofence {
    // Fields
    public static final com.google.android.gms.internal.jj CREATOR;
    private final int e;
    private final java.lang.String f;
    private final long g;
    private final short h;
    private final double i;
    private final double j;
    private final float k;
    private final int l;
    private final int m;
    private final int n;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.jj();
    }

    public ji(int p0, String p1, int p2, short p3, double p4, double p6, float p8, long p9, int p11, int p12)
    {
      super();
      bq(p1);
      b(p8);
      a(p4, p6);
      this.e = p0;
      this.h = p3;
      this.f = p1;
      this.i = p4;
      this.j = p6;
      this.k = p8;
      this.g = p9;
      this.l = cM(p2);
      this.m = p11;
      this.n = p12;
    }

    public ji(String p0, int p1, short p2, double p3, double p5, float p7, long p8, int p10, int p11)
    {
      this(1, p0, p1, (short)1, p3, p5, p7, p8, p10, p11);
    }

    private static void a(double p0, double p2)
    {
      if ( p0 > 90.0 || p0 < -90.0 )
        throw new IllegalArgumentException("invalid latitude: " + p0);
      if ( p2 > 180.0 || p2 < -180.0 )
        throw new IllegalArgumentException("invalid longitude: " + p2);
    }

    private static void b(float p0)
    {
      if ( p0 <= 0.0f )
        throw new IllegalArgumentException("invalid radius: " + p0);
    }

    private static void bq(String p0)
    {
      if ( p0 == null || p0.length() > 100 )
        throw new IllegalArgumentException("requestId is null or too long: " + p0);
    }

    private static int cM(int p0)
    {
      if ( (p0 & 7) == 0 )
        throw new IllegalArgumentException("No supported transition specified: " + (int)p0);
      return p0 & 7;
    }

    private static String cN(int p0)
    {
      if ( p0 == 1 )
        return "CIRCLE";
      else
        return null;
    }

    public static com.google.android.gms.internal.ji h(byte[] p0)
    {
      android.os.Parcel v1;
      com.google.android.gms.internal.ji result; // RETVAL
    
      v1 = Parcel.obtain();
      v1.unmarshall(p0, 0, p0.length);
      v1.setDataPosition(0);
      result = jj.bt(v1);
      v1.recycle();
      return result;
    }

    public final int a()
    {
      return this.e;
    }

    public final short b()
    {
      return this.h;
    }

    public final double c()
    {
      return this.i;
    }

    public final double d()
    {
      return this.j;
    }

    public int describeContents()
    {
      return 0;
    }

    public final float e()
    {
      return this.k;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.ji v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 != null )
        {
          if ( p0 instanceof com.google.android.gms.internal.ji )
          {
            v4 = (com.google.android.gms.internal.ji)p0;
            if ( this.k == v4.k )
            {
              if ( this.i == v4.i )
                return this.j == v4.j && this.h == v4.h;
              else
                return false;
            }
            else
            {
              return false;
            }
          }
          else
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

    public final String f()
    {
      return this.f;
    }

    public final long g()
    {
      return this.g;
    }

    public final int h()
    {
      return this.l;
    }

    public int hashCode()
    {
      long v1; // RETVAL
      long v2;
      long v3; // RETVAL
    
      v1 = Double.doubleToLongBits(this.i);
      v2 = v1 ^ com.gameloft.android.DecompRT.hi32(v1);
      v3 = Double.doubleToLongBits(this.j);
      return (int)(31 * (31 * (31 * (31 * (v2 + 31) + (v3 ^ com.gameloft.android.DecompRT.hi32(v3))) + Float.floatToIntBits(this.k)) + this.h) + this.l);
    }

    public final int i()
    {
      return this.m;
    }

    public final int j()
    {
      return this.n;
    }

    public String toString()
    {
      Object[] v1;
      v1 = new Object[9];
      v1[0] = cN(this.h);
      v1[1] = this.f;
      v1[2] = Integer.valueOf(this.l);
      v1[3] = Double.valueOf(this.i);
      v1[4] = Double.valueOf(this.j);
      v1[5] = Float.valueOf(this.k);
      v1[6] = Integer.valueOf(this.m / 1000);
      v1[7] = Integer.valueOf(this.n);
      v1[8] = Long.valueOf(this.g);
      return String.format(Locale.US, "Geofence[%s id:%s transitions:%d %.6f, %.6f %.0fm, resp=%ds, dwell=%dms, @%d]", v1);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      jj.a(this, p0, p1);
    }

}
