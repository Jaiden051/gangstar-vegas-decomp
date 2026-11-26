// Decompiled from classes.dex (SourceFile: LatLngBounds.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
import com.google.android.gms.maps.internal.v;
public final class LatLngBounds implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.LatLngBoundsCreator CREATOR;
    public final com.google.android.gms.maps.model.LatLng a;
    public final com.google.android.gms.maps.model.LatLng b;
    private final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.LatLngBoundsCreator();
    }

    LatLngBounds(int p0, com.google.android.gms.maps.model.LatLng p1, com.google.android.gms.maps.model.LatLng p2)
    {
      super();
      Object[] v4;
      hn.b(p1, "null southwest");
      hn.b(p2, "null northeast");
      v4 = new Object[2];
      v4[0] = Double.valueOf(p1.a);
      v4[1] = Double.valueOf(p2.a);
      hn.b(p2.a >= p1.a, "southern latitude exceeds northern latitude (%s > %s)", v4);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public LatLngBounds(com.google.android.gms.maps.model.LatLng p0, com.google.android.gms.maps.model.LatLng p1)
    {
      this(1, p0, p1);
    }

    private boolean a(double p0)
    {
      return this.a.a <= p0 && p0 <= this.b.a;
    }

    private boolean a(com.google.android.gms.maps.model.LatLng p0)
    {
      boolean v2;
      double a;
      boolean v4;
      v2 = true;
      a = p0.a;
      v4 = this.a.a <= a && a <= this.b.a;
      if ( !v4 || !this.b(p0.b) )
        return false;
      return v2;
    }

    private static double b(double p0, double p2)
    {
      return (p0 - p2 + 360.0) % 360.0;
    }

    private com.google.android.gms.maps.model.LatLng b()
    {
      double v1;
      double b;
      double v3;
      double v4;
      v1 = (this.a.a + this.b.a) / 2.0;
      b = this.b.b;
      v3 = this.a.b;
      if ( v3 > b )
        v4 = (b + 360.0 + v3) / 2.0;
      else
        v4 = (b + v3) / 2.0;
      return new com.google.android.gms.maps.model.LatLng(v1, v4);
    }

    private com.google.android.gms.maps.model.LatLngBounds b(com.google.android.gms.maps.model.LatLng p0)
    {
      double v2;
      double v3;
      double b;
      double v5;
      double v6;
      double v7;
      double v9;
      v2 = Math.min(this.a.a, p0.a);
      v3 = Math.max(this.b.a, p0.a);
      b = this.b.b;
      v5 = this.a.b;
      v6 = p0.b;
      if ( this.b(v6) )
      {
        v6 = v5;
        v7 = b;
      }
      else if ( LatLngBounds.b(v5, v6) >= c(b, v6) )
      {
        v9 = v5;
        v7 = v6;
        v6 = v9;
      }
      else
      {
        v7 = b;
      }
      return new com.google.android.gms.maps.model.LatLngBounds(new com.google.android.gms.maps.model.LatLng(v2, v6), new com.google.android.gms.maps.model.LatLng(v3, v7));
    }

    private boolean b(double p0)
    {
      boolean v2;
      v2 = true;
      if ( this.a.b > this.b.b )
      {
        if ( this.a.b > p0 )
          return p0 <= this.b.b;
      }
      else if ( this.a.b > p0 || p0 > this.b.b )
      {
        return false;
      }
      return v2;
    }

    public static com.google.android.gms.maps.model.LatLngBounds$Builder builder()
    {
      return new com.google.android.gms.maps.model.LatLngBounds$Builder();
    }

    private static double c(double p0, double p2)
    {
      return (p2 - p0 + 360.0) % 360.0;
    }

    /* synthetic */ static double d(double p0, double p2)
    {
      return b(p0, p2);
    }

    /* synthetic */ static double e(double p0, double p2)
    {
      return c(p0, p2);
    }

    final int a()
    {
      return this.c;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.maps.model.LatLngBounds v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.LatLngBounds )
        {
          v4 = (com.google.android.gms.maps.model.LatLngBounds)p0;
          if ( !this.a.equals(v4.a) || !this.b.equals(v4.b) )
            return false;
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
      v1 = new Object[2];
      v1[0] = this.a;
      v1[1] = this.b;
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return hl.e(this).a("southwest", this.a).a("northeast", this.b).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.d.a(this, p0, p1);
      else
        LatLngBoundsCreator.a(this, p0, p1);
    }

}
